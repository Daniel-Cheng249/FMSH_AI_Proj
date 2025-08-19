/**
  ****************************************************************************************************
  * @attention    
  * Copyright 2024 SHANGHAI FUDAN MICROELECTRONICS GROUP CO., LTD.(FUDAN MICRO.)
  *        
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met: 
  *    
  * 1. Redistributions of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  *    
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  *    
  * 3. Neither the name of the copyright holder nor the names of its contributors 
  *    may be used to endorse or promote products derived from this software without
  *    specific prior written permission.
  *    
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS"AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE   
  * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
  * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
  * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT   
  * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.    
  *
  ****************************************************************************************************
  */
  
#include "main.h"
#include "fm33ht0xxa_fl.h"
#include "iwdt.h"
#include "svd.h"
#include "rmu.h"

/* Library includes */
#include "tsi.h"

#include "hello_world_test.h"

#define LED0_GPIO    GPIOB
#define LED0_PIN     FL_GPIO_PIN_10

#define LED0_ON()    FL_GPIO_ResetOutputPin(LED0_GPIO, LED0_PIN)
#define LED0_OFF()   FL_GPIO_SetOutputPin(LED0_GPIO, LED0_PIN)
#define LED0_TOG()   FL_GPIO_ToggleOutputPin(LED0_GPIO, LED0_PIN)


#define TSI_OPEN     true

/* Private function prototypes ----------------------------------------------*/
static void SystemClockInit(void);

/**
  * @brief  HardFault 中断服务函数 请保留 
  * @param  None
  * @retval None
  */
void HardFault_Handler(void)
{   /* 软件复位MCU，使用内联函数 */
    RMU_Soft_SystemReset();
}


/**
  * @brief  LED0(PB10) 初始化函数 
  * @param  void
  * @retval void
  */
void LED_Init(void)
{
    FL_GPIO_InitTypeDef GPIO_InitStruct = { 0 };
    
    /* 输出数据置位寄存器写1，避免LED初始化时闪烁 */
    FL_GPIO_SetOutputPin(LED0_GPIO, LED0_PIN);
    
    /* GPIO 输出功能初始化 */
    GPIO_InitStruct.pin           = LED0_PIN;
    GPIO_InitStruct.mode          = FL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.outputType    = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull          = FL_GPIO_BOTH_DISABLE;
    GPIO_InitStruct.remapPin      = FL_GPIO_PINREMAP_FUNCTON0;
    GPIO_InitStruct.driveStrength = FL_GPIO_DRIVESTRENGTH_X3;
    
    (void)FL_GPIO_Init(LED0_GPIO, &GPIO_InitStruct);
}


int main(void)
{   
    /* 使能IWDT */
    (void)IWDT_Init(FL_IWDT_PERIOD_4000MS);

#if(TSI_OPEN == true)    
    /* 需在触摸初始化之前配置RCHF */
    FL_CMU_RCHF_WriteTrimValue(RCHF8M_TRIM);
    FL_CMU_RCHF_SetFrequency(FL_CMU_RCHF_FREQUENCY_8MHZ);
    /* USER CODES AREA 1 END */

    /* Init system clock */
    SystemClockInit();    
#endif 

    /* 延时函数初始化 */
    FL_Init();
    
    /* 使能SVD,阈值4.157V(falling)~4.257V(rising) */
    (void)SVD_Init(SVD_MONTIOR_VDD,FL_SVD_WARNING_THRESHOLD_GROUP11,FL_SVD_REFERENCE_1P0V,FL_SVD_Mode_LOWVOLTAGE_WARNING);
    
    /* 确认SVD监测结果是否高于阈值，如否则持续等待 */
    while(false == SVD_Result_Confirmed(SVD_HIGHER_THRESHOLD, 2000U/*us*/));
    
    /* 使能SVD低压复位功能,阈值2.657V(falling)~2.757V(rising) */
    (void)SVD_Init(SVD_MONTIOR_VDD,FL_SVD_WARNING_THRESHOLD_GROUP4,FL_SVD_REFERENCE_1P0V, FL_SVD_Mode_UNDERVOLTAGE_RESET);
        
    /* Initialize all configured peripherals */
    /* SHOULD BE KEPT!!! */
    MF_Config_Init();

#if(TSI_OPEN == true)     
    /* Init TSI library */   
    TSI_Init(&TSI_LibHandle); 
    /* Enable all widget and start scan */
    TSI_Widget_EnableAll(&TSI_LibHandle); 

    /* Enable only Expad widget for TFLM Test */ 
    // TSI_Widget_Enable(&TSI_LibHandle,(TSI_WidgetTypeDef *)&TSI_WidgetList.Button_ExPad1_MC);       
    // TSI_Widget_Enable(&TSI_LibHandle,(TSI_WidgetTypeDef *)&TSI_WidgetList.Button_ExPad1_Rx);
    // TSI_Widget_Enable(&TSI_LibHandle,(TSI_WidgetTypeDef *)&TSI_WidgetList.Button_ExPad1_Tx);

    TSI_Start(&TSI_LibHandle);       
#endif  

    /* LED 初始化 */
    //LED_Init();

    //CapClassificationSetup();
    //CapClassificationPerformInference(); 

    while(1)
    {    
        /* 清狗 */
        IWDT_Clr();
        
        /* LED 闪烁 */
        //LED0_TOG();
        FL_DelayMs(500);

#if(TSI_OPEN == true) 
        TSI_Handler(&TSI_LibHandle);
#endif        
    }
}


#if(TSI_OPEN == true) 
/* Private functions --------------------------------------------------------*/
/**
 * @brief Init system clock.
 *
 */
void SystemClockInit(void)
{
    /* USER PRE SYSTEM CLOCK INIT BEGIN */

    /* USER PRE SYSTEM CLOCK INIT END */

    /* Enable RCHF 8MHz */
    FL_CMU_RCHF_WriteTrimValue(RCHF8M_TRIM);
    FL_CMU_RCHF_SetFrequency(FL_CMU_RCHF_FREQUENCY_8MHZ);

    /* Config PLL */
    FL_CMU_PLL_Disable();
    FL_CMU_PLL_SetClockSource(FL_CMU_PLL_CLK_SOURCE_RCHF);
    FL_CMU_PLL_SetPrescaler(FL_CMU_PLL_PSC_DIV8);
    FL_CMU_PLL_WriteMultiplier(48 - 1);
    FL_CMU_PLL_Enable();

    /* Wait for the PLL lock flag */
    uint32_t timeout = 0xFFFFFFFFUL;
    do
    {
        if(FL_CMU_IsActiveFlag_PLLReady() == 0x1U)
        {
            break;
        }

        /* Clear watchdog */
        FL_IWDT_ReloadCounter(IWDT);

    } while (--timeout > 0);

    /* Set flash read wait */
    FL_FLASH_SetCodeReadWait(FLASH, FL_FLASH_CODE_WAIT_0CYCLE);

    /* Set system clock source and bus prescaler */
    FL_CMU_SetAHBPrescaler(FL_CMU_AHBCLK_PSC_DIV2);
    FL_CMU_SetAPB1Prescaler(FL_CMU_APB1CLK_PSC_DIV1);
    FL_CMU_SetSystemClockSource(FL_CMU_SYSTEM_CLK_SOURCE_PLL);

    /* Update system core clock */
    SystemCoreClock = 24000000;

    /* USER SYSTEM CLOCK INIT BEGIN */

    /* USER SYSTEM CLOCK INIT END */
}

/* TSI interrupt handler */
void MUX19_IRQHandler(void)
{
    TSI_Dev_Handler(TSI_LibHandle.driver);
}

#endif

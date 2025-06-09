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


#define LED0_GPIO    GPIOB
#define LED0_PIN     FL_GPIO_PIN_10

#define LED0_ON()    FL_GPIO_ResetOutputPin(LED0_GPIO, LED0_PIN)
#define LED0_OFF()   FL_GPIO_SetOutputPin(LED0_GPIO, LED0_PIN)
#define LED0_TOG()   FL_GPIO_ToggleOutputPin(LED0_GPIO, LED0_PIN)


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
    
    /* LED 初始化 */
    LED_Init();
    
    while(1)
    {    
        /* 清狗 */
        IWDT_Clr();
        
        /* LED 闪烁 */
        LED0_TOG();
        FL_DelayMs(500);
    }
}



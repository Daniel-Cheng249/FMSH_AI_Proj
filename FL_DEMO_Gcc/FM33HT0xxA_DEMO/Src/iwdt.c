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
  
#include "iwdt.h"
#include "fm33ht0xxa_fl.h"

/**
  * @brief  IWDT初始化
  * @param  u32OverFlowPeriod 看门狗溢出时间间隔:
  *           @arg @ref FL_IWDT_PERIOD_125MS
  *           @arg @ref FL_IWDT_PERIOD_250MS
  *           @arg @ref FL_IWDT_PERIOD_500MS
  *           @arg @ref FL_IWDT_PERIOD_1000MS
  *           @arg @ref FL_IWDT_PERIOD_2000MS
  *           @arg @ref FL_IWDT_PERIOD_4000MS
  *           @arg @ref FL_IWDT_PERIOD_8000MS
  *           @arg @ref FL_IWDT_PERIOD_16000MS
  * @retval FL_FAIL: 初始化失败
  *         FL_PASS: 初始化成功
  */
FL_ErrorStatus IWDT_Init(uint32_t u32OverFlowPeriod)
{
    FL_ErrorStatus status = FL_FAIL;
    FL_IWDT_InitTypeDef IWDT_InitStruct;

    /* 默认不使用窗口 */
    IWDT_InitStruct.iwdtWindows = 0;
    /* 溢出时间 */
    IWDT_InitStruct.overflowPeriod = u32OverFlowPeriod;
    /* 初始化IWDT */
    status = FL_IWDT_Init(IWDT, &IWDT_InitStruct);
    
    if (0 == IWDT_InitStruct.iwdtWindows)
    {  
        /* 没有使用窗口功能，执行清狗 */
        FL_IWDT_ReloadCounter(IWDT);
    }
    return status;
}

/**
  * @brief  IWDT休眠下是否计数
  * @param  eIWDTCounterType 休眠下冻结计数:
  *           @arg @ref FL_DISABLE: 不冻结
  *           @arg @ref FL_ENABLE:  冻结
  *                           
  * @retval None
  */
void IWDT_SLP_Freeze(FL_FunState eIWDTCounterType)
{
    /* 开启总线时钟 */
    FL_CMU_EnableGroup1BusClock(FL_CMU_GROUP1_BUSCLK_IWDT);
    
    if (FL_DISABLE == eIWDTCounterType)
    {   /* 休眠下不冻结IWDT计数 */
        FL_IWDT_DisableFreezeWhileSleep(IWDT);
    }
    else if (FL_ENABLE == eIWDTCounterType)
    {   /* 休眠下冻结IWDT计数 */
        FL_IWDT_EnableFreezeWhileSleep(IWDT);
    }
}



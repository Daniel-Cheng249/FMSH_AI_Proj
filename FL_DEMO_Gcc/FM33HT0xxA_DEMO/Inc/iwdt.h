/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : iwdt.h
  * @brief          : Header for iwdt.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
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
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __IWDT_H__
#define __IWDT_H__
#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "fm33ht0xxa_fl.h"

extern FL_ErrorStatus IWDT_Init(uint32_t u32OverFlowPeriod);
extern void IWDT_SLP_Freeze(FL_FunState eIWDTCounterType);

#ifdef __cplusplus
}
#endif

#endif /* __IWDT_H__ */

/************************ (C) COPYRIGHT FMSH *****END OF FILE****/

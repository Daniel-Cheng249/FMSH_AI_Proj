/**
  *******************************************************************************************************
  * @file    fm33ht0xxa_fl_comp.h
  * @author  FMSH Application Team
  * @brief   Head file of COMP FL Module
  *******************************************************************************************************
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
  *******************************************************************************************************
  */


/* Define to prevent recursive inclusion---------------------------------------------------------------*/
#ifndef __FM33HT0XXA_FL_COMP_H
#define __FM33HT0XXA_FL_COMP_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33ht0xxa_fl_def.h"
/** @addtogroup FM33HT0XXA_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup COMP_FL_ES_INIT COMP Exported Init structures
  * @{
  */

/**
  * @brief FL COMP Init Sturcture definition
  */
typedef struct
{
    /** 比较器正向输入选择 */
    uint32_t positiveInput;
    /** 比较器反向输入选择 */
    uint32_t negativeInput;
    /** 结果输出极性 */
    uint32_t polarity;
    /** 中断触发边沿选择 */
    uint32_t edge;
    /** 数字滤波器使能 */
    FL_FunState digitalFilter;
    /** 数字滤波器长度 */
    uint32_t digitalFilterLen;
} FL_COMP_InitTypeDef;
/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup COMP_FL_Exported_Constants COMP Exported Constants
  * @{
  */

#define    COMP_CR_TRGOSEL_Pos                                    (25U)
#define    COMP_CR_TRGOSEL_Msk                                    (0x3U << COMP_CR_TRGOSEL_Pos)
#define    COMP_CR_TRGOSEL                                        COMP_CR_TRGOSEL_Msk

#define    COMP_CR_TRGOEN_Pos                                     (24U)
#define    COMP_CR_TRGOEN_Msk                                     (0x1U << COMP_CR_TRGOEN_Pos)
#define    COMP_CR_TRGOEN                                         COMP_CR_TRGOEN_Msk

#define    COMP_CR_DFLEN_Pos                                      (19U)
#define    COMP_CR_DFLEN_Msk                                      (0x1fU << COMP_CR_DFLEN_Pos)
#define    COMP_CR_DFLEN                                          COMP_CR_DFLEN_Msk

#define    COMP_CR_WINMODE_Pos                                    (18U)
#define    COMP_CR_WINMODE_Msk                                    (0x1U << COMP_CR_WINMODE_Pos)
#define    COMP_CR_WINMODE                                        COMP_CR_WINMODE_Msk

#define    COMP_CR_POLAR_Pos                                      (17U)
#define    COMP_CR_POLAR_Msk                                      (0x1U << COMP_CR_POLAR_Pos)
#define    COMP_CR_POLAR                                          COMP_CR_POLAR_Msk

#define    COMP_CR_DFEN_Pos                                       (16U)
#define    COMP_CR_DFEN_Msk                                       (0x1U << COMP_CR_DFEN_Pos)
#define    COMP_CR_DFEN                                           COMP_CR_DFEN_Msk

#define    COMP_CR_MODE_Pos                                       (14U)
#define    COMP_CR_MODE_Msk                                       (0x3U << COMP_CR_MODE_Pos)
#define    COMP_CR_MODE                                           COMP_CR_MODE_Msk

#define    COMP_CR_HYSTEN_Pos                                     (9U)
#define    COMP_CR_HYSTEN_Msk                                     (0x1U << COMP_CR_HYSTEN_Pos)
#define    COMP_CR_HYSTEN                                         COMP_CR_HYSTEN_Msk

#define    COMP_CR_CMPO_Pos                                       (8U)
#define    COMP_CR_CMPO_Msk                                       (0x1U << COMP_CR_CMPO_Pos)
#define    COMP_CR_CMPO                                           COMP_CR_CMPO_Msk

#define    COMP_CR_PSEL_Pos                                       (4U)
#define    COMP_CR_PSEL_Msk                                       (0x7U << COMP_CR_PSEL_Pos)
#define    COMP_CR_PSEL                                           COMP_CR_PSEL_Msk

#define    COMP_CR_NSEL_Pos                                       (1U)
#define    COMP_CR_NSEL_Msk                                       (0x7U << COMP_CR_NSEL_Pos)
#define    COMP_CR_NSEL                                           COMP_CR_NSEL_Msk

#define    COMP_CR_CMPEN_Pos                                      (0U)
#define    COMP_CR_CMPEN_Msk                                      (0x1U << COMP_CR_CMPEN_Pos)
#define    COMP_CR_CMPEN                                          COMP_CR_CMPEN_Msk

#define    COMP_ICR_OWW_IE_Pos                                    (25U)
#define    COMP_ICR_OWW_IE_Msk                                    (0x1U << COMP_ICR_OWW_IE_Pos)
#define    COMP_ICR_OWW_IE                                        COMP_ICR_OWW_IE_Msk

#define    COMP_ICR_WIN_IE_Pos                                    (24U)
#define    COMP_ICR_WIN_IE_Msk                                    (0x1U << COMP_ICR_WIN_IE_Pos)
#define    COMP_ICR_WIN_IE                                        COMP_ICR_WIN_IE_Msk

#define    COMP_ICR_CMP1SEL_Pos                                   (6U)
#define    COMP_ICR_CMP1SEL_Msk                                   (0x3U << COMP_ICR_CMP1SEL_Pos)
#define    COMP_ICR_CMP1SEL                                       COMP_ICR_CMP1SEL_Msk

#define    COMP_ICR_CMP1IE_Pos                                    (4U)
#define    COMP_ICR_CMP1IE_Msk                                    (0x1U << COMP_ICR_CMP1IE_Pos)
#define    COMP_ICR_CMP1IE                                        COMP_ICR_CMP1IE_Msk

#define    COMP_ICR_CMP0SEL_Pos                                   (2U)
#define    COMP_ICR_CMP0SEL_Msk                                   (0x3U << COMP_ICR_CMP0SEL_Pos)
#define    COMP_ICR_CMP0SEL                                       COMP_ICR_CMP0SEL_Msk

#define    COMP_ICR_CMP0IE_Pos                                    (0U)
#define    COMP_ICR_CMP0IE_Msk                                    (0x1U << COMP_ICR_CMP0IE_Pos)
#define    COMP_ICR_CMP0IE                                        COMP_ICR_CMP0IE_Msk

#define    COMP_ISR_OOW_IF_Pos                                    (4U)
#define    COMP_ISR_OOW_IF_Msk                                    (0x1U << COMP_ISR_OOW_IF_Pos)
#define    COMP_ISR_OOW_IF                                        COMP_ISR_OOW_IF_Msk

#define    COMP_ISR_WIN_IF_Pos                                    (3U)
#define    COMP_ISR_WIN_IF_Msk                                    (0x1U << COMP_ISR_WIN_IF_Pos)
#define    COMP_ISR_WIN_IF                                        COMP_ISR_WIN_IF_Msk

#define    COMP_ISR_CMP1IF_Pos                                    (1U)
#define    COMP_ISR_CMP1IF_Msk                                    (0x1U << COMP_ISR_CMP1IF_Pos)
#define    COMP_ISR_CMP1IF                                        COMP_ISR_CMP1IF_Msk

#define    COMP_ISR_CMP0IF_Pos                                    (0U)
#define    COMP_ISR_CMP0IF_Msk                                    (0x1U << COMP_ISR_CMP0IF_Pos)
#define    COMP_ISR_CMP0IF                                        COMP_ISR_CMP0IF_Msk

#define    COMP_BUFCR_BUFBYP_Pos                                  (2U)
#define    COMP_BUFCR_BUFBYP_Msk                                  (0x1U << COMP_BUFCR_BUFBYP_Pos)
#define    COMP_BUFCR_BUFBYP                                      COMP_BUFCR_BUFBYP_Msk

#define    COMP_BUFCR_BUFENB_Pos                                  (0U)
#define    COMP_BUFCR_BUFENB_Msk                                  (0x1U << COMP_BUFCR_BUFENB_Pos)
#define    COMP_BUFCR_BUFENB                                      COMP_BUFCR_BUFENB_Msk






#define    FL_COMP_COMPX_TRGOSEL_EDGE_BOTH                        (0x0U << COMP_CR_TRGOSEL_Pos)
#define    FL_COMP_COMPX_TRGOSEL_EDGE_RISING                      (0x1U << COMP_CR_TRGOSEL_Pos)
#define    FL_COMP_COMPX_TRGOSEL_EDGE_FALLING                     (0x2U << COMP_CR_TRGOSEL_Pos)


#define    FL_COMP_OUTPUT_FILTER_WINDOW_3APBCLK                   (0x0U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_4APBCLK                   (0x3U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_5APBCLK                   (0x4U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_6APBCLK                   (0x5U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_7APBCLK                   (0x6U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_8APBCLK                   (0x7U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_9APBCLK                   (0x8U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_10APBCLK                  (0x9U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_11APBCLK                  (0xaU << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_12APBCLK                  (0xbU << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_13APBCLK                  (0xcU << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_14APBCLK                  (0xdU << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_15APBCLK                  (0xeU << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_16APBCLK                  (0xfU << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_17APBCLK                  (0x10U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_18APBCLK                  (0x11U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_19APBCLK                  (0x12U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_20APBCLK                  (0x13U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_21APBCLK                  (0x14U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_22APBCLK                  (0x15U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_23APBCLK                  (0x16U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_24APBCLK                  (0x17U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_25APBCLK                  (0x18U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_26APBCLK                  (0x19U << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_27APBCLK                  (0x1aU << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_28APBCLK                  (0x1bU << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_29APBCLK                  (0x1cU << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_30APBCLK                  (0x1dU << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_31APBCLK                  (0x1eU << COMP_CR_DFLEN_Pos)
#define    FL_COMP_OUTPUT_FILTER_WINDOW_32APBCLK                  (0x1fU << COMP_CR_DFLEN_Pos)


#define    FL_COMP_OUTPUT_POLARITY_NORMAL                         (0x0U << COMP_CR_POLAR_Pos)
#define    FL_COMP_OUTPUT_POLARITY_INVERT                         (0x1U << COMP_CR_POLAR_Pos)


#define    FL_COMP_POWER_MODE_LOW                                 (0x0U << COMP_CR_MODE_Pos)
#define    FL_COMP_POWER_MODE_HIGH                                (0x2U << COMP_CR_MODE_Pos)


#define    FL_COMP_OUTPUT_LOW                                     (0x0U << COMP_CR_CMPO_Pos)
#define    FL_COMP_OUTPUT_HIGH                                    (0x1U << COMP_CR_CMPO_Pos)

#define    FL_COMP_INP_SOURCE_INP1                                (0x0U << COMP_CR_PSEL_Pos)
#define    FL_COMP_INP_SOURCE_DAC                                 (0x2U << COMP_CR_PSEL_Pos)


#define    FL_COMP_INN_SOURCE_INN1                                (0x0U << COMP_CR_NSEL_Pos)
#define    FL_COMP_INN_SOURCE_DAC                                 (0x1U << COMP_CR_NSEL_Pos)
#define    FL_COMP_INN_SOURCE_VREF                                (0x2U << COMP_CR_NSEL_Pos)
#define    FL_COMP_INN_SOURCE_VREF_DIV_2                          (0x3U << COMP_CR_NSEL_Pos)


#define    FL_COMP_COMP1_INTERRUPT_EDGE_BOTH                      (0x0U << COMP_ICR_CMP1SEL_Pos)
#define    FL_COMP_COMP1_INTERRUPT_EDGE_RISING                    (0x1U << COMP_ICR_CMP1SEL_Pos)
#define    FL_COMP_COMP1_INTERRUPT_EDGE_FALLING                   (0x2U << COMP_ICR_CMP1SEL_Pos)


#define    FL_COMP_COMP0_INTERRUPT_EDGE_BOTH                      (0x0U << COMP_ICR_CMP0SEL_Pos)
#define    FL_COMP_COMP0_INTERRUPT_EDGE_RISING                    (0x1U << COMP_ICR_CMP0SEL_Pos)
#define    FL_COMP_COMP0_INTERRUPT_EDGE_FALLING                   (0x2U << COMP_ICR_CMP0SEL_Pos)


#define    FL_COMP_INTERRUPT_EDGE_BOTH                            (0x0U)
#define    FL_COMP_INTERRUPT_EDGE_RISING                          (0x1U)
#define    FL_COMP_INTERRUPT_EDGE_FALLING                         (0x2U)

/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup COMP_FL_Exported_Functions COMP Exported Functions
  * @{
  */

/**
  * @brief    Set COMPX trigger output edge
  * @rmtoll   CR    TRGOSEL    FL_COMP_SetTriggerOutputEdge
  * @param    COMPx COMP instance
  * @param    edge This parameter can be one of the following values:
  *           @arg @ref FL_COMP_COMPX_TRGOSEL_EDGE_BOTH
  *           @arg @ref FL_COMP_COMPX_TRGOSEL_EDGE_RISING
  *           @arg @ref FL_COMP_COMPX_TRGOSEL_EDGE_FALLING
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_SetTriggerOutputEdge(COMP_Type* COMPx, uint32_t edge)
{
    MODIFY_REG(COMPx->CR, COMP_CR_TRGOSEL_Msk, edge);
}

/**
  * @brief    Get COMPX trigger output edge
  * @rmtoll   CR    TRGOSEL    FL_COMP_GetTriggerOutputEdge
  * @param    COMPx COMP instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_COMP_COMPX_TRGOSEL_EDGE_BOTH
  *           @arg @ref FL_COMP_COMPX_TRGOSEL_EDGE_RISING
  *           @arg @ref FL_COMP_COMPX_TRGOSEL_EDGE_FALLING
  */
__STATIC_INLINE uint32_t FL_COMP_GetTriggerOutputEdge(COMP_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->CR, COMP_CR_TRGOSEL_Msk));
}

/**
  * @brief    COMPx trigger output enable
  * @rmtoll   CR    TRGOEN    FL_COMP_EnableTriggerOutput
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_EnableTriggerOutput(COMP_Type* COMPx)
{
    SET_BIT(COMPx->CR, COMP_CR_TRGOEN_Msk);
}

/**
  * @brief    Get COMPx trigger output enable status
  * @rmtoll   CR    TRGOEN    FL_COMP_IsEnabledTriggerOutput
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsEnabledTriggerOutput(COMP_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->CR, COMP_CR_TRGOEN_Msk) == COMP_CR_TRGOEN_Msk);
}

/**
  * @brief    COMPx trigger output disable
  * @rmtoll   CR    TRGOEN    FL_COMP_DisableTriggerOutput
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_DisableTriggerOutput(COMP_Type* COMPx)
{
    CLEAR_BIT(COMPx->CR, COMP_CR_TRGOEN_Msk);
}

/**
  * @brief    Set COMPx Output Digital Filter Length
  * @rmtoll   CR    DFLEN    FL_COMP_SetOutputFilterWindow
  * @param    COMPx COMP instance
  * @param    length This parameter can be one of the following values:
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_3APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_4APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_5APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_6APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_7APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_8APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_9APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_10APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_11APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_12APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_13APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_14APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_15APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_16APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_17APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_18APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_19APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_20APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_21APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_22APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_23APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_24APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_25APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_26APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_27APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_28APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_29APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_30APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_31APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_32APBCLK
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_SetOutputFilterWindow(COMP_Type* COMPx, uint32_t length)
{
    MODIFY_REG(COMPx->CR, COMP_CR_DFLEN_Msk, length);
}

/**
  * @brief    Get COMPx Output Digital Filter Length
  * @rmtoll   CR    DFLEN    FL_COMP_GetOutputFilterWindow
  * @param    COMPx COMP instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_3APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_4APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_5APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_6APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_7APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_8APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_9APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_10APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_11APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_12APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_13APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_14APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_15APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_16APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_17APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_18APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_19APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_20APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_21APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_22APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_23APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_24APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_25APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_26APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_27APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_28APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_29APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_30APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_31APBCLK
  *           @arg @ref FL_COMP_OUTPUT_FILTER_WINDOW_32APBCLK
  */
__STATIC_INLINE uint32_t FL_COMP_GetOutputFilterWindow(COMP_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->CR, COMP_CR_DFLEN_Msk));
}

/**
  * @brief    COMPx Window Mode enable
  * @rmtoll   CR    WINMODE    FL_COMP_EnableWindowMode
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_EnableWindowMode(COMP_Type* COMPx)
{
    SET_BIT(COMPx->CR, COMP_CR_WINMODE_Msk);
}

/**
  * @brief    Get COMPx Window Mode enable status
  * @rmtoll   CR    WINMODE    FL_COMP_IsEnabledWindowMode
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsEnabledWindowMode(COMP_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->CR, COMP_CR_WINMODE_Msk) == COMP_CR_WINMODE_Msk);
}

/**
  * @brief    COMPx Window Mode disable
  * @rmtoll   CR    WINMODE    FL_COMP_DisableWindowMode
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_DisableWindowMode(COMP_Type* COMPx)
{
    CLEAR_BIT(COMPx->CR, COMP_CR_WINMODE_Msk);
}

/**
  * @brief    Set COMPx output polarity
  * @rmtoll   CR    POLAR    FL_COMP_SetOutputPolarity
  * @param    COMPx COMP instance
  * @param    polarity This parameter can be one of the following values:
  *           @arg @ref FL_COMP_OUTPUT_POLARITY_NORMAL
  *           @arg @ref FL_COMP_OUTPUT_POLARITY_INVERT
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_SetOutputPolarity(COMP_Type* COMPx, uint32_t polarity)
{
    MODIFY_REG(COMPx->CR, COMP_CR_POLAR_Msk, polarity);
}

/**
  * @brief    Get COMPx output polarity
  * @rmtoll   CR    POLAR    FL_COMP_GetOutputPolarity
  * @param    COMPx COMP instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_COMP_OUTPUT_POLARITY_NORMAL
  *           @arg @ref FL_COMP_OUTPUT_POLARITY_INVERT
  */
__STATIC_INLINE uint32_t FL_COMP_GetOutputPolarity(COMP_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->CR, COMP_CR_POLAR_Msk));
}

/**
  * @brief    COMPx DigitalFilter enable
  * @rmtoll   CR    DFEN    FL_COMP_EnableOutputFilter
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_EnableOutputFilter(COMP_Type* COMPx)
{
    SET_BIT(COMPx->CR, COMP_CR_DFEN_Msk);
}

/**
  * @brief    Get COMPx  DigitalFilter enable status
  * @rmtoll   CR    DFEN    FL_COMP_IsEnabledOutputFilter
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsEnabledOutputFilter(COMP_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->CR, COMP_CR_DFEN_Msk) == COMP_CR_DFEN_Msk);
}

/**
  * @brief    COMPx  DigitalFilter disable
  * @rmtoll   CR    DFEN    FL_COMP_DisableOutputFilter
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_DisableOutputFilter(COMP_Type* COMPx)
{
    CLEAR_BIT(COMPx->CR, COMP_CR_DFEN_Msk);
}

/**
  * @brief    Set COMPx Power mode 
  * @rmtoll   CR    MODE    FL_COMP_SetPowerMode
  * @param    COMPx COMP instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_COMP_POWER_MODE_LOW
  *           @arg @ref FL_COMP_POWER_MODE_HIGH
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_SetPowerMode(COMP_Type* COMPx, uint32_t mode)
{
    MODIFY_REG(COMPx->CR, COMP_CR_MODE_Msk, mode);
}

/**
  * @brief    Get COMPx Power mode 
  * @rmtoll   CR    MODE    FL_COMP_GetPowerMode
  * @param    COMPx COMP instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_COMP_POWER_MODE_LOW
  *           @arg @ref FL_COMP_POWER_MODE_HIGH
  */
__STATIC_INLINE uint32_t FL_COMP_GetPowerMode(COMP_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->CR, COMP_CR_MODE_Msk));
}

/**
  * @brief    COMPx Hysten enable
  * @rmtoll   CR    HYSTEN    FL_COMP_EnableHysten
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_EnableHysten(COMP_Type* COMPx)
{
    SET_BIT(COMPx->CR, COMP_CR_HYSTEN_Msk);
}

/**
  * @brief    Get COMPx Hysten enable status
  * @rmtoll   CR    HYSTEN    FL_COMP_IsEnabledHysten
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsEnabledHysten(COMP_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->CR, COMP_CR_HYSTEN_Msk) == COMP_CR_HYSTEN_Msk);
}

/**
  * @brief    COMPx Hysten disable
  * @rmtoll   CR    HYSTEN    FL_COMP_DisableHysten
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_DisableHysten(COMP_Type* COMPx)
{
    CLEAR_BIT(COMPx->CR, COMP_CR_HYSTEN_Msk);
}

/**
  * @brief    Get comparator output channel
  * @rmtoll   CR    CMPO    FL_COMP_GetOutput
  * @param    COMPx COMP instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_COMP_OUTPUT_LOW
  *           @arg @ref FL_COMP_OUTPUT_HIGH
  */
__STATIC_INLINE uint32_t FL_COMP_GetOutput(COMP_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->CR, COMP_CR_CMPO_Msk));
}

/**
  * @brief    Set COMPx positive input 
  * @rmtoll   CR    PSEL    FL_COMP_SetINPSource
  * @param    COMPx COMP instance
  * @param    source This parameter can be one of the following values:
  *           @arg @ref FL_COMP_INP_SOURCE_INP1
  *           @arg @ref FL_COMP_INP_SOURCE_INP2
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_SetINPSource(COMP_Type* COMPx, uint32_t source)
{
    MODIFY_REG(COMPx->CR, COMP_CR_PSEL_Msk, source);
}

/**
  * @brief    Get COMPx positive input status
  * @rmtoll   CR    PSEL    FL_COMP_GetINPSource
  * @param    COMPx COMP instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_COMP_INP_SOURCE_INP1
  *           @arg @ref FL_COMP_INP_SOURCE_INP2
  */
__STATIC_INLINE uint32_t FL_COMP_GetINPSource(COMP_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->CR, COMP_CR_PSEL_Msk));
}

/**
  * @brief    Set COMPx negative input 
  * @rmtoll   CR    NSEL    FL_COMP_SetINNSource
  * @param    COMPx COMP instance
  * @param    source This parameter can be one of the following values:
  *           @arg @ref FL_COMP_INN_SOURCE_INN1
  *           @arg @ref FL_COMP_INN_SOURCE_INN2
  *           @arg @ref FL_COMP_INN_SOURCE_VREF
  *           @arg @ref FL_COMP_INN_SOURCE_VREF_DIV_2
  *           @arg @ref FL_COMP_INN_SOURCE_VREFPLUS
  *           @arg @ref FL_COMP_INN_SOURCE_DAC
  *           @arg @ref FL_COMP_INN_SOURCE_AVREF
  *           @arg @ref FL_COMP_INN_SOURCE_AVREF_DIV_2
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_SetINNSource(COMP_Type* COMPx, uint32_t source)
{
    MODIFY_REG(COMPx->CR, COMP_CR_NSEL_Msk, source);
}

/**
  * @brief    Get COMPx negative input status
  * @rmtoll   CR    NSEL    FL_COMP_GetINNSource
  * @param    COMPx COMP instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_COMP_INN_SOURCE_INN1
  *           @arg @ref FL_COMP_INN_SOURCE_INN2
  *           @arg @ref FL_COMP_INN_SOURCE_VREF
  *           @arg @ref FL_COMP_INN_SOURCE_VREF_DIV_2
  *           @arg @ref FL_COMP_INN_SOURCE_VREFPLUS
  *           @arg @ref FL_COMP_INN_SOURCE_DAC
  *           @arg @ref FL_COMP_INN_SOURCE_AVREF
  *           @arg @ref FL_COMP_INN_SOURCE_AVREF_DIV_2
  */
__STATIC_INLINE uint32_t FL_COMP_GetINNSource(COMP_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->CR, COMP_CR_NSEL_Msk));
}

/**
  * @brief    COMPx enable
  * @rmtoll   CR    CMPEN    FL_COMP_Enable
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_Enable(COMP_Type* COMPx)
{
    SET_BIT(COMPx->CR, COMP_CR_CMPEN_Msk);
}

/**
  * @brief    Get COMPx enable status
  * @rmtoll   CR    CMPEN    FL_COMP_IsEnabled
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsEnabled(COMP_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->CR, COMP_CR_CMPEN_Msk) == COMP_CR_CMPEN_Msk);
}

/**
  * @brief    COMPx disable
  * @rmtoll   CR    CMPEN    FL_COMP_Disable
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_Disable(COMP_Type* COMPx)
{
    CLEAR_BIT(COMPx->CR, COMP_CR_CMPEN_Msk);
}

/**
  * @brief    Comparator Out Of Window interrupt enable
  * @rmtoll   ICR    OWW_IE    FL_COMP_EnableIT_OutOfWindow
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_EnableIT_OutOfWindow(COMP_COMMON_Type* COMPx)
{
    SET_BIT(COMPx->ICR, COMP_ICR_OWW_IE_Msk);
}

/**
  * @brief    Get Comparator Out Of Window interrupt enable status
  * @rmtoll   ICR    OWW_IE    FL_COMP_IsEnabledIT_OutOfWindow
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsEnabledIT_OutOfWindow(COMP_COMMON_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->ICR, COMP_ICR_OWW_IE_Msk) == COMP_ICR_OWW_IE_Msk);
}

/**
  * @brief    Comparator Out Of Window interrupt disable
  * @rmtoll   ICR    OWW_IE    FL_COMP_DisableIT_OutOfWindow
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_DisableIT_OutOfWindow(COMP_COMMON_Type* COMPx)
{
    CLEAR_BIT(COMPx->ICR, COMP_ICR_OWW_IE_Msk);
}

/**
  * @brief    Comparator Across Window interrupt enable
  * @rmtoll   ICR    WIN_IE    FL_COMP_EnableIT_AcrossWindowThreshold
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_EnableIT_AcrossWindowThreshold(COMP_COMMON_Type* COMPx)
{
    SET_BIT(COMPx->ICR, COMP_ICR_WIN_IE_Msk);
}

/**
  * @brief    Get comparator  Across Window interrupt enable status
  * @rmtoll   ICR    WIN_IE    FL_COMP_IsEnabledIT_AcrossWindowThreshold
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsEnabledIT_AcrossWindowThreshold(COMP_COMMON_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->ICR, COMP_ICR_WIN_IE_Msk) == COMP_ICR_WIN_IE_Msk);
}

/**
  * @brief    Comparator  Across Window interrupt disable
  * @rmtoll   ICR    WIN_IE    FL_COMP_DisableIT_AcrossWindowThreshold
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_DisableIT_AcrossWindowThreshold(COMP_COMMON_Type* COMPx)
{
    CLEAR_BIT(COMPx->ICR, COMP_ICR_WIN_IE_Msk);
}

/**
  * @brief    Set comparator1 interrupt edge
  * @rmtoll   ICR    CMP1SEL    FL_COMP_SetComparator1InterruptEdge
  * @param    COMPx COMP instance
  * @param    edge This parameter can be one of the following values:
  *           @arg @ref FL_COMP_COMP1_INTERRUPT_EDGE_BOTH
  *           @arg @ref FL_COMP_COMP1_INTERRUPT_EDGE_RISING
  *           @arg @ref FL_COMP_COMP1_INTERRUPT_EDGE_FALLING
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_SetComparator1InterruptEdge(COMP_COMMON_Type* COMPx, uint32_t edge)
{
    MODIFY_REG(COMPx->ICR, COMP_ICR_CMP1SEL_Msk, edge);
}

/**
  * @brief    Get comparator1 interrupt edge
  * @rmtoll   ICR    CMP1SEL    FL_COMP_GetComparator1InterruptEdge
  * @param    COMPx COMP instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_COMP_COMP1_INTERRUPT_EDGE_BOTH
  *           @arg @ref FL_COMP_COMP1_INTERRUPT_EDGE_RISING
  *           @arg @ref FL_COMP_COMP1_INTERRUPT_EDGE_FALLING
  */
__STATIC_INLINE uint32_t FL_COMP_GetComparator1InterruptEdge(COMP_COMMON_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->ICR, COMP_ICR_CMP1SEL_Msk));
}

/**
  * @brief    Comparator1 interrupt enable
  * @rmtoll   ICR    CMP1IE    FL_COMP_EnableIT_Comparator1
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_EnableIT_Comparator1(COMP_COMMON_Type* COMPx)
{
    SET_BIT(COMPx->ICR, COMP_ICR_CMP1IE_Msk);
}

/**
  * @brief    Get comparator1 interrupt enable status
  * @rmtoll   ICR    CMP1IE    FL_COMP_IsEnabledIT_Comparator1
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsEnabledIT_Comparator1(COMP_COMMON_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->ICR, COMP_ICR_CMP1IE_Msk) == COMP_ICR_CMP1IE_Msk);
}

/**
  * @brief    Comparator1 interrupt disable
  * @rmtoll   ICR    CMP1IE    FL_COMP_DisableIT_Comparator1
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_DisableIT_Comparator1(COMP_COMMON_Type* COMPx)
{
    CLEAR_BIT(COMPx->ICR, COMP_ICR_CMP1IE_Msk);
}

/**
  * @brief    Set comparator0 interrupt edge
  * @rmtoll   ICR    CMP0SEL    FL_COMP_SetComparator0InterruptEdge
  * @param    COMPx COMP instance
  * @param    edge This parameter can be one of the following values:
  *           @arg @ref FL_COMP_COMP0_INTERRUPT_EDGE_BOTH
  *           @arg @ref FL_COMP_COMP0_INTERRUPT_EDGE_RISING
  *           @arg @ref FL_COMP_COMP0_INTERRUPT_EDGE_FALLING
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_SetComparator0InterruptEdge(COMP_COMMON_Type* COMPx, uint32_t edge)
{
    MODIFY_REG(COMPx->ICR, COMP_ICR_CMP0SEL_Msk, edge);
}

/**
  * @brief    Get comparator0 interrupt edge
  * @rmtoll   ICR    CMP0SEL    FL_COMP_GetComparator0InterruptEdge
  * @param    COMPx COMP instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_COMP_COMP0_INTERRUPT_EDGE_BOTH
  *           @arg @ref FL_COMP_COMP0_INTERRUPT_EDGE_RISING
  *           @arg @ref FL_COMP_COMP0_INTERRUPT_EDGE_FALLING
  */
__STATIC_INLINE uint32_t FL_COMP_GetComparator0InterruptEdge(COMP_COMMON_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->ICR, COMP_ICR_CMP0SEL_Msk));
}

/**
  * @brief    Comparator0 interrupt enable
  * @rmtoll   ICR    CMP0IE    FL_COMP_EnableIT_Comparator0
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_EnableIT_Comparator0(COMP_COMMON_Type* COMPx)
{
    SET_BIT(COMPx->ICR, COMP_ICR_CMP0IE_Msk);
}

/**
  * @brief    Get comparator0 interrupt enable status
  * @rmtoll   ICR    CMP0IE    FL_COMP_IsEnabledIT_Comparator0
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsEnabledIT_Comparator0(COMP_COMMON_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->ICR, COMP_ICR_CMP0IE_Msk) == COMP_ICR_CMP0IE_Msk);
}

/**
  * @brief    Comparator0 interrupt disable
  * @rmtoll   ICR    CMP0IE    FL_COMP_DisableIT_Comparator0
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_DisableIT_Comparator0(COMP_COMMON_Type* COMPx)
{
    CLEAR_BIT(COMPx->ICR, COMP_ICR_CMP0IE_Msk);
}

/**
  * @brief    Get outof window interrupt flag
  * @rmtoll   ISR    OOW_IF    FL_COMP_IsActiveFlag_OutOfWindow
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsActiveFlag_OutOfWindow(COMP_COMMON_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->ISR, COMP_ISR_OOW_IF_Msk) == (COMP_ISR_OOW_IF_Msk));
}

/**
  * @brief    Clear outof window interrupt flag
  * @rmtoll   ISR    OOW_IF    FL_COMP_ClearFlag_OutOfWindow
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_ClearFlag_OutOfWindow(COMP_COMMON_Type* COMPx)
{
    WRITE_REG(COMPx->ISR, COMP_ISR_OOW_IF_Msk);
}

/**
  * @brief    Get across window interrupt flag
  * @rmtoll   ISR    WIN_IF    FL_COMP_IsActiveFlag_AcrossWindowThreshold
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsActiveFlag_AcrossWindowThreshold(COMP_COMMON_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->ISR, COMP_ISR_WIN_IF_Msk) == (COMP_ISR_WIN_IF_Msk));
}

/**
  * @brief    Clear across window interrupt flag
  * @rmtoll   ISR    WIN_IF    FL_COMP_ClearFlag_AcrossWindowThreshold
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_ClearFlag_AcrossWindowThreshold(COMP_COMMON_Type* COMPx)
{
    WRITE_REG(COMPx->ISR, COMP_ISR_WIN_IF_Msk);
}

/**
  * @brief    Get comparator1 interrupt flag
  * @rmtoll   ISR    CMP1IF    FL_COMP_IsActiveFlag_Comparator1
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsActiveFlag_Comparator1(COMP_COMMON_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->ISR, COMP_ISR_CMP1IF_Msk) == (COMP_ISR_CMP1IF_Msk));
}

/**
  * @brief    Clear comparator1 interrupt flag
  * @rmtoll   ISR    CMP1IF    FL_COMP_ClearFlag_Comparator1
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_ClearFlag_Comparator1(COMP_COMMON_Type* COMPx)
{
    WRITE_REG(COMPx->ISR, COMP_ISR_CMP1IF_Msk);
}

/**
  * @brief    Get comparator0 interrupt flag
  * @rmtoll   ISR    CMP0IF    FL_COMP_IsActiveFlag_Comparator0
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsActiveFlag_Comparator0(COMP_COMMON_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->ISR, COMP_ISR_CMP0IF_Msk) == (COMP_ISR_CMP0IF_Msk));
}

/**
  * @brief    Clear comparator0 interrupt flag
  * @rmtoll   ISR    CMP0IF    FL_COMP_ClearFlag_Comparator0
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_ClearFlag_Comparator0(COMP_COMMON_Type* COMPx)
{
    WRITE_REG(COMPx->ISR, COMP_ISR_CMP0IF_Msk);
}

/**
  * @brief    COMPx bypass buffer enable
  * @rmtoll   BUFCR    BUFBYP    FL_COMP_EnableBufferBypass
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_EnableBufferBypass(COMP_COMMON_Type* COMPx)
{
    SET_BIT(COMPx->BUFCR, COMP_BUFCR_BUFBYP_Msk);
}

/**
  * @brief    Get COMPx bypass buffer enable status
  * @rmtoll   BUFCR    BUFBYP    FL_COMP_IsEnabledBufferBypass
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsEnabledBufferBypass(COMP_COMMON_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->BUFCR, COMP_BUFCR_BUFBYP_Msk) == COMP_BUFCR_BUFBYP_Msk);
}

/**
  * @brief    COMPx bypass buffer disable
  * @rmtoll   BUFCR    BUFBYP    FL_COMP_DisableBufferBypass
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_DisableBufferBypass(COMP_COMMON_Type* COMPx)
{
    CLEAR_BIT(COMPx->BUFCR, COMP_BUFCR_BUFBYP_Msk);
}

/**
  * @brief    COMPx close buffer enable
  * @rmtoll   BUFCR    BUFENB    FL_COMP_EnableBuffer
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_EnableBuffer(COMP_COMMON_Type* COMPx)
{
    CLEAR_BIT(COMPx->BUFCR, COMP_BUFCR_BUFENB_Msk);
}

/**
  * @brief    Get COMPx close buffer enable status
  * @rmtoll   BUFCR    BUFENB    FL_COMP_IsEnabledBuffer
  * @param    COMPx COMP instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_COMP_IsEnabledBuffer(COMP_COMMON_Type* COMPx)
{
    return (uint32_t)(READ_BIT(COMPx->BUFCR, COMP_BUFCR_BUFENB_Msk) == COMP_BUFCR_BUFENB_Msk);
}

/**
  * @brief    COMPx close buffer disable
  * @rmtoll   BUFCR    BUFENB    FL_COMP_DisableBuffer
  * @param    COMPx COMP instance
  * @retval   None
  */
__STATIC_INLINE void FL_COMP_DisableBuffer(COMP_COMMON_Type* COMPx)
{
    SET_BIT(COMPx->BUFCR, COMP_BUFCR_BUFENB_Msk);
}

/**
  * @}
  */

/** @defgroup COMP_FL_EF_Init Initialization and de-initialization functions
  * @{
  */
FL_ErrorStatus FL_COMP_DeInit(COMP_Type *COMPx);
void FL_COMP_StructInit(FL_COMP_InitTypeDef *initStruct);
FL_ErrorStatus FL_COMP_Init(COMP_Type *COMPx, FL_COMP_InitTypeDef *initStruct);

/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33HT0XXA_FL_COMP_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.1 @ 2024-01-15*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/

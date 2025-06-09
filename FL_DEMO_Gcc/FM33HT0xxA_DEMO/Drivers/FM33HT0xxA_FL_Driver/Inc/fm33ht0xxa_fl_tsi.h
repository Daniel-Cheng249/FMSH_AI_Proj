/**
  *******************************************************************************************************
  * @file    fm33ht0xxa_fl_tsi.h
  * @author  FMSH Application Team
  * @brief   Head file of TSI FL Module
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
  ****************************************************************************************************
  */


/* Define to prevent recursive inclusion---------------------------------------------------------------*/
#ifndef __FM33HT0XXA_FL_TSI_H
#define __FM33HT0XXA_FL_TSI_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes -------------------------------------------------------------------------------------------*/
#include "fm33ht0xxa_fl_def.h"
/** @addtogroup FM33HT0XXA_FL_Driver
  * @{
  */
/* Exported types -------------------------------------------------------------------------------------*/
/** @defgroup TSI_FL_ES_INIT TSI Exported Init structures
  * @{
  */

/**
  * @brief FL TSI Init Sturcture definition
  */
/**
  * @}
  */
/* Exported constants ---------------------------------------------------------------------------------*/
/** @defgroup TSI_FL_Exported_Constants TSI Exported Constants
  * @{
  */

#define    TSI_ISR_SEQF_Pos                                       (2U)
#define    TSI_ISR_SEQF_Msk                                       (0x1U << TSI_ISR_SEQF_Pos)
#define    TSI_ISR_SEQF                                           TSI_ISR_SEQF_Msk

#define    TSI_ISR_CHF_Pos                                        (1U)
#define    TSI_ISR_CHF_Msk                                        (0x1U << TSI_ISR_CHF_Pos)
#define    TSI_ISR_CHF                                            TSI_ISR_CHF_Msk

#define    TSI_ISR_RCUF_Pos                                       (0U)
#define    TSI_ISR_RCUF_Msk                                       (0x1U << TSI_ISR_RCUF_Pos)
#define    TSI_ISR_RCUF                                           TSI_ISR_RCUF_Msk

#define    TSI_IER_SEQ_IE_Pos                                     (2U)
#define    TSI_IER_SEQ_IE_Msk                                     (0x1U << TSI_IER_SEQ_IE_Pos)
#define    TSI_IER_SEQ_IE                                         TSI_IER_SEQ_IE_Msk

#define    TSI_IER_CH_IE_Pos                                      (1U)
#define    TSI_IER_CH_IE_Msk                                      (0x1U << TSI_IER_CH_IE_Pos)
#define    TSI_IER_CH_IE                                          TSI_IER_CH_IE_Msk

#define    TSI_IER_RCU_IE_Pos                                     (0U)
#define    TSI_IER_RCU_IE_Msk                                     (0x1U << TSI_IER_RCU_IE_Pos)
#define    TSI_IER_RCU_IE                                         TSI_IER_RCU_IE_Msk

#define    TSI_RXSSR_RXSSR_Pos                                    (0U)
#define    TSI_RXSSR_RXSSR_Msk                                    (0x3fU << TSI_RXSSR_RXSSR_Pos)
#define    TSI_RXSSR_RXSSR                                        TSI_RXSSR_RXSSR_Msk

#define    TSI_TXSSR_TXSSR_Pos                                    (0U)
#define    TSI_TXSSR_TXSSR_Msk                                    (0x3fU << TSI_TXSSR_TXSSR_Pos)
#define    TSI_TXSSR_TXSSR                                        TSI_TXSSR_TXSSR_Msk

#define    TSI_CFGR_SMPL_SIZE_Pos                                 (28U)
#define    TSI_CFGR_SMPL_SIZE_Msk                                 (0xfU << TSI_CFGR_SMPL_SIZE_Pos)
#define    TSI_CFGR_SMPL_SIZE                                     TSI_CFGR_SMPL_SIZE_Msk

#define    TSI_CFGR_TSI_MOD_Pos                                   (22U)
#define    TSI_CFGR_TSI_MOD_Msk                                   (0x3U << TSI_CFGR_TSI_MOD_Pos)
#define    TSI_CFGR_TSI_MOD                                       TSI_CFGR_TSI_MOD_Msk

#define    TSI_CFGR_CHCFG_WAIT_Pos                                (20U)
#define    TSI_CFGR_CHCFG_WAIT_Msk                                (0x1U << TSI_CFGR_CHCFG_WAIT_Pos)
#define    TSI_CFGR_CHCFG_WAIT                                    TSI_CFGR_CHCFG_WAIT_Msk

#define    TSI_CFGR_TRIG_SEL_Pos                                  (12U)
#define    TSI_CFGR_TRIG_SEL_Msk                                  (0xfU << TSI_CFGR_TRIG_SEL_Pos)
#define    TSI_CFGR_TRIG_SEL                                      TSI_CFGR_TRIG_SEL_Msk

#define    TSI_CFGR_AVG_ORDER_Pos                                 (8U)
#define    TSI_CFGR_AVG_ORDER_Msk                                 (0xfU << TSI_CFGR_AVG_ORDER_Pos)
#define    TSI_CFGR_AVG_ORDER                                     TSI_CFGR_AVG_ORDER_Msk

#define    TSI_CFGR_AVG_EN_Pos                                    (7U)
#define    TSI_CFGR_AVG_EN_Msk                                    (0x1U << TSI_CFGR_AVG_EN_Pos)
#define    TSI_CFGR_AVG_EN                                        TSI_CFGR_AVG_EN_Msk

#define    TSI_CFGR_TMOD_Pos                                      (5U)
#define    TSI_CFGR_TMOD_Msk                                      (0x1U << TSI_CFGR_TMOD_Pos)
#define    TSI_CFGR_TMOD                                          TSI_CFGR_TMOD_Msk

#define    TSI_CFGR_SHIELD_EN_Pos                                 (4U)
#define    TSI_CFGR_SHIELD_EN_Msk                                 (0x1U << TSI_CFGR_SHIELD_EN_Pos)
#define    TSI_CFGR_SHIELD_EN                                     TSI_CFGR_SHIELD_EN_Msk

#define    TSI_CFGR_SEN_Pos                                       (0U)
#define    TSI_CFGR_SEN_Msk                                       (0x1U << TSI_CFGR_SEN_Pos)
#define    TSI_CFGR_SEN                                           TSI_CFGR_SEN_Msk

#define    TSI_CR_STOP_Pos                                        (2U)
#define    TSI_CR_STOP_Msk                                        (0x1U << TSI_CR_STOP_Pos)
#define    TSI_CR_STOP                                            TSI_CR_STOP_Msk

#define    TSI_CR_SCAN_CON_Pos                                    (1U)
#define    TSI_CR_SCAN_CON_Msk                                    (0x1U << TSI_CR_SCAN_CON_Pos)
#define    TSI_CR_SCAN_CON                                        TSI_CR_SCAN_CON_Msk

#define    TSI_CR_START_Pos                                       (0U)
#define    TSI_CR_START_Msk                                       (0x1U << TSI_CR_START_Pos)
#define    TSI_CR_START                                           TSI_CR_START_Msk

#define    TSI_RAWCNTR_TXSID_Pos                                  (24U)
#define    TSI_RAWCNTR_TXSID_Msk                                  (0x3fU << TSI_RAWCNTR_TXSID_Pos)
#define    TSI_RAWCNTR_TXSID                                      TSI_RAWCNTR_TXSID_Msk

#define    TSI_RAWCNTR_RXSID_Pos                                  (16U)
#define    TSI_RAWCNTR_RXSID_Msk                                  (0x3fU << TSI_RAWCNTR_RXSID_Pos)
#define    TSI_RAWCNTR_RXSID                                      TSI_RAWCNTR_RXSID_Msk

#define    TSI_RAWCNTR_RAW_COUNT_Pos                              (0U)
#define    TSI_RAWCNTR_RAW_COUNT_Msk                              (0xffffU << TSI_RAWCNTR_RAW_COUNT_Pos)
#define    TSI_RAWCNTR_RAW_COUNT                                  TSI_RAWCNTR_RAW_COUNT_Msk

#define    TSI_CCR_SCAN_ZERO_Pos                                  (24U)
#define    TSI_CCR_SCAN_ZERO_Msk                                  (0x7fU << TSI_CCR_SCAN_ZERO_Pos)
#define    TSI_CCR_SCAN_ZERO                                      TSI_CCR_SCAN_ZERO_Msk

#define    TSI_CCR_SCAN_IDLE_Pos                                  (16U)
#define    TSI_CCR_SCAN_IDLE_Msk                                  (0xffU << TSI_CCR_SCAN_IDLE_Pos)
#define    TSI_CCR_SCAN_IDLE                                      TSI_CCR_SCAN_IDLE_Msk

#define    TSI_CCR_SCAN_INTV_Pos                                  (8U)
#define    TSI_CCR_SCAN_INTV_Msk                                  (0xffU << TSI_CCR_SCAN_INTV_Pos)
#define    TSI_CCR_SCAN_INTV                                      TSI_CCR_SCAN_INTV_Msk

#define    TSI_CCR_SMPL_WAIT_Pos                                  (1U)
#define    TSI_CCR_SMPL_WAIT_Msk                                  (0x7U << TSI_CCR_SMPL_WAIT_Pos)
#define    TSI_CCR_SMPL_WAIT                                      TSI_CCR_SMPL_WAIT_Msk

#define    TSI_CCR_PRSCLK_EN_Pos                                  (0U)
#define    TSI_CCR_PRSCLK_EN_Msk                                  (0x1U << TSI_CCR_PRSCLK_EN_Pos)
#define    TSI_CCR_PRSCLK_EN                                      TSI_CCR_PRSCLK_EN_Msk

#define    TSI_DMACR_DMA_WREN_Pos                                 (1U)
#define    TSI_DMACR_DMA_WREN_Msk                                 (0x1U << TSI_DMACR_DMA_WREN_Pos)
#define    TSI_DMACR_DMA_WREN                                     TSI_DMACR_DMA_WREN_Msk

#define    TSI_DMACR_DMA_RDEN_Pos                                 (0U)
#define    TSI_DMACR_DMA_RDEN_Msk                                 (0x1U << TSI_DMACR_DMA_RDEN_Pos)
#define    TSI_DMACR_DMA_RDEN                                     TSI_DMACR_DMA_RDEN_Msk

#define    TSI_CHCFGR_SNS_DIV_Pos                                 (20U)
#define    TSI_CHCFGR_SNS_DIV_Msk                                 (0xfffU << TSI_CHCFGR_SNS_DIV_Pos)
#define    TSI_CHCFGR_SNS_DIV                                     TSI_CHCFGR_SNS_DIV_Msk

#define    TSI_CHCFGR_RES_Pos                                     (16U)
#define    TSI_CHCFGR_RES_Msk                                     (0xfU << TSI_CHCFGR_RES_Pos)
#define    TSI_CHCFGR_RES                                         TSI_CHCFGR_RES_Msk

#define    TSI_CHCFGR_IDAC_MODE_Pos                               (15U)
#define    TSI_CHCFGR_IDAC_MODE_Msk                               (0x1U << TSI_CHCFGR_IDAC_MODE_Pos)
#define    TSI_CHCFGR_IDAC_MODE                                   TSI_CHCFGR_IDAC_MODE_Msk

#define    TSI_CHCFGR_IDAC2_CFG_Pos                               (8U)
#define    TSI_CHCFGR_IDAC2_CFG_Msk                               (0x7fU << TSI_CHCFGR_IDAC2_CFG_Pos)
#define    TSI_CHCFGR_IDAC2_CFG                                   TSI_CHCFGR_IDAC2_CFG_Msk

#define    TSI_CHCFGR_IDAC1_CFG_Pos                               (0U)
#define    TSI_CHCFGR_IDAC1_CFG_Msk                               (0x7fU << TSI_CHCFGR_IDAC1_CFG_Pos)
#define    TSI_CHCFGR_IDAC1_CFG                                   TSI_CHCFGR_IDAC1_CFG_Msk

#define    TSI_IDACTR_IDAC2_TRIM_Pos                              (8U)
#define    TSI_IDACTR_IDAC2_TRIM_Msk                              (0x1fU << TSI_IDACTR_IDAC2_TRIM_Pos)
#define    TSI_IDACTR_IDAC2_TRIM                                  TSI_IDACTR_IDAC2_TRIM_Msk

#define    TSI_IDACTR_IDAC1_TRIM_Pos                              (0U)
#define    TSI_IDACTR_IDAC1_TRIM_Msk                              (0x1fU << TSI_IDACTR_IDAC1_TRIM_Pos)
#define    TSI_IDACTR_IDAC1_TRIM                                  TSI_IDACTR_IDAC1_TRIM_Msk

#define    TSI_ANACR_LOWREF_SEL_Pos                               (24U)
#define    TSI_ANACR_LOWREF_SEL_Msk                               (0x3U << TSI_ANACR_LOWREF_SEL_Pos)
#define    TSI_ANACR_LOWREF_SEL                                   TSI_ANACR_LOWREF_SEL_Msk

#define    TSI_ANACR_CMP_AZ_BYP_Pos                               (23U)
#define    TSI_ANACR_CMP_AZ_BYP_Msk                               (0x1U << TSI_ANACR_CMP_AZ_BYP_Pos)
#define    TSI_ANACR_CMP_AZ_BYP                                   TSI_ANACR_CMP_AZ_BYP_Msk

#define    TSI_ANACR_HSCMP_AZ_BYP_Pos                             (22U)
#define    TSI_ANACR_HSCMP_AZ_BYP_Msk                             (0x1U << TSI_ANACR_HSCMP_AZ_BYP_Pos)
#define    TSI_ANACR_HSCMP_AZ_BYP                                 TSI_ANACR_HSCMP_AZ_BYP_Msk

#define    TSI_ANACR_LES_PCFG_Pos                                 (20U)
#define    TSI_ANACR_LES_PCFG_Msk                                 (0x3U << TSI_ANACR_LES_PCFG_Pos)
#define    TSI_ANACR_LES_PCFG                                     TSI_ANACR_LES_PCFG_Msk

#define    TSI_ANACR_LES_NCFG_Pos                                 (18U)
#define    TSI_ANACR_LES_NCFG_Msk                                 (0x3U << TSI_ANACR_LES_NCFG_Pos)
#define    TSI_ANACR_LES_NCFG                                     TSI_ANACR_LES_NCFG_Msk

#define    TSI_ANACR_IDAC2_MODE_CTRL_Pos                          (17U)
#define    TSI_ANACR_IDAC2_MODE_CTRL_Msk                          (0x1U << TSI_ANACR_IDAC2_MODE_CTRL_Pos)
#define    TSI_ANACR_IDAC2_MODE_CTRL                              TSI_ANACR_IDAC2_MODE_CTRL_Msk

#define    TSI_ANACR_IDAC1_MODE_CTRL_Pos                          (16U)
#define    TSI_ANACR_IDAC1_MODE_CTRL_Msk                          (0x1U << TSI_ANACR_IDAC1_MODE_CTRL_Pos)
#define    TSI_ANACR_IDAC1_MODE_CTRL                              TSI_ANACR_IDAC1_MODE_CTRL_Msk

#define    TSI_ANACR_IDAC2_DOUBLE_Pos                             (15U)
#define    TSI_ANACR_IDAC2_DOUBLE_Msk                             (0x1U << TSI_ANACR_IDAC2_DOUBLE_Pos)
#define    TSI_ANACR_IDAC2_DOUBLE                                 TSI_ANACR_IDAC2_DOUBLE_Msk

#define    TSI_ANACR_IDAC1_DOUBLE_Pos                             (14U)
#define    TSI_ANACR_IDAC1_DOUBLE_Msk                             (0x1U << TSI_ANACR_IDAC1_DOUBLE_Pos)
#define    TSI_ANACR_IDAC1_DOUBLE                                 TSI_ANACR_IDAC1_DOUBLE_Msk

#define    TSI_ANACR_IDAC2_RANGET_Pos                             (12U)
#define    TSI_ANACR_IDAC2_RANGET_Msk                             (0x3U << TSI_ANACR_IDAC2_RANGET_Pos)
#define    TSI_ANACR_IDAC2_RANGET                                 TSI_ANACR_IDAC2_RANGET_Msk

#define    TSI_ANACR_IDAC1_RANGET_Pos                             (10U)
#define    TSI_ANACR_IDAC1_RANGET_Msk                             (0x3U << TSI_ANACR_IDAC1_RANGET_Pos)
#define    TSI_ANACR_IDAC1_RANGET                                 TSI_ANACR_IDAC1_RANGET_Msk

#define    TSI_ANACR_SHIELD_MOD_Pos                               (8U)
#define    TSI_ANACR_SHIELD_MOD_Msk                               (0x3U << TSI_ANACR_SHIELD_MOD_Pos)
#define    TSI_ANACR_SHIELD_MOD                                   TSI_ANACR_SHIELD_MOD_Msk

#define    TSI_ANACR_RC_BYP_Pos                                   (7U)
#define    TSI_ANACR_RC_BYP_Msk                                   (0x1U << TSI_ANACR_RC_BYP_Pos)
#define    TSI_ANACR_RC_BYP                                       TSI_ANACR_RC_BYP_Msk

#define    TSI_ANACR_CMP_RC_Pos                                   (3U)
#define    TSI_ANACR_CMP_RC_Msk                                   (0xfU << TSI_ANACR_CMP_RC_Pos)
#define    TSI_ANACR_CMP_RC                                       TSI_ANACR_CMP_RC_Msk

#define    TSI_ANACR_CMPHS_Pos                                    (2U)
#define    TSI_ANACR_CMPHS_Msk                                    (0x1U << TSI_ANACR_CMPHS_Pos)
#define    TSI_ANACR_CMPHS                                        TSI_ANACR_CMPHS_Msk

#define    TSI_ANACR_VREFBUF_CFG_Pos                              (0U)
#define    TSI_ANACR_VREFBUF_CFG_Msk                              (0x3U << TSI_ANACR_VREFBUF_CFG_Pos)
#define    TSI_ANACR_VREFBUF_CFG                                  TSI_ANACR_VREFBUF_CFG_Msk

#define    TSI_TEST_IBP_TRIM_Pos                                  (24U)
#define    TSI_TEST_IBP_TRIM_Msk                                  (0x7U << TSI_TEST_IBP_TRIM_Pos)
#define    TSI_TEST_IBP_TRIM                                      TSI_TEST_IBP_TRIM_Msk

#define    TSI_TEST_SENSE_CFG_Pos                                 (20U)
#define    TSI_TEST_SENSE_CFG_Msk                                 (0xfU << TSI_TEST_SENSE_CFG_Pos)
#define    TSI_TEST_SENSE_CFG                                     TSI_TEST_SENSE_CFG_Msk

#define    TSI_TEST_CH_IDLE_CFG_Pos                               (18U)
#define    TSI_TEST_CH_IDLE_CFG_Msk                               (0x1U << TSI_TEST_CH_IDLE_CFG_Pos)
#define    TSI_TEST_CH_IDLE_CFG                                   TSI_TEST_CH_IDLE_CFG_Msk

#define    TSI_TEST_R2D_CFG_Pos                                   (16U)
#define    TSI_TEST_R2D_CFG_Msk                                   (0x3U << TSI_TEST_R2D_CFG_Pos)
#define    TSI_TEST_R2D_CFG                                       TSI_TEST_R2D_CFG_Msk

#define    TSI_TEST_SENSI_VALID_Pos                               (14U)
#define    TSI_TEST_SENSI_VALID_Msk                               (0x1U << TSI_TEST_SENSI_VALID_Pos)
#define    TSI_TEST_SENSI_VALID                                   TSI_TEST_SENSI_VALID_Msk

#define    TSI_ANATEST_VCOMP_DFLT_Pos                             (16U)
#define    TSI_ANATEST_VCOMP_DFLT_Msk                             (0xffU << TSI_ANATEST_VCOMP_DFLT_Pos)
#define    TSI_ANATEST_VCOMP_DFLT                                 TSI_ANATEST_VCOMP_DFLT_Msk

#define    TSI_ANATEST_VCOMP_DFEN_Pos                             (15U)
#define    TSI_ANATEST_VCOMP_DFEN_Msk                             (0x1U << TSI_ANATEST_VCOMP_DFEN_Pos)
#define    TSI_ANATEST_VCOMP_DFEN                                 TSI_ANATEST_VCOMP_DFEN_Msk

#define    TSI_ANATEST_IDAC1_CHG_SWT_Pos                          (14U)
#define    TSI_ANATEST_IDAC1_CHG_SWT_Msk                          (0x1U << TSI_ANATEST_IDAC1_CHG_SWT_Pos)
#define    TSI_ANATEST_IDAC1_CHG_SWT                              TSI_ANATEST_IDAC1_CHG_SWT_Msk

#define    TSI_ANATEST_EXCAP_SEL_Pos                              (12U)
#define    TSI_ANATEST_EXCAP_SEL_Msk                              (0x3U << TSI_ANATEST_EXCAP_SEL_Pos)
#define    TSI_ANATEST_EXCAP_SEL                                  TSI_ANATEST_EXCAP_SEL_Msk

#define    TSI_ANATEST_EXCAP_TESTEN_Pos                           (11U)
#define    TSI_ANATEST_EXCAP_TESTEN_Msk                           (0x1U << TSI_ANATEST_EXCAP_TESTEN_Pos)
#define    TSI_ANATEST_EXCAP_TESTEN                               TSI_ANATEST_EXCAP_TESTEN_Msk

#define    TSI_ANATEST_BIIAS_OUTEN_Pos                            (10U)
#define    TSI_ANATEST_BIIAS_OUTEN_Msk                            (0x1U << TSI_ANATEST_BIIAS_OUTEN_Pos)
#define    TSI_ANATEST_BIIAS_OUTEN                                TSI_ANATEST_BIIAS_OUTEN_Msk

#define    TSI_ANATEST_VCOMP_FB_Pos                               (9U)
#define    TSI_ANATEST_VCOMP_FB_Msk                               (0x1U << TSI_ANATEST_VCOMP_FB_Pos)
#define    TSI_ANATEST_VCOMP_FB                                   TSI_ANATEST_VCOMP_FB_Msk

#define    TSI_ANATEST_IDAC_COMP_MODE_Pos                         (8U)
#define    TSI_ANATEST_IDAC_COMP_MODE_Msk                         (0x1U << TSI_ANATEST_IDAC_COMP_MODE_Pos)
#define    TSI_ANATEST_IDAC_COMP_MODE                             TSI_ANATEST_IDAC_COMP_MODE_Msk

#define    TSI_ANATEST_VREF_BUF_ENT_Pos                           (5U)
#define    TSI_ANATEST_VREF_BUF_ENT_Msk                           (0x1U << TSI_ANATEST_VREF_BUF_ENT_Pos)
#define    TSI_ANATEST_VREF_BUF_ENT                               TSI_ANATEST_VREF_BUF_ENT_Msk

#define    TSI_ANATEST_COMP_ENT_Pos                               (4U)
#define    TSI_ANATEST_COMP_ENT_Msk                               (0x1U << TSI_ANATEST_COMP_ENT_Pos)
#define    TSI_ANATEST_COMP_ENT                                   TSI_ANATEST_COMP_ENT_Msk

#define    TSI_ANATEST_IDAC2_ENT_Pos                              (3U)
#define    TSI_ANATEST_IDAC2_ENT_Msk                              (0x1U << TSI_ANATEST_IDAC2_ENT_Pos)
#define    TSI_ANATEST_IDAC2_ENT                                  TSI_ANATEST_IDAC2_ENT_Msk

#define    TSI_ANATEST_IDAC1_ENT_Pos                              (2U)
#define    TSI_ANATEST_IDAC1_ENT_Msk                              (0x1U << TSI_ANATEST_IDAC1_ENT_Pos)
#define    TSI_ANATEST_IDAC1_ENT                                  TSI_ANATEST_IDAC1_ENT_Msk

#define    TSI_ANATEST_SIGMA_DELTA_ENT_Pos                        (1U)
#define    TSI_ANATEST_SIGMA_DELTA_ENT_Msk                        (0x1U << TSI_ANATEST_SIGMA_DELTA_ENT_Pos)
#define    TSI_ANATEST_SIGMA_DELTA_ENT                            TSI_ANATEST_SIGMA_DELTA_ENT_Msk

#define    TSI_ANATEST_DEBUG_MODE_Pos                             (0U)
#define    TSI_ANATEST_DEBUG_MODE_Msk                             (0x1U << TSI_ANATEST_DEBUG_MODE_Pos)
#define    TSI_ANATEST_DEBUG_MODE                                 TSI_ANATEST_DEBUG_MODE_Msk

#define    TSI_VREFCRTEST_REF_SEL_Pos                             (27U)
#define    TSI_VREFCRTEST_REF_SEL_Msk                             (0x3U << TSI_VREFCRTEST_REF_SEL_Pos)
#define    TSI_VREFCRTEST_REF_SEL                                 TSI_VREFCRTEST_REF_SEL_Msk

#define    TSI_VREFCRTEST_SHIELD1P0_BYPBUF_Pos                    (26U)
#define    TSI_VREFCRTEST_SHIELD1P0_BYPBUF_Msk                    (0x1U << TSI_VREFCRTEST_SHIELD1P0_BYPBUF_Pos)
#define    TSI_VREFCRTEST_SHIELD1P0_BYPBUF                        TSI_VREFCRTEST_SHIELD1P0_BYPBUF_Msk

#define    TSI_VREFCRTEST_VREF1P0_BYPBUF_Pos                      (25U)
#define    TSI_VREFCRTEST_VREF1P0_BYPBUF_Msk                      (0x1U << TSI_VREFCRTEST_VREF1P0_BYPBUF_Pos)
#define    TSI_VREFCRTEST_VREF1P0_BYPBUF                          TSI_VREFCRTEST_VREF1P0_BYPBUF_Msk

#define    TSI_VREFCRTEST_CSD1P0_BYPBUF_Pos                       (24U)
#define    TSI_VREFCRTEST_CSD1P0_BYPBUF_Msk                       (0x1U << TSI_VREFCRTEST_CSD1P0_BYPBUF_Pos)
#define    TSI_VREFCRTEST_CSD1P0_BYPBUF                           TSI_VREFCRTEST_CSD1P0_BYPBUF_Msk

#define    TSI_VREFCRTEST_VREF_CSDCMP_TRIM_Pos                    (16U)
#define    TSI_VREFCRTEST_VREF_CSDCMP_TRIM_Msk                    (0x7fU << TSI_VREFCRTEST_VREF_CSDCMP_TRIM_Pos)
#define    TSI_VREFCRTEST_VREF_CSDCMP_TRIM                        TSI_VREFCRTEST_VREF_CSDCMP_TRIM_Msk

#define    TSI_VREFCRTEST_VREF_SHIELD_TRIM_Pos                    (8U)
#define    TSI_VREFCRTEST_VREF_SHIELD_TRIM_Msk                    (0x7fU << TSI_VREFCRTEST_VREF_SHIELD_TRIM_Pos)
#define    TSI_VREFCRTEST_VREF_SHIELD_TRIM                        TSI_VREFCRTEST_VREF_SHIELD_TRIM_Msk

#define    TSI_VREFCRTEST_VREF_BUF_TRIM_Pos                       (0U)
#define    TSI_VREFCRTEST_VREF_BUF_TRIM_Msk                       (0x7fU << TSI_VREFCRTEST_VREF_BUF_TRIM_Pos)
#define    TSI_VREFCRTEST_VREF_BUF_TRIM                           TSI_VREFCRTEST_VREF_BUF_TRIM_Msk

#define    TSI_EMICR0_SR_CFG0_Pos                                 (0U)
#define    TSI_EMICR0_SR_CFG0_Msk                                 (0xffffffffU << TSI_EMICR0_SR_CFG0_Pos)
#define    TSI_EMICR0_SR_CFG0                                     TSI_EMICR0_SR_CFG0_Msk

#define    TSI_EMICR1_SR_CFG1_Pos                                 (0U)
#define    TSI_EMICR1_SR_CFG1_Msk                                 (0xffffffffU << TSI_EMICR1_SR_CFG1_Pos)
#define    TSI_EMICR1_SR_CFG1                                     TSI_EMICR1_SR_CFG1_Msk

#define    TSI_CKCR_MOD_PRSC_Pos                                  (8U)
#define    TSI_CKCR_MOD_PRSC_Msk                                  (0xffU << TSI_CKCR_MOD_PRSC_Pos)
#define    TSI_CKCR_MOD_PRSC                                      TSI_CKCR_MOD_PRSC_Msk

#define    TSI_CKCR_SSC_FPT_Pos                                   (4U)
#define    TSI_CKCR_SSC_FPT_Msk                                   (0x3U << TSI_CKCR_SSC_FPT_Pos)
#define    TSI_CKCR_SSC_FPT                                       TSI_CKCR_SSC_FPT_Msk

#define    TSI_CKCR_SSCEN_Pos                                     (2U)
#define    TSI_CKCR_SSCEN_Msk                                     (0x1U << TSI_CKCR_SSCEN_Pos)
#define    TSI_CKCR_SSCEN                                         TSI_CKCR_SSCEN_Msk

#define    TSI_CKCR_SNSSEL_Pos                                    (0U)
#define    TSI_CKCR_SNSSEL_Msk                                    (0x1U << TSI_CKCR_SNSSEL_Pos)
#define    TSI_CKCR_SNSSEL                                        TSI_CKCR_SNSSEL_Msk

#define    TSI_PRSSW_PRS_SW_WIDTH_Pos                             (16U)
#define    TSI_PRSSW_PRS_SW_WIDTH_Msk                             (0xfU << TSI_PRSSW_PRS_SW_WIDTH_Pos)
#define    TSI_PRSSW_PRS_SW_WIDTH                                 TSI_PRSSW_PRS_SW_WIDTH_Msk

#define    TSI_PRSSW_PRS_SW_Pos                                   (0U)
#define    TSI_PRSSW_PRS_SW_Msk                                   (0x1fffU << TSI_PRSSW_PRS_SW_Pos)
#define    TSI_PRSSW_PRS_SW                                       TSI_PRSSW_PRS_SW_Msk

#define    TSI_PLLCR_PLL_RTRIM_Pos                                (27U)
#define    TSI_PLLCR_PLL_RTRIM_Msk                                (0x1fU << TSI_PLLCR_PLL_RTRIM_Pos)
#define    TSI_PLLCR_PLL_RTRIM                                    TSI_PLLCR_PLL_RTRIM_Msk

#define    TSI_PLLCR_PLLDB_Pos                                    (16U)
#define    TSI_PLLCR_PLLDB_Msk                                    (0x3ffU << TSI_PLLCR_PLLDB_Pos)
#define    TSI_PLLCR_PLLDB                                        TSI_PLLCR_PLLDB_Msk

#define    TSI_PLLCR_PLL_ICFG_Pos                                 (12U)
#define    TSI_PLLCR_PLL_ICFG_Msk                                 (0xfU << TSI_PLLCR_PLL_ICFG_Pos)
#define    TSI_PLLCR_PLL_ICFG                                     TSI_PLLCR_PLL_ICFG_Msk

#define    TSI_PLLCR_LOCKED_Pos                                   (8U)
#define    TSI_PLLCR_LOCKED_Msk                                   (0x1U << TSI_PLLCR_LOCKED_Pos)
#define    TSI_PLLCR_LOCKED                                       TSI_PLLCR_LOCKED_Msk

#define    TSI_PLLCR_REFPRSC_Pos                                  (1U)
#define    TSI_PLLCR_REFPRSC_Msk                                  (0x7fU << TSI_PLLCR_REFPRSC_Pos)
#define    TSI_PLLCR_REFPRSC                                      TSI_PLLCR_REFPRSC_Msk

#define    TSI_PLLCR_PLLEN_Pos                                    (0U)
#define    TSI_PLLCR_PLLEN_Msk                                    (0x1U << TSI_PLLCR_PLLEN_Pos)
#define    TSI_PLLCR_PLLEN                                        TSI_PLLCR_PLLEN_Msk

#define    TSI_PRSSSC_PRS_SSC_WIDTH_Pos                           (16U)
#define    TSI_PRSSSC_PRS_SSC_WIDTH_Msk                           (0xfU << TSI_PRSSSC_PRS_SSC_WIDTH_Pos)
#define    TSI_PRSSSC_PRS_SSC_WIDTH                               TSI_PRSSSC_PRS_SSC_WIDTH_Msk

#define    TSI_PRSSSC_PRS_SSC_Pos                                 (0U)
#define    TSI_PRSSSC_PRS_SSC_Msk                                 (0x1fffU << TSI_PRSSSC_PRS_SSC_Pos)
#define    TSI_PRSSSC_PRS_SSC                                     TSI_PRSSSC_PRS_SSC_Msk



#define    FL_TSI_CHANNEL_0                                        0U
#define    FL_TSI_CHANNEL_1                                        1U
#define    FL_TSI_CHANNEL_2                                        2U
#define    FL_TSI_CHANNEL_3                                        3U
#define    FL_TSI_CHANNEL_4                                        4U
#define    FL_TSI_CHANNEL_5                                        5U
#define    FL_TSI_CHANNEL_6                                        6U
#define    FL_TSI_CHANNEL_7                                        7U
#define    FL_TSI_CHANNEL_8                                        8U
#define    FL_TSI_CHANNEL_9                                        9U
#define    FL_TSI_CHANNEL_10                                       10U
#define    FL_TSI_CHANNEL_11                                       11U
#define    FL_TSI_CHANNEL_12                                       12U
#define    FL_TSI_CHANNEL_13                                       13U
#define    FL_TSI_CHANNEL_14                                       14U
#define    FL_TSI_CHANNEL_15                                       15U
#define    FL_TSI_CHANNEL_16                                       16U
#define    FL_TSI_CHANNEL_17                                       17U
#define    FL_TSI_CHANNEL_18                                       18U
#define    FL_TSI_CHANNEL_19                                       19U
#define    FL_TSI_CHANNEL_20                                       20U
#define    FL_TSI_CHANNEL_21                                       21U
#define    FL_TSI_CHANNEL_22                                       22U
#define    FL_TSI_CHANNEL_23                                       23U
#define    FL_TSI_CHANNEL_24                                       24U
#define    FL_TSI_CHANNEL_25                                       25U
#define    FL_TSI_CHANNEL_26                                       26U
#define    FL_TSI_CHANNEL_27                                       27U
#define    FL_TSI_CHANNEL_28                                       28U
#define    FL_TSI_CHANNEL_29                                       29U
#define    FL_TSI_CHANNEL_30                                       30U
#define    FL_TSI_CHANNEL_31                                       31U
#define    FL_TSI_CHANNEL_32                                       32U
#define    FL_TSI_CHANNEL_33                                       33U
#define    FL_TSI_CHANNEL_34                                       34U
#define    FL_TSI_CHANNEL_35                                       35U


#define    FL_TSI_PAD_PE6                                         (0x1U << 0U)
#define    FL_TSI_PAD_PE7                                         (0x1U << 1U)
#define    FL_TSI_PAD_PE8                                         (0x1U << 2U)
#define    FL_TSI_PAD_PE9                                         (0x1U << 3U)
#define    FL_TSI_PAD_PF12                                        (0x1U << 4U)
#define    FL_TSI_PAD_PF13                                        (0x1U << 5U)
#define    FL_TSI_PAD_PF14                                        (0x1U << 6U)
#define    FL_TSI_PAD_PF15                                        (0x1U << 7U)
#define    FL_TSI_PAD_PC0                                         (0x1U << 8U)
#define    FL_TSI_PAD_PC1                                         (0x1U << 9U)
#define    FL_TSI_PAD_PC2                                         (0x1U << 10U)
#define    FL_TSI_PAD_PC3                                         (0x1U << 11U)
#define    FL_TSI_PAD_PC4                                         (0x1U << 12U)
#define    FL_TSI_PAD_PC5                                         (0x1U << 13U)
#define    FL_TSI_PAD_PC6                                         (0x1U << 14U)
#define    FL_TSI_PAD_PC7                                         (0x1U << 15U)
#define    FL_TSI_PAD_PC8                                         (0x1U << 16U)
#define    FL_TSI_PAD_PC9                                         (0x1U << 17U)
#define    FL_TSI_PAD_PC10                                        (0x1U << 18U)
#define    FL_TSI_PAD_PC11                                        (0x1U << 19U)
#define    FL_TSI_PAD_PC12                                        (0x1U << 20U)
#define    FL_TSI_PAD_PC13                                        (0x1U << 21U)
#define    FL_TSI_PAD_PC14                                        (0x1U << 22U)



#define    FL_TSI_SCAN_MODE_SELF_SINGLE                           (0x0U << TSI_CFGR_TSI_MOD_Pos)
#define    FL_TSI_SCAN_MODE_SELF_MULTI                            (0x1U << TSI_CFGR_TSI_MOD_Pos)
#define    FL_TSI_SCAN_MODE_MUTUAL                                (0x2U << TSI_CFGR_TSI_MOD_Pos)


#define    FL_TSI_TRGI_RTC                                        (0x0U << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_ATIM                                       (0x1U << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_LPTIM16                                    (0x2U << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_BSTIM16                                    (0x3U << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_TAU00                                      (0x4U << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_TAU01                                      (0x5U << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_TAU02                                      (0x6U << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_TAU03                                      (0x7U << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_TAU04                                      (0x8U << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_TAU05                                      (0x9U << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_TAU06                                      (0xaU << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_TAU07                                      (0xbU << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_TAU10                                      (0xcU << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_TAU11                                      (0xdU << TSI_CFGR_TRIG_SEL_Pos)
#define    FL_TSI_TRGI_TAU12                                      (0xeU << TSI_CFGR_TRIG_SEL_Pos)

#define    FL_TSI_PROX_AVGFILTER_ORDER_2X                         (0x0U << TSI_CFGR_AVG_ORDER_Pos)
#define    FL_TSI_PROX_AVGFILTER_ORDER_4X                         (0x1U << TSI_CFGR_AVG_ORDER_Pos)
#define    FL_TSI_PROX_AVGFILTER_ORDER_8X                         (0x2U << TSI_CFGR_AVG_ORDER_Pos)
#define    FL_TSI_PROX_AVGFILTER_ORDER_16X                        (0x3U << TSI_CFGR_AVG_ORDER_Pos)


#define    FL_TSI_TRIG_MODE_SOFTWARE                              (0x0U << TSI_CFGR_TMOD_Pos)
#define    FL_TSI_TRIG_MODE_HARDWARE                              (0x1U << TSI_CFGR_TMOD_Pos)


#define    FL_TSI_SAMPLE_CLK_SOURCE_FIXED_CLK                     (0x0U << TSI_CCR_PRSCLK_EN_Pos)
#define    FL_TSI_SAMPLE_CLK_SOURCE_PRS_CLK                       (0x1U << TSI_CCR_PRSCLK_EN_Pos)


#define    FL_TSI_SAMPLE_RESOLUTION_8B                            (0x0U << TSI_CHCFGR_RES_Pos)
#define    FL_TSI_SAMPLE_RESOLUTION_9B                            (0x1U << TSI_CHCFGR_RES_Pos)
#define    FL_TSI_SAMPLE_RESOLUTION_10B                           (0x2U << TSI_CHCFGR_RES_Pos)
#define    FL_TSI_SAMPLE_RESOLUTION_11B                           (0x3U << TSI_CHCFGR_RES_Pos)
#define    FL_TSI_SAMPLE_RESOLUTION_12B                           (0x4U << TSI_CHCFGR_RES_Pos)
#define    FL_TSI_SAMPLE_RESOLUTION_13B                           (0x5U << TSI_CHCFGR_RES_Pos)
#define    FL_TSI_SAMPLE_RESOLUTION_14B                           (0x6U << TSI_CHCFGR_RES_Pos)
#define    FL_TSI_SAMPLE_RESOLUTION_15B                           (0x7U << TSI_CHCFGR_RES_Pos)
#define    FL_TSI_SAMPLE_RESOLUTION_16B                           (0x8U << TSI_CHCFGR_RES_Pos)


#define    FL_TSI_IDAC_MODE_SINGLE                                (0x0U << TSI_CHCFGR_IDAC_MODE_Pos)
#define    FL_TSI_IDAC_MODE_DUAL                                  (0x1U << TSI_CHCFGR_IDAC_MODE_Pos)


#define    FL_TSI_IDAC2_MODE_SELF_CAPACITANCE                     (0x1U << TSI_ANACR_IDAC2_MODE_CTRL_Pos)
#define    FL_TSI_IDAC2_MODE_MUTUAL_CAPACITANCE                   (0x0U << TSI_ANACR_IDAC2_MODE_CTRL_Pos)


#define    FL_TSI_IDAC1_MODE_SELF_CAPACITANCE                     (0x1U << TSI_ANACR_IDAC1_MODE_CTRL_Pos)
#define    FL_TSI_IDAC1_MODE_MUTUAL_CAPACITANCE                   (0x1U << TSI_ANACR_IDAC1_MODE_CTRL_Pos)


#define    FL_TSI_IDAC2_STEP_2P4uA                                (0x3U << TSI_ANACR_IDAC2_RANGET_Pos)
#define    FL_TSI_IDAC2_STEP_1P2uA                                (0x2U << TSI_ANACR_IDAC2_RANGET_Pos)
#define    FL_TSI_IDAC2_STEP_300nA                                (0x1U << TSI_ANACR_IDAC2_RANGET_Pos)
#define    FL_TSI_IDAC2_STEP_37P5nA                               (0x0U << TSI_ANACR_IDAC2_RANGET_Pos)


#define    FL_TSI_IDAC1_STEP_2P4uA                                (0x3U << TSI_ANACR_IDAC1_RANGET_Pos)
#define    FL_TSI_IDAC1_STEP_1P2uA                                (0x2U << TSI_ANACR_IDAC1_RANGET_Pos)
#define    FL_TSI_IDAC1_STEP_300nA                                (0x1U << TSI_ANACR_IDAC1_RANGET_Pos)
#define    FL_TSI_IDAC1_STEP_37P5nA                               (0x0U << TSI_ANACR_IDAC1_RANGET_Pos)


#define    FL_TSI_SHIELD_MOD_DIRECT                               (0x0U << TSI_ANACR_SHIELD_MOD_Pos)
#define    FL_TSI_SHIELD_MOD_INTERBUFFER                          (0x1U << TSI_ANACR_SHIELD_MOD_Pos)
#define    FL_TSI_SHIELD_MOD_EXTERCAPACITORS                      (0x2U << TSI_ANACR_SHIELD_MOD_Pos)


#define    FL_TSI_CMP_RC_1P48MHZ                                  (0x0U << TSI_ANACR_CMP_RC_Pos)
#define    FL_TSI_CMP_RC_0P529MHZ                                 (0x1U << TSI_ANACR_CMP_RC_Pos)
#define    FL_TSI_CMP_RC_0P4MHZ                                   (0x2U << TSI_ANACR_CMP_RC_Pos)
#define    FL_TSI_CMP_RC_0P293MHZ                                 (0x3U << TSI_ANACR_CMP_RC_Pos)


#define    FL_TSI_VREFBUF_CFG_DISABLE                             (0x0U << TSI_ANACR_VREFBUF_CFG_Pos)
#define    FL_TSI_VREFBUF_CFG_LOW                                 (0x1U << TSI_ANACR_VREFBUF_CFG_Pos)
#define    FL_TSI_VREFBUF_CFG_MEDIUM                              (0x2U << TSI_ANACR_VREFBUF_CFG_Pos)
#define    FL_TSI_VREFBUF_CFG_HIGH                                (0x3U << TSI_ANACR_VREFBUF_CFG_Pos)


#define    FL_TSI_SENSE_CFG_INVALID                               (0x0U << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_0P1pF                                 (0x1U << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_0P2pF                                 (0x2U << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_0P3pF                                 (0x3U << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_0P4pF                                 (0x4U << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_0P5pF                                 (0x5U << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_0P6pF                                 (0x6U << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_0P7pF                                 (0x7U << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_0P8pF                                 (0x8U << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_0P9pF                                 (0x9U << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_1P0pF                                 (0xaU << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_1P1pF                                 (0xbU << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_1P2pF                                 (0xcU << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_1P3pF                                 (0xdU << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_1P4pF                                 (0xeU << TSI_TEST_SENSE_CFG_Pos)
#define    FL_TSI_SENSE_CFG_1P5pF                                 (0xfU << TSI_TEST_SENSE_CFG_Pos)


#define    FL_TSI_CH_IDLE_CFG_FLOAT                               (0x0U << TSI_TEST_CH_IDLE_CFG_Pos)
#define    FL_TSI_CH_IDLE_CFG_GROUND                              (0x1U << TSI_TEST_CH_IDLE_CFG_Pos)


#define    FL_TSI_R2D_CFG_100K                                    (0x0U << TSI_TEST_R2D_CFG_Pos)
#define    FL_TSI_R2D_CFG_150K                                    (0x1U << TSI_TEST_R2D_CFG_Pos)
#define    FL_TSI_R2D_CFG_200K                                    (0x2U << TSI_TEST_R2D_CFG_Pos)
#define    FL_TSI_R2D_CFG_250K                                    (0x3U << TSI_TEST_R2D_CFG_Pos)


#define    FL_TSI_TST_CONN_RESISTANCE                             (0x0U << TSI_TEST_SENSI_VALID_Pos)
#define    FL_TSI_TST_CONN_CAPARRAY                               (0x1U << TSI_TEST_SENSI_VALID_Pos)


#define    FL_TSI_EXCAP_SEL_CINTA                                 (0x0U << TSI_ANATEST_EXCAP_SEL_Pos)
#define    FL_TSI_EXCAP_SEL_CINTB                                 (0x1U << TSI_ANATEST_EXCAP_SEL_Pos)
#define    FL_TSI_EXCAP_SEL_CTANK                                 (0x2U << TSI_ANATEST_EXCAP_SEL_Pos)
#define    FL_TSI_EXCAP_SEL_CMOD                                  (0x3U << TSI_ANATEST_EXCAP_SEL_Pos)


#define    FL_TSI_VCOMP_FB_RISINGEDGE                             (0x0U << TSI_ANATEST_VCOMP_FB_Pos)
#define    FL_TSI_VCOMP_FB_FALLINGEDGE                            (0x1U << TSI_ANATEST_VCOMP_FB_Pos)


#define    FL_TSI_IDAC_COMP_MODE_NORMALLYOPEN                     (0x0U << TSI_ANATEST_IDAC_COMP_MODE_Pos)
#define    FL_TSI_IDAC_COMP_MODE_COMPLEMENTATION                  (0x1U << TSI_ANATEST_IDAC_COMP_MODE_Pos)


#define    FL_TSI_DEFAULT                                         (0x0U << TSI_EMICR0_SR_CFG0_Pos)
#define    FL_TSI_SLOW                                            (0x1U << TSI_EMICR0_SR_CFG0_Pos)


#define    FL_TSI_SSC_FPT_32                                      (0x0U << TSI_CKCR_SSC_FPT_Pos)
#define    FL_TSI_SSC_FPT_64                                      (0x1U << TSI_CKCR_SSC_FPT_Pos)
#define    FL_TSI_SSC_FPT_128                                     (0x2U << TSI_CKCR_SSC_FPT_Pos)
#define    FL_TSI_SSC_FPT_256                                     (0x3U << TSI_CKCR_SSC_FPT_Pos)


#define    FL_TSI_SNSSEL_FMOD                                     (0x0U << TSI_CKCR_SNSSEL_Pos)
#define    FL_TSI_SNSSEL_PLL_TSI                                  (0x1U << TSI_CKCR_SNSSEL_Pos)


#define    FL_TSI_PLLDB_DB_32                                     (0x1fU << TSI_PLLCR_PLLDB_Pos)
#define    FL_TSI_PLLDB_DB_48                                     (0x2fU << TSI_PLLCR_PLLDB_Pos)
#define    FL_TSI_PLLDB_DB_64                                     (0x3fU << TSI_PLLCR_PLLDB_Pos)
#define    FL_TSI_PLLDB_DB_72                                     (0x47U << TSI_PLLCR_PLLDB_Pos)

/**
  * @}
  */
/* Exported functions ---------------------------------------------------------------------------------*/
/** @defgroup TSI_FL_Exported_Functions TSI Exported Functions
  * @{
  */

/**
  * @brief    
  * @rmtoll   ISR    SEQF    FL_TSI_IsActiveFlag_EndOfSequence
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsActiveFlag_EndOfSequence(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ISR, TSI_ISR_SEQF_Msk) == (TSI_ISR_SEQF_Msk));
}

/**
  * @brief    
  * @rmtoll   ISR    SEQF    FL_TSI_ClearFlag_EndOfSequence
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_ClearFlag_EndOfSequence(TSI_Type *TSIx)
{
    WRITE_REG(TSIx->ISR, TSI_ISR_SEQF_Msk);
}

/**
  * @brief    
  * @rmtoll   ISR    CHF    FL_TSI_IsActiveFlag_EndOfChannel
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsActiveFlag_EndOfChannel(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ISR, TSI_ISR_CHF_Msk) == (TSI_ISR_CHF_Msk));
}

/**
  * @brief    
  * @rmtoll   ISR    CHF    FL_TSI_ClearFlag_EndOfChannel
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_ClearFlag_EndOfChannel(TSI_Type *TSIx)
{
    WRITE_REG(TSIx->ISR, TSI_ISR_CHF_Msk);
}

/**
  * @brief    
  * @rmtoll   ISR    RCUF    FL_TSI_IsActiveFlag_RawCountUpdate
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsActiveFlag_RawCountUpdate(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ISR, TSI_ISR_RCUF_Msk) == (TSI_ISR_RCUF_Msk));
}

/**
  * @brief    
  * @rmtoll   ISR    RCUF    FL_TSI_ClearFlag_RawCountUpdate
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_ClearFlag_RawCountUpdate(TSI_Type *TSIx)
{
    WRITE_REG(TSIx->ISR, TSI_ISR_RCUF_Msk);
}

/**
  * @brief    
  * @rmtoll   IER    SEQ_IE    FL_TSI_EnableIT_EndOfSequence
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableIT_EndOfSequence(TSI_Type *TSIx)
{
    SET_BIT(TSIx->IER, TSI_IER_SEQ_IE_Msk);
}

/**
  * @brief    
  * @rmtoll   IER    SEQ_IE    FL_TSI_DisableIT_EndOfSequence
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableIT_EndOfSequence(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->IER, TSI_IER_SEQ_IE_Msk);
}

/**
  * @brief    
  * @rmtoll   IER    SEQ_IE    FL_TSI_IsEnabledIT_EndOfSequence
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledIT_EndOfSequence(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->IER, TSI_IER_SEQ_IE_Msk) == TSI_IER_SEQ_IE_Msk);
}

/**
  * @brief    
  * @rmtoll   IER    CH_IE    FL_TSI_EnableIT_EndOfChannel
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableIT_EndOfChannel(TSI_Type *TSIx)
{
    SET_BIT(TSIx->IER, TSI_IER_CH_IE_Msk);
}

/**
  * @brief    
  * @rmtoll   IER    CH_IE    FL_TSI_DisableIT_EndOfChannel
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableIT_EndOfChannel(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->IER, TSI_IER_CH_IE_Msk);
}

/**
  * @brief    
  * @rmtoll   IER    CH_IE    FL_TSI_IsEnabledIT_EndOfChannel
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledIT_EndOfChannel(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->IER, TSI_IER_CH_IE_Msk) == TSI_IER_CH_IE_Msk);
}

/**
  * @brief    
  * @rmtoll   IER    RCU_IE    FL_TSI_EnableIT_RawCountUpdate
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableIT_RawCountUpdate(TSI_Type *TSIx)
{
    SET_BIT(TSIx->IER, TSI_IER_RCU_IE_Msk);
}

/**
  * @brief    
  * @rmtoll   IER    RCU_IE    FL_TSI_DisableIT_RawCountUpdate
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableIT_RawCountUpdate(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->IER, TSI_IER_RCU_IE_Msk);
}

/**
  * @brief    
  * @rmtoll   IER    RCU_IE    FL_TSI_IsEnabledIT_RawCountUpdate
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledIT_RawCountUpdate(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->IER, TSI_IER_RCU_IE_Msk) == TSI_IER_RCU_IE_Msk);
}

/**
  * @brief    
  * @rmtoll   RXSSR    RXSSR    FL_TSI_ReadScanRxChannel
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadScanRxChannel(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->RXSR, (0x3fU << 0U)) >> 0U);
}

/**
  * @brief    
  * @rmtoll   TXSSR    TXSSR    FL_TSI_ReadScanTxChannel
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadScanTxChannel(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->TXSR, (0x3fU << 0U)) >> 0U);
}

/**
  * @brief    
  * @rmtoll   CFGR    SMPL_SIZE    FL_TSI_WriteSampleSize
  * @param    TSIx TSI instance
  * @param    size 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteSampleSize(TSI_Type *TSIx, uint32_t size)
{
    MODIFY_REG(TSIx->CFGR, (0xfU << 28U), (size << 28U));
}

/**
  * @brief    
  * @rmtoll   CFGR    SMPL_SIZE    FL_TSI_ReadSampleSize
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadSampleSize(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CFGR, (0xfU << 28U)) >> 28U);
}

/**
  * @brief    
  * @rmtoll   CFGR    TSI_MOD    FL_TSI_SetScanMode
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_TSI_SCAN_MODE_SELF_SINGLE
  *           @arg @ref FL_TSI_SCAN_MODE_SELF_MULTI
  *           @arg @ref FL_TSI_SCAN_MODE_MUTUAL
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetScanMode(TSI_Type *TSIx, uint32_t mode)
{
    MODIFY_REG(TSIx->CFGR, TSI_CFGR_TSI_MOD_Msk, mode);
}

/**
  * @brief    
  * @rmtoll   CFGR    TSI_MOD    FL_TSI_GetScanMode
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_SCAN_MODE_SELF_SINGLE
  *           @arg @ref FL_TSI_SCAN_MODE_SELF_MULTI
  *           @arg @ref FL_TSI_SCAN_MODE_MUTUAL
  */
__STATIC_INLINE uint32_t FL_TSI_GetScanMode(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CFGR, TSI_CFGR_TSI_MOD_Msk));
}

/**
  * @brief    
  * @rmtoll   CFGR    CHCFG_WAIT    FL_TSI_EnableWait
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableWait(TSI_Type *TSIx)
{
    SET_BIT(TSIx->CFGR, TSI_CFGR_CHCFG_WAIT_Msk);
}

/**
  * @brief    
  * @rmtoll   CFGR    CHCFG_WAIT    FL_TSI_DisableWait
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableWait(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->CFGR, TSI_CFGR_CHCFG_WAIT_Msk);
}

/**
  * @brief    
  * @rmtoll   CFGR    CHCFG_WAIT    FL_TSI_IsEnabledWait
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledWait(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CFGR, TSI_CFGR_CHCFG_WAIT_Msk) == TSI_CFGR_CHCFG_WAIT_Msk);
}

/**
  * @brief    
  * @rmtoll   CFGR    TRIG_SEL    FL_TSI_SetTriggerInput
  * @param    TSIx TSI instance
  * @param    trigger This parameter can be one of the following values:
  *           @arg @ref FL_TSI_TRGI_RTC
  *           @arg @ref FL_TSI_TRGI_ATIM
  *           @arg @ref FL_TSI_TRGI_LPTIM16
  *           @arg @ref FL_TSI_TRGI_BSTIM16
  *           @arg @ref FL_TSI_TRGI_TAU00
  *           @arg @ref FL_TSI_TRGI_TAU01
  *           @arg @ref FL_TSI_TRGI_TAU02
  *           @arg @ref FL_TSI_TRGI_TAU03
  *           @arg @ref FL_TSI_TRGI_TAU04
  *           @arg @ref FL_TSI_TRGI_TAU05
  *           @arg @ref FL_TSI_TRGI_TAU06
  *           @arg @ref FL_TSI_TRGI_TAU07
  *           @arg @ref FL_TSI_TRGI_TAU10
  *           @arg @ref FL_TSI_TRGI_TAU11
  *           @arg @ref FL_TSI_TRGI_TAU12
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetTriggerInput(TSI_Type *TSIx, uint32_t trigger)
{
    MODIFY_REG(TSIx->CFGR, TSI_CFGR_TRIG_SEL_Msk, trigger);
}

/**
  * @brief    
  * @rmtoll   CFGR    TRIG_SEL    FL_TSI_GetTriggerInput
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_TSI_GetTriggerInput(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CFGR, TSI_CFGR_TRIG_SEL_Msk));
}

/**
  * @brief    
  * @rmtoll   CFGR    AVG_ORDER    FL_TSI_SetSensorAverageFilterOrder
  * @param    TSIx TSI instance
  * @param    order This parameter can be one of the following values:
  *           @arg @ref FL_TSI_PROX_AVGFILTER_ORDER_2X
  *           @arg @ref FL_TSI_PROX_AVGFILTER_ORDER_4X
  *           @arg @ref FL_TSI_PROX_AVGFILTER_ORDER_8X
  *           @arg @ref FL_TSI_PROX_AVGFILTER_ORDER_16X
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetSensorAverageFilterOrder(TSI_Type *TSIx, uint32_t order)
{
    MODIFY_REG(TSIx->CFGR, TSI_CFGR_AVG_ORDER_Msk, order);
}

/**
  * @brief    
  * @rmtoll   CFGR    AVG_ORDER    FL_TSI_GetSensorAverageFilterOrder
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_PROX_AVGFILTER_ORDER_2X
  *           @arg @ref FL_TSI_PROX_AVGFILTER_ORDER_4X
  *           @arg @ref FL_TSI_PROX_AVGFILTER_ORDER_8X
  *           @arg @ref FL_TSI_PROX_AVGFILTER_ORDER_16X
  */
__STATIC_INLINE uint32_t FL_TSI_GetSensorAverageFilterOrder(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CFGR, TSI_CFGR_AVG_ORDER_Msk));
}

/**
  * @brief    
  * @rmtoll   CFGR    AVG_EN    FL_TSI_EnableSensorAverageFilter
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableSensorAverageFilter(TSI_Type *TSIx)
{
    SET_BIT(TSIx->CFGR, TSI_CFGR_AVG_EN_Msk);
}

/**
  * @brief    
  * @rmtoll   CFGR    AVG_EN    FL_TSI_DisableSensorAverageFilter
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableSensorAverageFilter(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->CFGR, TSI_CFGR_AVG_EN_Msk);
}

/**
  * @brief    
  * @rmtoll   CFGR    AVG_EN    FL_TSI_IsEnabledSensorAverageFilter
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledSensorAverageFilter(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CFGR, TSI_CFGR_AVG_EN_Msk) == TSI_CFGR_AVG_EN_Msk);
}

/**
  * @brief    
  * @rmtoll   CFGR    TMOD    FL_TSI_SetTriggerMode
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_TSI_TRIG_MODE_SOFTWARE
  *           @arg @ref FL_TSI_TRIG_MODE_HARDWARE
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetTriggerMode(TSI_Type *TSIx, uint32_t mode)
{
    MODIFY_REG(TSIx->CFGR, TSI_CFGR_TMOD_Msk, mode);
}

/**
  * @brief    
  * @rmtoll   CFGR    TMOD    FL_TSI_GetTriggerMode
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_TRIG_MODE_SOFTWARE
  *           @arg @ref FL_TSI_TRIG_MODE_HARDWARE
  */
__STATIC_INLINE uint32_t FL_TSI_GetTriggerMode(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CFGR, TSI_CFGR_TMOD_Msk));
}

/**
  * @brief    
  * @rmtoll   CFGR    SHIELD_EN    FL_TSI_EnableShield
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableShield(TSI_Type *TSIx)
{
    SET_BIT(TSIx->CFGR, TSI_CFGR_SHIELD_EN_Msk);
}

/**
  * @brief    
  * @rmtoll   CFGR    SHIELD_EN    FL_TSI_DisableShield
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableShield(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->CFGR, TSI_CFGR_SHIELD_EN_Msk);
}

/**
  * @brief    
  * @rmtoll   CFGR    SHIELD_EN    FL_TSI_IsEnabledShield
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledShield(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CFGR, TSI_CFGR_SHIELD_EN_Msk) == TSI_CFGR_SHIELD_EN_Msk);
}

/**
  * @brief    
  * @rmtoll   CFGR    SEN    FL_TSI_Enable
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_Enable(TSI_Type *TSIx)
{
    SET_BIT(TSIx->CFGR, TSI_CFGR_SEN_Msk);
}

/**
  * @brief    
  * @rmtoll   CFGR    SEN    FL_TSI_Disable
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_Disable(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->CFGR, TSI_CFGR_SEN_Msk);
}

/**
  * @brief    
  * @rmtoll   CFGR    SEN    FL_TSI_IsEnabled
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabled(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CFGR, TSI_CFGR_SEN_Msk) == TSI_CFGR_SEN_Msk);
}

/**
  * @brief    
  * @rmtoll   CR    STOP    FL_TSI_EnableScanStop
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableScanStop(TSI_Type *TSIx)
{
    SET_BIT(TSIx->CR, TSI_CR_STOP_Msk);
}

/**
  * @brief    
  * @rmtoll   CR    SCAN_CON    FL_TSI_EnableScanNext
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableScanNext(TSI_Type *TSIx)
{
    SET_BIT(TSIx->CR, TSI_CR_SCAN_CON_Msk);
}

/**
  * @brief    
  * @rmtoll   CR    START    FL_TSI_EnableScanStart
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableScanStart(TSI_Type *TSIx)
{
    SET_BIT(TSIx->CR, TSI_CR_START_Msk);
}

/**
  * @brief
  * @rmtoll   FL_TSI_EnableChannel
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_CHANNEL_0
              @arg @ref FL_TSI_CHANNEL_1
              @arg @ref FL_TSI_CHANNEL_2
              @arg @ref FL_TSI_CHANNEL_3
              @arg @ref FL_TSI_CHANNEL_4                        
              @arg @ref FL_TSI_CHANNEL_5                        
              @arg @ref FL_TSI_CHANNEL_6                        
              @arg @ref FL_TSI_CHANNEL_7                        
              @arg @ref FL_TSI_CHANNEL_8                        
              @arg @ref FL_TSI_CHANNEL_9                        
              @arg @ref FL_TSI_CHANNEL_10                         
              @arg @ref FL_TSI_CHANNEL_11                        
              @arg @ref FL_TSI_CHANNEL_12                        
              @arg @ref FL_TSI_CHANNEL_13                        
              @arg @ref FL_TSI_CHANNEL_14                                     
              @arg @ref FL_TSI_CHANNEL_15                        
              @arg @ref FL_TSI_CHANNEL_16                        
              @arg @ref FL_TSI_CHANNEL_17                        
              @arg @ref FL_TSI_CHANNEL_18                        
              @arg @ref FL_TSI_CHANNEL_19                        
              @arg @ref FL_TSI_CHANNEL_20                        
              @arg @ref FL_TSI_CHANNEL_21                        
              @arg @ref FL_TSI_CHANNEL_22                        
              @arg @ref FL_TSI_CHANNEL_23                        
              @arg @ref FL_TSI_CHANNEL_24                        
              @arg @ref FL_TSI_CHANNEL_25                        
              @arg @ref FL_TSI_CHANNEL_26                        
              @arg @ref FL_TSI_CHANNEL_27                        
              @arg @ref FL_TSI_CHANNEL_28                        
              @arg @ref FL_TSI_CHANNEL_29                        
              @arg @ref FL_TSI_CHANNEL_30                        
              @arg @ref FL_TSI_CHANNEL_31                        
              @arg @ref FL_TSI_CHANNEL_32                        
              @arg @ref FL_TSI_CHANNEL_33                        
              @arg @ref FL_TSI_CHANNEL_34                        
              @arg @ref FL_TSI_CHANNEL_35                        

  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableChannel(TSI_Type *TSIx, uint32_t channel)
{
    if(channel < 32)
    {
        SET_BIT(TSIx->CHCR0, 1<<channel);
    }
    else if(channel > 31 & channel < 36)
    {
        SET_BIT(TSIx->CHCR1, 1<<(channel - 32));
    }
}

/**
  * @brief    
  * @rmtoll           FL_TSI_DisableChannel
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_CHANNEL_0
              @arg @ref FL_TSI_CHANNEL_1
              @arg @ref FL_TSI_CHANNEL_2
              @arg @ref FL_TSI_CHANNEL_3
              @arg @ref FL_TSI_CHANNEL_4                        
              @arg @ref FL_TSI_CHANNEL_5                        
              @arg @ref FL_TSI_CHANNEL_6                        
              @arg @ref FL_TSI_CHANNEL_7                        
              @arg @ref FL_TSI_CHANNEL_8                        
              @arg @ref FL_TSI_CHANNEL_9                        
              @arg @ref FL_TSI_CHANNEL_10                         
              @arg @ref FL_TSI_CHANNEL_11                        
              @arg @ref FL_TSI_CHANNEL_12                        
              @arg @ref FL_TSI_CHANNEL_13                        
              @arg @ref FL_TSI_CHANNEL_14                                     
              @arg @ref FL_TSI_CHANNEL_15                        
              @arg @ref FL_TSI_CHANNEL_16                        
              @arg @ref FL_TSI_CHANNEL_17                        
              @arg @ref FL_TSI_CHANNEL_18                        
              @arg @ref FL_TSI_CHANNEL_19                        
              @arg @ref FL_TSI_CHANNEL_20                        
              @arg @ref FL_TSI_CHANNEL_21                        
              @arg @ref FL_TSI_CHANNEL_22                        
              @arg @ref FL_TSI_CHANNEL_23                        
              @arg @ref FL_TSI_CHANNEL_24                        
              @arg @ref FL_TSI_CHANNEL_25                        
              @arg @ref FL_TSI_CHANNEL_26                        
              @arg @ref FL_TSI_CHANNEL_27                        
              @arg @ref FL_TSI_CHANNEL_28                        
              @arg @ref FL_TSI_CHANNEL_29                        
              @arg @ref FL_TSI_CHANNEL_30                        
              @arg @ref FL_TSI_CHANNEL_31                        
              @arg @ref FL_TSI_CHANNEL_32                        
              @arg @ref FL_TSI_CHANNEL_33                        
              @arg @ref FL_TSI_CHANNEL_34                        
              @arg @ref FL_TSI_CHANNEL_35                        

  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableChannel(TSI_Type *TSIx, uint32_t channel)
{
    if(channel < 32)
    {
        CLEAR_BIT(TSIx->CHCR0, 1<<channel);
    }
    else if(channel > 31 & channel < 36)
    {
        CLEAR_BIT(TSIx->CHCR1, 1<<(channel - 32));
    }
}
/**
  * @brief    
  * @rmtoll           FL_TSI_IsEnabledChannel
  * @param    TSIx TSI instance 
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_CHANNEL_0
              @arg @ref FL_TSI_CHANNEL_1
              @arg @ref FL_TSI_CHANNEL_2
              @arg @ref FL_TSI_CHANNEL_3
              @arg @ref FL_TSI_CHANNEL_4                        
              @arg @ref FL_TSI_CHANNEL_5                        
              @arg @ref FL_TSI_CHANNEL_6                        
              @arg @ref FL_TSI_CHANNEL_7                        
              @arg @ref FL_TSI_CHANNEL_8                        
              @arg @ref FL_TSI_CHANNEL_9                        
              @arg @ref FL_TSI_CHANNEL_10                         
              @arg @ref FL_TSI_CHANNEL_11                        
              @arg @ref FL_TSI_CHANNEL_12                        
              @arg @ref FL_TSI_CHANNEL_13                        
              @arg @ref FL_TSI_CHANNEL_14                                     
              @arg @ref FL_TSI_CHANNEL_15                        
              @arg @ref FL_TSI_CHANNEL_16                        
              @arg @ref FL_TSI_CHANNEL_17                        
              @arg @ref FL_TSI_CHANNEL_18                        
              @arg @ref FL_TSI_CHANNEL_19                        
              @arg @ref FL_TSI_CHANNEL_20                        
              @arg @ref FL_TSI_CHANNEL_21                        
              @arg @ref FL_TSI_CHANNEL_22                        
              @arg @ref FL_TSI_CHANNEL_23                        
              @arg @ref FL_TSI_CHANNEL_24                        
              @arg @ref FL_TSI_CHANNEL_25                        
              @arg @ref FL_TSI_CHANNEL_26                        
              @arg @ref FL_TSI_CHANNEL_27                        
              @arg @ref FL_TSI_CHANNEL_28                        
              @arg @ref FL_TSI_CHANNEL_29                        
              @arg @ref FL_TSI_CHANNEL_30                        
              @arg @ref FL_TSI_CHANNEL_31                        
              @arg @ref FL_TSI_CHANNEL_32                        
              @arg @ref FL_TSI_CHANNEL_33                        
              @arg @ref FL_TSI_CHANNEL_34                        
              @arg @ref FL_TSI_CHANNEL_35                        

  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledChannel(TSI_Type *TSIx,uint32_t channel)
{
    if(channel < 32)
    {
        return (uint32_t)(READ_BIT(TSIx->CHCR0, 1 << channel) == (1 << channel));
    }
    else if(channel > 31 & channel < 36)
    {
        return (uint32_t)(READ_BIT(TSIx->CHCR1, 1 << (channel - 32)) == (1 << (channel - 32)));
    }
    else
    {
        return 0;
    }
}

/**
  * @brief    
  * @rmtoll           FL_TSI_SetChannelTX
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_CHANNEL_0
              @arg @ref FL_TSI_CHANNEL_1
              @arg @ref FL_TSI_CHANNEL_2
              @arg @ref FL_TSI_CHANNEL_3
              @arg @ref FL_TSI_CHANNEL_4                        
              @arg @ref FL_TSI_CHANNEL_5                        
              @arg @ref FL_TSI_CHANNEL_6                        
              @arg @ref FL_TSI_CHANNEL_7                        
              @arg @ref FL_TSI_CHANNEL_8                        
              @arg @ref FL_TSI_CHANNEL_9                        
              @arg @ref FL_TSI_CHANNEL_10                         
              @arg @ref FL_TSI_CHANNEL_11                        
              @arg @ref FL_TSI_CHANNEL_12                        
              @arg @ref FL_TSI_CHANNEL_13                        
              @arg @ref FL_TSI_CHANNEL_14                                     
              @arg @ref FL_TSI_CHANNEL_15                        
              @arg @ref FL_TSI_CHANNEL_16                        
              @arg @ref FL_TSI_CHANNEL_17                        
              @arg @ref FL_TSI_CHANNEL_18                        
              @arg @ref FL_TSI_CHANNEL_19                        
              @arg @ref FL_TSI_CHANNEL_20                        
              @arg @ref FL_TSI_CHANNEL_21                        
              @arg @ref FL_TSI_CHANNEL_22                        
              @arg @ref FL_TSI_CHANNEL_23                        
              @arg @ref FL_TSI_CHANNEL_24                        
              @arg @ref FL_TSI_CHANNEL_25                        
              @arg @ref FL_TSI_CHANNEL_26                        
              @arg @ref FL_TSI_CHANNEL_27                        
              @arg @ref FL_TSI_CHANNEL_28                        
              @arg @ref FL_TSI_CHANNEL_29                        
              @arg @ref FL_TSI_CHANNEL_30                        
              @arg @ref FL_TSI_CHANNEL_31                        
              @arg @ref FL_TSI_CHANNEL_32                        
              @arg @ref FL_TSI_CHANNEL_33                        
              @arg @ref FL_TSI_CHANNEL_34                        
              @arg @ref FL_TSI_CHANNEL_35                        

  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetChannelTX(TSI_Type *TSIx, uint32_t channel)
{
    if(channel < 32)
    {
        SET_BIT(TSIx->CHCFGR0, 1<<channel);
    }
    else if(channel > 31 & channel < 36)
    {
        SET_BIT(TSIx->CHCFGR1, 1<<(channel-32));
    }
}
/**
  * @brief    
  * @rmtoll           FL_TSI_SetChannelRX
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_CHANNEL_0
              @arg @ref FL_TSI_CHANNEL_1
              @arg @ref FL_TSI_CHANNEL_2
              @arg @ref FL_TSI_CHANNEL_3
              @arg @ref FL_TSI_CHANNEL_4                        
              @arg @ref FL_TSI_CHANNEL_5                        
              @arg @ref FL_TSI_CHANNEL_6                        
              @arg @ref FL_TSI_CHANNEL_7                        
              @arg @ref FL_TSI_CHANNEL_8                        
              @arg @ref FL_TSI_CHANNEL_9                        
              @arg @ref FL_TSI_CHANNEL_10                         
              @arg @ref FL_TSI_CHANNEL_11                        
              @arg @ref FL_TSI_CHANNEL_12                        
              @arg @ref FL_TSI_CHANNEL_13                        
              @arg @ref FL_TSI_CHANNEL_14                                     
              @arg @ref FL_TSI_CHANNEL_15                        
              @arg @ref FL_TSI_CHANNEL_16                        
              @arg @ref FL_TSI_CHANNEL_17                        
              @arg @ref FL_TSI_CHANNEL_18                        
              @arg @ref FL_TSI_CHANNEL_19                        
              @arg @ref FL_TSI_CHANNEL_20                        
              @arg @ref FL_TSI_CHANNEL_21                        
              @arg @ref FL_TSI_CHANNEL_22                        
              @arg @ref FL_TSI_CHANNEL_23                        
              @arg @ref FL_TSI_CHANNEL_24                        
              @arg @ref FL_TSI_CHANNEL_25                        
              @arg @ref FL_TSI_CHANNEL_26                        
              @arg @ref FL_TSI_CHANNEL_27                        
              @arg @ref FL_TSI_CHANNEL_28                        
              @arg @ref FL_TSI_CHANNEL_29                        
              @arg @ref FL_TSI_CHANNEL_30                        
              @arg @ref FL_TSI_CHANNEL_31                        
              @arg @ref FL_TSI_CHANNEL_32                        
              @arg @ref FL_TSI_CHANNEL_33                        
              @arg @ref FL_TSI_CHANNEL_34                        
              @arg @ref FL_TSI_CHANNEL_35                        

  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetChannelRX(TSI_Type *TSIx, uint32_t channel)
{
    if(channel < 32)
    {
        CLEAR_BIT(TSIx->CHCFGR0,1 << channel);
    }
    else if(channel > 31 & channel < 36)
    {
        CLEAR_BIT(TSIx->CHCFGR1, 1<<(channel - 32));
    }
}

/**
  * @brief    
  * @rmtoll           FL_TSI_GetChannel
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_CHANNEL_0
              @arg @ref FL_TSI_CHANNEL_1
              @arg @ref FL_TSI_CHANNEL_2
              @arg @ref FL_TSI_CHANNEL_3
              @arg @ref FL_TSI_CHANNEL_4                        
              @arg @ref FL_TSI_CHANNEL_5                        
              @arg @ref FL_TSI_CHANNEL_6                        
              @arg @ref FL_TSI_CHANNEL_7                        
              @arg @ref FL_TSI_CHANNEL_8                        
              @arg @ref FL_TSI_CHANNEL_9                        
              @arg @ref FL_TSI_CHANNEL_10                         
              @arg @ref FL_TSI_CHANNEL_11                        
              @arg @ref FL_TSI_CHANNEL_12                        
              @arg @ref FL_TSI_CHANNEL_13                        
              @arg @ref FL_TSI_CHANNEL_14                                     
              @arg @ref FL_TSI_CHANNEL_15                        
              @arg @ref FL_TSI_CHANNEL_16                        
              @arg @ref FL_TSI_CHANNEL_17                        
              @arg @ref FL_TSI_CHANNEL_18                        
              @arg @ref FL_TSI_CHANNEL_19                        
              @arg @ref FL_TSI_CHANNEL_20                        
              @arg @ref FL_TSI_CHANNEL_21                        
              @arg @ref FL_TSI_CHANNEL_22                        
              @arg @ref FL_TSI_CHANNEL_23                        
              @arg @ref FL_TSI_CHANNEL_24                        
              @arg @ref FL_TSI_CHANNEL_25                        
              @arg @ref FL_TSI_CHANNEL_26                        
              @arg @ref FL_TSI_CHANNEL_27                        
              @arg @ref FL_TSI_CHANNEL_28                        
              @arg @ref FL_TSI_CHANNEL_29                        
              @arg @ref FL_TSI_CHANNEL_30                        
              @arg @ref FL_TSI_CHANNEL_31                        
              @arg @ref FL_TSI_CHANNEL_32                        
              @arg @ref FL_TSI_CHANNEL_33                        
              @arg @ref FL_TSI_CHANNEL_34                        
              @arg @ref FL_TSI_CHANNEL_35                        

  * @retval   Returned value can be one of the following values:
        State of bit (1 or 0).
        0:RX
        1:TX
  */
__STATIC_INLINE uint32_t FL_TSI_GetChannel(TSI_Type *TSIx, uint32_t channel)
{
    if(channel < 32)
    {
        return (uint32_t)(READ_BIT(TSIx->CHCFGR0, 1<<channel) == (1<<channel));
    }
    else if(channel > 31 & channel < 36)
    {
        return (uint32_t)(READ_BIT(TSIx->CHCFGR1, 1<<(channel - 32)) == (1<<(channel - 32)));
    }
    else
    {
        return 0;
    }
}

/**
  * @brief    
  * @rmtoll   RAWCNTR    TXSID    FL_TSI_TXChannel
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_TXChannel(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->RAWCNTR, (0x3fU << 24U)) >> 24U);
}

/**
  * @brief    
  * @rmtoll   RAWCNTR    RXSID    FL_TSI_RXChannel
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_RXChannel(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->RAWCNTR, (0x3fU << 16U)) >> 16U);
}

/**
  * @brief    
  * @rmtoll   RAWCNTR    RAW_COUNT    FL_TSI_ReadRawCount
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadRawCount(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->RAWCNTR, (0xffffU << 0U)) >> 0U);
}

/**
  * @brief    
  * @rmtoll   CCR    SCAN_ZERO    FL_TSI_WriteScanZeroTime
  * @param    TSIx TSI instance
  * @param    time 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteScanZeroTime(TSI_Type *TSIx, uint32_t time)
{
    MODIFY_REG(TSIx->CCR, (0x7fU << 24U), (time << 24U));
}

/**
  * @brief    
  * @rmtoll   CCR    SCAN_ZERO    FL_TSI_ReadScanZeroTime
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadScanZeroTime(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CCR, (0x7fU << 24U)) >> 24U);
}

/**
  * @brief    
  * @rmtoll   CCR    SCAN_IDLE    FL_TSI_WriteScanIdleTime
  * @param    TSIx TSI instance
  * @param    time 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteScanIdleTime(TSI_Type *TSIx, uint32_t time)
{
    MODIFY_REG(TSIx->CCR, (0xffU << 16U), (time << 16U));
}

/**
  * @brief    
  * @rmtoll   CCR    SCAN_IDLE    FL_TSI_ReadScanIdleTime
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadScanIdleTime(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CCR, (0xffU << 16U)) >> 16U);
}

/**
  * @brief    
  * @rmtoll   CCR    SCAN_INTV    FL_TSI_WriteScanInterval
  * @param    TSIx TSI instance
  * @param    period 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteScanInterval(TSI_Type *TSIx, uint32_t period)
{
    MODIFY_REG(TSIx->CCR, (0xffU << 8U), (period << 8U));
}

/**
  * @brief    
  * @rmtoll   CCR    SCAN_INTV    FL_TSI_ReadScanInterval
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadScanInterval(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CCR, (0xffU << 8U)) >> 8U);
}

/**
  * @brief    
  * @rmtoll   CCR    SMPL_WAIT    FL_TSI_WriteSampleWait
  * @param    TSIx TSI instance
  * @param    time 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteSampleWait(TSI_Type *TSIx, uint32_t time)
{
    MODIFY_REG(TSIx->CCR, (0x7U << 1U), (time << 1U));
}

/**
  * @brief    
  * @rmtoll   CCR    SMPL_WAIT    FL_TSI_ReadSampleWait
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadSampleWait(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CCR, (0x7U << 1U)) >> 1U);
}

/**
  * @brief    
  * @rmtoll   CCR    PRSCLK_EN    FL_TSI_SetSampleClockSource
  * @param    TSIx TSI instance
  * @param    source This parameter can be one of the following values:
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetSampleClockSource(TSI_Type *TSIx, uint32_t source)
{
    MODIFY_REG(TSIx->CCR, TSI_CCR_PRSCLK_EN_Msk, source);
}

/**
  * @brief    
  * @rmtoll   CCR    PRSCLK_EN    FL_TSI_GetSampleClockSource
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_TSI_GetSampleClockSource(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CCR, TSI_CCR_PRSCLK_EN_Msk));
}

/**
  * @brief    
  * @rmtoll   DMACR    DMA_WREN    FL_TSI_EnableDMAReq_Write
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableDMAReq_Write(TSI_Type *TSIx)
{
    SET_BIT(TSIx->DMACR, TSI_DMACR_DMA_WREN_Msk);
}

/**
  * @brief    
  * @rmtoll   DMACR    DMA_WREN    FL_TSI_DisableDMAReq_Write
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableDMAReq_Write(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->DMACR, TSI_DMACR_DMA_WREN_Msk);
}

/**
  * @brief    
  * @rmtoll   DMACR    DMA_WREN    FL_TSI_IsEnabledDMAReq_Write
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledDMAReq_Write(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->DMACR, TSI_DMACR_DMA_WREN_Msk) == TSI_DMACR_DMA_WREN_Msk);
}

/**
  * @brief    
  * @rmtoll   DMACR    DMA_RDEN    FL_TSI_EnableDMAReq_Read
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableDMAReq_Read(TSI_Type *TSIx)
{
    SET_BIT(TSIx->DMACR, TSI_DMACR_DMA_RDEN_Msk);
}

/**
  * @brief    
  * @rmtoll   DMACR    DMA_RDEN    FL_TSI_DisableDMAReq_Read
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableDMAReq_Read(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->DMACR, TSI_DMACR_DMA_RDEN_Msk);
}

/**
  * @brief    
  * @rmtoll   DMACR    DMA_RDEN    FL_TSI_IsEnabledDMAReq_Read
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledDMAReq_Read(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->DMACR, TSI_DMACR_DMA_RDEN_Msk) == TSI_DMACR_DMA_RDEN_Msk);
}

/**
  * @brief    
  * @rmtoll   CHCFGR    SNS_DIV    FL_TSI_WriteSampleClockPrescaler
  * @param    TSIx TSI instance
  * @param    psc 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteSampleClockPrescaler(TSI_Type *TSIx, uint32_t psc)
{
    MODIFY_REG(TSIx->SPCFGR, (0xfffU << 20U), (psc << 20U));
}

/**
  * @brief    
  * @rmtoll   CHCFGR    SNS_DIV    FL_TSI_ReadSampleClockPrescaler
  * @param    TSIx TSI instance
  * @retval   A0-A35
  */
__STATIC_INLINE uint32_t FL_TSI_ReadSampleClockPrescaler(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->SPCFGR, (0xfffU << 20U)) >> 20U);
}

/**
  * @brief    
  * @rmtoll   CHCFGR    RES    FL_TSI_SetResolution
  * @param    TSIx TSI instance
  * @param    resolution This parameter can be one of the following values:
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_8B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_9B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_10B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_11B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_12B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_13B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_14B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_15B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_16B
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetResolution(TSI_Type *TSIx, uint32_t resolution)
{
    MODIFY_REG(TSIx->SPCFGR, TSI_CHCFGR_RES_Msk, resolution);
}

/**
  * @brief    
  * @rmtoll   CHCFGR    RES    FL_TSI_GetResolution
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_8B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_9B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_10B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_11B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_12B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_13B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_14B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_15B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_16B
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_8B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_9B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_10B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_11B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_12B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_13B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_14B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_15B
  *           @arg @ref FL_TSI_SAMPLE_RESOLUTION_16B
  */
__STATIC_INLINE uint32_t FL_TSI_GetResolution(TSI_Type *TSIx, uint32_t channel)
{
    return (uint32_t)(READ_BIT(TSIx->SPCFGR, TSI_CHCFGR_RES_Msk));
}

/**
  * @brief    
  * @rmtoll   CHCFGR    IDAC_MODE    FL_TSI_SetIDACMode
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_TSI_IDAC_MODE_SINGLE
  *           @arg @ref FL_TSI_IDAC_MODE_DUAL
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetIDACMode(TSI_Type *TSIx, uint32_t mode)
{
    MODIFY_REG(TSIx->SPCFGR, TSI_CHCFGR_IDAC_MODE_Msk, mode);
}

/**
  * @brief    
  * @rmtoll   CHCFGR    IDAC_MODE    FL_TSI_GetIDACMode
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_IDAC_MODE_SINGLE
  *           @arg @ref FL_TSI_IDAC_MODE_DUAL
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_IDAC_MODE_SINGLE
  *           @arg @ref FL_TSI_IDAC_MODE_DUAL
  */
__STATIC_INLINE uint32_t FL_TSI_GetIDACMode(TSI_Type *TSIx, uint32_t channel)
{
    return (uint32_t)(READ_BIT(TSIx->SPCFGR, TSI_CHCFGR_IDAC_MODE_Msk));
}

/**
  * @brief    
  * @rmtoll   CHCFGR    IDAC2_CFG    FL_TSI_WriteIDAC2Current
  * @param    TSIx TSI instance
  * @param    current 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteIDAC2Current(TSI_Type *TSIx, uint32_t current)
{
    MODIFY_REG(TSIx->SPCFGR, (0x7fU << 8U), (current << 8U));
}

/**
  * @brief    
  * @rmtoll   CHCFGR    IDAC2_CFG    FL_TSI_ReadIDAC2Current
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  * @retval   A0-A35
  */
__STATIC_INLINE uint32_t FL_TSI_ReadIDAC2Current(TSI_Type *TSIx, uint32_t channel)
{
    return (uint32_t)(READ_BIT(TSIx->SPCFGR, (0x7fU << 8U)) >> 8U);
}

/**
  * @brief    
  * @rmtoll   CHCFGR    IDAC1_CFG    FL_TSI_WriteIDAC1Current
  * @param    TSIx TSI instance
  * @param    current 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteIDAC1Current(TSI_Type *TSIx, uint32_t current)
{
    MODIFY_REG(TSIx->SPCFGR, (0x7fU << 0U), (current << 0U));
}

/**
  * @brief    
  * @rmtoll   CHCFGR    IDAC1_CFG    FL_TSI_ReadIDAC1Current
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  * @retval   A0-A35
  */
__STATIC_INLINE uint32_t FL_TSI_ReadIDAC1Current(TSI_Type *TSIx, uint32_t channel)
{
    return (uint32_t)(READ_BIT(TSIx->SPCFGR, (0x7fU << 0U)) >> 0U);
}

/**
  * @brief    
  * @rmtoll   IDACTR    IDAC2_TRIM    FL_TSI_WriteIDAC2TrimValue
  * @param    TSIx TSI instance
  * @param    trim 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteIDAC2TrimValue(TSI_Type *TSIx, uint32_t trim)
{
    MODIFY_REG(TSIx->IDACTR, (0x1fU << 8U), (trim << 8U));
}

/**
  * @brief    
  * @rmtoll   IDACTR    IDAC2_TRIM    FL_TSI_ReadIDAC2TrimValue
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadIDAC2TrimValue(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->IDACTR, (0x1fU << 8U)) >> 8U);
}

/**
  * @brief    
  * @rmtoll   IDACTR    IDAC1_TRIM    FL_TSI_WriteIDAC1TrimValue
  * @param    TSIx TSI instance
  * @param    trim 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteIDAC1TrimValue(TSI_Type *TSIx, uint32_t trim)
{
    MODIFY_REG(TSIx->IDACTR, (0x1fU << 0U), (trim << 0U));
}

/**
  * @brief    
  * @rmtoll   IDACTR    IDAC1_TRIM    FL_TSI_ReadIDAC1TrimValue
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadIDAC1TrimValue(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->IDACTR, (0x1fU << 0U)) >> 0U);
}

/**
  * @brief    
  * @rmtoll   ANACR    LOWREF_SEL    FL_TSI_SetLowVoltageReference
  * @param    TSIx TSI instance
  * @param    signal This parameter can be one of the following values:
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetLowVoltageReference(TSI_Type *TSIx, uint32_t signal)
{
    MODIFY_REG(TSIx->ANACR, TSI_ANACR_LOWREF_SEL_Msk, signal);
}

/**
  * @brief    
  * @rmtoll   ANACR    LOWREF_SEL    FL_TSI_GetLowVoltageReference
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_TSI_GetLowVoltageReference(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANACR, TSI_ANACR_LOWREF_SEL_Msk));
}

/**
  * @brief    
  * @rmtoll   ANACR    CMP_AZ_BYP    FL_TSI_EnableComparatorAutoZeroBypass
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableComparatorAutoZeroBypass(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANACR, TSI_ANACR_CMP_AZ_BYP_Msk);
}

/**
  * @brief    
  * @rmtoll   ANACR    CMP_AZ_BYP    FL_TSI_DisableComparatorAutoZeroBypass
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableComparatorAutoZeroBypass(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->ANACR, TSI_ANACR_CMP_AZ_BYP_Msk);
}

/**
  * @brief    
  * @rmtoll   ANACR    CMP_AZ_BYP    FL_TSI_IsEnabledComparatorAutoZeroBypass
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledComparatorAutoZeroBypass(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANACR, TSI_ANACR_CMP_AZ_BYP_Msk) == TSI_ANACR_CMP_AZ_BYP_Msk);
}

/**
  * @brief    
  * @rmtoll   ANACR    HSCMP_AZ_BYP    FL_TSI_EnableHSComparatorAutoZeroBypass
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableHSComparatorAutoZeroBypass(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANACR, TSI_ANACR_HSCMP_AZ_BYP_Msk);
}

/**
  * @brief    
  * @rmtoll   ANACR    HSCMP_AZ_BYP    FL_TSI_DisableHSComparatorAutoZeroBypass
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableHSComparatorAutoZeroBypass(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->ANACR, TSI_ANACR_HSCMP_AZ_BYP_Msk);
}

/**
  * @brief    
  * @rmtoll   ANACR    HSCMP_AZ_BYP    FL_TSI_IsEnabledHSComparatorAutoZeroBypass
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledHSComparatorAutoZeroBypass(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANACR, TSI_ANACR_HSCMP_AZ_BYP_Msk) == TSI_ANACR_HSCMP_AZ_BYP_Msk);
}

/**
  * @brief    
  * @rmtoll   ANACR    LES_PCFG    FL_TSI_SetLowEMISwitchPMOS
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetLowEMISwitchPMOS(TSI_Type *TSIx, uint32_t mode)
{
    MODIFY_REG(TSIx->ANACR, TSI_ANACR_LES_PCFG_Msk, mode);
}

/**
  * @brief    
  * @rmtoll   ANACR    LES_PCFG    FL_TSI_GetLowEMISwitchPMOS
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_TSI_GetLowEMISwitchPMOS(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANACR, TSI_ANACR_LES_PCFG_Msk));
}

/**
  * @brief    
  * @rmtoll   ANACR    LES_NCFG    FL_TSI_SetLowEMISwitchNMOS
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetLowEMISwitchNMOS(TSI_Type *TSIx, uint32_t mode)
{
    MODIFY_REG(TSIx->ANACR, TSI_ANACR_LES_NCFG_Msk, mode);
}

/**
  * @brief    
  * @rmtoll   ANACR    LES_NCFG    FL_TSI_GetLowEMISwitchNMOS
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_TSI_GetLowEMISwitchNMOS(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANACR, TSI_ANACR_LES_NCFG_Msk));
}


/**
  * @brief    
  * @rmtoll   ANACR    IDAC2_MODE_CTRL    FL_TSI_SetIDAC2Mode
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_TSI_IDAC2_MODE_SELF_CAPACITANCE
  *           @arg @ref FL_TSI_IDAC2_MODE_MUTUAL_CAPACITANCE
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetIDAC2Mode(TSI_Type *TSIx, uint32_t mode)
{
    MODIFY_REG(TSIx->ANACR, TSI_ANACR_IDAC2_MODE_CTRL_Msk, mode);
}

/**
  * @brief    
  * @rmtoll   ANACR    IDAC2_MODE_CTRL    FL_TSI_GetIDAC2Mode
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_IDAC2_MODE_SELF_CAPACITANCE
  *           @arg @ref FL_TSI_IDAC2_MODE_MUTUAL_CAPACITANCE
  */
__STATIC_INLINE uint32_t FL_TSI_GetIDAC2Mode(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANACR, TSI_ANACR_IDAC2_MODE_CTRL_Msk));
}

/**
  * @brief    
  * @rmtoll   ANACR    IDAC1_MODE_CTRL    FL_TSI_SetIDAC1Mode
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_TSI_IDAC1_MODE_SELF_CAPACITANCE
  *           @arg @ref FL_TSI_IDAC1_MODE_MUTUAL_CAPACITANCE
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetIDAC1Mode(TSI_Type *TSIx, uint32_t mode)
{
    MODIFY_REG(TSIx->ANACR, TSI_ANACR_IDAC1_MODE_CTRL_Msk, mode);
}

/**
  * @brief    
  * @rmtoll   ANACR    IDAC1_MODE_CTRL    FL_TSI_GetIDAC1Mode
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_IDAC1_MODE_SELF_CAPACITANCE
  *           @arg @ref FL_TSI_IDAC1_MODE_MUTUAL_CAPACITANCE
  */
__STATIC_INLINE uint32_t FL_TSI_GetIDAC1Mode(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANACR, TSI_ANACR_IDAC1_MODE_CTRL_Msk));
}

/**
  * @brief    
  * @rmtoll   ANACR    IDAC2_DOUBLE    FL_TSI_EnableIDAC2Double
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableIDAC2Double(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANACR, TSI_ANACR_IDAC2_DOUBLE_Msk);
}

/**
  * @brief    
  * @rmtoll   ANACR    IDAC2_DOUBLE    FL_TSI_DisableIDAC2Double
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableIDAC2Double(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->ANACR, TSI_ANACR_IDAC2_DOUBLE_Msk);
}

/**
  * @brief    
  * @rmtoll   ANACR    IDAC2_DOUBLE    FL_TSI_IsEnabledIDAC2Double
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledIDAC2Double(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANACR, TSI_ANACR_IDAC2_DOUBLE_Msk) == TSI_ANACR_IDAC2_DOUBLE_Msk);
}

/**
  * @brief    
  * @rmtoll   ANACR    IDAC1_DOUBLE    FL_TSI_EnableIDAC1Double
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableIDAC1Double(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANACR, TSI_ANACR_IDAC1_DOUBLE_Msk);
}

/**
  * @brief    
  * @rmtoll   ANACR    IDAC1_DOUBLE    FL_TSI_DisableIDAC1Double
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableIDAC1Double(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->ANACR, TSI_ANACR_IDAC1_DOUBLE_Msk);
}

/**
  * @brief    
  * @rmtoll   ANACR    IDAC1_DOUBLE    FL_TSI_IsEnabledIDAC1Double
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledIDAC1Double(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANACR, TSI_ANACR_IDAC1_DOUBLE_Msk) == TSI_ANACR_IDAC1_DOUBLE_Msk);
}

/**
  * @brief    
  * @rmtoll   ANACR    IDAC2_RANGET    FL_TSI_SetIDAC2Step
  * @param    TSIx TSI instance
  * @param    STEP This parameter can be one of the following values:
  *           @arg @ref FL_TSI_IDAC2_STEP_2P4uA
  *           @arg @ref FL_TSI_IDAC2_STEP_1P2uA
  *           @arg @ref FL_TSI_IDAC2_STEP_300nA
  *           @arg @ref FL_TSI_IDAC2_STEP_37P5nA
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetIDAC2Step(TSI_Type *TSIx, uint32_t step)
{
    MODIFY_REG(TSIx->ANACR, TSI_ANACR_IDAC2_RANGET_Msk, step);
}

/**
  * @brief    
  * @rmtoll   ANACR    IDAC2_RANGET    FL_TSI_GetIDAC2Step
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_IDAC2_STEP_2P4uA
  *           @arg @ref FL_TSI_IDAC2_STEP_1P2uA
  *           @arg @ref FL_TSI_IDAC2_STEP_300nA
  *           @arg @ref FL_TSI_IDAC2_STEP_37P5nA
  */
__STATIC_INLINE uint32_t FL_TSI_GetIDAC2Step(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANACR, TSI_ANACR_IDAC2_RANGET_Msk));
}

/**
  * @brief    
  * @rmtoll   ANACR    IDAC1_RANGET    FL_TSI_SetIDAC1Step
  * @param    TSIx TSI instance
  * @param    Step This parameter can be one of the following values:
  *           @arg @ref FL_TSI_IDAC1_STEP_2P4uA
  *           @arg @ref FL_TSI_IDAC1_STEP_1P2uA
  *           @arg @ref FL_TSI_IDAC1_STEP_300nA
  *           @arg @ref FL_TSI_IDAC1_STEP_37P5nA
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetIDAC1Step(TSI_Type *TSIx, uint32_t step)
{
    MODIFY_REG(TSIx->ANACR, TSI_ANACR_IDAC1_RANGET_Msk, step);
}

/**
  * @brief    
  * @rmtoll   ANACR    IDAC1_RANGET    FL_TSI_GetIDAC1Step
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_IDAC1_GEAR_2P4uA
  *           @arg @ref FL_TSI_IDAC1_GEAR_1P2uA
  *           @arg @ref FL_TSI_IDAC1_GEAR_300nA
  *           @arg @ref FL_TSI_IDAC1_GEAR_37P5nA
  */
__STATIC_INLINE uint32_t FL_TSI_GetIDAC1Step(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANACR, TSI_ANACR_IDAC1_RANGET_Msk));
}

/**
  * @brief    
  * @rmtoll   ANACR    SHIELD_MOD    FL_TSI_SetShieldMode
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_TSI_SHIELD_MOD_454
  *           @arg @ref FL_TSI_SHIELD_MOD_INTERBUFFER
  *           @arg @ref FL_TSI_SHIELD_MOD_EXTERCAPACITORS
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetShieldMode(TSI_Type *TSIx, uint32_t mode)
{
    MODIFY_REG(TSIx->ANACR, TSI_ANACR_SHIELD_MOD_Msk, mode);
}

/**
  * @brief    
  * @rmtoll   ANACR    SHIELD_MOD    FL_TSI_GetShieldMode
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_SHIELD_MOD_454
  *           @arg @ref FL_TSI_SHIELD_MOD_INTERBUFFER
  *           @arg @ref FL_TSI_SHIELD_MOD_EXTERCAPACITORS
  */
__STATIC_INLINE uint32_t FL_TSI_GetShieldMode(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANACR, TSI_ANACR_SHIELD_MOD_Msk));
}

/**
  * @brief    
  * @rmtoll   TEST    SENSE_CFG    FL_TSI_SetSensitivityTestGear
  * @param    TSIx TSI instance
  * @param    gear This parameter can be one of the following values:
  *           @arg @ref FL_TSI_SENSE_CFG_INVALID
  *           @arg @ref FL_TSI_SENSE_CFG_0P1pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P2pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P3pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P4pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P5pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P6pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P7pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P8pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P9pF
  *           @arg @ref FL_TSI_SENSE_CFG_1P0pF
  *           @arg @ref FL_TSI_SENSE_CFG_1P1pF
  *           @arg @ref FL_TSI_SENSE_CFG_1P2pF
  *           @arg @ref FL_TSI_SENSE_CFG_1P3pF
  *           @arg @ref FL_TSI_SENSE_CFG_1P4pF
  *           @arg @ref FL_TSI_SENSE_CFG_1P5pF
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetSensitivityTestGear(TSI_Type *TSIx, uint32_t gear)
{
    MODIFY_REG(TSIx->TEST, TSI_TEST_SENSE_CFG_Msk, gear);
}

/**
  * @brief    
  * @rmtoll   TEST    SENSE_CFG    FL_TSI_GetSensitivityTestGear
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_SENSE_CFG_INVALID
  *           @arg @ref FL_TSI_SENSE_CFG_0P1pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P2pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P3pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P4pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P5pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P6pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P7pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P8pF
  *           @arg @ref FL_TSI_SENSE_CFG_0P9pF
  *           @arg @ref FL_TSI_SENSE_CFG_1P0pF
  *           @arg @ref FL_TSI_SENSE_CFG_1P1pF
  *           @arg @ref FL_TSI_SENSE_CFG_1P2pF
  *           @arg @ref FL_TSI_SENSE_CFG_1P3pF
  *           @arg @ref FL_TSI_SENSE_CFG_1P4pF
  *           @arg @ref FL_TSI_SENSE_CFG_1P5pF
  */
__STATIC_INLINE uint32_t FL_TSI_GetSensitivityTestGear(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->TEST, TSI_TEST_SENSE_CFG_Msk));
}

/**
  * @brief    
  * @rmtoll   TEST    CH_IDLE_CFG    FL_TSI_SetInactiveSensorConnection
  * @param    TSIx TSI instance
  * @param    connection This parameter can be one of the following values:
  *           @arg @ref FL_TSI_CH_IDLE_CFG_FLOAT
  *           @arg @ref FL_TSI_CH_IDLE_CFG_GROUND
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetInactiveSensorConnection(TSI_Type *TSIx, uint32_t connection)
{
    MODIFY_REG(TSIx->TEST, TSI_TEST_CH_IDLE_CFG_Msk, connection);
}

/**
  * @brief    
  * @rmtoll   TEST    CH_IDLE_CFG    FL_TSI_GetInactiveSensorConnection
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_CH_IDLE_CFG_FLOAT
  *           @arg @ref FL_TSI_CH_IDLE_CFG_GROUND
  */
__STATIC_INLINE uint32_t FL_TSI_GetInactiveSensorConnection(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->TEST, TSI_TEST_CH_IDLE_CFG_Msk));
}

/**
  * @brief    
  * @rmtoll   TEST    R2D_CFG    FL_TSI_SetGroundedResisance
  * @param    TSIx TSI instance
  * @param    gear This parameter can be one of the following values:
  *           @arg @ref FL_TSI_R2D_CFG_100K
  *           @arg @ref FL_TSI_R2D_CFG_150K
  *           @arg @ref FL_TSI_R2D_CFG_200K
  *           @arg @ref FL_TSI_R2D_CFG_250K
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetGroundedResisance(TSI_Type *TSIx, uint32_t value)
{
    MODIFY_REG(TSIx->TEST, TSI_TEST_R2D_CFG_Msk, value);
}

/**
  * @brief    
  * @rmtoll   TEST    R2D_CFG    FL_TSI_GetGroundedResisance
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_R2D_CFG_100K
  *           @arg @ref FL_TSI_R2D_CFG_150K
  *           @arg @ref FL_TSI_R2D_CFG_200K
  *           @arg @ref FL_TSI_R2D_CFG_250K
  */
__STATIC_INLINE uint32_t FL_TSI_GetGroundedResisance(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->TEST, TSI_TEST_R2D_CFG_Msk));
}

/**
  * @brief    
  * @rmtoll   TEST    SENSI_VALID    FL_TSI_SetTestRingConnection
  * @param    TSIx TSI instance
  * @param    connection This parameter can be one of the following values:
  *           @arg @ref FL_TSI_TST_CONN_RESISTANCE
  *           @arg @ref FL_TSI_TST_CONN_CAPARRAY
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetTestRingConnection(TSI_Type *TSIx, uint32_t connection)
{
    MODIFY_REG(TSIx->TEST, TSI_TEST_SENSI_VALID_Msk, connection);
}

/**
  * @brief    
  * @rmtoll   TEST    SENSI_VALID    FL_TSI_GetTestRingConnection
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_TST_CONN_RESISTANCE
  *           @arg @ref FL_TSI_TST_CONN_CAPARRAY
  */
__STATIC_INLINE uint32_t FL_TSI_GetTestRingConnection(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->TEST, TSI_TEST_SENSI_VALID_Msk));
}

/**
  * @brief    
  * @rmtoll   ANATEST    VCOMP_DFLT    FL_TSI_WriteCompFeedbackDelay
  * @param    TSIx TSI instance
  * @param    width 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteCompFeedbackDelay(TSI_Type *TSIx, uint32_t width)
{
    MODIFY_REG(TSIx->ANATEST, (0xffU << 16U), (width << 16U));
}

/**
  * @brief    
  * @rmtoll   ANATEST    VCOMP_DFLT    FL_TSI_ReadCompFeedbackDelay
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadCompFeedbackDelay(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANATEST, (0xffU << 16U)) >> 16U);
}

/**
  * @brief    
  * @rmtoll   ANATEST    VCOMP_DFEN    FL_TSI_EnableCompFeedbackFilter
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableCompFeedbackFilter(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANATEST, TSI_ANATEST_VCOMP_DFEN_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    VCOMP_DFEN    FL_TSI_DisableCompFeedbackFilter
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableCompFeedbackFilter(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->ANATEST, TSI_ANATEST_VCOMP_DFEN_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    VCOMP_DFEN    FL_TSI_IsEnabledCompFeedbackFilter
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledCompFeedbackFilter(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANATEST, TSI_ANATEST_VCOMP_DFEN_Msk) == TSI_ANATEST_VCOMP_DFEN_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    IDAC1_CHG_SWT    FL_TSI_EnableIdac1ChargeExtCap
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableIdac1ChargeExtCap(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANATEST, TSI_ANATEST_IDAC1_CHG_SWT_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    IDAC1_CHG_SWT    FL_TSI_DisableIdac1ChargeExtCap
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableIdac1ChargeExtCap(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->ANATEST, TSI_ANATEST_IDAC1_CHG_SWT_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    IDAC1_CHG_SWT    FL_TSI_IsEnabledIdac1ChargeExtCap
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledIdac1ChargeExtCap(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANATEST, TSI_ANATEST_IDAC1_CHG_SWT_Msk) == TSI_ANATEST_IDAC1_CHG_SWT_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    EXCAP_SEL    FL_TSI_SetExtCapForTest
  * @param    TSIx TSI instance
  * @param    capacitance This parameter can be one of the following values:
  *           @arg @ref FL_TSI_EXCAP_SEL_CINTA
  *           @arg @ref FL_TSI_EXCAP_SEL_CINTB
  *           @arg @ref FL_TSI_EXCAP_SEL_CTANK
  *           @arg @ref FL_TSI_EXCAP_SEL_CMOD
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetExtCapForTest(TSI_Type *TSIx, uint32_t capacitance)
{
    MODIFY_REG(TSIx->ANATEST, TSI_ANATEST_EXCAP_SEL_Msk, capacitance);
}

/**
  * @brief    
  * @rmtoll   ANATEST    EXCAP_SEL    FL_TSI_GetExtCapForTest
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_EXCAP_SEL_CINTA
  *           @arg @ref FL_TSI_EXCAP_SEL_CINTB
  *           @arg @ref FL_TSI_EXCAP_SEL_CTANK
  *           @arg @ref FL_TSI_EXCAP_SEL_CMOD
  */
__STATIC_INLINE uint32_t FL_TSI_GetExtCapForTest(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANATEST, TSI_ANATEST_EXCAP_SEL_Msk));
}

/**
  * @brief    
  * @rmtoll   ANATEST    EXCAP_TESTEN    FL_TSI_EnableTestExtCap
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableTestExtCap(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANATEST, TSI_ANATEST_EXCAP_TESTEN_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    EXCAP_TESTEN    FL_TSI_DisableTestExtCap
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableTestExtCap(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->ANATEST, TSI_ANATEST_EXCAP_TESTEN_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    EXCAP_TESTEN    FL_TSI_IsEnabledTestExtCap
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledTestExtCap(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANATEST, TSI_ANATEST_EXCAP_TESTEN_Msk) == TSI_ANATEST_EXCAP_TESTEN_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    BIIAS_OUTEN    FL_TSI_EnableIdac1TestOutput
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableIdac1TestOutput(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANATEST, TSI_ANATEST_BIIAS_OUTEN_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    BIIAS_OUTEN    FL_TSI_DisableIdac1TestOutput
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableIdac1TestOutput(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->ANATEST, TSI_ANATEST_BIIAS_OUTEN_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    BIIAS_OUTEN    FL_TSI_IsEnabledIdac1TestOutput
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledIdac1TestOutput(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANATEST, TSI_ANATEST_BIIAS_OUTEN_Msk) == TSI_ANATEST_BIIAS_OUTEN_Msk);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    VREF_CSDCMP_TRIM    FL_TSI_WriteVerfCsdCmpTrim
  * @param    TSIx TSI instance
  * @param    trim 
  * @retval   None
  */

/**
  * @brief    
  * @rmtoll   ANATEST    VCOMP_FB    FL_TSI_SetCompFeedbackSyncEdges
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_TSI_VCOMP_FB_RISINGEDGE
  *           @arg @ref FL_TSI_VCOMP_FB_FALLINGEDGE
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetCompFeedbackSyncEdges(TSI_Type *TSIx, uint32_t mode)
{
    MODIFY_REG(TSIx->ANATEST, TSI_ANATEST_VCOMP_FB_Msk, mode);
}

/**
  * @brief    
  * @rmtoll   ANATEST    VCOMP_FB    FL_TSI_GetCompFeedbackSyncEdges
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_VCOMP_FB_RISINGEDGE
  *           @arg @ref FL_TSI_VCOMP_FB_FALLINGEDGE
  */
__STATIC_INLINE uint32_t FL_TSI_GetCompFeedbackSyncEdges(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANATEST, TSI_ANATEST_VCOMP_FB_Msk));
}

/**
  * @brief    
  * @rmtoll   ANATEST    IDAC_COMP_MODE    FL_TSI_SetIdac2CompensateMode
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_TSI_IDAC_COMP_MODE_NORMALLYOPEN
  *           @arg @ref FL_TSI_IDAC_COMP_MODE_COMPLEMENTATION
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetIdac2CompensateMode(TSI_Type *TSIx, uint32_t mode)
{
    MODIFY_REG(TSIx->ANATEST, TSI_ANATEST_IDAC_COMP_MODE_Msk, mode);
}

/**
  * @brief    
  * @rmtoll   ANATEST    IDAC_COMP_MODE    FL_TSI_GetIdac2CompensateMode
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_IDAC_COMP_MODE_NORMALLYOPEN
  *           @arg @ref FL_TSI_IDAC_COMP_MODE_COMPLEMENTATION
  */
__STATIC_INLINE uint32_t FL_TSI_GetIdac2CompensateMode(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->ANATEST, TSI_ANATEST_IDAC_COMP_MODE_Msk));
}

/**
  * @brief    
  * @rmtoll   ANATEST    VREF_BUF_ENT    FL_TSI_EnableVrefBufferEnt
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableVrefBufferEnt(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANATEST, TSI_ANATEST_VREF_BUF_ENT_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    VREF_BUF_ENT    FL_TSI_DisableVrefBufferEnt
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE void FL_TSI_DisableVrefBufferEnt(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->ANATEST, TSI_ANATEST_VREF_BUF_ENT_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    COMP_ENT    FL_TSI_EnableCompEnt
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableCompEnt(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANATEST, TSI_ANATEST_COMP_ENT_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    COMP_ENT    FL_TSI_DisableCompEnt
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE void FL_TSI_DisableCompEnt(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->ANATEST, TSI_ANATEST_COMP_ENT_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    IDAC2_ENT    FL_TSI_EnableIdac2Ent
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableIdac2Ent(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANATEST, TSI_ANATEST_IDAC2_ENT_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    IDAC2_ENT    FL_TSI_DisableIdac2Ent
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE void FL_TSI_DisableIdac2Ent(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->ANATEST, TSI_ANATEST_IDAC2_ENT_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    IDAC1_ENT    FL_TSI_EnableIdac1Ent
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableIdac1Ent(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANATEST, TSI_ANATEST_IDAC1_ENT_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    IDAC1_ENT    FL_TSI_DisableIdac1Ent
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE void FL_TSI_DisableIdac1Ent(TSI_Type *TSIx)
{
   CLEAR_BIT(TSIx->ANATEST, TSI_ANATEST_IDAC1_ENT_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    SIGMA_DELTA_ENT    FL_TSI_EnableSigmaDeltaEnt
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableSigmaDeltaEnt(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANATEST, TSI_ANATEST_SIGMA_DELTA_ENT_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    SIGMA_DELTA_ENT    FL_TSI_DisableSigmaDeltaEnt
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE void FL_TSI_DisableSigmaDeltaEnt(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->ANATEST, TSI_ANATEST_SIGMA_DELTA_ENT_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    DEBUG_MODE    FL_TSI_EnableDebugMode
  * @param    TSIx TSI instance
  * @param    mode This parameter can be one of the following values:
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableDebugMode(TSI_Type *TSIx)
{
    SET_BIT(TSIx->ANATEST, TSI_ANATEST_DEBUG_MODE_Msk);
}

/**
  * @brief    
  * @rmtoll   ANATEST    DEBUG_MODE    FL_TSI_DisableDebugMode
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE void FL_TSI_DisableDebugMode(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->ANATEST, TSI_ANATEST_DEBUG_MODE_Msk);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    REF_SEL    FL_TSI_SetVoltageReference
  * @param    TSIx TSI instance
  * @param    signal This parameter can be one of the following values:
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetVoltageReference(TSI_Type *TSIx, uint32_t signal)
{
    MODIFY_REG(TSIx->VREFCR, TSI_VREFCRTEST_REF_SEL_Msk, signal);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    LOWREF_SEL    FL_TSI_GetLowVoltageReference
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  */
__STATIC_INLINE uint32_t FL_TSI_GetVoltageReference(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->VREFCR, TSI_VREFCRTEST_REF_SEL_Msk));
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    SHIELD1P0_BYPBUF    FL_TSI_EnableShield1p0Bypbuf
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableShield1p0Bypbuf(TSI_Type *TSIx)
{
    SET_BIT(TSIx->VREFCR, TSI_VREFCRTEST_SHIELD1P0_BYPBUF_Msk);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    SHIELD1P0_BYPBUF    FL_TSI_DisableShield1p0Bypbuf
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableShield1p0Bypbuf(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->VREFCR, TSI_VREFCRTEST_SHIELD1P0_BYPBUF_Msk);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    SHIELD1P0_BYPBUF    FL_TSI_IsEnabledShield1p0Bypbuf
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledShield1p0Bypbuf(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->VREFCR, TSI_VREFCRTEST_SHIELD1P0_BYPBUF_Msk) == TSI_VREFCRTEST_SHIELD1P0_BYPBUF_Msk);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    VREF1P0_BYPBUF    FL_TSI_EnableVref1p0Bypbuf
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableVref1p0Bypbuf(TSI_Type *TSIx)
{
    SET_BIT(TSIx->VREFCR, TSI_VREFCRTEST_VREF1P0_BYPBUF_Msk);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    VREF1P0_BYPBUF    FL_TSI_DisableVref1p0Bypbuf
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableVref1p0Bypbuf(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->VREFCR, TSI_VREFCRTEST_VREF1P0_BYPBUF_Msk);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    VREF1P0_BYPBUF    FL_TSI_IsEnabledVref1p0Bypbuf
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledVref1p0Bypbuf(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->VREFCR, TSI_VREFCRTEST_VREF1P0_BYPBUF_Msk) == TSI_VREFCRTEST_VREF1P0_BYPBUF_Msk);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    CSD1P0_BYPBUF    FL_TSI_EnableCsd1p0Bypbuf
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableCsd1p0Bypbuf(TSI_Type *TSIx)
{
    SET_BIT(TSIx->VREFCR, TSI_VREFCRTEST_CSD1P0_BYPBUF_Msk);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    CSD1P0_BYPBUF    FL_TSI_DisableCsd1p0Bypbuf
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableCsd1p0Bypbuf(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->VREFCR, TSI_VREFCRTEST_CSD1P0_BYPBUF_Msk);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    CSD1P0_BYPBUF    FL_TSI_IsEnabledCsd1p0Bypbuf
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledCsd1p0Bypbuf(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->VREFCR, TSI_VREFCRTEST_CSD1P0_BYPBUF_Msk) == TSI_VREFCRTEST_CSD1P0_BYPBUF_Msk);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    VREF_CSDCMP_TRIM    FL_TSI_WriteVerfCsdCmpTrim
  * @param    TSIx TSI instance
  * @param    trim 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteVerfCsdCmpTrim(TSI_Type *TSIx, uint32_t trim)
{
    MODIFY_REG(TSIx->VREFCR, (0x7fU << 16U), (trim << 16U));
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    VREF_CSDCMP_TRIM    FL_TSI_ReadVerfCsdCmpTrim
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadVerfCsdCmpTrim(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->VREFCR, (0x7fU << 16U)) >> 16U);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    VREF_SHIELD_TRIM    FL_TSI_WriteVerfShieldTrim
  * @param    TSIx TSI instance
  * @param    trim 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteVerfShieldTrim(TSI_Type *TSIx, uint32_t trim)
{
    MODIFY_REG(TSIx->VREFCR, (0x7fU << 8U), (trim << 8U));
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    VREF_SHIELD_TRIM    FL_TSI_ReadVerfShieldTrim
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadVerfShieldTrim(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->VREFCR, (0x7fU << 8U)) >> 8U);
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    VREF_BUF_TRIM    FL_TSI_WriteVerfBufTrim
  * @param    TSIx TSI instance
  * @param    trim 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteVerfBufTrim(TSI_Type *TSIx, uint32_t trim)
{
    MODIFY_REG(TSIx->VREFCR, (0x7fU << 0U), (trim << 0U));
}

/**
  * @brief    
  * @rmtoll   VREFCRTEST    VREF_BUF_TRIM    FL_TSI_ReadVerfBufTrim
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadVerfBufTrim(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->VREFCR, (0x7fU << 0U)) >> 0U);
}

/**
  * @brief    
  * @rmtoll           FL_TSI_EnableShieldPullDown
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_CHANNEL_0
              @arg @ref FL_TSI_CHANNEL_1
              @arg @ref FL_TSI_CHANNEL_2
              @arg @ref FL_TSI_CHANNEL_3
              @arg @ref FL_TSI_CHANNEL_4                        
              @arg @ref FL_TSI_CHANNEL_5                        
              @arg @ref FL_TSI_CHANNEL_6                        
              @arg @ref FL_TSI_CHANNEL_7                        
              @arg @ref FL_TSI_CHANNEL_8                        
              @arg @ref FL_TSI_CHANNEL_9                        
              @arg @ref FL_TSI_CHANNEL_10                         
              @arg @ref FL_TSI_CHANNEL_11                        
              @arg @ref FL_TSI_CHANNEL_12                        
              @arg @ref FL_TSI_CHANNEL_13                        
              @arg @ref FL_TSI_CHANNEL_14                                     
              @arg @ref FL_TSI_CHANNEL_15                        
              @arg @ref FL_TSI_CHANNEL_16                        
              @arg @ref FL_TSI_CHANNEL_17                        
              @arg @ref FL_TSI_CHANNEL_18                        
              @arg @ref FL_TSI_CHANNEL_19                        
              @arg @ref FL_TSI_CHANNEL_20                        
              @arg @ref FL_TSI_CHANNEL_21                        
              @arg @ref FL_TSI_CHANNEL_22                        
              @arg @ref FL_TSI_CHANNEL_23                        
              @arg @ref FL_TSI_CHANNEL_24                        
              @arg @ref FL_TSI_CHANNEL_25                        
              @arg @ref FL_TSI_CHANNEL_26                        
              @arg @ref FL_TSI_CHANNEL_27                        
              @arg @ref FL_TSI_CHANNEL_28                        
              @arg @ref FL_TSI_CHANNEL_29                        
              @arg @ref FL_TSI_CHANNEL_30                        
              @arg @ref FL_TSI_CHANNEL_31                        
              @arg @ref FL_TSI_CHANNEL_32                        
              @arg @ref FL_TSI_CHANNEL_33                        
              @arg @ref FL_TSI_CHANNEL_34                        
              @arg @ref FL_TSI_CHANNEL_35      
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableShieldPullDown(TSI_Type *TSIx, uint32_t channel)
{
    if(channel<32)
    {
        SET_BIT(TSIx->SHLDGNDCR0,1<<channel);
    }
    else if(channel>31&channel<36)
    {
        SET_BIT(TSIx->SHLDGNDCR1,1<<(channel-32));
    }
}

/**
  * @brief    
  * @rmtoll           FL_TSI_DisableShieldPullDown
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_CHANNEL_0
              @arg @ref FL_TSI_CHANNEL_1
              @arg @ref FL_TSI_CHANNEL_2
              @arg @ref FL_TSI_CHANNEL_3
              @arg @ref FL_TSI_CHANNEL_4                        
              @arg @ref FL_TSI_CHANNEL_5                        
              @arg @ref FL_TSI_CHANNEL_6                        
              @arg @ref FL_TSI_CHANNEL_7                        
              @arg @ref FL_TSI_CHANNEL_8                        
              @arg @ref FL_TSI_CHANNEL_9                        
              @arg @ref FL_TSI_CHANNEL_10                         
              @arg @ref FL_TSI_CHANNEL_11                        
              @arg @ref FL_TSI_CHANNEL_12                        
              @arg @ref FL_TSI_CHANNEL_13                        
              @arg @ref FL_TSI_CHANNEL_14                                     
              @arg @ref FL_TSI_CHANNEL_15                        
              @arg @ref FL_TSI_CHANNEL_16                        
              @arg @ref FL_TSI_CHANNEL_17                        
              @arg @ref FL_TSI_CHANNEL_18                        
              @arg @ref FL_TSI_CHANNEL_19                        
              @arg @ref FL_TSI_CHANNEL_20                        
              @arg @ref FL_TSI_CHANNEL_21                        
              @arg @ref FL_TSI_CHANNEL_22                        
              @arg @ref FL_TSI_CHANNEL_23                        
              @arg @ref FL_TSI_CHANNEL_24                        
              @arg @ref FL_TSI_CHANNEL_25                        
              @arg @ref FL_TSI_CHANNEL_26                        
              @arg @ref FL_TSI_CHANNEL_27                        
              @arg @ref FL_TSI_CHANNEL_28                        
              @arg @ref FL_TSI_CHANNEL_29                        
              @arg @ref FL_TSI_CHANNEL_30                        
              @arg @ref FL_TSI_CHANNEL_31                        
              @arg @ref FL_TSI_CHANNEL_32                        
              @arg @ref FL_TSI_CHANNEL_33                        
              @arg @ref FL_TSI_CHANNEL_34                        
              @arg @ref FL_TSI_CHANNEL_35      
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableShieldPullDown(TSI_Type *TSIx, uint32_t channel)
{
    if(channel < 32)
    {
        CLEAR_BIT(TSIx->SHLDGNDCR0, 1<<channel);
    }
    else if(channel > 31 & channel < 36)
    {
        CLEAR_BIT(TSIx->SHLDGNDCR1, 1<<(channel - 32));
    }
}

/**
  * @brief    
  * @rmtoll           FL_TSI_IsEnabledShieldPullDown
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_CHANNEL_0
              @arg @ref FL_TSI_CHANNEL_1
              @arg @ref FL_TSI_CHANNEL_2
              @arg @ref FL_TSI_CHANNEL_3
              @arg @ref FL_TSI_CHANNEL_4                        
              @arg @ref FL_TSI_CHANNEL_5                        
              @arg @ref FL_TSI_CHANNEL_6                        
              @arg @ref FL_TSI_CHANNEL_7                        
              @arg @ref FL_TSI_CHANNEL_8                        
              @arg @ref FL_TSI_CHANNEL_9                        
              @arg @ref FL_TSI_CHANNEL_10                         
              @arg @ref FL_TSI_CHANNEL_11                        
              @arg @ref FL_TSI_CHANNEL_12                        
              @arg @ref FL_TSI_CHANNEL_13                        
              @arg @ref FL_TSI_CHANNEL_14                                     
              @arg @ref FL_TSI_CHANNEL_15                        
              @arg @ref FL_TSI_CHANNEL_16                        
              @arg @ref FL_TSI_CHANNEL_17                        
              @arg @ref FL_TSI_CHANNEL_18                        
              @arg @ref FL_TSI_CHANNEL_19                        
              @arg @ref FL_TSI_CHANNEL_20                        
              @arg @ref FL_TSI_CHANNEL_21                        
              @arg @ref FL_TSI_CHANNEL_22                        
              @arg @ref FL_TSI_CHANNEL_23                        
              @arg @ref FL_TSI_CHANNEL_24                        
              @arg @ref FL_TSI_CHANNEL_25                        
              @arg @ref FL_TSI_CHANNEL_26                        
              @arg @ref FL_TSI_CHANNEL_27                        
              @arg @ref FL_TSI_CHANNEL_28                        
              @arg @ref FL_TSI_CHANNEL_29                        
              @arg @ref FL_TSI_CHANNEL_30                        
              @arg @ref FL_TSI_CHANNEL_31                        
              @arg @ref FL_TSI_CHANNEL_32                        
              @arg @ref FL_TSI_CHANNEL_33                        
              @arg @ref FL_TSI_CHANNEL_34                        
              @arg @ref FL_TSI_CHANNEL_35      
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledShieldPullDown(TSI_Type *TSIx, uint32_t channel)
{
    if(channel < 32)
    {
        return (uint32_t)(READ_BIT(TSIx->SHLDGNDCR0, 1<<channel) == (1<<channel));
    }
    else if(channel > 31 & channel < 36)
    {
        return (uint32_t)(READ_BIT(TSIx->SHLDGNDCR1, 1<<(channel - 32)) == (1<<(channel - 32)));
    }
    else
    {
        return 0;
    }
}

/**
  * @brief    
  * @rmtoll     FL_TSI_SetPadSlewRateControl
  * @param    TSIx TSI instance
  * @param    pad This parameter can be one of the following values:
  *           @arg @ref FL_TSI_PAD_PE6
  *           @arg @ref FL_TSI_PAD_PE7
  *           @arg @ref FL_TSI_PAD_PE8
  *           @arg @ref FL_TSI_PAD_PE9
  *           @arg @ref FL_TSI_PAD_PF12
  *           @arg @ref FL_TSI_PAD_PF13
  *           @arg @ref FL_TSI_PAD_PF14
  *           @arg @ref FL_TSI_PAD_PF15
  *           @arg @ref FL_TSI_PAD_PC0
  *           @arg @ref FL_TSI_PAD_PC1
  *           @arg @ref FL_TSI_PAD_PC2
  *           @arg @ref FL_TSI_PAD_PC3
  *           @arg @ref FL_TSI_PAD_PC4
  *           @arg @ref FL_TSI_PAD_PC5
  *           @arg @ref FL_TSI_PAD_PC6
  *           @arg @ref FL_TSI_PAD_PC7
  *           @arg @ref FL_TSI_PAD_PC8
  *           @arg @ref FL_TSI_PAD_PC9
  *           @arg @ref FL_TSI_PAD_PC10
  *           @arg @ref FL_TSI_PAD_PC11
  *           @arg @ref FL_TSI_PAD_PC12
  *           @arg @ref FL_TSI_PAD_PC13
  *           @arg @ref FL_TSI_PAD_PC14
  * @param    mode This parameter can be one of the following values:
  *           @arg @ref FL_TSI_DEFAULT
  *           @arg @ref FL_TSI_SLOW
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetPadSlewRateControl(TSI_Type *TSIx, uint32_t pad,uint32_t mode)
{
    if(pad < 256)
    {
        MODIFY_REG(TSIx->EMICR0, ((pad * pad) * (0x3U)), ((pad * pad) * mode));
    }
    else if(pad > 255 & pad < 4194305)
    {
        pad >>= 8;
        MODIFY_REG(TSIx->EMICR1, ((pad * pad) * (0x3U)), ((pad * pad) * mode));
    }
}

/**
  * @brief    
  * @rmtoll     FL_TSI_GetPadSlewRateControl
  * @param    TSIx TSI instance
  * @param    pad This parameter can be one of the following values:
  *           @arg @ref FL_TSI_PAD_PE6
  *           @arg @ref FL_TSI_PAD_PE7
  *           @arg @ref FL_TSI_PAD_PE8
  *           @arg @ref FL_TSI_PAD_PE9
  *           @arg @ref FL_TSI_PAD_PF12
  *           @arg @ref FL_TSI_PAD_PF13
  *           @arg @ref FL_TSI_PAD_PF14
  *           @arg @ref FL_TSI_PAD_PF15
  *           @arg @ref FL_TSI_PAD_PC0
  *           @arg @ref FL_TSI_PAD_PC1
  *           @arg @ref FL_TSI_PAD_PC2
  *           @arg @ref FL_TSI_PAD_PC3
  *           @arg @ref FL_TSI_PAD_PC4
  *           @arg @ref FL_TSI_PAD_PC5
  *           @arg @ref FL_TSI_PAD_PC6
  *           @arg @ref FL_TSI_PAD_PC7
  *           @arg @ref FL_TSI_PAD_PC8
  *           @arg @ref FL_TSI_PAD_PC9
  *           @arg @ref FL_TSI_PAD_PC10
  *           @arg @ref FL_TSI_PAD_PC11
  *           @arg @ref FL_TSI_PAD_PC12
  *           @arg @ref FL_TSI_PAD_PC13
  *           @arg @ref FL_TSI_PAD_PC14
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_PAD_SLEW_RATE_CONTROL_DEFAULT
  *           @arg @ref FL_TSI_PAD_SLEW_RATE_CONTROL_SLOW
  */
__STATIC_INLINE uint32_t FL_TSI_GetPadSlewRateControl(TSI_Type *TSIx, uint32_t pad)
{
    if(pad < 256)
    {
        return (uint32_t)(READ_BIT(TSIx->EMICR0, ((pad * pad) * (0x3U))) / (pad * pad));
    }
    else if(pad > 255 & pad < 4194305)
    {
        pad>>=8;
        return (uint32_t)(READ_BIT(TSIx->EMICR1, ((pad * pad) * (0x3U))) / (pad * pad));
    }
    else
    {
        return 0;
    }
}


/**
  * @brief    
  * @rmtoll           FL_TSI_EnableShieldChannel
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_CHANNEL_0
              @arg @ref FL_TSI_CHANNEL_1
              @arg @ref FL_TSI_CHANNEL_2
              @arg @ref FL_TSI_CHANNEL_3
              @arg @ref FL_TSI_CHANNEL_4                        
              @arg @ref FL_TSI_CHANNEL_5                        
              @arg @ref FL_TSI_CHANNEL_6                        
              @arg @ref FL_TSI_CHANNEL_7                        
              @arg @ref FL_TSI_CHANNEL_8                        
              @arg @ref FL_TSI_CHANNEL_9                        
              @arg @ref FL_TSI_CHANNEL_10                         
              @arg @ref FL_TSI_CHANNEL_11                        
              @arg @ref FL_TSI_CHANNEL_12                        
              @arg @ref FL_TSI_CHANNEL_13                        
              @arg @ref FL_TSI_CHANNEL_14                                     
              @arg @ref FL_TSI_CHANNEL_15                        
              @arg @ref FL_TSI_CHANNEL_16                        
              @arg @ref FL_TSI_CHANNEL_17                        
              @arg @ref FL_TSI_CHANNEL_18                        
              @arg @ref FL_TSI_CHANNEL_19                        
              @arg @ref FL_TSI_CHANNEL_20                        
              @arg @ref FL_TSI_CHANNEL_21                        
              @arg @ref FL_TSI_CHANNEL_22                        
              @arg @ref FL_TSI_CHANNEL_23                        
              @arg @ref FL_TSI_CHANNEL_24                        
              @arg @ref FL_TSI_CHANNEL_25                        
              @arg @ref FL_TSI_CHANNEL_26                        
              @arg @ref FL_TSI_CHANNEL_27                        
              @arg @ref FL_TSI_CHANNEL_28                        
              @arg @ref FL_TSI_CHANNEL_29                        
              @arg @ref FL_TSI_CHANNEL_30                        
              @arg @ref FL_TSI_CHANNEL_31                        
              @arg @ref FL_TSI_CHANNEL_32                        
              @arg @ref FL_TSI_CHANNEL_33                        
              @arg @ref FL_TSI_CHANNEL_34                        
              @arg @ref FL_TSI_CHANNEL_35  
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableShieldChannel(TSI_Type *TSIx, uint32_t channel)
{
    if(channel < 32)
    {
        SET_BIT(TSIx->SHLDCR0, 1<<channel);
    }
    else if(channel > 31 & channel < 36)
    {
        SET_BIT(TSIx->SHLDCR1, 1<<(channel - 32));
    }
}

/**
  * @brief    
  * @rmtoll           FL_TSI_DisableShieldChannel
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_CHANNEL_0
              @arg @ref FL_TSI_CHANNEL_1
              @arg @ref FL_TSI_CHANNEL_2
              @arg @ref FL_TSI_CHANNEL_3
              @arg @ref FL_TSI_CHANNEL_4                        
              @arg @ref FL_TSI_CHANNEL_5                        
              @arg @ref FL_TSI_CHANNEL_6                        
              @arg @ref FL_TSI_CHANNEL_7                        
              @arg @ref FL_TSI_CHANNEL_8                        
              @arg @ref FL_TSI_CHANNEL_9                        
              @arg @ref FL_TSI_CHANNEL_10                         
              @arg @ref FL_TSI_CHANNEL_11                        
              @arg @ref FL_TSI_CHANNEL_12                        
              @arg @ref FL_TSI_CHANNEL_13                        
              @arg @ref FL_TSI_CHANNEL_14                                     
              @arg @ref FL_TSI_CHANNEL_15                        
              @arg @ref FL_TSI_CHANNEL_16                        
              @arg @ref FL_TSI_CHANNEL_17                        
              @arg @ref FL_TSI_CHANNEL_18                        
              @arg @ref FL_TSI_CHANNEL_19                        
              @arg @ref FL_TSI_CHANNEL_20                        
              @arg @ref FL_TSI_CHANNEL_21                        
              @arg @ref FL_TSI_CHANNEL_22                        
              @arg @ref FL_TSI_CHANNEL_23                        
              @arg @ref FL_TSI_CHANNEL_24                        
              @arg @ref FL_TSI_CHANNEL_25                        
              @arg @ref FL_TSI_CHANNEL_26                        
              @arg @ref FL_TSI_CHANNEL_27                        
              @arg @ref FL_TSI_CHANNEL_28                        
              @arg @ref FL_TSI_CHANNEL_29                        
              @arg @ref FL_TSI_CHANNEL_30                        
              @arg @ref FL_TSI_CHANNEL_31                        
              @arg @ref FL_TSI_CHANNEL_32                        
              @arg @ref FL_TSI_CHANNEL_33                        
              @arg @ref FL_TSI_CHANNEL_34                        
              @arg @ref FL_TSI_CHANNEL_35  
  * @retval   None
  */
__STATIC_INLINE void  FL_TSI_DisableShieldChannel(TSI_Type *TSIx, uint32_t channel)
{
    if(channel < 32)
    {
        CLEAR_BIT(TSIx->SHLDCR0, 1<<channel);
    }
    else if(channel>31&channel<36)
    {
        CLEAR_BIT(TSIx->SHLDCR1, 1<<(channel - 32));
    }
}

/**
  * @brief    
  * @rmtoll           FL_TSI_IsEnabledShieldChannel
  * @param    TSIx TSI instance
  * @param    channel This parameter can be one of the following values:
  *           @arg @ref FL_TSI_CHANNEL_0
              @arg @ref FL_TSI_CHANNEL_1
              @arg @ref FL_TSI_CHANNEL_2
              @arg @ref FL_TSI_CHANNEL_3
              @arg @ref FL_TSI_CHANNEL_4                        
              @arg @ref FL_TSI_CHANNEL_5                        
              @arg @ref FL_TSI_CHANNEL_6                        
              @arg @ref FL_TSI_CHANNEL_7                        
              @arg @ref FL_TSI_CHANNEL_8                        
              @arg @ref FL_TSI_CHANNEL_9                        
              @arg @ref FL_TSI_CHANNEL_10                         
              @arg @ref FL_TSI_CHANNEL_11                        
              @arg @ref FL_TSI_CHANNEL_12                        
              @arg @ref FL_TSI_CHANNEL_13                        
              @arg @ref FL_TSI_CHANNEL_14                                     
              @arg @ref FL_TSI_CHANNEL_15                        
              @arg @ref FL_TSI_CHANNEL_16                        
              @arg @ref FL_TSI_CHANNEL_17                        
              @arg @ref FL_TSI_CHANNEL_18                        
              @arg @ref FL_TSI_CHANNEL_19                        
              @arg @ref FL_TSI_CHANNEL_20                        
              @arg @ref FL_TSI_CHANNEL_21                        
              @arg @ref FL_TSI_CHANNEL_22                        
              @arg @ref FL_TSI_CHANNEL_23                        
              @arg @ref FL_TSI_CHANNEL_24                        
              @arg @ref FL_TSI_CHANNEL_25                        
              @arg @ref FL_TSI_CHANNEL_26                        
              @arg @ref FL_TSI_CHANNEL_27                        
              @arg @ref FL_TSI_CHANNEL_28                        
              @arg @ref FL_TSI_CHANNEL_29                        
              @arg @ref FL_TSI_CHANNEL_30                        
              @arg @ref FL_TSI_CHANNEL_31                        
              @arg @ref FL_TSI_CHANNEL_32                        
              @arg @ref FL_TSI_CHANNEL_33                        
              @arg @ref FL_TSI_CHANNEL_34                        
              @arg @ref FL_TSI_CHANNEL_35  
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledShieldChannel(TSI_Type *TSIx, uint32_t channel)
{
    if(channel < 32)
    {
        return (uint32_t)(READ_BIT(TSIx->SHLDCR0, 1<<channel) == (1<<channel));
    }
    else if(channel > 31 & channel < 36)
    {
        return (uint32_t)(READ_BIT(TSIx->SHLDCR1, 1<<(channel-32)) == (1<<(channel-32)));
    }
    else
    {
        return 0;
    }
}

/**
  * @brief    
  * @rmtoll   CKCR    MOD_PRSC    FL_TSI_WriteModClockPrescaler
  * @param    TSIx TSI instance
  * @param    prsc 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WriteModClockPrescaler(TSI_Type *TSIx, uint32_t prsc)
{
    MODIFY_REG(TSIx->CKCR, (0xffU << 8U), (prsc << 8U));
}

/**
  * @brief    
  * @rmtoll   CKCR    MOD_PRSC    FL_TSI_ReadModClockPrescaler
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadModClockPrescaler(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CKCR, (0xffU << 8U)) >> 8U);
}

/**
  * @brief    
  * @rmtoll   CKCR    SSC_FPT    FL_TSI_SetSSCPointNum
  * @param    TSIx TSI instance
  * @param    point This parameter can be one of the following values:
  *           @arg @ref FL_TSI_SSC_FPT_32
  *           @arg @ref FL_TSI_SSC_FPT_64
  *           @arg @ref FL_TSI_SSC_FPT_128
  *           @arg @ref FL_TSI_SSC_FPT_256
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetSSCPointNum(TSI_Type *TSIx, uint32_t point)
{
    MODIFY_REG(TSIx->CKCR, TSI_CKCR_SSC_FPT_Msk, point);
}

/**
  * @brief    
  * @rmtoll   CKCR    SSC_FPT    FL_TSI_GetSSCPointNum
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_SSC_FPT_32
  *           @arg @ref FL_TSI_SSC_FPT_64
  *           @arg @ref FL_TSI_SSC_FPT_128
  *           @arg @ref FL_TSI_SSC_FPT_256
  */
__STATIC_INLINE uint32_t FL_TSI_GetSSCPointNum(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CKCR, TSI_CKCR_SSC_FPT_Msk));
}

/**
  * @brief    
  * @rmtoll   CKCR    SSCEN    FL_TSI_EnableSSCClock
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnableSSCClock(TSI_Type *TSIx)
{
    SET_BIT(TSIx->CKCR, TSI_CKCR_SSCEN_Msk);
}

/**
  * @brief    
  * @rmtoll   CKCR    SSCEN    FL_TSI_DisableSSCClock
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisableSSCClock(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->CKCR, TSI_CKCR_SSCEN_Msk);
}

/**
  * @brief    
  * @rmtoll   CKCR    SSCEN    FL_TSI_IsEnabledSSCClock
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledSSCClock(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CKCR, TSI_CKCR_SSCEN_Msk) == TSI_CKCR_SSCEN_Msk);
}

/**
  * @brief    
  * @rmtoll   CKCR    SNSSEL    FL_TSI_SetSenseClockSelect
  * @param    TSIx TSI instance
  * @param    clock This parameter can be one of the following values:
  *           @arg @ref FL_TSI_SNSSEL_FMOD
  *           @arg @ref FL_TSI_SNSSEL_PLL_TSI
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetSenseClockSelect(TSI_Type *TSIx, uint32_t clock)
{
    MODIFY_REG(TSIx->CKCR, TSI_CKCR_SNSSEL_Msk, clock);
}

/**
  * @brief    
  * @rmtoll   CKCR    SNSSEL    FL_TSI_GetSenseClockSelect
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_SNSSEL_FMOD
  *           @arg @ref FL_TSI_SNSSEL_PLL_TSI
  */
__STATIC_INLINE uint32_t FL_TSI_GetSenseClockSelect(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->CKCR, TSI_CKCR_SNSSEL_Msk));
}

/**
  * @brief    
  * @rmtoll   PRSSW    PRS_SW_WIDTH    FL_TSI_WritePRSWidth
  * @param    TSIx TSI instance
  * @param    width 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WritePRSWidth(TSI_Type *TSIx, uint32_t width)
{
    MODIFY_REG(TSIx->PRSSW, (0xfU << 16U), (width << 16U));
}

/**
  * @brief    
  * @rmtoll   PRSSW    PRS_SW_WIDTH    FL_TSI_ReadPRSWidth
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadPRSWidth(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->PRSSW, (0xfU << 16U)) >> 16U);
}

/**
  * @brief    
  * @rmtoll   PRSSW    PRS_SW    FL_TSI_WritePRSCoeff
  * @param    TSIx TSI instance
  * @param    coefficient 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WritePRSCoeff(TSI_Type *TSIx, uint32_t coefficient)
{
    MODIFY_REG(TSIx->PRSSW, (0x1fffU << 0U), (coefficient << 0U));
}

/**
  * @brief    
  * @rmtoll   PRSSW    PRS_SW    FL_TSI_ReadPRSCoeff
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadPRSCoeff(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->PRSSW, (0x1fffU << 0U)) >> 0U);
}

/**
  * @brief    
  * @rmtoll   PLLCR    PLLDB    FL_TSI_WritePLLMultiplier
  * @param    TSIx TSI instance
  * @param    multiple 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WritePLLMultiplier(TSI_Type *TSIx, uint32_t multiple)
{
    MODIFY_REG(TSIx->PLLCR, (0x3ffU << 16U), (multiple << 16U));
}

/**
  * @brief    
  * @rmtoll   PLLCR    PLLDB    FL_TSI_GetPLLMultiplier
  * @param    TSIx TSI instance
  * @retval   Returned value can be one of the following values:
  *           @arg @ref FL_TSI_PLLDB_DB_32
  *           @arg @ref FL_TSI_PLLDB_DB_48
  *           @arg @ref FL_TSI_PLLDB_DB_64
  *           @arg @ref FL_TSI_PLLDB_DB_72
  */
__STATIC_INLINE uint32_t FL_TSI_GetPLLMultiplier(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->PLLCR, TSI_PLLCR_PLLDB_Msk));
}

/**
  * @brief    
  * @rmtoll   PLLCR    LOCKED    FL_TSI_IsActiveFlag_PLLReady
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsActiveFlag_PLLReady(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->PLLCR, TSI_PLLCR_LOCKED_Msk) == (TSI_PLLCR_LOCKED_Msk));
}

/**
  * @brief    
  * @rmtoll   PLLCR    REFPRSC    FL_TSI_SetPLLPrescaler
  * @param    TSIx TSI instance
  * @param    prsc 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_SetPLLPrescaler(TSI_Type *TSIx, uint32_t prsc)
{
    MODIFY_REG(TSIx->PLLCR, TSI_PLLCR_REFPRSC_Msk, prsc << 1U);
}

/**
  * @brief    
  * @rmtoll   PLLCR    REFPRSC    FL_TSI_GetPLLPrescaler
  * @param    TSIx TSI instance
  * @retval   0-127:
  */
__STATIC_INLINE uint32_t FL_TSI_GetPLLPrescaler(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->PLLCR, TSI_PLLCR_REFPRSC_Msk >> 1U));
}

/**
  * @brief    
  * @rmtoll   PLLCR    PLLEN    FL_TSI_EnablePLL
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_EnablePLL(TSI_Type *TSIx)
{
    SET_BIT(TSIx->PLLCR, TSI_PLLCR_PLLEN_Msk);
}

/**
  * @brief    
  * @rmtoll   PLLCR    PLLEN    FL_TSI_DisablePLL
  * @param    TSIx TSI instance
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_DisablePLL(TSI_Type *TSIx)
{
    CLEAR_BIT(TSIx->PLLCR, TSI_PLLCR_PLLEN_Msk);
}

/**
  * @brief    
  * @rmtoll   PLLCR    PLLEN    FL_TSI_IsEnabledPLL
  * @param    TSIx TSI instance
  * @retval   State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t FL_TSI_IsEnabledPLL(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->PLLCR, TSI_PLLCR_PLLEN_Msk) == TSI_PLLCR_PLLEN_Msk);
}

/**
  * @brief    
  * @rmtoll   PRSSSC    PRS_SSC_WIDTH    FL_TSI_WritePRSSSCWidth
  * @param    TSIx TSI instance
  * @param    width 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WritePRSSSCWidth(TSI_Type *TSIx, uint32_t width)
{
    MODIFY_REG(TSIx->PRSSSC, (0xfU << 16U), (width << 16U));
}

/**
  * @brief    
  * @rmtoll   PRSSSC    PRS_SSC_WIDTH    FL_TSI_ReadPRSSSCWidth
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadPRSSSCWidth(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->PRSSSC, (0xfU << 16U)) >> 16U);
}

/**
  * @brief    
  * @rmtoll   PRSSSC    PRS_SSC    FL_TSI_WritePRSSSC
  * @param    TSIx TSI instance
  * @param    coefficient 
  * @retval   None
  */
__STATIC_INLINE void FL_TSI_WritePRSSSC(TSI_Type *TSIx, uint32_t coefficient)
{
    MODIFY_REG(TSIx->PRSSSC, (0x1fffU << 0U), (coefficient << 0U));
}

/**
  * @brief    
  * @rmtoll   PRSSSC    PRS_SSC    FL_TSI_ReadPRSSSC
  * @param    TSIx TSI instance
  * @retval   
  */
__STATIC_INLINE uint32_t FL_TSI_ReadPRSSSC(TSI_Type *TSIx)
{
    return (uint32_t)(READ_BIT(TSIx->PRSSSC, (0x1fffU << 0U)) >> 0U);
}

/**
  * @}
  */

/** @defgroup TSI_FL_EF_Init Initialization and de-initialization functions
  * @{
  */


/**
  * @}
  */


/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __FM33HT0XXA_FL_TSI_H*/

/*************************Py_Code_Generator Version: 0.1-0.14-0.1 @ 2024-01-08*************************/
/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/

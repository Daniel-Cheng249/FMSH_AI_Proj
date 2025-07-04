/**
 *******************************************************************************************************
 * @file    fm33ht0xxa_fl_dma.c
 * @author  FMSH Application Team
 * @brief   Src file of DMA FL Module
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
/* Includes ------------------------------------------------------------------*/
#include "fm33ht0xxa_fl.h"

/** @addtogroup FM33HT0xxA_FL_Driver
 * @{
 */

/** @addtogroup DMA
 * @{
 */

#ifdef FL_DMA_DRIVER_ENABLED

/* Private macros ------------------------------------------------------------*/
/** @addtogroup DMA_FL_Private_Macros
 * @{
 */

#define IS_FL_DMA_INSTANCE(INTANCE) ((INTANCE) == DMA)

#define IS_FL_DMA_PRIORITY(__VALUE__) (((__VALUE__) == FL_DMA_PRIORITY_LOW) ||    \
                                       ((__VALUE__) == FL_DMA_PRIORITY_MEDIUM) || \
                                       ((__VALUE__) == FL_DMA_PRIORITY_HIGH) ||   \
                                       ((__VALUE__) == FL_DMA_PRIORITY_VERYHIGH))

#define IS_FL_DMA_CIRC_MODE(__VALUE__) (((__VALUE__) == FL_DISABLE) || \
                                        ((__VALUE__) == FL_ENABLE))

#define IS_FL_DMA_DBUF_MODE(__VALUE__) (((__VALUE__) == FL_DISABLE) || \
                                        ((__VALUE__) == FL_ENABLE))

#define IS_FL_DMA_DIRECION(__VALUE__) (((__VALUE__) == FL_DMA_DIR_PERIPHERAL_TO_RAM) || \
                                       ((__VALUE__) == FL_DMA_DIR_RAM_TO_PERIPHERAL) || \
                                       ((__VALUE__) == FL_DMA_DIR_FLASH_TO_RAM) ||      \
                                       ((__VALUE__) == FL_DMA_DIR_RAM_TO_FLASH))

#define IS_FL_DMA_DATA_SIZE(__VALUE__) (((__VALUE__) == FL_DMA_BANDWIDTH_8B) ||  \
                                        ((__VALUE__) == FL_DMA_BANDWIDTH_16B) || \
                                        ((__VALUE__) == FL_DMA_BANDWIDTH_32B))

#define IS_FL_DMA_MEM_INCMODE(__VALUE__) (((__VALUE__) == FL_DMA_MEMORY_INC_MODE_NOCHANGE) ||  \
                                          ((__VALUE__) == FL_DMA_MEMORY_INC_MODE_INCREASE) ||  \
                                          ((__VALUE__) == FL_DMA_MEMORY_INC_MODE_DECREASE) ||  \
                                          ((__VALUE__) == FL_DMA_CH7_RAM_INC_MODE_INCREASE) || \
                                          ((__VALUE__) == FL_DMA_CH7_RAM_INC_MODE_DECREASE))

#define IS_FL_DMA_PER_INCMODE(__VALUE__) (((__VALUE__) == FL_DMA_PERIPHERAL_INC_MODE_NOCHANGE) || \
                                          ((__VALUE__) == FL_DMA_PERIPHERAL_INC_MODE_INCREASE) || \
                                          ((__VALUE__) == FL_DMA_PERIPHERAL_INC_MODE_DECREASE) || \
                                          ((__VALUE__) == FL_DMA_CH7_FLASH_INC_MODE_INCREASE) ||  \
                                          ((__VALUE__) == FL_DMA_CH7_FLASH_INC_MODE_DECREASE))

#define IS_FL_DMA_PERIPH(__VALUE__) (((__VALUE__) < FL_DMA_CHANNEL_MAX))

/**
 * @}
 */

/* Private consts ------------------------------------------------------------*/
/** @addtogroup DMA_FL_Private_Consts
 * @{
 */

/**
 * @}
 */

/* Private function prototypes -----------------------------------------------*/

/* Exported functions --------------------------------------------------------*/
/** @addtogroup DMA_FL_EF_Init
 * @{
 */

/**
 * @brief  复位对应DMA寄存器.
 * @param  DMAx
 * @retval ErrorStatus枚举值:
 *         -FL_PASS 外设寄存器值恢复复位值
 *         -FL_FAIL 未成功执行
 */
FL_ErrorStatus FL_DMA_DeInit(DMA_Type *DMAx)
{
    assert_param(IS_FL_DMA_INSTANCE(DMAx));
    /* 使能外设复位 */
    FL_RMU_EnablePeripheralReset(RMU);
    /* 复位外设寄存器 */
    FL_RMU_EnableResetAHBPeripheral(RMU, FL_RMU_RSTAHB_DMA);
    FL_RMU_DisableResetAHBPeripheral(RMU, FL_RMU_RSTAHB_DMA);
    /* 关闭外设总线始时钟和工作时钟 */
    FL_CMU_DisableGroup2BusClock(FL_CMU_GROUP2_BUSCLK_DMA);
    /* 锁定外设复位 */
    FL_RMU_DisablePeripheralReset(RMU);
    return FL_PASS;
}
/**
 * @brief  根据 DMA_InitStruct 的配置信息初始化对应外设入口地址的寄存器值.
 * @param  DMAx DMAx
 * @param  DMA_InitStruct 指向一个 @ref FL_DMA_InitTypeDef 结构体
 *         其中包含了外设的相关配置信息.
 * @param  Channel This parameter can be one of the following values:
 *           @arg @ref FL_DMA_CHANNEL_0
 *           @arg @ref FL_DMA_CHANNEL_1
 *           @arg @ref FL_DMA_CHANNEL_2
 *           @arg @ref FL_DMA_CHANNEL_3
 *           @arg @ref FL_DMA_CHANNEL_7
 * @retval ErrorStatus枚举值
 *         -FL_FAIL 配置过程发生错误
 *         -FL_PASS 配置成功
 */
FL_ErrorStatus FL_DMA_Init(DMA_Type *DMAx, FL_DMA_InitTypeDef *initStruct, uint32_t channel)
{
    FL_ErrorStatus status = FL_FAIL;
    if (initStruct != NULL)
    {
        /* 参数检查 */
        assert_param(IS_FL_DMA_INSTANCE(DMAx));
        assert_param(IS_FL_DMA_PERIPH(initStruct->periphAddress));
        assert_param(IS_FL_DMA_DIRECION(initStruct->direction));
        assert_param(IS_FL_DMA_MEM_INCMODE(initStruct->memoryAddressIncMode));
        assert_param(IS_FL_DMA_PER_INCMODE(initStruct->peripheralAddressIncMode));
        assert_param(IS_FL_DMA_DATA_SIZE(initStruct->dataSize));
        assert_param(IS_FL_DMA_PRIORITY(initStruct->priority));
        assert_param(IS_FL_DMA_CIRC_MODE(initStruct->circMode));
        assert_param(IS_FL_DMA_DBUF_MODE(initStruct->dbufMode));
        
        /* 开启时钟 */
        FL_CMU_EnableGroup2BusClock(FL_CMU_GROUP2_BUSCLK_DMA);
        /* 配置通道优先级 */
        FL_DMA_SetPriority(DMAx, initStruct->priority, channel);
        if (channel != FL_DMA_CHANNEL_7)
        {
            /* RAM地址方向 */
            FL_DMA_SetMemoryIncrementMode(DMAx, initStruct->memoryAddressIncMode, channel);
            /* 外设地址方向 */
            FL_DMA_SetPeripheralIncrementMode(DMAx, initStruct->peripheralAddressIncMode, channel);
        }
        else
        {
            FL_DMA_SetFlashMemoryIncrementMode(DMAx, initStruct->memoryAddressIncMode);
            FL_DMA_SetFlashAddrIncremental(DMAx, initStruct->peripheralAddressIncMode);
        }
        /* 传输方向 */
        FL_DMA_SetTransmissionDirection(DMAx, initStruct->direction, channel);
        /* 数据宽度 */
        FL_DMA_SetBandwidth(DMAx, initStruct->dataSize, channel);
        /* 循环模式 */
        if (initStruct->circMode == FL_ENABLE)
        {
            FL_DMA_EnableCircularMode(DMAx, channel);
        }
        else
        {
            FL_DMA_DisableCircularMode(DMAx, channel);
        }
        /* 双buffer模式 */
        if (initStruct->dbufMode == FL_ENABLE)
        {
            FL_DMA_EnableDoubleBuffering(DMAx, channel);
        }
        else
        {
            FL_DMA_DisableDoubleBuffering(DMAx, channel);
        }
        
        /* 如果是通道7 外设地址实际就是FLASH地址，因此这里针对通道7做了单独处理 */
        if (channel != FL_DMA_CHANNEL_7)
        {
            assert_param(IS_FL_DMA_PERIPH(initStruct->periphAddress));
            FL_DMA_SetPeripheralMap(DMAx, initStruct->periphAddress, channel);
        }
        status = FL_PASS;
        return status;
    }
    return status;
}
/**
 * @brief  设置 FL_DMA_InitTypeDef 为默认配置
 * @param  FL_DMA_InitTypeDef 指向需要将值设置为默认配置的结构体 @ref FL_DMA_InitTypeDef 结构体
 *
 * @retval None
 */

void FL_DMA_StructInit(FL_DMA_InitTypeDef *initStruct)
{
    if (initStruct != NULL)
    {
        initStruct->circMode = FL_DISABLE;
        initStruct->dataSize = FL_DMA_BANDWIDTH_8B;
        initStruct->direction = FL_DMA_DIR_PERIPHERAL_TO_RAM;
        initStruct->priority = FL_DMA_PRIORITY_LOW;
        initStruct->memoryAddressIncMode = FL_DMA_MEMORY_INC_MODE_INCREASE;
        initStruct->peripheralAddressIncMode = FL_DMA_PERIPHERAL_INC_MODE_NOCHANGE;
        initStruct->periphAddress = 0;
        initStruct->dbufMode = FL_DISABLE;
    }
}

/**
 * @brief  启动一次DMA传输.
 * @param  DMAx DMAx
 * @param  configStruct 指向一个 @ref FL_DMA_ConfigTypeDef 结构体
 *         其中包含了外设的相关配置信息.
 * @param  Channel This parameter can be one of the following values:
 *           @arg @ref FL_DMA_CHANNEL_0
 *           @arg @ref FL_DMA_CHANNEL_1
 *           @arg @ref FL_DMA_CHANNEL_2
 *           @arg @ref FL_DMA_CHANNEL_3
 *           @arg @ref FL_DMA_CHANNEL_7
 * @retval ErrorStatus枚举值
 *         -FL_FAIL 过程发生错误可能是超时也可能是地址非法
 *         -FL_PASS 成功
 */
FL_ErrorStatus FL_DMA_StartTransmission(DMA_Type *DMAx, FL_DMA_ConfigTypeDef *configStruct, uint32_t channel)
{
    FL_ErrorStatus status = FL_FAIL;
    if (configStruct != NULL)
    {
        /* 配置传输个数 */
        FL_DMA_WriteTransmissionSize(DMAx, configStruct->transmissionCount, channel);
        /* 配置外设地址 */
        FL_DMA_WritePeripheralAddress(DMAx, configStruct->peripheralAddress, channel);
        /* 配置Memory地址 */
        FL_DMA_WriteMemoryAddress0(DMAx, configStruct->memoryAddress0, channel);
        /* 配置Memory1地址 */
        FL_DMA_WriteMemoryAddress1(DMAx, configStruct->memoryAddress1, channel);
        /* 清除通道中断标志位 */
        FL_DMA_ClearFlag_TransferHalfComplete(DMAx, channel);
        FL_DMA_ClearFlag_TransferComplete(DMAx, channel);
        /* 使能DMA通道使能开关 */
        FL_DMA_EnableChannel(DMAx, channel);
        status = FL_PASS;
        return status;
    }
    return status;
}


/**
 * @}
 */

#endif /* FL_DMA_DRIVER_ENABLED */

/**
 * @}
 */

/**
 * @}
 */

/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/

/**************************************************************************************************** * @file     FM33FG0XXA.h
 *
 * @brief    CMSIS CORTEX-M0 Peripheral Access Layer Header File for
 *           FM33FG0XXA from Keil.
 *
 * @version  V0.0.1
 * @date     21 march 2023
 *
 * @note     Generated with SVDConv V2.87e 
 *           from CMSIS SVD File 'FM33FG0XXA.SVD' Version 1.0,
 *
 * @par      ARM Limited (ARM) is supplying this software for use with Cortex-M
 *           processor based microcontroller, but can be equally used for other
 *           suitable processor architectures. This file can be freely distributed.
 *           Modifications to this file shall be clearly marked.
 *
 *           THIS SOFTWARE IS PROVIDED “AS IS”. NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 *           OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 *           MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 *           ARM SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
 *           CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 *******************************************************************************************************/


/** @addtogroup Keil
  * @{
  */

/** @addtogroup FM33FG0XXA
  * @{
  */

#ifndef FM33FG0XXA_H
#define FM33FG0XXA_H

#ifdef __cplusplus
extern "C" {
#endif

#define __RCHF_INITIAL_CLOCK        (8000000)        /* Value of the Internal RC HIGH oscillator in Hz */
#define __RCMF_CLOCK                (4000000)        /* Value of the Internal RC 4M oscillator in Hz */
#define __LPOSC_CLOCK               (32000)          /* Value of the Internal RC LOW oscillator in Hz */
#define __XTHF_CLOCK                (8000000)        /* Value of the EXTERNAL oscillator in Hz */
#define __XTLF_CLOCK                (32768)          /* Value of the EXTERNAL oscillator in Hz */

#define __LOT_ID0                   (*((unsigned char *)0x1FFFFA20))
#define __LOT_ID1                   (*((unsigned char *)0x1FFFFA21))
#define __LOT_ID2                   (*((unsigned char *)0x1FFFFA22))
#define __LOT_ID3                   (*((unsigned char *)0x1FFFFA23))
#define __LOT_ID4                   (*((unsigned char *)0x1FFFFA24))
#define __LOT_ID5                   (*((unsigned char *)0x1FFFFA25))
/* CHIP_U01: 68Z869   
             68Z92W   
             68Z934 */
#define CHIP_U01  (((__LOT_ID0==6)&&(__LOT_ID1==8)&&(__LOT_ID2==35)&&(__LOT_ID3==8)&&(__LOT_ID4==6)&&(__LOT_ID5==9 )) ||\
                   ((__LOT_ID0==6)&&(__LOT_ID1==8)&&(__LOT_ID2==35)&&(__LOT_ID3==9)&&(__LOT_ID4==2)&&(__LOT_ID5==32)) ||\
                   ((__LOT_ID0==6)&&(__LOT_ID1==8)&&(__LOT_ID2==35)&&(__LOT_ID3==9)&&(__LOT_ID4==3)&&(__LOT_ID5==4 )))

/* -------------------------  Interrupt Number Definition  ------------------------ */

typedef enum {

/* ------------------  FM33FG0XXA Processor Exceptions Numbers  ------------------*/
  Reset_IRQn                    = -15,              /*!<   1  复位向量 */
  NMI_IRQn                      = -14,              /*!<   2  WKUPx中断，PMU中断，存储器非法访问中断，Flash ECC检错中断，RAM ECC检错中断 */
  HardFault_IRQn                = -13,              /*!<   3  HardFault中断向量 */
  SVC_IRQn                      = -5,               /*!<  11  SVCall系统服务请求 */
  PendSV_IRQn                   = -2,               /*!<  14  可挂起系统服务请求 */
  SysTick_IRQn                  = -1,               /*!<  15  内部定时器中断向量 */

/* --------------------  Cortex-M0 Specific Interrupt Numbers  --------------------*/
  WDT_IRQn                      = 0,                /*!<   0  窗口看门狗或独立看门狗中断 */
  SVD_IRQn                      = 1,                /*!<   1  电源监测报警中断 */
  RTC_IRQn                      = 2,                /*!<   2  实时时钟中断 */
  CANFD0_IRQn                   = 3,                /*!<   3  CAN-FD中断（包含唤醒中断） */
  CANFD1_IRQn                   = 4,                /*!<   4  CAN-FD中断（包含唤醒中断） */
  ADC_IRQn                      = 5,                /*!<   5  ADC转换完成中断 */
  FSCAN_IRQn                    = 6,                /*!<   6  FSCAN中断 */
  UART0_IRQn                    = 7,                /*!<   7  UART中断 */
  UART1_IRQn                    = 8,                /*!<   8  UART中断 */
  UART2_IRQn                    = 9,                /*!<   9  UART中断 */
  UART3_IRQn                    = 10,               /*!<  10  UART中断 */
  UART4_UART5_IRQn              = 11,               /*!<  11  UART中断，USART中断 */
  I2CMX_IRQn                    = 12,               /*!<  12  I2C_masterx中断 */
  SPI0_IRQn                     = 13,               /*!<  13  SPI中断 */
  SPI1_IRQn                     = 14,               /*!<  14  SPI中断 */
  SPI2_IRQn                     = 15,               /*!<  15  SPI中断 */
  SPI3_IRQn                     = 16,               /*!<  16  SPI中断 */
  I2C_SMBX_IRQn                 = 17,               /*!<  17  I2C SMBUSx中断 */
  SENTX_IRQn                    = 18,               /*!<  18  SENTx中断 */
  AES_IRQn                      = 19,               /*!<  19  AES中断 */
  LPTIM_BSTIM_IRQn              = 20,               /*!<  20  LPTIM16中断，LPTIM32中断，BSTIM16中断， BSTIM32中断 */
  DMA_IRQn                      = 21,               /*!<  21  DMA中断 */
  WKUPX_IRQn                    = 22,               /*!<  22  WKUPx引脚中断 */
  TAU_PGL_IRQn                  = 23,               /*!<  23  TAU中断，PGL中断 */
  GPTIMX_IRQn                   = 24,               /*!<  24  GPTIMx中断 */
  COMPX_IRQn                    = 25,               /*!<  25  COMPx中断 */
  CLMX_IRQn                     = 26,               /*!<  26  CLMx时钟监控中断 */
  NVMIF_IRQn                    = 27,               /*!<  27  NVMIF中断 */
  ATIM_IRQn                     = 28,               /*!<  28  高级定时器中断 */
  LPUART_IRQn                   = 29,               /*!<  29  LPUART中断 */
  EXTI_DAC_IRQn                 = 30,               /*!<  30  外部引脚中断，DAC中断 */
  ECCC_RAMP_FDET_IRQn           = 31,               /*!<  31  Flash ECC纠错中断，RAM ECC纠错中断，XTLF或XTHF停振检测中断 */

} IRQn_Type;


/** @addtogroup Configuration_of_CMSIS
  * @{
  */

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/* ----------------Configuration of the CORTEX-M0 Processor and Core Peripherals---------------- */
#define __CM0_REV                 0x0100            /*!< CORTEX-M0 Core Revision                                               */
#define __MPU_PRESENT                  1            /*!< MPU present or not                                                    */
#define __VTOR_PRESENT                 1            /*!< VTOR present or not                                                   */
#define __NVIC_PRIO_BITS               2            /*!< Number of Bits used for Priority Levels                               */
#define __Vendor_SysTickConfig         0            /*!< Set to 1 if different SysTick Config is used                          */
/** @} */ /* End of group Configuration_of_CMSIS */

#include "core_cm0plus.h"                           /*!< Cortex-M0 processor and core peripherals */
#include "system_fm33fg0xxa.h"                      /*!< FM33FG0XXA System */

/* ================================================================================ */
/* ================       Device Specific Peripheral Section       ================ */
/* ================================================================================ */

/** @addtogroup Device_Peripheral_Registers
  * @{
  */

/* -------------------  Start of section using anonymous unions  ------------------ */
#if defined(__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined(__ICCARM__)
  #pragma language=extended
#elif defined(__GNUC__)
/* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning 586
#else
#warning Not supported compiler type
#endif


/* ================================================================================ */
/* ================                       FLASH                    ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t RDCR;                   /*!<  Flash Read Control Register,                          Address offset: 0x00 */
  __IO uint32_t RSV1;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x04 */
  __IO uint32_t OPTBR;                  /*!<  Flash Option Bytes Register,                          Address offset: 0x08 */
  __IO uint32_t RSV2[2];                /*!<  RESERVED REGISTER,                                    Address offset: 0x0C */
  __IO uint32_t CFLS_EPCR;              /*!<  Code Flash Erase/Program Control Register,            Address offset: 0x14 */
  __O  uint32_t CFLS_KEY;               /*!<  Code Flash Key Register,                              Address offset: 0x18 */
  __IO uint32_t CFLS_IER;               /*!<  Code Flash Interrupt Enable Register,                 Address offset: 0x1C */
  __IO uint32_t CFLS_ISR;               /*!<  Code Flash Interrupt Status Register,                 Address offset: 0x20 */
  __IO uint32_t RSV3;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x24 */
  __IO uint32_t CFLS_ECCR;              /*!<  ,                                                     Address offset: 0x28 */
  __IO uint32_t DFLS_ECCR;              /*!<  ,                                                     Address offset: 0x2C */
  __IO uint32_t RAM_ECCR;               /*!<  ,                                                     Address offset: 0x30 */
  __IO uint32_t RSV4[7];                /*!<  RESERVED REGISTER,                                    Address offset: 0x34 */
  __IO uint32_t HSRAM1_CFGR;            /*!<  ,                                                     Address offset: 0x50 */
  __IO uint32_t HSRAM2_CFGR;            /*!<  ,                                                     Address offset: 0x54 */
  __IO uint32_t RSV5[2];                /*!<  RESERVED REGISTER,                                    Address offset: 0x58 */
  __IO uint32_t ACLOCK1;                /*!<  Flash Application Code Lock Register1,                Address offset: 0x60 */
  __IO uint32_t ACLOCK2;                /*!<  Flash Application Code Lock Register2,                Address offset: 0x64 */
  __IO uint32_t ACLOCK3;                /*!<  Flash Application Code Lock Register3,                Address offset: 0x68 */
  __IO uint32_t ACLOCK4;                /*!<  Flash Application Code Lock Register4,                Address offset: 0x6C */
  __IO uint32_t RSV6[8];                /*!<  RESERVED REGISTER,                                    Address offset: 0x70 */
  __IO uint32_t DFLS_EPCR;              /*!<  Data Flash Erase/Program Control Register,            Address offset: 0x90 */
  __O  uint32_t DFLS_KEY;               /*!<  Data Flash Key Register,                              Address offset: 0x94 */
  __IO uint32_t DFLS_IER;               /*!<  Data Flash Interrupt Enable Register,                 Address offset: 0x98 */
  __IO uint32_t DFLS_ISR;               /*!<  Data Flash Interrupt Status Register,                 Address offset: 0x9C */
  __IO uint32_t RSV7[24];               /*!<  RESERVED REGISTER,                                    Address offset: 0xA0 */
  __I  uint32_t RAM_RAW0;               /*!<  ,                                                     Address offset: 0x100 */
  __I  uint32_t RAM_RAW1;               /*!<  ,                                                     Address offset: 0x104 */
  __I  uint32_t DFLS_RAW0;              /*!<  ,                                                     Address offset: 0x108 */
  __I  uint32_t DFLS_RAW1;              /*!<  ,                                                     Address offset: 0x10C */
  __IO uint32_t RSV8[60];               /*!<  RESERVED REGISTER,                                    Address offset: 0x110 */
  __O  uint32_t BDVR;                   /*!<  ,                                                     Address offset: 0x200 */
  __IO uint32_t BDCR0;                  /*!<  ,                                                     Address offset: 0x204 */
  __IO uint32_t BDCR1;                  /*!<  ,                                                     Address offset: 0x208 */
  __I  uint32_t BDSR;                   /*!<  ,                                                     Address offset: 0x20C */
}FLASH_Type;


/* ================================================================================ */
/* ================                       PMU                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR;                     /*!<  Power Management Control Register,                    Address offset: 0x00 */
  __IO uint32_t WKTR;                   /*!<  Wakeup Time Register,                                 Address offset: 0x04 */
  __IO uint32_t WKFR;                   /*!<  Wakeup Source Flags Register,                         Address offset: 0x08 */
  __IO uint32_t IER;                    /*!<  PMU Interrupt Enable Register,                        Address offset: 0x0C */
  __IO uint32_t ISR;                    /*!<  PMU Interrupt and Status Register,                    Address offset: 0x10 */
  __IO uint32_t RSV1[10];               /*!<  RESERVED REGISTER,                                    Address offset: 0x14 */
  __IO uint32_t BUFCR;                  /*!<  PMU Analog Buffer Control Register,                   Address offset: 0x3C */
  __IO uint32_t RSV2[4];                /*!<  RESERVED REGISTER,                                    Address offset: 0x40 */
  __IO uint32_t PTAT_CR;                /*!<  PMU PTAT Control Register,                            Address offset: 0x50 */
  __IO uint32_t RSV3[11];               /*!<  RESERVED REGISTER,                                    Address offset: 0x54 */
  __IO uint32_t CFDCK_CR;               /*!<  ,                                                     Address offset: 0x80 */
  __IO uint32_t CFDCK_SR;               /*!<  ,                                                     Address offset: 0x84 */
}PMU_Type;


/* ================================================================================ */
/* ================                       SCU                      ================ */
/* ================================================================================ */

typedef struct
{
  __I  uint32_t SYSCON;                 /*!<  Memory Capacity Query Register,                       Address offset: 0x00 */
  __IO uint32_t RSV1;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x04 */
  __IO uint32_t HDFFLAG;                /*!<  Hardfault Query Register,                             Address offset: 0x08 */
}SCU_Type;


/* ================================================================================ */
/* ================                       RMU                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t PDRCR;                  /*!<  PDR Control Register,                                 Address offset: 0x00 */
  __IO uint32_t BORCR;                  /*!<  BOR Control Register,                                 Address offset: 0x04 */
  __IO uint32_t LKPCR;                  /*!<  Reset Config Register,                                Address offset: 0x08 */
  __O  uint32_t SOFTRST;                /*!<  Software Reset Register,                              Address offset: 0x0C */
  __IO uint32_t RSTFR;                  /*!<  Reset Flag Register,                                  Address offset: 0x10 */
  __O  uint32_t PRSTEN;                 /*!<  Peripheral Reset Enable Register,                     Address offset: 0x14 */
  __IO uint32_t AHBRSTCR;               /*!<  Peripheral Reset Enable Register,                     Address offset: 0x18 */
  __IO uint32_t APBRSTCR1;              /*!<  APB Peripherals Reset Register1,                      Address offset: 0x1C */
  __IO uint32_t APBRSTCR2;              /*!<  APB Peripherals Reset Register1,                      Address offset: 0x20 */
}RMU_Type;


/* ================================================================================ */
/* ================                      IWDT                      ================ */
/* ================================================================================ */

typedef struct
{
  __O  uint32_t SERV;                   /*!<  IWDT Service Register,                                Address offset: 0x00 */
  __IO uint32_t CR;                     /*!<  IWDT Config Register,                                 Address offset: 0x04 */
  __I  uint32_t CNT;                    /*!<  IWDT Counter Register,                                Address offset: 0x08 */
  __IO uint32_t WIN;                    /*!<  IWDT Window Register,                                 Address offset: 0x0C */
  __IO uint32_t IER;                    /*!<  IWDT Interrupt Enable Register,                       Address offset: 0x10 */
  __IO uint32_t ISR;                    /*!<  IWDT Interrupt Status Register,                       Address offset: 0x14 */
}IWDT_Type;


/* ================================================================================ */
/* ================                      WWDT                      ================ */
/* ================================================================================ */

typedef struct
{
  __O  uint32_t CR;                     /*!<  WWDT Control Register,                                Address offset: 0x00 */
  __IO uint32_t CFGR;                   /*!<  WWDT Config Register,                                 Address offset: 0x04 */
  __I  uint32_t CNT;                    /*!<  WWDT Counter Register,                                Address offset: 0x08 */
  __IO uint32_t IER;                    /*!<  WWDT Interrupt Enable Register,                       Address offset: 0x0C */
  __IO uint32_t ISR;                    /*!<  WWDT Interrupt Status Register,                       Address offset: 0x10 */
  __I  uint32_t PSC;                    /*!<  WWDT Prescaler Register,                              Address offset: 0x14 */
}WWDT_Type;


/* ================================================================================ */
/* ================                       CMU                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t SYSCLKCR;               /*!<  System Clock Control Register,                        Address offset: 0x00 */
  __IO uint32_t RCHFCR;                 /*!<  RCHF Control Register,                                Address offset: 0x04 */
  __IO uint32_t RCHFTR;                 /*!<  RCHF Trim Register,                                   Address offset: 0x08 */
  __IO uint32_t PLLCR;                  /*!<  PLL Control Register,                                 Address offset: 0x0C */
  __IO uint32_t RSV1;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x10 */
  __IO uint32_t RCLPTR;                 /*!<  RCLP Trim Register,                                   Address offset: 0x14 */
  __IO uint32_t XTLFCR;                 /*!<  XTLF Control Register,                                Address offset: 0x18 */
  __IO uint32_t LSCLKSEL;               /*!<  LSCLK Select Register,                                Address offset: 0x1C */
  __IO uint32_t XTHFCR;                 /*!<  XTHF Control Register,                                Address offset: 0x20 */
  __IO uint32_t RSV2[2];                /*!<  RESERVED REGISTER,                                    Address offset: 0x24 */
  __IO uint32_t IER;                    /*!<  Interrupt Enable Register,                            Address offset: 0x2C */
  __IO uint32_t ISR;                    /*!<  Interrupt Status Register,                            Address offset: 0x30 */
  __IO uint32_t PCLKCR1;                /*!<  Peripheral bus Clock Control Register1,               Address offset: 0x34 */
  __IO uint32_t PCLKCR2;                /*!<  Peripheral bus Clock Control Register2,               Address offset: 0x38 */
  __IO uint32_t PCLKCR3;                /*!<  Peripheral bus Clock Control Register3,               Address offset: 0x3C */
  __IO uint32_t PCLKCR4;                /*!<  Peripheral bus Clock Control Register4,               Address offset: 0x40 */
  __IO uint32_t OPCCR1;                 /*!<  Peripheral Clock Config Register1,                    Address offset: 0x44 */
  __IO uint32_t OPCCR2;                 /*!<  Peripheral Clock Config Register 2,                   Address offset: 0x48 */
  __IO uint32_t OPCCR3;                 /*!<  Peripheral Clock Enable Register,                     Address offset: 0x4C */
  __IO uint32_t AHBMCR;                 /*!<  AHB Master Control Register,                          Address offset: 0x50 */
  __IO uint32_t RSV3[11];               /*!<  RESERVED REGISTER,                                    Address offset: 0x54 */
  __IO uint32_t CFDCR;                  /*!<  CANFD Clock Config Register,                          Address offset: 0x80 */
  __IO uint32_t CFDER;                  /*!<  CANFD Clock Enable Register,                          Address offset: 0x84 */
}CMU_Type;


/* ================================================================================ */
/* ================                      CLMx                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR;                     /*!<  Clock Monitor Control Register,                       Address offset: 0x00 */
  __IO uint32_t CFGR;                   /*!<  Clock Monitor Configuration Register,                 Address offset: 0x04 */
  __IO uint32_t CNTR;                   /*!<  Clock Monitor Count Value Register,                   Address offset: 0x08 */
  __IO uint32_t ISR;                    /*!<  Clock Monitor Interrupt Flag Register,                Address offset: 0x0C */
  __IO uint32_t CMPH;                   /*!<  Clock Monitor Compare High Threshold Register,        Address offset: 0x10 */
  __IO uint32_t CMPL;                   /*!<  Clock Monitor Compare Low Threshold Register,         Address offset: 0x14 */
}CLM_Type;


/* ================================================================================ */
/* ================                       SVD                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CFGR;                   /*!<  SVD Config Register,                                  Address offset: 0x00 */
  __IO uint32_t CR;                     /*!<  SVD Control Register,                                 Address offset: 0x04 */
  __IO uint32_t IER;                    /*!<  SVD Interrupt Enable Register,                        Address offset: 0x08 */
  __IO uint32_t ISR;                    /*!<  SVD Interrupt Status Register,                        Address offset: 0x0C */
  __IO uint32_t VSR;                    /*!<  SVD reference Voltage Select Register,                Address offset: 0x10 */
}SVD_Type;


/* ================================================================================ */
/* ================                       AES                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR;                     /*!<  AES Control Register,                                 Address offset: 0x00 */
  __IO uint32_t IER;                    /*!<  AES Interrupt Enable Register,                        Address offset: 0x04 */
  __IO uint32_t ISR;                    /*!<  AES Interrupt Status Register,                        Address offset: 0x08 */
  __IO uint32_t DIR;                    /*!<  AES Data Input Register,                              Address offset: 0x0C */
  __I  uint32_t DOR;                    /*!<  AES Data Output Register,                             Address offset: 0x10 */
  __IO uint32_t KEY0;                   /*!<  AES Key Register 0,                                   Address offset: 0x14 */
  __IO uint32_t KEY1;                   /*!<  AES Key Register 1,                                   Address offset: 0x18 */
  __IO uint32_t KEY2;                   /*!<  AES Key Register 2,                                   Address offset: 0x1C */
  __IO uint32_t KEY3;                   /*!<  AES Key Register 3,                                   Address offset: 0x20 */
  __IO uint32_t KEY4;                   /*!<  AES Key Register 4,                                   Address offset: 0x24 */
  __IO uint32_t KEY5;                   /*!<  AES Key Register 5,                                   Address offset: 0x28 */
  __IO uint32_t KEY6;                   /*!<  AES Key Register 6,                                   Address offset: 0x2C */
  __IO uint32_t KEY7;                   /*!<  AES Key Register 7,                                   Address offset: 0x30 */
  __IO uint32_t IVR0;                   /*!<  AES Initial Vector Register 0,                        Address offset: 0x34 */
  __IO uint32_t IVR1;                   /*!<  AES Initial Vector Register 1,                        Address offset: 0x38 */
  __IO uint32_t IVR2;                   /*!<  AES Initial Vector Register 2,                        Address offset: 0x3C */
  __IO uint32_t IVR3;                   /*!<  AES Initial Vector Register 3,                        Address offset: 0x40 */
  __IO uint32_t H0;                     /*!<  AES MultH parameter Register 0,                       Address offset: 0x44 */
  __IO uint32_t H1;                     /*!<  AES MultH parameter Register 1,                       Address offset: 0x48 */
  __IO uint32_t H2;                     /*!<  AES MultH parameter Register 2,                       Address offset: 0x4C */
  __IO uint32_t H3;                     /*!<  AES MultH parameter Register 3,                       Address offset: 0x50 */
}AES_Type;


/* ================================================================================ */
/* ================                       RNG                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR;                     /*!<  Rand Number Generator Control  Register,              Address offset: 0x00 */
  __I  uint32_t DOR;                    /*!<  Rand Number/DRD Generator Control Data Output Register,Address offset: 0x04 */
  __IO uint32_t RSV1[2];                /*!<  RESERVED REGISTER,                                    Address offset: 0x08 */
  __IO uint32_t SR;                     /*!<  Rand Number  Generator  Status  Register,             Address offset: 0x10 */
  __IO uint32_t CRCCR;                  /*!<  CRC  Data  Input  Register,                           Address offset: 0x14 */
  __IO uint32_t CRCDIR;                 /*!<  CRC  Control  Register,                               Address offset: 0x18 */
  __IO uint32_t CRCSR;                  /*!<  CRC  Status  Register,                                Address offset: 0x1C */
}RNG_Type;


/* ================================================================================ */
/* ================                      COMP                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR;                     /*!< ComparatorControl Register 1,                          Address offset: 0x00 */
} COMP_Type;

typedef struct
{
  __IO uint32_t ICR;                    /*!<  Comparator Interrupt Config Register,                 Address offset: 0x10 */
  __IO uint32_t ISR;                    /*!<  Comparator Interrupt Status Register,                 Address offset: 0x14 */
  __IO uint32_t BUFCR;                  /*!<  Comparator Buffer Control Register,                   Address offset: 0x18 */
}COMP_COMMON_Type;


/* ================================================================================ */
/* ================                      HDIV                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t END;                    /*!<  Dividend Register,                                    Address offset: 0x00 */
  __IO uint32_t SOR;                    /*!<  Divisor Regsiter,                                     Address offset: 0x04 */
  __I  uint32_t QUOT;                   /*!<  Quotient Register,                                    Address offset: 0x08 */
  __I  uint32_t REMD;                   /*!<  Reminder Register,                                    Address offset: 0x0C */
  __I  uint32_t SR;                     /*!<  Status Register,                                      Address offset: 0x10 */
}HDIV_Type;


/* ================================================================================ */
/* ================                     I2CSMBx                    ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR1;                    /*!<  I2C SMBus0 Control Register,                          Address offset: 0x00 */
  __IO uint32_t CR2;                    /*!<  I2C SMBus0 Control Register,                          Address offset: 0x04 */
  __IO uint32_t IER;                    /*!<  I2C SMBus Intterupt Enable Register,                  Address offset: 0x08 */
  __IO uint32_t ISR;                    /*!<  I2C Master Interrupt Status Register,                 Address offset: 0x0C */
  __IO uint32_t BGR;                    /*!<  I2C Master Baud Rate Setting Register,                Address offset: 0x10 */
  __IO uint32_t TCR;                    /*!<  I2C Master Timing Control Register,                   Address offset: 0x14 */
  __IO uint32_t TOR;                    /*!<  I2C Master TimeOut Register,                          Address offset: 0x18 */
  __I  uint32_t RXBUF;                  /*!<  I2C Master Receive Data Register,                     Address offset: 0x1C */
  __IO uint32_t TXBUF;                  /*!<  I2C Master Send Data Register,                        Address offset: 0x20 */
  __IO uint32_t SADR;                   /*!<  I2C Master Slave Address Register,                    Address offset: 0x24 */
  __I  uint32_t CRC_DR;                 /*!<  I2C Master CRC Data Register,                         Address offset: 0x28 */
  __IO uint32_t CRC_LFSR;               /*!<  I2C Master LFSR Register,                             Address offset: 0x2C */
  __IO uint32_t CRC_POLY;               /*!<  I2C Master CRC Polynomial Register,                   Address offset: 0x30 */
}I2CSMB_Type;


/* ================================================================================ */
/* ================                      I2Cx                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t MSPCFGR;                /*!<  I2Cx Master Config Register,                          Address offset: 0x00 */
  __IO uint32_t MSPCR;                  /*!<  I2Cx Master Control Register,                         Address offset: 0x04 */
  __IO uint32_t MSPIER;                 /*!<  I2Cx Master Intterupt Enable Register,                Address offset: 0x08 */
  __IO uint32_t MSPISR;                 /*!<  I2Cx Master Interrupt Status Register,                Address offset: 0x0C */
  __IO uint32_t MSPSR;                  /*!<  I2Cx Master Status Register,                          Address offset: 0x10 */
  __IO uint32_t MSPBGR;                 /*!<  I2Cx Master Baud rate Generator Register,             Address offset: 0x14 */
  __IO uint32_t MSPBUF;                 /*!<  I2Cx Master transfer Buffer,                          Address offset: 0x18 */
  __IO uint32_t MSPTCR;                 /*!<  I2Cx Master Timing Control Register,                  Address offset: 0x1C */
  __IO uint32_t MSPTOR;                 /*!<  I2Cx Master Time-Out Register,                        Address offset: 0x20 */
}I2C_Type;


/* ================================================================================ */
/* ================                      UART                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t IRCR;                   /*!<  Infrared modulation Control Register,                 Address offset: 0x00 */
}UART_COMMON_Type;


/* ================================================================================ */
/* ================                      UARTx                     ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CSR;                    /*!<  UART Control Status Register,                         Address offset: 0x00 */
  __IO uint32_t IER;                    /*!<  UART Interrupt Enable Register,                       Address offset: 0x04 */
  __IO uint32_t ISR;                    /*!<  UART Interrupt Status Register,                       Address offset: 0x08 */
  __IO uint32_t TODR;                   /*!<  UART Time-Out and Delay Register,                     Address offset: 0x0C */
  __I  uint32_t RXBUF;                  /*!<  UART Receive Buffer,                                  Address offset: 0x10 */
  __O  uint32_t TXBUF;                  /*!<  UART Transmit Buffer,                                 Address offset: 0x14 */
  __IO uint32_t BGR;                    /*!<  UART Baud rate Generator Register,                    Address offset: 0x18 */
  __IO uint32_t RSV1;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x1C */
  __IO uint32_t MCR;                    /*!<  UART Mode Control Register,                           Address offset: 0x20 */
  __IO uint32_t LINCR;                  /*!<  UART LIN Control Register,                            Address offset: 0x24 */
  __I  uint32_t LINBSR;                 /*!<  UART LIN Baud Sync Register,                          Address offset: 0x28 */
  __IO uint32_t LINFTR;                 /*!<  UART LIN Frame Timeout Register,                      Address offset: 0x2C */
  __IO uint32_t LINTTR;                 /*!<  UART LIN Transmit Timing Register,                    Address offset: 0x30 */
  __I  uint32_t LINPSR;                 /*!<  UARTLINPre-sync baud register,                        Address offset: 0x34 */
  __I  uint32_t LINBKR;                 /*!<  UARTLINBreak counter register,                        Address offset: 0x38 */
  __IO uint32_t RSV2;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x3C */
  __IO uint32_t SCISR;                  /*!<  USART Smart Card Interrupt Status Register,           Address offset: 0x40 */
  __IO uint32_t SCIER;                  /*!<  USART Smart Card Interrupt Enable Register,           Address offset: 0x44 */
  __IO uint32_t FFCR;                   /*!<  USART Smart Card Frame Format Control Register,       Address offset: 0x48 */
  __IO uint32_t EGTR;                   /*!<  USART Smart Card Extra Guard Time Register,           Address offset: 0x4C */
  __IO uint32_t CODR;                   /*!<  USART Smart Card Clock Output Register,               Address offset: 0x50 */
  __IO uint32_t SCCR;                   /*!<  USART Smart Card Abort Waiting For Retransmit,        Address offset: 0x54 */
  __IO uint32_t RSV3[10];               /*!<  RESERVED REGISTER,                                    Address offset: 0x58 */
  __IO uint32_t LINSSCR;                /*!<  LIN Self-test Switch Control Register,                Address offset: 0x80 */
}UART_Type;


/* ================================================================================ */
/* ================                     LPUARTx                    ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CSR;                    /*!<  LPUARTx Control Status Register,                      Address offset: 0x00 */
  __IO uint32_t IER;                    /*!<  LPUARTx Interrupt Enable Register,                    Address offset: 0x04 */
  __IO uint32_t ISR;                    /*!<  LPUARTx Interrupt Status Register,                    Address offset: 0x08 */
  __IO uint32_t BMR;                    /*!<  LPUARTx Baud rate Modulation Register,                Address offset: 0x0C */
  __I  uint32_t RXBUF;                  /*!<  LPUARTx Receive Buffer Register,                      Address offset: 0x10 */
  __IO uint32_t TXBUF;                  /*!<  LPUARTx Transmit Buffer Register,                     Address offset: 0x14 */
  __IO uint32_t DMR;                    /*!<  LPUARTx data Matching Register,                       Address offset: 0x18 */
}LPUART_Type;


/* ================================================================================ */
/* ================                      SPIx                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR1;                    /*!<  SPIx Control Register1,                               Address offset: 0x00 */
  __IO uint32_t CR2;                    /*!<  SPIx Control Register2,                               Address offset: 0x04 */
  __IO uint32_t CR3;                    /*!<  SPIx Control Register3,                               Address offset: 0x08 */
  __IO uint32_t IER;                    /*!<  SPIx Interrupt Enable Register,                       Address offset: 0x0C */
  __IO uint32_t ISR;                    /*!<  SPIx Status Register,                                 Address offset: 0x10 */
  __O  uint32_t TXBUF;                  /*!<  SPIx Transmit Buffer,                                 Address offset: 0x14 */
  __I  uint32_t RXBUF;                  /*!<  SPIx Receive Buffer,                                  Address offset: 0x18 */
  __IO uint32_t RSV1;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x1C */
  __IO uint32_t I2SCR;                  /*!<  SPIx I2S Control Register,                            Address offset: 0x20 */
  __IO uint32_t I2SPR;                  /*!<  SPIx I2S Prescaler Register,                          Address offset: 0x24 */
}SPI_Type;


/* ================================================================================ */
/* ================                       CAN                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR;                     /*!<  CAN Control Register,                                 Address offset: 0x00 */
  __IO uint32_t MSR;                    /*!<  CAN mode select register,                             Address offset: 0x04 */
  __IO uint32_t BRPR;                   /*!<  CAN Baud rate Prescaler Register,                     Address offset: 0x08 */
  __IO uint32_t BTR;                    /*!<  CAN Bit Timing Register,                              Address offset: 0x0C */
  __I  uint32_t ECR;                    /*!<  CAN Error Counter Register,                           Address offset: 0x10 */
  __IO uint32_t ESR;                    /*!<  CAN Error Status Register,                            Address offset: 0x14 */
  __I  uint32_t SR;                     /*!<  CAN Status Register,                                  Address offset: 0x18 */
  __IO uint32_t RX_ISR;                 /*!<  CAN Interrupt Status Register,                        Address offset: 0x1C */
  __IO uint32_t RX_IER;                 /*!<  CAN Interrupt Enable Register,                        Address offset: 0x20 */
  __IO uint32_t RSV1;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x24 */
  __IO uint32_t TXB_CR;                 /*!<  CAN Transmit Buffer Control Register,                 Address offset: 0x28 */
  __IO uint32_t TXB_SR;                 /*!<  CAN Transmit Buffer Status Register,                  Address offset: 0x2C */
  __O  uint32_t TXB0_IDR;               /*!<  CAN Transmit Buffer 0 ID Register,                    Address offset: 0x30 */
  __O  uint32_t TXB0_DLCR;              /*!<  CAN Transmit Buffer 0 DLC Register,                   Address offset: 0x34 */
  __O  uint32_t TXB0_DW1R;              /*!<  CAN Transmit Buffer 0 DataWord1 Register,             Address offset: 0x38 */
  __O  uint32_t TXB0_DW2R;              /*!<  CAN Transmit Buffer 0 DataWord2 Register,             Address offset: 0x3C */
  __O  uint32_t TXB1_IDR;               /*!<  CAN Transmit Buffer 1 ID Register,                    Address offset: 0x40 */
  __O  uint32_t TXB1_DLCR;              /*!<  CAN Transmit Buffer 1 DLC Register,                   Address offset: 0x44 */
  __O  uint32_t TXB1_DW1R;              /*!<  CAN Transmit Buffer 1 DataWord1 Register,             Address offset: 0x48 */
  __O  uint32_t TXB1_DW2R;              /*!<  CAN Transmit Buffer 1 DataWord2 Register,             Address offset: 0x4C */
  __O  uint32_t TXB2_IDR;               /*!<  CAN Transmit Buffer 2 ID Register,                    Address offset: 0x50 */
  __O  uint32_t TXB2_DLCR;              /*!<  CAN Transmit Buffer 2 DLC Register,                   Address offset: 0x54 */
  __O  uint32_t TXB2_DW1R;              /*!<  CAN Transmit Buffer 2 DataWord1 Register,             Address offset: 0x58 */
  __O  uint32_t TXB2_DW2R;              /*!<  CAN Transmit Buffer 2 DataWord2 Register,             Address offset: 0x5C */
  __IO uint32_t AFCR;                   /*!<  Acceptance Filter Control Register,                   Address offset: 0x60 */
  __IO uint32_t AFCFGR;                 /*!<  Acceptance Filter Config Register,                    Address offset: 0x64 */
  __IO uint32_t RSV2[6];                /*!<  RESERVED REGISTER,                                    Address offset: 0x68 */
  __IO uint32_t AFMR1;                  /*!<  Acceptance Filter Mask Register1,                     Address offset: 0x80 */
  __IO uint32_t AFIR1;                  /*!<  Acceptance Filter ID Register1,                       Address offset: 0x84 */
  __IO uint32_t AFMR2;                  /*!<  Acceptance Filter Mask Register2,                     Address offset: 0x88 */
  __IO uint32_t AFIR2;                  /*!<  Acceptance Filter ID Register2,                       Address offset: 0x8C */
  __IO uint32_t AFMR3;                  /*!<  Acceptance Filter Mask Register3,                     Address offset: 0x90 */
  __IO uint32_t AFIR3;                  /*!<  Acceptance Filter ID Register3,                       Address offset: 0x94 */
  __IO uint32_t AFMR4;                  /*!<  Acceptance Filter Mask Register4,                     Address offset: 0x98 */
  __IO uint32_t AFIR4;                  /*!<  Acceptance Filter ID Register4,                       Address offset: 0x9C */
  __IO uint32_t AFMR5;                  /*!<  Acceptance Filter Mask Register5,                     Address offset: 0xA0 */
  __IO uint32_t AFIR5;                  /*!<  Acceptance Filter ID Register5,                       Address offset: 0xA4 */
  __IO uint32_t AFMR6;                  /*!<  Acceptance Filter Mask Register6,                     Address offset: 0xA8 */
  __IO uint32_t AFIR6;                  /*!<  Acceptance Filter ID Register6,                       Address offset: 0xAC */
  __IO uint32_t AFMR7;                  /*!<  Acceptance Filter Mask Register7,                     Address offset: 0xB0 */
  __IO uint32_t AFIR7;                  /*!<  Acceptance Filter ID Register7,                       Address offset: 0xB4 */
  __IO uint32_t AFMR8;                  /*!<  Acceptance Filter Mask Register8,                     Address offset: 0xB8 */
  __IO uint32_t AFIR8;                  /*!<  Acceptance Filter ID Register8,                       Address offset: 0xBC */
  __IO uint32_t AFMR9;                  /*!<  Acceptance Filter Mask Register9,                     Address offset: 0xC0 */
  __IO uint32_t AFIR9;                  /*!<  Acceptance Filter ID Register9,                       Address offset: 0xC4 */
  __IO uint32_t AFMR10;                 /*!<  Acceptance Filter Mask Register10,                    Address offset: 0xC8 */
  __IO uint32_t AFIR10;                 /*!<  Acceptance Filter ID Register10,                      Address offset: 0xCC */
  __IO uint32_t AFMR11;                 /*!<  Acceptance Filter Mask Register11,                    Address offset: 0xD0 */
  __IO uint32_t AFIR11;                 /*!<  Acceptance Filter ID Register11,                      Address offset: 0xD4 */
  __IO uint32_t AFMR12;                 /*!<  Acceptance Filter Mask Register12,                    Address offset: 0xD8 */
  __IO uint32_t AFIR12;                 /*!<  Acceptance Filter ID Register12,                      Address offset: 0xDC */
  __IO uint32_t AFMR13;                 /*!<  Acceptance Filter Mask Register13,                    Address offset: 0xE0 */
  __IO uint32_t AFIR13;                 /*!<  Acceptance Filter ID Register13,                      Address offset: 0xE4 */
  __IO uint32_t AFMR14;                 /*!<  Acceptance Filter Mask Register14,                    Address offset: 0xE8 */
  __IO uint32_t AFIR14;                 /*!<  Acceptance Filter ID Register14,                      Address offset: 0xEC */
  __IO uint32_t AFMR15;                 /*!<  Acceptance Filter Mask Register15,                    Address offset: 0xF0 */
  __IO uint32_t AFIR15;                 /*!<  Acceptance Filter ID Register15,                      Address offset: 0xF4 */
  __IO uint32_t AFMR16;                 /*!<  Acceptance Filter Mask Register16,                    Address offset: 0xF8 */
  __IO uint32_t AFIR16;                 /*!<  Acceptance Filter ID Register16,                      Address offset: 0xFC */
  __O  uint32_t RXF_IDR;                /*!<  CAN RX FIFO ID Register,                              Address offset: 0x100 */
  __O  uint32_t RXF_DLCR;               /*!<  CAN RX FIFO DLC Register,                             Address offset: 0x104 */
  __O  uint32_t RXF_DW1R;               /*!<  CAN RX FIFO Data Word1 Register,                      Address offset: 0x108 */
  __O  uint32_t RXF_DW2R;               /*!<  CAN RX FIFO Data Word2 Register,                      Address offset: 0x10C */
}CAN_Type;


/* ================================================================================ */
/* ================                     CANFDx                     ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CFDC0NCFG;              /*!<  Channel 0 Nominal Bitrate Configuration Register,                                Address offset: 0000h                 */
  __IO uint32_t CFDC0CTR;               /*!<  Channel 0 Control Register,                                                      Address offset: 0004h                 */
  __IO uint32_t CFDC0STS;               /*!<  Channel 0 Status Register,                                                       Address offset: 0008h                 */
  __IO uint32_t CFDC0ERFL;              /*!<  Channel 0 Error Flag Register,                                                   Address offset: 000Ch                 */
  __IO uint32_t CFDGIPV;                /*!<  Global IP Version Register,                                                      Address offset: 0010h                 */
  __IO uint32_t CFDGCFG;                /*!<  Global Configuration Register,                                                   Address offset: 0014h                 */
  __IO uint32_t CFDGCTR;                /*!<  Global Control Register,                                                         Address offset: 0018h                 */
  __IO uint32_t CFDGSTS;                /*!<  Global Status Register,                                                          Address offset: 001Ch                 */
  __IO uint32_t CFDGERFL;               /*!<  Global Error Flag Register,                                                      Address offset: 0020h                 */
  __IO uint32_t CFDGTSC;                /*!<  Global Timestamp Counter Register,                                               Address offset: 0024h                 */
  __IO uint32_t CFDGAFLECTR;            /*!<  Global Acceptance Filter List Entry Control Register,                            Address offset: 0028h                 */
  __IO uint32_t CFDGAFLCFG;             /*!<  Global Acceptance Filter List Configuration Register,                            Address offset: 002Ch                 */
  __IO uint32_t CFDRMNB;                /*!<  RX Message Buffer Number Register,                                               Address offset: 0030h                 */
  __IO uint32_t CFDRMND;                /*!<  RX Message Buffer New Data Register,                                             Address offset: 0034h                 */
  __IO uint32_t CFDRMIEC;               /*!<  RX Message Buffer Interrupt Enable Configuration Register,                       Address offset: 0038h                 */
  __IO uint32_t CFDRFCC[2];             /*!<  RX FIFO Configuration / Control Registers a = [0:1],                             Address offset: 003Ch + a*0004h       */
  __IO uint32_t CFDRFSTS[2];            /*!<  RX FIFO Status Registers a = [0:1],                                              Address offset: 0044h + a*0004h       */
  __IO uint32_t CFDRFPCTR[2];           /*!<  RX FIFO Pointer Control Registers a = [0:1],                                     Address offset: 004Ch + a*0004h       */
  __IO uint32_t CFDCFCC;                /*!<  Common FIFO Configuration / Control Register,                                    Address offset: 0054h                 */
  __IO uint32_t CFDCFSTS;               /*!<  Common FIFO Status Register,                                                     Address offset: 0058h                 */
  __IO uint32_t CFDCFPCTR;              /*!<  Common FIFO Pointer Control Register ,                                           Address offset: 005Ch                 */
  __IO uint32_t CFDFESTS;               /*!<  FIFO Empty Status Register,                                                      Address offset: 0060h                 */
  __IO uint32_t CFDFFSTS;               /*!<  FIFO Full Status Register,                                                       Address offset: 0064h                 */
  __IO uint32_t CFDFMSTS;               /*!<  FIFO Message Lost Status Register,                                               Address offset: 0068h                 */
  __IO uint32_t CFDRFISTS;              /*!<  RX FIFO Interrupt Flag Status Register,                                          Address offset: 006Ch                 */
  __IO uint8_t  CFDTMC[4];              /*!<  TX Message Buffer Control Registers I = [0:3],                                   Address offset: 0070h + i*0001h       */
  __IO uint8_t  CFDTMSTS[4];            /*!<  TX Message Buffer Status Registers j = [0:3],                                    Address offset: 0074h + j*0001h       */
  __IO uint32_t CFDTMTRSTS;             /*!<  TX Message Buffer Transmission Request Status Register,                          Address offset: 0078h                 */
  __IO uint32_t CFDTMTARSTS;            /*!<  TX Message Buffer Transmission Abort Request Status Register,                    Address offset: 007Ch                 */
  __IO uint32_t CFDTMTCSTS;             /*!<  TX Message Buffer Transmission Completion Status Register,                       Address offset: 0080h                 */
  __IO uint32_t CFDTMTASTS;             /*!<  TX Message Buffer Transmission Abort Status Register,                            Address offset: 0084h                 */
  __IO uint32_t CFDTMIEC;               /*!<  TX Message Buffer Interrupt Enable Configuration Register,                       Address offset: 0088h                 */
  __IO uint32_t CFDTXQCC;               /*!<  TX Queue Configuration / Control Register,                                       Address offset: 008Ch                 */
  __IO uint32_t CFDTXQSTS;              /*!<  TX Queue Status Register,                                                        Address offset: 0090h                 */
  __IO uint32_t CFDTXQPCTR;             /*!<  TX Queue Pointer Control Register,                                               Address offset: 0094h                 */
  __IO uint32_t CFDTHLCC;               /*!<  TX History List Configuration / Control Register,                                Address offset: 0098h                 */
  __IO uint32_t CFDTHLSTS;              /*!<  TX History List Status Register,                                                 Address offset: 009Ch                 */
  __IO uint32_t CFDTHLPCTR;             /*!<  TX History List Pointer Control Register,                                        Address offset: 00A0h                 */
  __IO uint32_t CFDGTINTSTS;            /*!<  Global TX Interrupt Status Register,                                             Address offset: 00A4h                 */
  __IO uint32_t CFDGTSTCFG;             /*!<  Global Test Configuration Register,                                              Address offset: 00A8h                 */
  __IO uint32_t CFDGTSTCTR;             /*!<  Global Test Control Register,                                                    Address offset: 00ACh                 */
  __IO uint32_t CFDGFDCFG;              /*!<  Global FD Configuration register,                                                Address offset: 00B0h                 */
  __IO uint32_t RSVD;                   /*!<  RESERVED REGISTER,                                                               Address offset: 00B4h                 */
  __IO uint32_t CFDGLOCKK;              /*!<  Global Lock Key Register,                                                        Address offset: 00B8h                 */
  __IO uint32_t RSVD1;                  /*!<  RESERVED REGISTER,                                                               Address offset: 00BCh                 */
  __IO uint32_t CFDGAFLIGNENT;          /*!<  Global AFL Ignore Entry Register,                                                Address offset: 00C0h                 */
  __IO uint32_t CFDGAFLIGNCTR;          /*!<  Global AFL Ignore Control Register,                                              Address offset: 00C4h                 */
  __IO uint32_t CFDCDTCT;               /*!<  DMA Transfer Control Register,                                                   Address offset: 00C8h                 */
  __IO uint32_t CFDCDTSTS;              /*!<  DMA Transfer Status Register,                                                    Address offset: 00CCh                 */
  __IO uint32_t CFDGPFLECTR;            /*!<  Pretended Network Filter List Entry control Register,                            Address offset: 00D0h                 */
  __IO uint32_t CFDGPFLCFG;             /*!<  Pretended Network Filter List Entry Configuration Register,                      Address offset: 00D4h                 */
  __IO uint32_t CFDGRSTC;               /*!<  Global SW reset Register,                                                        Address offset: 00D8h                 */
  __IO uint32_t RSVD2[9];               /*!<  RESERVED REGISTER,                                                               Address offset: 00DCh                 */
  __IO uint32_t CFDC0DCFG;              /*!<  Channel 0 Data Bitrate Configuration Register,                                   Address offset: 0100h                 */
  __IO uint32_t CFDC0FDCFG;             /*!<  Channel 0 CAN-FD Configuration Register,                                         Address offset: 0104h                 */
  __IO uint32_t CFDC0FDCTR;             /*!<  Channel 0 CAN-FD Control Register,                                               Address offset: 0108h                 */
  __IO uint32_t CFDC0FDSTS;             /*!<  Channel 0 CAN-FD Status Register,                                                Address offset: 010Ch                 */
  __IO uint32_t CFDC0FDCRC;             /*!<  Channel 0 CAN-FD CRC Register,                                                   Address offset: 0110h                 */
  __IO uint32_t RSVD3[3];               /*!<  RESERVED REGISTER,                                                               Address offset: 0114h                 */
  struct                                                                                                                       
  {                                                                                                                            
    __IO uint32_t CFDGAFLIDr;           /*!<  Global Acceptance Filter List ID Registers r = [1＃10]h,                         Address offset: 0120h + (r-1)*0010h   */
    __IO uint32_t CFDGAFLMr;            /*!<  Global Acceptance Filter List Mask Registers r = [1＃10]h,                       Address offset: 0124h + (r-1)*0010h   */
    __IO uint32_t CFDGAFLP0r;           /*!<  Global Acceptance Filter List Pointer 0 Registers r = [1＃10]h,                  Address offset: 0128h + (r-1)*0010h   */
    __IO uint32_t CFDGAFLP1r;           /*!<  Global Acceptance Filter List Pointer 1 Registers r = [1＃10]h,                  Address offset: 012Ch + (r-1)*0010h   */
  }CFDGAFL[16];	                        
  struct                                
  {                                     
    __IO uint32_t CFDGPFLIDs;           /*!<  Global Pretended Network Filter List ID Registers s = [1＃2]h,                   Address offset: 0220h + (s-1) * 0024h */
    __IO uint32_t CFDGPFLMs;            /*!<  Global Pretended Network Filter List Mask Registers s = [1＃2]h,                 Address offset: 0224h + (s-1) * 0024h */
    __IO uint32_t CFDGPFLP0s;           /*!<  Global Pretended Network Filter List Pointer 0 Registers s = [1＃2]h,            Address offset: 0228h + (s-1) * 0024h */
    __IO uint32_t CFDGPFLP1s;           /*!<  Global Pretended Network Filter List Pointer 1 Registers s = [1＃2]h,            Address offset: 022Ch + (s-1) * 0024h */
    __IO uint32_t CFDGPFLPTs;           /*!<  Global Pretended Network Filter List Filter Payload Type Registers s = [1＃2]h,  Address offset: 0230h + (s-1) * 0024h */
    __IO uint32_t CFDGPFLPD0s;          /*!<  Global Pretended Network Filter List Payload Data 0 Registers s = [1＃2],        Address offset: 0234h + (s-1) * 0024h */
    __IO uint32_t CFDGPFLPM0s;          /*!<  Global Pretended Network Filter List Payload Mask 0 Registers s = [1＃2]h,       Address offset: 0238h + (s-1) * 0024h */ 
    __IO uint32_t CFDGPFLPD1s;          /*!<  Global Pretended Network Filter List Payload Data 1 Registers s = [1＃2]h,       Address offset: 023Ch + (s-1) * 0024h */
    __IO uint32_t CFDGPFLPM1s;          /*!<  Global Pretended Network Filter List Payload Mask 1 Registers s = [1＃2]h,       Address offset: 0240h + (s-1) * 0024h */
  }CFDGPFL[2];                                                                                                                 
  __IO uint32_t RSVD4[6];               /*!<  RESERVED REGISTER,                                                               Address offset: 0268h                 */
  __IO uint32_t CFDRPGACC[64];          /*!<  RAM Test Page Access Registers k = [0＃3F]h,                                     Address offset: 0280h + k * 0004h     */
}CANFD_COMMON_Type;


/* ================================================================================ */
/* ================                     CANFDx_RX_FIFO             ================ */
/* ================================================================================ */

typedef struct
{
  struct
  {
    __IO uint32_t CFDRFIDb;             /*!<  RX FIFO Access ID Registers b = [0＃1]h,                                         Address offset: 0520h + b * 004Ch             */
    __IO uint32_t CFDRFPTRb;            /*!<  RX FIFO Access Pointer Registers b = [0＃1]h,                                    Address offset: 0524h + b * 004Ch             */
    __IO uint32_t CFDRFFDSTSb;          /*!<  RX FIFO Access CAN-FD Status Registers b = [0＃1]h,                              Address offset: 0528h + b * 004Ch             */
    __IO uint32_t CFDRFDFbp[16];        /*!<  RX FIFO Access Data Field p Registers b = [0＃1]h p = [0＃F]h,                   Address offset: 052Ch + p * 0004h + b * 004Ch */
  }CFDRF[2];
}CANFD_RX_FIFO_Type;

/* ================================================================================ */
/* ================                     CANFDx_Common_FIFO             ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CFDCFID;                /*!<  Common FIFO Access ID Register,                                                  Address offset: 05B8h                         */
  __IO uint32_t CFDCFPTR;               /*!<  Common FIFO Access Pointer Register,                                             Address offset: 05BCh                         */
  __IO uint32_t CFDCFFDCSTS;            /*!<  Common FIFO Access CAN-FD Control/Status Register,                               Address offset: 05C0h                         */
  __IO uint32_t CFDCFDFp[16];           /*!<  Common FIFO Access Data Field p Registers p = [0＃F]h,                           Address offset: 05C4h + p * 0004h             */
}CANFD_COMMON_FIFO_Type;

/* ================================================================================ */
/* ================                     CANFDx_TX_MESSAGE          ================ */
/* ================================================================================ */

typedef struct
{
   struct
   {
     __IO uint32_t CFDTMIDb;             /*!<  TX Message Buffer ID Registers b = [0＃3]h,                                      Address offset: 0604h + b * 004Ch             */
     __IO uint32_t CFDTMPTRb;            /*!<  TX Message Buffer Pointer Registers b = [0＃3]h,                                 Address offset: 0608h + b * 004Ch             */
     __IO uint32_t CFDTMFDCTRb;          /*!<  TX Message Buffer CAN-FD Control Registers b = [0＃3]h,                          Address offset: 060Ch + b * 004Ch             */
     __IO uint32_t CFDTMDFbp[16];        /*!<  TX Message Buffer Data Field p Registers b = [0＃3]h p = [0＃F]h,                Address offset: 0610h + p * 0004h + b * 004Ch */
   }CFDTM[4];
}CANFD_TX_MESSAGE_Type;

/* ================================================================================ */
/* ================                     CANFDx_TX_HISTORY_LIST          ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CFDTHLACC0;             /*!<  Channel 0 TX History List Access Registers 0,                                    Address offset: 0740h                         */
  __IO uint32_t CFDTHLACC1;             /*!<  Channel 0 TX History List Access Registers 1,                                    Address offset: 0744h                         */
}CANFD_TX_HISTORY_LIST_Type;


/* ================================================================================ */
/* ================                     CANFDx_RX_MESSAGE          ================ */
/* ================================================================================ */

typedef struct
{
  struct
  {
    __IO uint32_t CFDRMIDb;             /*!<  RX Message Buffer ID Registers b = [0＃7]h,                                      Address offset: 0920h + b * 004Ch             */
    __IO uint32_t CFDRMPTRb;            /*!<  RX Message Buffer Pointer Registers b = [0＃7]h,                                 Address offset: 0924h + b * 004Ch             */
    __IO uint32_t CFDRMFDSTSb;          /*!<  RX Message Buffer CAN-FD Status Registers b = [0＃7]h,                           Address offset: 0928h + b * 004Ch             */
    __IO uint32_t CFDRMDFbp[16];        /*!<  RX Message Buffer Data Field p Registers b = [0＃7]h p = [0＃F]h,                Address offset: 092Ch + p * 0004h + b * 004Ch */
  }CFDRM[8];
}CANFD_RX_MESSAGE_Type;


/* ================================================================================ */
/* ================                      SENTx                     ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR;                     /*!<  SENTxControl Register,                                Address offset: 0x00 */
  __IO uint32_t CFGR;                   /*!<  SENTx Configure Register,                             Address offset: 0x04 */
  __IO uint32_t PSR;                    /*!<  SENTx Prescaler Register,                             Address offset: 0x08 */
  __IO uint32_t FTR;                    /*!<  SENTx Frame Length Register,                          Address offset: 0x0C */
  __IO uint32_t SR;                     /*!<  SENTxStatus and Flag Register,                        Address offset: 0x10 */
  __IO uint32_t DR;                     /*!<  SENTx Data Register,                                  Address offset: 0x14 */
  __IO uint32_t SYNC;                   /*!<  SENTx Synchronous Pluse Diagnosis Register,           Address offset: 0x18 */
  __I  uint32_t RCAL;                   /*!<  SENTx Synchronous Calibration Register,               Address offset: 0x1C */
}SENT_Type;


/* ================================================================================ */
/* ================                       DMA                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t GCR;                    /*!<  DMA Global Control Register,                          Address offset: 0x00 */
  __IO uint32_t CH0CR;                  /*!<  Channel 0 Control Register,                           Address offset: 0x04 */
  __IO uint32_t CH0MAR;                 /*!<  Channel 0 Memory Address Register,                    Address offset: 0x08 */
  __IO uint32_t CH1CR;                  /*!<  Channel 1 Control Register,                           Address offset: 0x0C */
  __IO uint32_t CH1MAR;                 /*!<  Channel 1 Memory Address Register,                    Address offset: 0x10 */
  __IO uint32_t CH2CR;                  /*!<  Channel 2 Control Register,                           Address offset: 0x14 */
  __IO uint32_t CH2MAR;                 /*!<  Channel 2 Memory Address Register,                    Address offset: 0x18 */
  __IO uint32_t CH3CR;                  /*!<  Channel 3 Control Register,                           Address offset: 0x1C */
  __IO uint32_t CH3MAR;                 /*!<  Channel 3 Memory Address Register,                    Address offset: 0x20 */
  __IO uint32_t CH4CR;                  /*!<  Channel 4 Control Register,                           Address offset: 0x24 */
  __IO uint32_t CH4MAR;                 /*!<  Channel 4 Memory Address Register,                    Address offset: 0x28 */
  __IO uint32_t CH5CR;                  /*!<  Channel 5 Control Register,                           Address offset: 0x2C */
  __IO uint32_t CH5MAR;                 /*!<  Channel 5 Memory Address Register,                    Address offset: 0x30 */
  __IO uint32_t CH6CR;                  /*!<  Channel 6 Control Register,                           Address offset: 0x34 */
  __IO uint32_t CH6MAR;                 /*!<  Channel 6 Memory Address Register,                    Address offset: 0x38 */
  __IO uint32_t CH7CR;                  /*!<  Channel 7 Control Register,                           Address offset: 0x3C */
  __IO uint32_t CH7FLSAD;               /*!<  Channel 7 Flash Address Register,                     Address offset: 0x40 */
  __IO uint32_t CH7RAMAD;               /*!<  Channel 7 RAM Address Register,                       Address offset: 0x44 */
  __IO uint32_t ISR;                    /*!<  DMA Interrupt Status Register,                        Address offset: 0x48 */
}DMA_Type;


/* ================================================================================ */
/* ================                       CRC                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t DR;                     /*!<  CRC Data Register,                                    Address offset: 0x00 */
  __IO uint32_t CR;                     /*!<  CRC Control Register,                                 Address offset: 0x04 */
  __IO uint32_t LFSR;                   /*!<  CRC Linear Feedback Shift Register,                   Address offset: 0x08 */
  __IO uint32_t XOR;                    /*!<  CRC output XOR Register,                              Address offset: 0x0C */
  __IO uint32_t RSV1[3];                /*!<  RESERVED REGISTER,                                    Address offset: 0x10 */
  __IO uint32_t POLY;                   /*!<  CRC Polynominal Register,                             Address offset: 0x1C */
}CRC_Type;


/* ================================================================================ */
/* ================                      ATIM                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR1;                    /*!<  ATIM Control Register1,                               Address offset: 0x00 */
  __IO uint32_t CR2;                    /*!<  ATIM Control Register2,                               Address offset: 0x04 */
  __IO uint32_t SMCR;                   /*!<  ATIM Slave Mode Control Register,                     Address offset: 0x08 */
  __IO uint32_t DIER;                   /*!<  ATIM DMA and Interrupt Enable Register,               Address offset: 0x0C */
  __IO uint32_t ISR;                    /*!<  ATIM Interrupt Status Register,                       Address offset: 0x10 */
  __O  uint32_t EGR;                    /*!<  ATIM Event Generation Register,                       Address offset: 0x14 */
  __IO uint32_t CCMR1;                  /*!<  ATIM Capture/Compare Mode Register1,                  Address offset: 0x18 */
  __IO uint32_t CCMR2;                  /*!<  ATIM Capture/Compare Mode Register2,                  Address offset: 0x1C */
  __IO uint32_t CCER;                   /*!<  ATIM Capture/Compare Enable Register,                 Address offset: 0x20 */
  __IO uint32_t CNT;                    /*!<  ATIM Counter Register,                                Address offset: 0x24 */
  __IO uint32_t PSC;                    /*!<  ATIM Prescaler Register,                              Address offset: 0x28 */
  __IO uint32_t ARR;                    /*!<  ATIM Auto-Reload Register,                            Address offset: 0x2C */
  __IO uint32_t RCR;                    /*!<  ATIM Repetition Counter Register,                     Address offset: 0x30 */
  __IO uint32_t CCR1;                   /*!<  ATIM Capture/Compare Register1,                       Address offset: 0x34 */
  __IO uint32_t CCR2;                   /*!<  ATIM Capture/Compare Register2,                       Address offset: 0x38 */
  __IO uint32_t CCR3;                   /*!<  ATIM Capture/Compare Register3,                       Address offset: 0x3C */
  __IO uint32_t CCR4;                   /*!<  ATIM Capture/Compare Register4,                       Address offset: 0x40 */
  __IO uint32_t BDTR;                   /*!<  ATIM Break and Deadtime Register,                     Address offset: 0x44 */
  __IO uint32_t DCR;                    /*!<  ATIM DMA Control Register,                            Address offset: 0x48 */
  __IO uint32_t DMAR;                   /*!<  ATIM DMA Access Register,                             Address offset: 0x4C */
  __IO uint32_t RSV1[4];                /*!<  RESERVED REGISTER,                                    Address offset: 0x50 */
  __IO uint32_t BKCR;                   /*!<  ATIM Break Control Register,                          Address offset: 0x60 */
}ATIM_Type;


/* ================================================================================ */
/* ================                     GPTIMx                     ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR1;                    /*!<  GPTIMx Control Register1,                             Address offset: 0x00 */
  __IO uint32_t CR2;                    /*!<  GPTIMx Control Register2,                             Address offset: 0x04 */
  __IO uint32_t SMCR;                   /*!<  GPTIMx Slave Mode Control Register,                   Address offset: 0x08 */
  __IO uint32_t DIER;                   /*!<  GPTIMx DMA and Interrupt Enable Register,             Address offset: 0x0C */
  __IO uint32_t ISR;                    /*!<  GPTIMx Interrupt Status Register,                     Address offset: 0x10 */
  __O  uint32_t EGR;                    /*!<  GPTIMx Event Generation Register,                     Address offset: 0x14 */
  __IO uint32_t CCMR1;                  /*!<  GPTIMx Capture/Compare Mode Register1,                Address offset: 0x18 */
  __IO uint32_t CCMR2;                  /*!<  GPTIMx Capture/Compare Mode Register2,                Address offset: 0x1C */
  __IO uint32_t CCER;                   /*!<  GPTIMx Capture/Compare Enable Register,               Address offset: 0x20 */
  __IO uint32_t CNT;                    /*!<  GPTIMx Counter Register,                              Address offset: 0x24 */
  __IO uint32_t PSC;                    /*!<  GPTIMx Prescaler Register,                            Address offset: 0x28 */
  __IO uint32_t ARR;                    /*!<  GPTIMx Auto-Reload Register,                          Address offset: 0x2C */
  __IO uint32_t RSV1;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x30 */
  __IO uint32_t CCR1;                   /*!<  GPTIMx Capture/Compare Register1,                     Address offset: 0x34 */
  __IO uint32_t CCR2;                   /*!<  GPTIMx Capture/Compare Register2,                     Address offset: 0x38 */
  __IO uint32_t CCR3;                   /*!<  GPTIMx Capture/Compare Register3,                     Address offset: 0x3C */
  __IO uint32_t CCR4;                   /*!<  GPTIMx Capture/Compare Register4,                     Address offset: 0x40 */
  __IO uint32_t RSV2;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x44 */
  __IO uint32_t DCR;                    /*!<  GPTIMx DMA Control Register,                          Address offset: 0x48 */
  __IO uint32_t DMAR;                   /*!<  GPTIMx DMA access Register,                           Address offset: 0x4C */
  __IO uint32_t RSV3[4];                /*!<  RESERVED REGISTER,                                    Address offset: 0x50 */
  __IO uint32_t ITRSEL;                 /*!<  GPTIMx Internal Trigger Select Register,              Address offset: 0x60 */
}GPTIM_Type;


/* ================================================================================ */
/* ================                      TAU                       ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t TAU0CR;                 /*!<  TAU0 Control Register,                                Address offset: 0x00 */
  __IO uint32_t TAU1CR;                 /*!<  TAU1 Control Register,                                Address offset: 0x04 */
}TAU_COMMON_Type;



/* ================================================================================ */
/* ================                      TAU0                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t T0CFGR;                 /*!<  TAU0's Channel0 Configuration Register,               Address offset: 0x00 */
  __IO uint32_t T1CFGR;                 /*!<  TAU0's Channel1 Configuration Register,               Address offset: 0x04 */
  __IO uint32_t T2CFGR;                 /*!<  TAU0's Channel2 Configuration Register,               Address offset: 0x08 */
  __IO uint32_t T3CFGR;                 /*!<  TAU0's Channel3 Configuration Register,               Address offset: 0x0C */
  __IO uint32_t T4CFGR;                 /*!<  TAU0's Channel4 Configuration Register,               Address offset: 0x10 */
  __IO uint32_t T5CFGR;                 /*!<  TAU0's Channel5 Configuration Register,               Address offset: 0x14 */
  __IO uint32_t T6CFGR;                 /*!<  TAU0's Channel6 Configuration Register,               Address offset: 0x18 */
  __IO uint32_t T7CFGR;                 /*!<  TAU0's Channel7 Configuration Register,               Address offset: 0x1C */
  __IO uint32_t T0MDR;                  /*!<  TAU0's Channel0 Mode Register,                        Address offset: 0x20 */
  __IO uint32_t T1MDR;                  /*!<  TAU0's Channel1 Mode Register,                        Address offset: 0x24 */
  __IO uint32_t T2MDR;                  /*!<  TAU0's Channel2 Mode Register,                        Address offset: 0x28 */
  __IO uint32_t T3MDR;                  /*!<  TAU0's Channel3 Mode Register,                        Address offset: 0x2C */
  __IO uint32_t T4MDR;                  /*!<  TAU0's Channel4 Mode Register,                        Address offset: 0x30 */
  __IO uint32_t T5MDR;                  /*!<  TAU0's Channel5 Mode Register,                        Address offset: 0x34 */
  __IO uint32_t T6MDR;                  /*!<  TAU0's Channel6 Mode Register,                        Address offset: 0x38 */
  __IO uint32_t T7MDR;                  /*!<  TAU0's Channel7 Mode Register,                        Address offset: 0x3C */
  __IO uint32_t T0ARR;                  /*!<  TAU0 Auto-Reload Register0,                           Address offset: 0x40 */
  __IO uint32_t T1ARR;                  /*!<  TAU0 Auto-Reload Register1,                           Address offset: 0x44 */
  __IO uint32_t T2ARR;                  /*!<  TAU0 Auto-Reload Register2,                           Address offset: 0x48 */
  __IO uint32_t T3ARR;                  /*!<  TAU0 Auto-Reload Register3,                           Address offset: 0x4C */
  __IO uint32_t T4ARR;                  /*!<  TAU0 Auto-Reload Register4,                           Address offset: 0x50 */
  __IO uint32_t T5ARR;                  /*!<  TAU0 Auto-Reload Register5,                           Address offset: 0x54 */
  __IO uint32_t T6ARR;                  /*!<  TAU0 Auto-Reload Register6,                           Address offset: 0x58 */
  __IO uint32_t T7ARR;                  /*!<  TAU0 Auto-Reload Register7,                           Address offset: 0x5C */
  __IO uint32_t T0CCR;                  /*!<  TAU0 Capture/Compare Register0,                       Address offset: 0x60 */
  __IO uint32_t T1CCR;                  /*!<  TAU0 Capture/Compare Register1,                       Address offset: 0x64 */
  __IO uint32_t T2CCR;                  /*!<  TAU0 Capture/Compare Register2,                       Address offset: 0x68 */
  __IO uint32_t T3CCR;                  /*!<  TAU0 Capture/Compare Register3,                       Address offset: 0x6C */
  __IO uint32_t T4CCR;                  /*!<  TAU0 Capture/Compare Register4,                       Address offset: 0x70 */
  __IO uint32_t T5CCR;                  /*!<  TAU0 Capture/Compare Register5,                       Address offset: 0x74 */
  __IO uint32_t T6CCR;                  /*!<  TAU0 Capture/Compare Register6,                       Address offset: 0x78 */
  __IO uint32_t T7CCR;                  /*!<  TAU0 Capture/Compare Register7,                       Address offset: 0x7C */
  __IO uint32_t T0IER;                  /*!<  TAU0 Interrupt Enable Register0,                      Address offset: 0x80 */
  __IO uint32_t T1IER;                  /*!<  TAU0 Interrupt Enable Register1,                      Address offset: 0x84 */
  __IO uint32_t T2IER;                  /*!<  TAU0 Interrupt Enable Register2,                      Address offset: 0x88 */
  __IO uint32_t T3IER;                  /*!<  TAU0 Interrupt Enable Register3,                      Address offset: 0x8C */
  __IO uint32_t T4IER;                  /*!<  TAU0 Interrupt Enable Register4,                      Address offset: 0x90 */
  __IO uint32_t T5IER;                  /*!<  TAU0 Interrupt Enable Register5,                      Address offset: 0x94 */
  __IO uint32_t T6IER;                  /*!<  TAU0 Interrupt Enable Register6,                      Address offset: 0x98 */
  __IO uint32_t T7IER;                  /*!<  TAU0 Interrupt Enable Register7,                      Address offset: 0x9C */
  __IO uint32_t T0ISR;                  /*!<  TAU0 Interrupt Status Register0,                      Address offset: 0xA0 */
  __IO uint32_t T1ISR;                  /*!<  TAU0 Interrupt Status Register1,                      Address offset: 0xA4 */
  __IO uint32_t T2ISR;                  /*!<  TAU0 Interrupt Status Register2,                      Address offset: 0xA8 */
  __IO uint32_t T3ISR;                  /*!<  TAU0 Interrupt Status Register3,                      Address offset: 0xAC */
  __IO uint32_t T4ISR;                  /*!<  TAU0 Interrupt Status Register4,                      Address offset: 0xB0 */
  __IO uint32_t T5ISR;                  /*!<  TAU0 Interrupt Status Register5,                      Address offset: 0xB4 */
  __IO uint32_t T6ISR;                  /*!<  TAU0 Interrupt Status Register6,                      Address offset: 0xB8 */
  __IO uint32_t T7ISR;                  /*!<  TAU0 Interrupt Status Register7,                      Address offset: 0xBC */
  __I  uint32_t T0CNTR;                 /*!<  TAU0 Counter Register0,                               Address offset: 0xC0 */
  __I  uint32_t T1CNTR;                 /*!<  TAU0 Counter Register1,                               Address offset: 0xC4 */
  __I  uint32_t T2CNTR;                 /*!<  TAU0 Counter Register2,                               Address offset: 0xC8 */
  __I  uint32_t T3CNTR;                 /*!<  TAU0 Counter Register3,                               Address offset: 0xCC */
  __I  uint32_t T4CNTR;                 /*!<  TAU0 Counter Register4,                               Address offset: 0xD0 */
  __I  uint32_t T5CNTR;                 /*!<  TAU0 Counter Register5,                               Address offset: 0xD4 */
  __I  uint32_t T6CNTR;                 /*!<  TAU0 Counter Register6,                               Address offset: 0xD8 */
  __I  uint32_t T7CNTR;                 /*!<  TAU0 Counter Register7,                               Address offset: 0xDC */
}TAU0_Type;


/* ================================================================================ */
/* ================                      TAU1                      ================ */
/* ================================================================================ */
typedef struct
{
  __IO uint32_t T0CFGR;                 /*!<  TAU1's Channel0 Configuration Register,               Address offset: 0x110 */
  __IO uint32_t T1CFGR;                 /*!<  TAU1's Channel1 Configuration Register,               Address offset: 0x114 */
  __IO uint32_t T2CFGR;                 /*!<  TAU1's Channel2 Configuration Register,               Address offset: 0x118 */
  __IO uint32_t T3CFGR;                 /*!<  TAU1's Channel3 Configuration Register,               Address offset: 0x11C */
  __IO uint32_t T4CFGR;                 /*!<  TAU1's Channel4 Configuration Register,               Address offset: 0x120 */
  __IO uint32_t T5CFGR;                 /*!<  TAU1's Channel5 Configuration Register,               Address offset: 0x124 */
  __IO uint32_t T6CFGR;                 /*!<  TAU1's Channel6 Configuration Register,               Address offset: 0x128 */
  __IO uint32_t T7CFGR;                 /*!<  TAU1's Channel7 Configuration Register,               Address offset: 0x12C */
  __IO uint32_t T0MDR;                  /*!<  TAU1's Channel0 Mode Register,                        Address offset: 0x130 */
  __IO uint32_t T1MDR;                  /*!<  TAU1's Channel1 Mode Register,                        Address offset: 0x134 */
  __IO uint32_t T2MDR;                  /*!<  TAU1's Channel2 Mode Register,                        Address offset: 0x138 */
  __IO uint32_t T3MDR;                  /*!<  TAU1's Channel3 Mode Register,                        Address offset: 0x13C */
  __IO uint32_t T4MDR;                  /*!<  TAU1's Channel4 Mode Register,                        Address offset: 0x140 */
  __IO uint32_t T5MDR;                  /*!<  TAU1's Channel5 Mode Register,                        Address offset: 0x144 */
  __IO uint32_t T6MDR;                  /*!<  TAU1's Channel6 Mode Register,                        Address offset: 0x148 */
  __IO uint32_t T7MDR;                  /*!<  TAU1's Channel7 Mode Register,                        Address offset: 0x14C */
  __IO uint32_t T0ARR;                  /*!<  TAU1 Auto-Reload Register0,                           Address offset: 0x150 */
  __IO uint32_t T1ARR;                  /*!<  TAU1 Auto-Reload Register1,                           Address offset: 0x154 */
  __IO uint32_t T2ARR;                  /*!<  TAU1 Auto-Reload Register2,                           Address offset: 0x158 */
  __IO uint32_t T3ARR;                  /*!<  TAU1 Auto-Reload Register3,                           Address offset: 0x15C */
  __IO uint32_t T4ARR;                  /*!<  TAU1 Auto-Reload Register4,                           Address offset: 0x160 */
  __IO uint32_t T5ARR;                  /*!<  TAU1 Auto-Reload Register5,                           Address offset: 0x164 */
  __IO uint32_t T6ARR;                  /*!<  TAU1 Auto-Reload Register6,                           Address offset: 0x168 */
  __IO uint32_t T7ARR;                  /*!<  TAU1 Auto-Reload Register7,                           Address offset: 0x16C */
  __IO uint32_t T0CCR;                  /*!<  TAU1 Capture/Compare Register0,                       Address offset: 0x170 */
  __IO uint32_t T1CCR;                  /*!<  TAU1 Capture/Compare Register1,                       Address offset: 0x174 */
  __IO uint32_t T2CCR;                  /*!<  TAU1 Capture/Compare Register2,                       Address offset: 0x178 */
  __IO uint32_t T3CCR;                  /*!<  TAU1 Capture/Compare Register3,                       Address offset: 0x17C */
  __IO uint32_t T4CCR;                  /*!<  TAU1 Capture/Compare Register4,                       Address offset: 0x180 */
  __IO uint32_t T5CCR;                  /*!<  TAU1 Capture/Compare Register5,                       Address offset: 0x184 */
  __IO uint32_t T6CCR;                  /*!<  TAU1 Capture/Compare Register6,                       Address offset: 0x188 */
  __IO uint32_t T7CCR;                  /*!<  TAU1 Capture/Compare Register7,                       Address offset: 0x18C */
  __IO uint32_t T0IER;                  /*!<  TAU1 Interrupt Enable Register0,                      Address offset: 0x190 */
  __IO uint32_t T1IER;                  /*!<  TAU1 Interrupt Enable Register1,                      Address offset: 0x194 */
  __IO uint32_t T2IER;                  /*!<  TAU1 Interrupt Enable Register2,                      Address offset: 0x198 */
  __IO uint32_t T3IER;                  /*!<  TAU1 Interrupt Enable Register3,                      Address offset: 0x19C */
  __IO uint32_t T4IER;                  /*!<  TAU1 Interrupt Enable Register4,                      Address offset: 0x1A0 */
  __IO uint32_t T5IER;                  /*!<  TAU1 Interrupt Enable Register5,                      Address offset: 0x1A4 */
  __IO uint32_t T6IER;                  /*!<  TAU1 Interrupt Enable Register6,                      Address offset: 0x1A8 */
  __IO uint32_t T7IER;                  /*!<  TAU1 Interrupt Enable Register7,                      Address offset: 0x1AC */
  __IO uint32_t T0ISR;                  /*!<  TAU1 Interrupt Status Register0,                      Address offset: 0x1B0 */
  __IO uint32_t T1ISR;                  /*!<  TAU1 Interrupt Status Register1,                      Address offset: 0x1B4 */
  __IO uint32_t T2ISR;                  /*!<  TAU1 Interrupt Status Register2,                      Address offset: 0x1B8 */
  __IO uint32_t T3ISR;                  /*!<  TAU1 Interrupt Status Register3,                      Address offset: 0x1BC */
  __IO uint32_t T4ISR;                  /*!<  TAU1 Interrupt Status Register4,                      Address offset: 0x1C0 */
  __IO uint32_t T5ISR;                  /*!<  TAU1 Interrupt Status Register5,                      Address offset: 0x1C4 */
  __IO uint32_t T6ISR;                  /*!<  TAU1 Interrupt Status Register6,                      Address offset: 0x1C8 */
  __IO uint32_t T7ISR;                  /*!<  TAU1 Interrupt Status Register7,                      Address offset: 0x1CC */
  __I  uint32_t T0CNTR;                 /*!<  TAU1 Counter Register0,                               Address offset: 0x1D0 */
  __I  uint32_t T1CNTR;                 /*!<  TAU1 Counter Register1,                               Address offset: 0x1D4 */
  __I  uint32_t T2CNTR;                 /*!<  TAU1 Counter Register2,                               Address offset: 0x1D8 */
  __I  uint32_t T3CNTR;                 /*!<  TAU1 Counter Register3,                               Address offset: 0x1DC */
  __I  uint32_t T4CNTR;                 /*!<  TAU1 Counter Register4,                               Address offset: 0x1E0 */
  __I  uint32_t T5CNTR;                 /*!<  TAU1 Counter Register5,                               Address offset: 0x1E4 */
  __I  uint32_t T6CNTR;                 /*!<  TAU1 Counter Register6,                               Address offset: 0x1E8 */
  __I  uint32_t T7CNTR;                 /*!<  TAU1 Counter Register7,                               Address offset: 0x1EC */
}TAU1_Type;


/* ================================================================================ */
/* ================                     BSTIM32                    ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR1;                    /*!<  BSTIM32 Control Register1,                            Address offset: 0x00 */
  __IO uint32_t CR2;                    /*!<  BSTIM32 Control Register2,                            Address offset: 0x04 */
  __IO uint32_t RSV1;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x08 */
  __IO uint32_t IER;                    /*!<  BSTIM 32Interrupt Enable Register,                    Address offset: 0x0C */
  __IO uint32_t ISR;                    /*!<  BSTIM32 Interrupt Status Register,                    Address offset: 0x10 */
  __O  uint32_t EGR;                    /*!<  BSTIM32 Event Generation Register,                    Address offset: 0x14 */
  __IO uint32_t RSV2[3];                /*!<  RESERVED REGISTER,                                    Address offset: 0x18 */
  __IO uint32_t CNT;                    /*!<  BSTIM32 Counter Register,                             Address offset: 0x24 */
  __IO uint32_t PSC;                    /*!<  BSTIM32 Prescaler Register,                           Address offset: 0x28 */
  __IO uint32_t ARR;                    /*!<  BSTIM32 Auto-Reload Register,                         Address offset: 0x2C */
}BSTIM32_Type;


/* ================================================================================ */
/* ================                     BSTIM16                    ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR1;                    /*!<  BSTIM16 Control Register1,                            Address offset: 0x00 */
  __IO uint32_t CR2;                    /*!<  BSTIM16 Control Register2,                            Address offset: 0x04 */
  __IO uint32_t RSV1;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x08 */
  __IO uint32_t IER;                    /*!<  BSTIM16 Interrupt Enable Register,                    Address offset: 0x0C */
  __IO uint32_t ISR;                    /*!<  BSTIM16 Interrupt Status Register,                    Address offset: 0x10 */
  __O  uint32_t EGR;                    /*!<  BSTIM16 Event Generation Register,                    Address offset: 0x14 */
  __IO uint32_t RSV2[3];                /*!<  RESERVED REGISTER,                                    Address offset: 0x18 */
  __IO uint32_t CNT;                    /*!<  BSTIM16 Counter Register,                             Address offset: 0x24 */
  __IO uint32_t PSC;                    /*!<  BSTIM16 Prescaler Register,                           Address offset: 0x28 */
  __IO uint32_t ARR;                    /*!<  BSTIM16 Auto-Reload Register,                         Address offset: 0x2C */
}BSTIM16_Type;


/* ================================================================================ */
/* ================                     LPTIM32                    ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CFGR;                   /*!<  LPTIM32 Config Register,                              Address offset: 0x00 */
  __I  uint32_t CNT;                    /*!<  LPTIM32 Counter Register,                             Address offset: 0x04 */
  __IO uint32_t CCSR;                   /*!<  LPTIM32 Capture/Compare Control and Status Register,  Address offset: 0x08 */
  __IO uint32_t ARR;                    /*!<  LPTIM32 Auto-Reload Register,                         Address offset: 0x0C */
  __IO uint32_t IER;                    /*!<  LPTIM32 Interrupt Enable Register,                    Address offset: 0x10 */
  __IO uint32_t ISR;                    /*!<  LPTIM32 Interrupt Status Register,                    Address offset: 0x14 */
  __IO uint32_t CR;                     /*!<  LPTIM32 Control Register,                             Address offset: 0x18 */
  __IO uint32_t RSV1;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x1C */
  __IO uint32_t CCR1;                   /*!<  LPTIM32 Capture/Compare Register1,                    Address offset: 0x20 */
  __IO uint32_t CCR2;                   /*!<  LPTIM32 Capture/Compare Register2,                    Address offset: 0x24 */
  __IO uint32_t CCR3;                   /*!<  LPTIM32 Capture/Compare Register3,                    Address offset: 0x28 */
  __IO uint32_t CCR4;                   /*!<  LPTIM32 Capture/Compare Register4,                    Address offset: 0x2C */
}LPTIM32_Type;


/* ================================================================================ */
/* ================                     LPTIM16                    ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CFGR;                   /*!<  LPTIM16 Config Register,                              Address offset: 0x00 */
  __I  uint32_t CNT;                    /*!<  LPTIM16 Counter Register,                             Address offset: 0x04 */
  __IO uint32_t CCSR;                   /*!<  LPTIM16 Capture/Compare Control and Status Register,  Address offset: 0x08 */
  __IO uint32_t ARR;                    /*!<  LPTIM16 Auto-Reload Register,                         Address offset: 0x0C */
  __IO uint32_t IER;                    /*!<  LPTIM16 Interrupt Enable Register,                    Address offset: 0x10 */
  __IO uint32_t ISR;                    /*!<  LPTIM16 Interrupt Status Register,                    Address offset: 0x14 */
  __IO uint32_t CR;                     /*!<  LPTIM16 Control Register,                             Address offset: 0x18 */
  __IO uint32_t RSV1;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x1C */
  __IO uint32_t CCR1;                   /*!<  LPTIM16 Capture/Compare Register1,                    Address offset: 0x20 */
  __IO uint32_t CCR2;                   /*!<  LPTIM16 Capture/Compare Register2,                    Address offset: 0x24 */
}LPTIM16_Type;


/* ================================================================================ */
/* ================                       RTC                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t WER;                    /*!<  RTC Write Enable Register,                            Address offset: 0x00 */
  __IO uint32_t IER;                    /*!<  RTC Interrupt Enable Register,                        Address offset: 0x04 */
  __IO uint32_t ISR;                    /*!<  RTC Interrupt Status Register,                        Address offset: 0x08 */
  __IO uint32_t BCDSEC;                 /*!<  BCD format time second registers,                     Address offset: 0x0C */
  __IO uint32_t BCDMIN;                 /*!<  BCD format time minute registers,                     Address offset: 0x10 */
  __IO uint32_t BCDHOUR;                /*!<  BCD format time hour registers,                       Address offset: 0x14 */
  __IO uint32_t BCDDAY;                 /*!<  BCD format time day registers,                        Address offset: 0x18 */
  __IO uint32_t BCDWEEK;                /*!<  BCD format time week registers,                       Address offset: 0x1C */
  __IO uint32_t BCDMONTH;               /*!<  BCD format time month registers,                      Address offset: 0x20 */
  __IO uint32_t BCDYEAR;                /*!<  BCD format time year registers,                       Address offset: 0x24 */
  __IO uint32_t ALARM;                  /*!<  RTC Alarm Register,                                   Address offset: 0x28 */
  __IO uint32_t TMSEL;                  /*!<  RTC Time Mark Select,                                 Address offset: 0x2C */
  __IO uint32_t ADJUST;                 /*!<  RTC time Adjust Register,                             Address offset: 0x30 */
  __IO uint32_t RSV1[2];                /*!<  RESERVED REGISTER,                                    Address offset: 0x34 */
  __IO uint32_t SBSCNT;                 /*!<  RTC Sub-Second Counter,                               Address offset: 0x3C */
  __IO uint32_t CR;                     /*!<  RTC Control Register,                                 Address offset: 0x40 */
}RTC_Type;


/* ================================================================================ */
/* ================                       ADC                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t ISR;                    /*!<  ADC Interrupt and Status Register,                    Address offset: 0x00 */
  __IO uint32_t IER;                    /*!<  ADC Interrupt Enable Register,                        Address offset: 0x04 */
  __IO uint32_t CR1;                    /*!<  ADC Control Register1,                                Address offset: 0x08 */
  __IO uint32_t CR2;                    /*!<  ADC Control Register2,                                Address offset: 0x0C */
  __IO uint32_t CALR;                   /*!<  ADC Calibration Register,                             Address offset: 0x10 */
  __IO uint32_t CFGR1;                  /*!<  ADC Config Register1,                                 Address offset: 0x14 */
  __IO uint32_t CFGR2;                  /*!<  ADC Config Register2,                                 Address offset: 0x18 */
  __IO uint32_t SMTR;                   /*!<  ADC Sampling Time Register,                           Address offset: 0x1C */
  __IO uint32_t ECHER;                  /*!<  ADC ExternalChannel Enable Register,                  Address offset: 0x20 */
  __IO uint32_t ICHER;                  /*!<  ADC Internal Channel Control Register,                Address offset: 0x24 */
  __I  uint32_t DR;                     /*!<  ADC Data Register,                                    Address offset: 0x28 */
  __IO uint32_t HLTR;                   /*!<  ADC analog watchdog Threshold Register,               Address offset: 0x2C */
  __IO uint32_t JGCFGR;                 /*!<  ADC Injection Global Config Register,                 Address offset: 0x30 */
  __IO uint32_t JCFGR;                  /*!<  ADC Injection Group Config Register,                  Address offset: 0x34 */
  __IO uint32_t JDR0;                   /*!<  ADC Injection Group Data Register0,                   Address offset: 0x38 */
  __IO uint32_t JDR1;                   /*!<  ADC Injection Group Data Register1,                   Address offset: 0x3C */
  __IO uint32_t JDR2;                   /*!<  ADC Injection Group Data Register2,                   Address offset: 0x40 */
  __IO uint32_t JDR3;                   /*!<  ADC Injection Group Data Register3,                   Address offset: 0x44 */
  __IO uint32_t RSV1;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x48 */
  __IO uint32_t RAWR;                   /*!<  ADC Raw Data Register,                                Address offset: 0x4C */
}ADC_Type;


/* ================================================================================ */
/* ================                       DAC                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR1;                    /*!<  DAC Control Register,                                 Address offset: 0x00 */
  __IO uint32_t CR2;                    /*!<  DAC Control Register,                                 Address offset: 0x04 */
  __IO uint32_t CFGR;                   /*!<  DAC Config Register,                                  Address offset: 0x08 */
  __O  uint32_t SWTRGR;                 /*!<  DAC Software Trigger Register,                        Address offset: 0x0C */
  __IO uint32_t DHR;                    /*!<  DAC Data Holding Register,                            Address offset: 0x10 */
  __IO uint32_t ISR;                    /*!<  DAC Interrupt Status Register,                        Address offset: 0x14 */
  __IO uint32_t IER;                    /*!<  DAC Interrupt Enable Register,                        Address offset: 0x18 */
  __IO uint32_t SHTR;                   /*!<  DAC Sample Hold Time Register,                        Address offset: 0x1C */
}DAC_Type;


/* ================================================================================ */
/* ================                       PGL                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t CR;                     /*!<  ,                                                     Address offset: 0x00 */
  __IO uint32_t CFGR0;                  /*!<  ,                                                     Address offset: 0x04 */
  __IO uint32_t CFGR1;                  /*!<  ,                                                     Address offset: 0x08 */
  __IO uint32_t CFGR2;                  /*!<  ,                                                     Address offset: 0x0C */
  __IO uint32_t CFGR3;                  /*!<  ,                                                     Address offset: 0x10 */
  __IO uint32_t IER;                    /*!<  ,                                                     Address offset: 0x14 */
  __IO uint32_t ISR;                    /*!<  ,                                                     Address offset: 0x18 */
  __IO uint32_t LUT0;                   /*!<  ,                                                     Address offset: 0x1C */
  __IO uint32_t LUT1;                   /*!<  ,                                                     Address offset: 0x20 */
  __IO uint32_t LUT2;                   /*!<  ,                                                     Address offset: 0x24 */
  __IO uint32_t LUT3;                   /*!<  ,                                                     Address offset: 0x28 */
}PGL_Type;


/* ================================================================================ */
/* ================                      GPIOx                     ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t INEN;                   /*!<  GPIOx Input Enable Register,                          Address offset: 0x00 */
  __IO uint32_t PUDEN;                  /*!<  GPIOx Pull-Up Pull-Down Enable Register,              Address offset: 0x04 */
  __IO uint32_t ODEN;                   /*!<  GPIOx Open-Drain Enable Register,                     Address offset: 0x08 */
  __IO uint32_t FCR;                    /*!<  GPIOx Function Control Register,                      Address offset: 0x0C */
  __IO uint32_t DO;                     /*!<  GPIOx Data Output Register,                           Address offset: 0x10 */
  __O  uint32_t DSET;                   /*!<  GPIOx Data Set Register,                              Address offset: 0x14 */
  __O  uint32_t DRST;                   /*!<  GPIOx Data Reset Register,                            Address offset: 0x18 */
  __I  uint32_t DIN;                    /*!<  GPIOx Data Input Register,                            Address offset: 0x1C */
  __IO uint32_t DFS;                    /*!<  GPIOx Digital Function Select,                        Address offset: 0x20 */
  __IO uint32_t RSV1[3];                /*!<  RESERVED REGISTER,                                    Address offset: 0x24 */
  __IO uint32_t DSR;                    /*!<  GPIOx Driver Strength Register,                       Address offset: 0x30 */
  __IO uint32_t RSV2[3];                /*!<  RESERVED REGISTER,                                    Address offset: 0x34 */
}GPIO_Type;


/* ================================================================================ */
/* ================                      GPIO                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t EXTIEDSA;               /*!<  External Interrupt Edge Select and Enable RegisterA,  Address offset: 0x00 */
  __IO uint32_t EXTIEDSB;               /*!<  External Interrupt Edge Select and Enable RegisterB,  Address offset: 0x04 */
  __IO uint32_t EXTIEDSC;               /*!<  External Interrupt Edge Select and Enable RegisterC,  Address offset: 0x08 */
  __IO uint32_t EXTIEDSD;               /*!<  External Interrupt Edge Select and Enable RegisterD,  Address offset: 0x0C */
  __IO uint32_t EXTIEDSE;               /*!<  External Interrupt Edge Select and Enable RegisterE,  Address offset: 0x10 */
  __IO uint32_t EXTIEDSF;               /*!<  External Interrupt Edge Select and Enable RegisterF,  Address offset: 0x14 */
  __IO uint32_t EXTIEDSG;               /*!<  External Interrupt Edge Select and Enable RegisterG,  Address offset: 0x18 */
  __IO uint32_t EXTIEDSH;               /*!<  External Interrupt Edge Select and Enable RegisterH,  Address offset: 0x1C */
  __IO uint32_t EXTIEDSI;               /*!<  External Interrupt Edge Select and Enable RegisterI,  Address offset: 0x20 */
  __IO uint32_t EXTIDFAB;               /*!<  External Interrupt Digital Filter Register AB,        Address offset: 0x24 */
  __IO uint32_t EXTIDFCD;               /*!<  External Interrupt Digital Filter Register CD,        Address offset: 0x28 */
  __IO uint32_t EXTIDFEF;               /*!<  External Interrupt Digital Filter Register EF,        Address offset: 0x2C */
  __IO uint32_t EXTIDFGH;               /*!<  External Interrupt Digital Filter Register GH,        Address offset: 0x30 */
  __IO uint32_t EXTIDFI;                /*!<  External Interrupt Digital Filter Register I,         Address offset: 0x34 */
  __IO uint32_t EXTIISRAB;              /*!<  External Interrupt and Status Register AB,            Address offset: 0x38 */
  __IO uint32_t EXTIISRCD;              /*!<  External Interrupt and Status Register CD,            Address offset: 0x3C */
  __IO uint32_t EXTIISREF;              /*!<  External Interrupt and Status Register EF,            Address offset: 0x40 */
  __IO uint32_t EXTIISRGH;              /*!<  External Interrupt and Status Register GH,            Address offset: 0x44 */
  __IO uint32_t EXTIISRI;               /*!<  External Interrupt and Status Register I,             Address offset: 0x48 */
  __I  uint32_t EXTDIAB;                /*!<  External Interrupt Data Input Register AB,            Address offset: 0x4C */
  __I  uint32_t EXTDICD;                /*!<  External Interrupt Data Input Register CD,            Address offset: 0x50 */
  __I  uint32_t EXTDIEF;                /*!<  External Interrupt Data Input Register EF,            Address offset: 0x54 */
  __I  uint32_t EXTDIGH;                /*!<  External Interrupt Data Input Register GH,            Address offset: 0x58 */
  __I  uint32_t EXTDII;                 /*!<  External Interrupt Data Input Register I,             Address offset: 0x5C */
  __IO uint32_t RSV1[8];                /*!<  RESERVED REGISTER,                                    Address offset: 0x60 */
  __IO uint32_t FOUTSEL;                /*!<  Frequency Output Select Register,                     Address offset: 0x80 */
  __IO uint32_t RSV2[22];               /*!<  RESERVED REGISTER,                                    Address offset: 0x84 */
  __IO uint32_t PINWKEN;                /*!<  Wakeup Enable Register,                               Address offset: 0xDC */
}GPIO_COMMON_Type;


/* ================================================================================ */
/* ================                       SFU                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t RSV1[2];                /*!<  RESERVED REGISTER,                                    Address offset: 0x00 */
  __IO uint32_t MAPCR;                  /*!<  Memory Access Protection Control Register,            Address offset: 0x08 */
  __IO uint32_t MAPSR;                  /*!<  Memory Access Protection Control Register,            Address offset: 0x0C */
}SFU_Type;


/* ================================================================================ */
/* ================                       DBG                      ================ */
/* ================================================================================ */

typedef struct
{
  __IO uint32_t RSV1;                   /*!<  RESERVED REGISTER,                                    Address offset: 0x00 */
  __IO uint32_t CR;                     /*!<  MCU Debug Configuration Register,                     Address offset: 0x04 */
  __IO uint32_t HDFR;                   /*!<  Hradfault Query Register,                             Address offset: 0x08 */
}DBG_Type;



/* --------------------  End of section using anonymous unions  ------------------- */
#if defined(__CC_ARM)
  #pragma pop
#elif defined(__ICCARM__)
  /* leave anonymous unions enabled */
#elif defined(__GNUC__)
/* anonymous unions are enabled by default */
#elif defined(__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning restore
#else
  #warning Not supported compiler type
#endif


/* ================================================================================ */
/* ================              CPU memory map                    ================ */
/* ================================================================================ */


/* Peripheral and SRAM base address */

#define FLASH_BASE            ((     uint32_t)0x00000000)
#define SRAM_BASE             ((     uint32_t)0x20000000)
#define PERIPH_BASE           ((     uint32_t)0x40000000)


/* ================================================================================ */
/* ================              Peripheral memory map             ================ */
/* ================================================================================ */

/* Peripheral memory map */

#define FLS_BASE                        (PERIPH_BASE        +0x00001000)
#define PMU_BASE                        (PERIPH_BASE        +0x00002000)
#define SCU_BASE                        (PERIPH_BASE        +0x00000000)
#define RMU_BASE                        (PERIPH_BASE        +0x00002800)
#define IWDT_BASE                       (PERIPH_BASE        +0x00011400)
#define WWDT_BASE                       (PERIPH_BASE        +0x00011800)
#define CMU_BASE                        (PERIPH_BASE        +0x00002400)
#define CLM0_BASE                       (PERIPH_BASE        +0x0001B800)
#define CLM1_BASE                       (PERIPH_BASE        +0x0001BC00)
#define SVD_BASE                        (PERIPH_BASE        +0x00012800)
#define AES_BASE                        (PERIPH_BASE        +0x00013800)
#define RNG_BASE                        (PERIPH_BASE        +0x00013C00)
#define COMP1_BASE                      (PERIPH_BASE        +0x00015400)
#define COMP2_BASE                      (PERIPH_BASE        +0x00015404)
#define COMP3_BASE                      (PERIPH_BASE        +0x00015408)
#define COMP4_BASE                      (PERIPH_BASE        +0x0001540C)
#define COMP_COMMON_BASE                (PERIPH_BASE        +0x00015410)
#define HDIV_BASE                       (PERIPH_BASE        +0x00019400)
#define I2CSMB0_BASE                    (PERIPH_BASE        +0x0001A000)
#define I2CSMB1_BASE                    (PERIPH_BASE        +0x0001A400)
#define I2C0_BASE                       (PERIPH_BASE        +0x00012400)
#define I2C1_BASE                       (PERIPH_BASE        +0x00019C00)
#define UART_COMMON_BASE                (PERIPH_BASE        +0x00017C00)
#define UART0_BASE                      (PERIPH_BASE        +0x00016800)
#define UART1_BASE                      (PERIPH_BASE        +0x00017000)
#define UART2_BASE                      (PERIPH_BASE        +0x00017400)
#define UART3_BASE                      (PERIPH_BASE        +0x00017800)
#define UART4_BASE                      (PERIPH_BASE        +0x00011C00)
#define UART5_BASE                      (PERIPH_BASE        +0x00012000)
#define LPUART0_BASE                    (PERIPH_BASE        +0x00014000)
#define LPUART1_BASE                    (PERIPH_BASE        +0x00014400)
#define LPUART2_BASE                    (PERIPH_BASE        +0x00015000)
#define SPI0_BASE                       (PERIPH_BASE        +0x00010400)
#define SPI1_BASE                       (PERIPH_BASE        +0x00010800)
#define SPI2_BASE                       (PERIPH_BASE        +0x00014800)
#define SPI3_BASE                       (PERIPH_BASE        +0x0001A800)
#define CAN_BASE                        (PERIPH_BASE        +0x00028000)
#define CANFD0_BASE                     (PERIPH_BASE        +0x00020000)
#define CANFD0_RX_FIFO_BASE             (PERIPH_BASE        +0x00020520)
#define CANFD0_COMMON_FIFO_BASE         (PERIPH_BASE        +0x000205B8)
#define CANFD0_TX_MESSAGE_BASE          (PERIPH_BASE        +0x00020604)
#define CANFD0_TX_HISTORY_LIST_BASE     (PERIPH_BASE        +0x00020740)
#define CANFD0_RX_MESSAGE0_BASE         (PERIPH_BASE        +0x00020920)
#define CANFD0_RX_MESSAGE1_BASE         (PERIPH_BASE        +0x00020D20)
#define CANFD0_RX_MESSAGE2_BASE         (PERIPH_BASE        +0x00021120)
#define CANFD0_RX_MESSAGE3_BASE         (PERIPH_BASE        +0x00021520)
#define CANFD1_BASE                     (PERIPH_BASE        +0x00024000)
#define CANFD1_RX_FIFO_BASE             (PERIPH_BASE        +0x00024520)
#define CANFD1_COMMON_FIFO_BASE         (PERIPH_BASE        +0x000245B8)
#define CANFD1_TX_MESSAGE_BASE          (PERIPH_BASE        +0x00024604)
#define CANFD1_TX_HISTORY_LIST_BASE     (PERIPH_BASE        +0x00024740)
#define CANFD1_RX_MESSAGE0_BASE         (PERIPH_BASE        +0x00024920)
#define CANFD1_RX_MESSAGE1_BASE         (PERIPH_BASE        +0x00024D20)
#define CANFD1_RX_MESSAGE2_BASE         (PERIPH_BASE        +0x00025120)
#define CANFD1_RX_MESSAGE3_BASE         (PERIPH_BASE        +0x00025520)
#define SENT0_BASE                      (PERIPH_BASE        +0x0001B000)
#define SENT1_BASE                      (PERIPH_BASE        +0x0001B400)
#define DMA_BASE                        (PERIPH_BASE        +0x00000400)
#define CRC_BASE                        (PERIPH_BASE        +0x00010000)
#define ATIM_BASE                       (PERIPH_BASE        +0x00013000)
#define GPTIM0_BASE                     (PERIPH_BASE        +0x00014C00)
#define GPTIM1_BASE                     (PERIPH_BASE        +0x00016400)
#define GPTIM2_BASE                     (PERIPH_BASE        +0x00018000)
#define TAU_COMMON_BASE                 (PERIPH_BASE        +0x00015800)
#define TAU0_BASE                       (PERIPH_BASE        +0x00015810)
#define TAU1_BASE                       (PERIPH_BASE        +0x00015910)
#define BSTIM32_BASE                    (PERIPH_BASE        +0x00016000)
#define BSTIM16_BASE                    (PERIPH_BASE        +0x00018400)
#define LPTIM32_BASE                    (PERIPH_BASE        +0x00013400)
#define LPTIM16_BASE                    (PERIPH_BASE        +0x00018800)
#define RTC_BASE                        (PERIPH_BASE        +0x00011000)
#define ADC_BASE                        (PERIPH_BASE        +0x00015C00)
#define DAC_BASE                        (PERIPH_BASE        +0x00019000)
#define PGL_BASE                        (PERIPH_BASE        +0x00016C00)
#define GPIOA_BASE                      (PERIPH_BASE        +0x00000C00)
#define GPIOB_BASE                      (PERIPH_BASE        +0x00000C40)
#define GPIOC_BASE                      (PERIPH_BASE        +0x00000C80)
#define GPIOD_BASE                      (PERIPH_BASE        +0x00000CC0)
#define GPIOE_BASE                      (PERIPH_BASE        +0x00000D00)
#define GPIOF_BASE                      (PERIPH_BASE        +0x00000D40)
#define GPIOG_BASE                      (PERIPH_BASE        +0x00000D80)
#define GPIOH_BASE                      (PERIPH_BASE        +0x00000DC0)
#define GPIOI_BASE                      (PERIPH_BASE        +0x00000E00)
#define GPIO_COMMON_BASE                (PERIPH_BASE        +0x00000E40)
#define SFU_BASE                        (PERIPH_BASE        +0x00001C00)
#define DBG_BASE                        (PERIPH_BASE        +0x00000000)

/* ================================================================================ */
/* ================             Peripheral declaration             ================ */
/* ================================================================================ */

#define FLASH                           ((FLASH_Type        *) FLS_BASE         )
#define PMU                             ((PMU_Type          *) PMU_BASE         )
#define SCU                             ((SCU_Type          *) SCU_BASE         )
#define RMU                             ((RMU_Type          *) RMU_BASE         )
#define IWDT                            ((IWDT_Type         *) IWDT_BASE        )
#define WWDT                            ((WWDT_Type         *) WWDT_BASE        )
#define CMU                             ((CMU_Type          *) CMU_BASE         )
#define CLM0                            ((CLM_Type          *) CLM0_BASE        )
#define CLM1                            ((CLM_Type          *) CLM1_BASE        )
#define SVD                             ((SVD_Type          *) SVD_BASE         )
#define AES                             ((AES_Type          *) AES_BASE         )
#define RNG                             ((RNG_Type          *) RNG_BASE         )
#define COMP1                           ((COMP_Type         *) COMP1_BASE       )
#define COMP2                           ((COMP_Type         *) COMP2_BASE       )
#define COMP3                           ((COMP_Type         *) COMP3_BASE       )
#define COMP4                           ((COMP_Type         *) COMP4_BASE       )
#define COMP                            ((COMP_COMMON_Type  *) COMP_COMMON_BASE )
#define HDIV                            ((HDIV_Type         *) HDIV_BASE        )
#define I2CSMB0                         ((I2CSMB_Type       *) I2CSMB0_BASE     )
#define I2CSMB1                         ((I2CSMB_Type       *) I2CSMB1_BASE     )
#define I2C0                            ((I2C_Type          *) I2C0_BASE        )
#define I2C1                            ((I2C_Type          *) I2C1_BASE        )
#define UART                            ((UART_COMMON_Type  *) UART_COMMON_BASE )
#define UART0                           ((UART_Type         *) UART0_BASE       )
#define UART1                           ((UART_Type         *) UART1_BASE       )
#define UART2                           ((UART_Type         *) UART2_BASE       )
#define UART3                           ((UART_Type         *) UART3_BASE       )
#define UART4                           ((UART_Type         *) UART4_BASE       )
#define UART5                           ((UART_Type         *) UART5_BASE       )
#define LPUART0                         ((LPUART_Type       *) LPUART0_BASE     )
#define LPUART1                         ((LPUART_Type       *) LPUART1_BASE     )
#define LPUART2                         ((LPUART_Type       *) LPUART2_BASE     )
#define SPI0                            ((SPI_Type          *) SPI0_BASE        )
#define SPI1                            ((SPI_Type          *) SPI1_BASE        )
#define SPI2                            ((SPI_Type          *) SPI2_BASE        )
#define SPI3                            ((SPI_Type          *) SPI3_BASE        )
#define CAN                             ((CAN_Type          *) CAN_BASE         )
#define CANFD0                          ((CANFD_COMMON_Type          *) CANFD0_BASE                 )
#define CANFD0_RX_FIFO                  ((CANFD_RX_FIFO_Type         *) CANFD0_RX_FIFO_BASE         )
#define CANFD0_COMMON_FIFO              ((CANFD_COMMON_FIFO_Type     *) CANFD0_COMMON_FIFO_BASE     )
#define CANFD0_TX_MESSAGE               ((CANFD_TX_MESSAGE_Type      *) CANFD0_TX_MESSAGE_BASE      )
#define CANFD0_TX_HISTORY_LIST          ((CANFD_TX_HISTORY_LIST_Type *) CANFD0_TX_HISTORY_LIST_BASE )
#define CANFD0_RX_MESSAGE0              ((CANFD_RX_MESSAGE_Type      *) CANFD0_RX_MESSAGE0_BASE     )
#define CANFD0_RX_MESSAGE1              ((CANFD_RX_MESSAGE_Type      *) CANFD0_RX_MESSAGE1_BASE     )
#define CANFD0_RX_MESSAGE2              ((CANFD_RX_MESSAGE_Type      *) CANFD0_RX_MESSAGE2_BASE     )
#define CANFD0_RX_MESSAGE3              ((CANFD_RX_MESSAGE_Type      *) CANFD0_RX_MESSAGE3_BASE     )
#define CANFD1                          ((CANFD_COMMON_Type          *) CANFD1_BASE                 )
#define CANFD1_RX_FIFO                  ((CANFD_RX_FIFO_Type         *) CANFD1_RX_FIFO_BASE         )
#define CANFD1_COMMON_FIFO              ((CANFD_COMMON_FIFO_Type     *) CANFD1_COMMON_FIFO_BASE     )
#define CANFD1_TX_MESSAGE               ((CANFD_TX_MESSAGE_Type      *) CANFD1_TX_MESSAGE_BASE      )
#define CANFD1_TX_HISTORY_LIST          ((CANFD_TX_HISTORY_LIST_Type *) CANFD1_TX_HISTORY_LIST_BASE )
#define CANFD1_RX_MESSAGE0              ((CANFD_RX_MESSAGE_Type      *) CANFD1_RX_MESSAGE0_BASE     )
#define CANFD1_RX_MESSAGE1              ((CANFD_RX_MESSAGE_Type      *) CANFD1_RX_MESSAGE1_BASE     )
#define CANFD1_RX_MESSAGE2              ((CANFD_RX_MESSAGE_Type      *) CANFD1_RX_MESSAGE2_BASE     )
#define CANFD1_RX_MESSAGE3              ((CANFD_RX_MESSAGE_Type      *) CANFD1_RX_MESSAGE3_BASE     )
#define SENT0                           ((SENT_Type         *) SENT0_BASE       )
#define SENT1                           ((SENT_Type         *) SENT1_BASE       )
#define DMA                             ((DMA_Type          *) DMA_BASE         )
#define CRC                             ((CRC_Type          *) CRC_BASE         )
#define ATIM                            ((ATIM_Type         *) ATIM_BASE        )
#define GPTIM0                          ((GPTIM_Type        *) GPTIM0_BASE      )
#define GPTIM1                          ((GPTIM_Type        *) GPTIM1_BASE      )
#define GPTIM2                          ((GPTIM_Type        *) GPTIM2_BASE      )
#define TAU                             ((TAU_COMMON_Type   *) TAU_COMMON_BASE  )
#define TAU0                            ((TAU0_Type         *) TAU0_BASE        )
#define TAU1                            ((TAU1_Type         *) TAU1_BASE        )
#define BSTIM32                         ((BSTIM32_Type      *) BSTIM32_BASE     )
#define BSTIM16                         ((BSTIM16_Type      *) BSTIM16_BASE     )
#define LPTIM32                         ((LPTIM32_Type      *) LPTIM32_BASE     )
#define LPTIM16                         ((LPTIM16_Type      *) LPTIM16_BASE     )
#define RTC                             ((RTC_Type          *) RTC_BASE         )
#define ADC                             ((ADC_Type          *) ADC_BASE         )
#define DAC                             ((DAC_Type          *) DAC_BASE         )
#define PGL                             ((PGL_Type          *) PGL_BASE         )
#define GPIOA                           ((GPIO_Type         *) GPIOA_BASE       )
#define GPIOB                           ((GPIO_Type         *) GPIOB_BASE       )
#define GPIOC                           ((GPIO_Type         *) GPIOC_BASE       )
#define GPIOD                           ((GPIO_Type         *) GPIOD_BASE       )
#define GPIOE                           ((GPIO_Type         *) GPIOE_BASE       )
#define GPIOF                           ((GPIO_Type         *) GPIOF_BASE       )
#define GPIOG                           ((GPIO_Type         *) GPIOG_BASE       )
#define GPIOH                           ((GPIO_Type         *) GPIOH_BASE       )
#define GPIOI                           ((GPIO_Type         *) GPIOI_BASE       )
#define GPIO                            ((GPIO_COMMON_Type  *) GPIO_COMMON_BASE )
#define SFU                             ((SFU_Type          *) SFU_BASE         )
#define DBG                             ((DBG_Type          *) DBG_BASE         )

/* ================================================================================ */
/* ================             Peripheral include                 ================ */
/* ================================================================================ */

/** @} */ /* End of group Device_Peripheral_Registers */
/** @} */ /* End of group FM33FG0XXA */
/** @} */ /* End of group Keil */

#ifdef __cplusplus
}
#endif

#endif  /* FM33FG0XXA_H */


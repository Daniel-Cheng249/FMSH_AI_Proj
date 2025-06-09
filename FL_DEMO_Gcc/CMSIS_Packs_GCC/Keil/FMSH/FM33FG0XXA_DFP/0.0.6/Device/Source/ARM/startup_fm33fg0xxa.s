;//-------- <<< Use Configuration Wizard in Context Menu >>> ------------------
;*/


; <h> Stack Configuration
;   <o> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Stack_Size      EQU     0x00000800

                AREA    STACK, NOINIT, READWRITE, ALIGN=3
Stack_Mem       SPACE   Stack_Size
__initial_sp    


; <h> Heap Configuration
;   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Heap_Size       EQU     0x00000800

                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base
Heap_Mem        SPACE   Heap_Size
__heap_limit

                PRESERVE8
                THUMB


; Vector Table Mapped to Address 0 at Reset

                AREA    RESET, DATA, READONLY
                EXPORT  __Vectors
                EXPORT  __Vectors_End
                EXPORT  __Vectors_Size


__Vectors       DCD     __initial_sp              ; Top of Stack
                DCD     Reset_Handler             ; Reset Handler
                DCD     NMI_Handler               ; NMI Handler
                DCD     HardFault_Handler         ; Hard Fault Handler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SVC_Handler               ; SVCall Handler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     PendSV_Handler            ; PendSV Handler
                DCD     SysTick_Handler           ; SysTick Handler

                ; External Interrupts
                DCD     WDT_IRQHandler            ; 0   WDT
                DCD     SVD_IRQHandler            ; 1   SVD
                DCD     RTC_IRQHandler            ; 2   RTC
                DCD     CANFD0_IRQHandler         ; 3   CANFD0
                DCD     CANFD1_IRQHandler         ; 4   CANFD1
                DCD     ADC_IRQHandler            ; 5   ADC
                DCD     FSCAN_IRQHandler          ; 6   FSCAN
                DCD     UART0_IRQHandler          ; 7   UART0
                DCD     UART1_IRQHandler          ; 8   UART1
                DCD     UART2_IRQHandler          ; 9   UART2
                DCD     UART3_IRQHandler          ; 10  UART3
                DCD     UART4_UART5_IRQHandler    ; 11  UART4_UART5
                DCD     I2CMX_IRQHandler          ; 12  I2CMX
                DCD     SPI0_IRQHandler           ; 13  SPI0
                DCD     SPI1_IRQHandler           ; 14  SPI1
                DCD     SPI2_IRQHandler           ; 15  SPI2
                DCD     SPI3_IRQHandler           ; 16  SPI3
                DCD     I2C_SMBX_IRQHandler       ; 17  I2C_SMBX
                DCD     SENTX_IRQHandler          ; 18  SENTX
                DCD     AES_IRQHandler            ; 19  AES
                DCD     LPTIM_BSTIM_IRQHandler    ; 20  LPTIM_BSTIM
                DCD     DMA_IRQHandler            ; 21  DMA
                DCD     WKUPX_IRQHandler          ; 22  WKUPX
                DCD     TAU_PGL_IRQHandler        ; 23  TAU_PGL
                DCD     GPTIMX_IRQHandler         ; 24  GPTIMX
                DCD     COMPX_IRQHandler          ; 25  COMPX
                DCD     CLMX_IRQHandler           ; 26  CLMX
                DCD     NVMIF_IRQHandler          ; 27  NVMIF
                DCD     ATIM_IRQHandler           ; 28  ATIM
                DCD     LPUART_IRQHandler         ; 29  LPUART
                DCD     EXTI_DAC_IRQHandler       ; 30  EXTI_DAC
                DCD     ECCC_RAMP_FDET_IRQHandler ; 31  ECCC_RAMP_FDET

__Vectors_End

__Vectors_Size  EQU     __Vectors_End - __Vectors

                AREA    |.text|, CODE, READONLY


; Reset Handler

Reset_Handler   PROC
                EXPORT  Reset_Handler             [WEAK]
                IMPORT  SystemInit
                IMPORT  __main
                
                LDR     R0, =0x1FFFFB04
                LDR     R1, [R0]
                LDR     R2, =0x00FF00FF
                ANDS    R1, R1, R2
                LDR     R2, =0x20010000
                LDR     R3, =0x00AA0055
                CMP     R1, R3
                BNE     StartFillZeroRAM
                LDR     R2, =0x20008000
StartFillZeroRAM
                LDR     R1, =0x20000000
                MOVS    R3, #0
                B       LoopFillZeroRAM
FillZeroRAM
                STR     R3, [R1]
                ADDS    R1, R1, #4
LoopFillZeroRAM
                CMP     R1, R2
                BCC     FillZeroRAM
                
                LDR     R0, =SystemInit
                BLX     R0        
                LDR     R0, =__main
                BX      R0
                ENDP


; Dummy Exception Handlers (infinite loops which can be modified)

NMI_Handler     PROC
                EXPORT  NMI_Handler               [WEAK]
                B       .
                ENDP
HardFault_Handler\
                PROC
                EXPORT  HardFault_Handler         [WEAK]
                B       .
                ENDP
SVC_Handler     PROC
                EXPORT  SVC_Handler               [WEAK]
                B       .
                ENDP
PendSV_Handler  PROC
                EXPORT  PendSV_Handler            [WEAK]
                B       .
                ENDP
SysTick_Handler PROC
                EXPORT  SysTick_Handler           [WEAK]
                B       .
                ENDP


Default_Handler PROC
                EXPORT  ECCC_RAMP_FDET_IRQHandler [WEAK]
                EXPORT  EXTI_DAC_IRQHandler       [WEAK]
                EXPORT  LPUART_IRQHandler         [WEAK]
                EXPORT  ATIM_IRQHandler           [WEAK]
                EXPORT  NVMIF_IRQHandler          [WEAK]
                EXPORT  CLMX_IRQHandler           [WEAK]
                EXPORT  COMPX_IRQHandler          [WEAK]
                EXPORT  GPTIMX_IRQHandler         [WEAK]
                EXPORT  TAU_PGL_IRQHandler        [WEAK]
                EXPORT  WKUPX_IRQHandler          [WEAK]
                EXPORT  DMA_IRQHandler            [WEAK]
                EXPORT  LPTIM_BSTIM_IRQHandler    [WEAK]
                EXPORT  AES_IRQHandler            [WEAK]
                EXPORT  SENTX_IRQHandler          [WEAK]
                EXPORT  I2C_SMBX_IRQHandler       [WEAK]
                EXPORT  SPI3_IRQHandler           [WEAK]
                EXPORT  SPI2_IRQHandler           [WEAK]
                EXPORT  SPI1_IRQHandler           [WEAK]
                EXPORT  SPI0_IRQHandler           [WEAK]
                EXPORT  I2CMX_IRQHandler          [WEAK]
                EXPORT  UART4_UART5_IRQHandler    [WEAK]
                EXPORT  UART3_IRQHandler          [WEAK]
                EXPORT  UART2_IRQHandler          [WEAK]
                EXPORT  UART1_IRQHandler          [WEAK]
                EXPORT  UART0_IRQHandler          [WEAK]
                EXPORT  FSCAN_IRQHandler          [WEAK]
                EXPORT  ADC_IRQHandler            [WEAK]
                EXPORT  CANFD1_IRQHandler         [WEAK]
                EXPORT  CANFD0_IRQHandler         [WEAK]
                EXPORT  RTC_IRQHandler            [WEAK]
                EXPORT  SVD_IRQHandler            [WEAK]
                EXPORT  WDT_IRQHandler            [WEAK]
ECCC_RAMP_FDET_IRQHandler
EXTI_DAC_IRQHandler
LPUART_IRQHandler
ATIM_IRQHandler
NVMIF_IRQHandler
CLMX_IRQHandler
COMPX_IRQHandler
GPTIMX_IRQHandler
TAU_PGL_IRQHandler
WKUPX_IRQHandler
DMA_IRQHandler
LPTIM_BSTIM_IRQHandler
AES_IRQHandler
SENTX_IRQHandler
I2C_SMBX_IRQHandler
SPI3_IRQHandler
SPI2_IRQHandler
SPI1_IRQHandler
SPI0_IRQHandler
I2CMX_IRQHandler
UART4_UART5_IRQHandler
UART3_IRQHandler
UART2_IRQHandler
UART1_IRQHandler
UART0_IRQHandler
FSCAN_IRQHandler
ADC_IRQHandler
CANFD1_IRQHandler
CANFD0_IRQHandler
RTC_IRQHandler
SVD_IRQHandler
WDT_IRQHandler


                B       .
                ENDP


                ALIGN


; User Initial Stack & Heap

                IF      :DEF:__MICROLIB

                EXPORT  __initial_sp
                EXPORT  __heap_base
                EXPORT  __heap_limit

                ELSE

                IMPORT  __use_two_region_memory
                EXPORT  __user_initial_stackheap
__user_initial_stackheap

                 LDR     R0, =  Heap_Mem
                 LDR     R1, =(Stack_Mem + Stack_Size)
                 LDR     R2, = (Heap_Mem +  Heap_Size)
                 LDR     R3, = Stack_Mem
                 BX      LR

                ALIGN

                ENDIF


                END
                    
 *****END OF FILE*****

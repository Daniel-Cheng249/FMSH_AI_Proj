#ifndef TSI_USER_DEF_H
#define TSI_USER_DEF_H

#ifdef __cplusplus
extern "C" {
#endif

/*---------------------------------------------------------------------------*/
/* Resource usages                                                           */
/*---------------------------------------------------------------------------*/

/** Total number of widgets. */
#define TSI_WIDGET_NUM                          (10U)

/* Widget information. */
#define TSI_WIDGET_SC_BUTTON_USED               (1U)
#define TSI_WIDGET_SC_PROXIMITY_USED            (1U)
#define TSI_WIDGET_SC_SLIDER_USED               (0U)
#define TSI_WIDGET_SC_TOUCHPAD_USED             (0U)
#define TSI_WIDGET_MC_BUTTON_USED               (1U)
#define TSI_WIDGET_MC_SLIDER_USED               (0U)
#define TSI_WIDGET_MC_TOUCHPAD_USED             (0U)

/* Total number of sensors. */
#define TSI_SENSOR_NUM                          (10U)

/* Number of sensors of each widget. */
#define TSI_BUTTON_EXPAD1_MC_SENSOR_NUM         (1U)
#define TSI_BUTTON_EXPAD1_RX_SENSOR_NUM         (1U)
#define TSI_BUTTON_EXPAD1_TX_SENSOR_NUM         (1U)
#define TSI_BUTTON_INPAD1_MC_SENSOR_NUM         (1U)
#define TSI_BUTTON_INPAD1_RX_SENSOR_NUM         (1U)
#define TSI_BUTTON_INPAD1_TX_SENSOR_NUM         (1U)
#define TSI_BUTTON_INPAD2_MC_SENSOR_NUM         (1U)
#define TSI_BUTTON_INPAD2_RX_SENSOR_NUM         (1U)
#define TSI_BUTTON_INPAD2_TX_SENSOR_NUM         (1U)
#define TSI_PROX_ALL_SENSOR_NUM                 (1U)

/** Total number of pins. */
#define TSI_PIN_NUM                             (6U)

/* Clock information. */
/** Total number of clock configurations. */
#define TSI_CLOCK_NUM                           (2U)

/** Self-cap sensor clock configuration begin index. */
#define TSI_CLOCK_SC_IDX                        (0U)

/** Number of self-cap sensor clock configurations. */
#define TSI_CLOCK_SC_NUM                        (1U)

/** Mutual-cap sensor clock configuration begin index. */
#define TSI_CLOCK_MC_IDX                        (TSI_CLOCK_SC_IDX + TSI_CLOCK_SC_NUM)

/** Number of mutual-cap sensor clock configurations. */
#define TSI_CLOCK_MC_NUM                        (1U)

/* Total number of shield electrodes. */
#define TSI_SHIELD_NUM                          (6U)

/* Total number of Scan groups. */
#define TSI_SCAN_GROUP_NUM                      (5U)

#if (TSI_USE_CONFIG_DESCRIPTOR == 1U)
/* Config descriptor size. */
#define TSI_CONF_DESC_SIZE                      (142U)
#endif  /* TSI_USE_CONFIG_DESCRIPTOR == 1U */

/*---------------------------------------------------------------------------*/
/* Device-specified defines                                                  */
/*---------------------------------------------------------------------------*/
/** Device TSI module bus clock frequency. */
#define TSI_DEV_BUS_CLOCK_FREQ                  (8000000UL)

/** Device TSI module operation clock frequency. */
#define TSI_DEV_OP_CLOCK_FREQ                   (8000000UL)

/** Device VDD voltage (unit: mV). */
#define TSI_DEV_VDD_MV                          (5000UL)

/** Device TSI reference voltage (unit: mV). */
#define TSI_DEV_REF_MV                          (1000UL)

#if (TSI_USE_DMA == 1U)

/** DMA IRQ priority is set by user or not. */
#define TSI_DMA_IRQ_PRIORITY_BY_USER            (0U)

#if (TSI_DMA_IRQ_PRIORITY_BY_USER == 0U)
/* DMA interrupt priority */
#define TSI_DMA_IRQ_PRIORITY                    (2U)
#endif

/* DMA write channel */
#define TSI_DMA_WR_CHANNEL                      0
#define TSI_DMA_WR_PRIORITY                     (2UL)

/* DMA read channel */
#define TSI_DMA_RD_CHANNEL                      1
#define TSI_DMA_RD_PRIORITY                     (2UL)

#endif  /* TSI_USE_DMA */

/* TSI module interrupt priority */
#define TSI_IRQ_PRIORITY                        (1U)

/* Device watchdog timer usage */
#define TSI_SYS_IWDT_USED                       (1U)
#define TSI_SYS_WWDT_USED                       (0U)

/*---------------------------------------------------------------------------*/
/* Driver timeout defines                                                    */
/*---------------------------------------------------------------------------*/
/** Device TSI_PLL lock timeout. */
#define TSI_DEV_PLL_LOCK_TIMEOUT_VALUE          (0xFFFFFFFFUL)

/** Driver blocking scan timeout. */
#define TSI_DRV_BLOCKING_TIMEOUT_VALUE          (0xFFFFFFFFUL)

/*---------------------------------------------------------------------------*/
/* Exported objects                                                          */
/*---------------------------------------------------------------------------*/
/* Scan configuration(s) */
extern TSI_ClockConfTypeDef TSI_ClockConf[TSI_CLOCK_NUM];
extern const TSI_ClockConfTypeDef TSI_ClockConfConstInit[TSI_CLOCK_NUM];

/* Library handle(s) and device driver handle(s) */
#ifdef TSI_NO_RAM_INIT
extern TSI_LibHandleTypeDef TSI_LibHandleConstInit;
#endif
extern TSI_LibHandleTypeDef TSI_LibHandle;
extern TSI_DriverTypeDef TSI_Drv;
extern const TSI_DriverTypeDef TSI_DrvConstInit;

/* Widget list(s) information */
extern TSI_WidgetListTypeDef TSI_WidgetList;
extern TSI_WidgetTypeDef *const TSI_WidgetPointers[TSI_WIDGET_NUM];
extern const TSI_MetaWidgetTypeDef TSI_MetaWidgets[TSI_WIDGET_NUM];
extern const TSI_WidgetListTypeDef TSI_WidgetListConstInit;

/* Sensor list(s) information */
extern TSI_SensorListTypeDef TSI_SensorList;
extern TSI_SensorTypeDef *const TSI_SensorPointers[TSI_SENSOR_NUM];
extern const TSI_MetaSensorTypeDef TSI_MetaSensors[TSI_SENSOR_NUM];
extern const TSI_SensorListTypeDef TSI_SensorListConstInit;

#if (TSI_USE_CONFIG_DESCRIPTOR == 1U)
/* Configuration descriptor (For tuner and debugging) */
extern const uint8_t TSI_ConfDesc[TSI_CONF_DESC_SIZE];
#endif  /* TSI_USE_CONFIG_DESCRIPTOR == 1U */

/*---------------------------------------------------------------------------*/
/* Object APIs                                                               */
/*---------------------------------------------------------------------------*/
void TSI_InitObjects(TSI_LibHandleTypeDef *handle);

/*---------------------------------------------------------------------------*/
/* TSI library user object definitions                                       */
/*---------------------------------------------------------------------------*/
struct _TSI_WidgetList {
    TSI_MutualCapButtonTypeDef Button_ExPad1_MC;
    TSI_SelfCapButtonTypeDef Button_ExPad1_Rx;
    TSI_SelfCapButtonTypeDef Button_ExPad1_Tx;
    TSI_MutualCapButtonTypeDef Button_InPad1_MC;
    TSI_SelfCapButtonTypeDef Button_InPad1_Rx;
    TSI_SelfCapButtonTypeDef Button_InPad1_Tx;
    TSI_MutualCapButtonTypeDef Button_InPad2_MC;
    TSI_SelfCapButtonTypeDef Button_InPad2_Rx;
    TSI_SelfCapButtonTypeDef Button_InPad2_Tx;
    TSI_SelfCapProximityTypeDef Prox_All;
};

struct _TSI_SensorList {
    TSI_SensorTypeDef Button_ExPad1_MC[TSI_BUTTON_EXPAD1_MC_SENSOR_NUM];
    TSI_SensorTypeDef Button_ExPad1_Rx[TSI_BUTTON_EXPAD1_RX_SENSOR_NUM];
    TSI_SensorTypeDef Button_ExPad1_Tx[TSI_BUTTON_EXPAD1_TX_SENSOR_NUM];
    TSI_SensorTypeDef Button_InPad1_MC[TSI_BUTTON_INPAD1_MC_SENSOR_NUM];
    TSI_SensorTypeDef Button_InPad1_Rx[TSI_BUTTON_INPAD1_RX_SENSOR_NUM];
    TSI_SensorTypeDef Button_InPad1_Tx[TSI_BUTTON_INPAD1_TX_SENSOR_NUM];
    TSI_SensorTypeDef Button_InPad2_MC[TSI_BUTTON_INPAD2_MC_SENSOR_NUM];
    TSI_SensorTypeDef Button_InPad2_Rx[TSI_BUTTON_INPAD2_RX_SENSOR_NUM];
    TSI_SensorTypeDef Button_InPad2_Tx[TSI_BUTTON_INPAD2_TX_SENSOR_NUM];
    TSI_SensorTypeDef Prox_All[TSI_PROX_ALL_SENSOR_NUM];
};

#ifdef __cplusplus
}
#endif

#endif  /* TSI_USER_DEF_H */



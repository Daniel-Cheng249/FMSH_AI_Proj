/* Includes -----------------------------------------------------------------*/
#include "tsi_object.h"
#include "tsi_utils.h"
#include <string.h>

/* Helper macros ------------------------------------------------------------*/
/* Scan group define helper. */
#define TSI_SCAN_GROUP(ID, TYPE, SIZE, OPT)                         \
    static const uint16_t TSI_ScanGrpSnsList ## ID[SIZE];           \
    TSI_USED static const TSI_ScanGroupTypeDef TSI_ScanGrp ## ID    \
    TSI_SECTION(TSI_GROUP_SECTION) = {                              \
        SIZE, TYPE, OPT,                                            \
        (uint16_t*) TSI_ScanGrpSnsList ## ID,                       \
    };                                                              \
    static const uint16_t TSI_ScanGrpSnsList ## ID[] =

/* Scan group list head element (NULL). */
TSI_USED static const TSI_ScanGroupTypeDef TSI_ScanGrpHead
TSI_SECTION(TSI_GROUP_BEGIN_SECTION) = {0U, 0U, 0U, NULL};

/* Scan group ref helper. */
#define TSI_SCAN_GROUP_REF(ID)                                      \
    ((TSI_ScanGroupTypeDef*)&TSI_ScanGrp ## ID)

/* Pointer to first element in scan group list. */
#define TSI_SCAN_GROUP_BEGIN    (((TSI_ScanGroupTypeDef *)&TSI_ScanGrpHead) + 1U)

/* Exported object definitions ----------------------------------------------*/
#ifdef TSI_NO_RAM_INIT
    TSI_USED TSI_LibHandleTypeDef TSI_LibHandle TSI_SECTION(TSI_LIB_SECTION);
#endif
TSI_USED TSI_DriverTypeDef TSI_Drv TSI_SECTION(TSI_DRIVER_SECTION);
TSI_ALIGN4 TSI_USED TSI_WidgetListTypeDef TSI_WidgetList TSI_SECTION(TSI_WIDGETS_SECTION);
TSI_ALIGN4 TSI_USED TSI_SensorListTypeDef TSI_SensorList TSI_SECTION(TSI_SENSORS_SECTION);

/* Private object definitions -----------------------------------------------*/
/* Debounce buffers */
TSI_USED static uint8_t TSI_Debounce_Button_ExPad1_MC[TSI_BUTTON_EXPAD1_MC_SENSOR_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static uint8_t TSI_Debounce_Button_ExPad1_Rx[TSI_BUTTON_EXPAD1_RX_SENSOR_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static uint8_t TSI_Debounce_Button_ExPad1_Tx[TSI_BUTTON_EXPAD1_TX_SENSOR_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static uint8_t TSI_Debounce_Button_InPad1_MC[TSI_BUTTON_INPAD1_MC_SENSOR_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static uint8_t TSI_Debounce_Button_InPad1_Rx[TSI_BUTTON_INPAD1_RX_SENSOR_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static uint8_t TSI_Debounce_Button_InPad1_Tx[TSI_BUTTON_INPAD1_TX_SENSOR_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static uint8_t TSI_Debounce_Button_InPad2_MC[TSI_BUTTON_INPAD2_MC_SENSOR_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static uint8_t TSI_Debounce_Button_InPad2_Rx[TSI_BUTTON_INPAD2_RX_SENSOR_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static uint8_t TSI_Debounce_Button_InPad2_Tx[TSI_BUTTON_INPAD2_TX_SENSOR_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static uint8_t TSI_Debounce_Prox_All[TSI_PROX_ALL_SENSOR_NUM] TSI_SECTION(TSI_MISCS_SECTION);

/* Filter buffers */
TSI_USED static TSI_NormSnsFilterTypeDef TSI_Filter_Button_ExPad1_MC[TSI_BUTTON_EXPAD1_MC_SENSOR_NUM][TSI_SCAN_FREQ_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static TSI_NormSnsFilterTypeDef TSI_Filter_Button_ExPad1_Rx[TSI_BUTTON_EXPAD1_RX_SENSOR_NUM][TSI_SCAN_FREQ_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static TSI_NormSnsFilterTypeDef TSI_Filter_Button_ExPad1_Tx[TSI_BUTTON_EXPAD1_TX_SENSOR_NUM][TSI_SCAN_FREQ_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static TSI_NormSnsFilterTypeDef TSI_Filter_Button_InPad1_MC[TSI_BUTTON_INPAD1_MC_SENSOR_NUM][TSI_SCAN_FREQ_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static TSI_NormSnsFilterTypeDef TSI_Filter_Button_InPad1_Rx[TSI_BUTTON_INPAD1_RX_SENSOR_NUM][TSI_SCAN_FREQ_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static TSI_NormSnsFilterTypeDef TSI_Filter_Button_InPad1_Tx[TSI_BUTTON_INPAD1_TX_SENSOR_NUM][TSI_SCAN_FREQ_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static TSI_NormSnsFilterTypeDef TSI_Filter_Button_InPad2_MC[TSI_BUTTON_INPAD2_MC_SENSOR_NUM][TSI_SCAN_FREQ_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static TSI_NormSnsFilterTypeDef TSI_Filter_Button_InPad2_Rx[TSI_BUTTON_INPAD2_RX_SENSOR_NUM][TSI_SCAN_FREQ_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static TSI_NormSnsFilterTypeDef TSI_Filter_Button_InPad2_Tx[TSI_BUTTON_INPAD2_TX_SENSOR_NUM][TSI_SCAN_FREQ_NUM] TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED static TSI_ProxSnsFilterTypeDef TSI_Filter_Prox_All[TSI_PROX_ALL_SENSOR_NUM][TSI_SCAN_FREQ_NUM] TSI_SECTION(TSI_MISCS_SECTION);

#if (TSI_USE_TIMEBASE == 1U)
    /** Library timer handle object. */
    TSI_USED static TSI_TimerContextTypeDef TSI_TimerContext
    TSI_SECTION(TSI_MISCS_SECTION);
    #if (TSI_SCAN_USE_TIMEBASE == 1U)
        /** Library scan interval timer object. */
        TSI_USED static TSI_TimerTypeDef TSI_ScanInvTimer
        TSI_SECTION(TSI_MISCS_SECTION);
    #endif  /* TSI_SCAN_USE_TIMEBASE == 1U */
#endif  /* TSI_USE_TIMEBASE == 1U */

/* Configurations -----------------------------------------------------------*/
/*-----------------------------------*/
/* Clocks                            */
/*-----------------------------------*/
TSI_USED TSI_ClockConfTypeDef TSI_ClockConf[TSI_CLOCK_NUM]
TSI_SECTION(TSI_MISCS_SECTION);
TSI_USED const TSI_ClockConfTypeDef TSI_ClockConfConstInit[TSI_CLOCK_NUM]
TSI_SECTION(TSI_CONST_MISCS_SECTION) = {
    /* Self-cap clocks */
    {
        1U,                 /* opClockSel */
        0U,                 /* snsClockSrc */
        1U,                 /* snsClockSel */
        8U,                 /* prsWidth */
        6U,                 /* sscWidth */
        0U,                 /* sscPoint */
        0U,                 /* reserved */
        1U,                 /* modClockPsc */
        0x8EU,              /* prsCoeff */
        0x21U,              /* sscCoeff */
        0U,                 /* reserved2 */
        8U,                 /* pllRefPsc */
        60U,                /* pllMul */
    },
    /* Mutual-cap clocks */
    {
        1U,                 /* opClockSel */
        0U,                 /* snsClockSrc */
        0U,                 /* snsClockSel */
        8U,                 /* prsWidth */
        6U,                 /* sscWidth */
        0U,                 /* sscPoint */
        0U,                 /* reserved */
        1U,                 /* modClockPsc */
        0x8EU,              /* prsCoeff */
        0x21U,              /* sscCoeff */
        0U,                 /* reserved2 */
        8U,                 /* pllRefPsc */
        60U,                /* pllMul */
    },
};

/*-----------------------------------*/
/* Ports                             */
/*-----------------------------------*/
TSI_USED static const TSI_IOConfTypeDef TSI_IOConf[TSI_PIN_NUM]
TSI_SECTION(TSI_CONST_MISCS_SECTION) = {
    { 1U, 0U, 5U },           /* PB0 */
    { 4U, 2U, 15U },          /* PE2 */
    { 4U, 4U, 16U },          /* PE4 */
    { 4U, 5U, 17U },          /* PE5 */
    { 3U, 13U, 33U },         /* PC13 */
    { 3U, 14U, 34U },         /* PC14 */
};
/*-----------------------------------*/
/* Shields                           */
/*-----------------------------------*/
#if (TSI_SHIELD_NUM > 0U)
TSI_USED static const TSI_ShieldConfTypeDef TSI_ShieldConf[TSI_SHIELD_NUM]
TSI_SECTION(TSI_CONST_MISCS_SECTION) = {
    {
        5U,                /* Channel */
    },
    {
        15U,                /* Channel */
    },
    {
        16U,                /* Channel */
    },
    {
        17U,                 /* Channel */
    },
    {
        33U,                /* Channel */
    },
    {
        34U,                /* Channel */
    },
};
#endif

/*-----------------------------------*/
/* Scan groups                       */
/*-----------------------------------*/
TSI_SCAN_GROUP(0, TSI_SCAN_GROUP_SELF_CAP, 6, TSI_DEV_OPT_IDLE_FLOATING)
{
    0,1,3,4,6,7
};

TSI_SCAN_GROUP(1, TSI_SCAN_GROUP_MUTUAL_CAP, 1, 0UL)
{
    8
};

TSI_SCAN_GROUP(2, TSI_SCAN_GROUP_MUTUAL_CAP, 1, 0UL)
{
    2
};

TSI_SCAN_GROUP(3, TSI_SCAN_GROUP_MUTUAL_CAP, 1, 0UL)
{
    5
};
TSI_SCAN_GROUP(4, TSI_SCAN_GROUP_SELF_CAP_PARALLEL, 6,TSI_DEV_OPT_IDLE_FLOATING)
{
    9,6,1,0,4,3
};
/*-----------------------------------*/
/* Library and driver init data      */
/*-----------------------------------*/

#ifdef TSI_NO_RAM_INIT
TSI_USED TSI_LibHandleTypeDef TSI_LibHandleConstInit
TSI_SECTION(TSI_CONST_LIB_SECTION) = {
#else
TSI_USED TSI_LibHandleTypeDef TSI_LibHandle
TSI_SECTION(TSI_LIB_SECTION) = {
#endif
    { { 0U } },
    { NULL },
    &TSI_Drv,
    (TSI_WidgetTypeDef **) &TSI_WidgetPointers[0],
    TSI_WIDGET_NUM,
    TSI_LIB_RESET,
#if (TSI_USE_TIMEBASE == 1U)
    &TSI_TimerContext,
#if (TSI_SCAN_USE_TIMEBASE == 1U)
    &TSI_ScanInvTimer,
    0U,
#endif
#endif
#if (TSI_USED_IN_LPM_MODE == 1U)
    0U,
#endif
};

TSI_USED const TSI_DriverTypeDef TSI_DrvConstInit
TSI_SECTION(TSI_CONST_DRVIER_SECTION) = {
    0U,
    NULL,
    (TSI_ClockConfTypeDef *) &TSI_ClockConf[0],
    (TSI_IOConfTypeDef *) &TSI_IOConf[0],
    TSI_PIN_NUM,
#if (TSI_SHIELD_NUM > 0U)
    (TSI_ShieldConfTypeDef *) &TSI_ShieldConf[0],
#else
    NULL,
#endif  /* TSI_SHIELD_NUM > 0U */
    TSI_SHIELD_NUM,
    (TSI_ScanGroupTypeDef *) &TSI_SCAN_GROUP_BEGIN[0],
    TSI_SCAN_GROUP_NUM,
    (TSI_SensorTypeDef **) &TSI_SensorPointers[0],
    TSI_SENSOR_NUM,
};

/*-----------------------------------*/
/* Widget info init data             */
/*-----------------------------------*/
TSI_ALIGN4 TSI_USED TSI_WidgetTypeDef *const TSI_WidgetPointers[TSI_WIDGET_NUM]
TSI_SECTION(TSI_CONST_P_WIDGETS_SECTION) = {
    (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_ExPad1_MC,
    (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_ExPad1_Rx,
    (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_ExPad1_Tx,
    (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_InPad1_MC,
    (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_InPad1_Rx,
    (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_InPad1_Tx,
    (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_InPad2_MC,
    (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_InPad2_Rx,
    (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_InPad2_Tx,
    (TSI_WidgetTypeDef *) &TSI_WidgetList.Prox_All,
};

TSI_ALIGN4 TSI_USED const TSI_MetaWidgetTypeDef TSI_MetaWidgets[TSI_WIDGET_NUM]
TSI_SECTION(TSI_CONST_META_WIDGETS_SECTION) = {
    {   /* Button_ExPad1_MC */
        TSI_WIDGET_MUTUAL_CAP_BUTTON,           /* type */
        TSI_SensorList.Button_ExPad1_MC,        /* sensors */
        TSI_BUTTON_EXPAD1_MC_SENSOR_NUM,        /* sensorNum */
        TSI_SCAN_GROUP_REF(1),                  /* dedicatedScanGroup */
    },
    {   /* Button_ExPad1_Rx */
        TSI_WIDGET_SELF_CAP_BUTTON,             /* type */
        TSI_SensorList.Button_ExPad1_Rx,        /* sensors */
        TSI_BUTTON_EXPAD1_RX_SENSOR_NUM,        /* sensorNum */
        NULL,                                   /* dedicatedScanGroup */
    },
    {   /* Button_ExPad1_Tx */
        TSI_WIDGET_SELF_CAP_BUTTON,             /* type */
        TSI_SensorList.Button_ExPad1_Tx,        /* sensors */
        TSI_BUTTON_EXPAD1_TX_SENSOR_NUM,        /* sensorNum */
        NULL,                                   /* dedicatedScanGroup */
    },
    {   /* Button_InPad1_MC */
        TSI_WIDGET_MUTUAL_CAP_BUTTON,           /* type */
        TSI_SensorList.Button_InPad1_MC,        /* sensors */
        TSI_BUTTON_INPAD1_MC_SENSOR_NUM,        /* sensorNum */
        TSI_SCAN_GROUP_REF(2),                  /* dedicatedScanGroup */
    },
    {   /* Button_InPad1_Rx */
        TSI_WIDGET_SELF_CAP_BUTTON,             /* type */
        TSI_SensorList.Button_InPad1_Rx,        /* sensors */
        TSI_BUTTON_INPAD1_RX_SENSOR_NUM,        /* sensorNum */
        NULL,                                   /* dedicatedScanGroup */
    },
    {   /* Button_InPad1_Tx */
        TSI_WIDGET_SELF_CAP_BUTTON,             /* type */
        TSI_SensorList.Button_InPad1_Tx,        /* sensors */
        TSI_BUTTON_INPAD1_TX_SENSOR_NUM,        /* sensorNum */
        NULL,                                   /* dedicatedScanGroup */
    },
    {   /* Button_InPad2_MC */
        TSI_WIDGET_MUTUAL_CAP_BUTTON,           /* type */
        TSI_SensorList.Button_InPad2_MC,        /* sensors */
        TSI_BUTTON_INPAD2_MC_SENSOR_NUM,        /* sensorNum */
        TSI_SCAN_GROUP_REF(3),                  /* dedicatedScanGroup */
    },
    {   /* Button_InPad2_Rx */
        TSI_WIDGET_SELF_CAP_BUTTON,             /* type */
        TSI_SensorList.Button_InPad2_Rx,        /* sensors */
        TSI_BUTTON_INPAD2_RX_SENSOR_NUM,        /* sensorNum */
        NULL,                                   /* dedicatedScanGroup */
    },
    {   /* Button_InPad2_Tx */
        TSI_WIDGET_SELF_CAP_BUTTON,             /* type */
        TSI_SensorList.Button_InPad2_Tx,        /* sensors */
        TSI_BUTTON_INPAD2_TX_SENSOR_NUM,        /* sensorNum */
        NULL,                                   /* dedicatedScanGroup */
    },
    {   /* Prox_All */
        TSI_WIDGET_SELF_CAP_PROXIMITY,             /* type */
        TSI_SensorList.Prox_All,                    /* sensors */
        TSI_PROX_ALL_SENSOR_NUM,                    /* sensorNum */
        TSI_SCAN_GROUP_REF(4),                  /* dedicatedScanGroup */
    },
};

TSI_ALIGN4 TSI_USED const TSI_WidgetListTypeDef TSI_WidgetListConstInit
TSI_SECTION(TSI_CONST_WIDGETS_SECTION) = {
    {   /* Button_ExPad1_MC */
        {
            {
                /* Meta widget */
                (TSI_MetaWidgetTypeDef *) &TSI_MetaWidgets[0],

                /* Widget enable status */
                TSI_WIDGET_DISABLE,

                /* Basic param */
                {
                    500U,       /* activeTh */
                    50U,        /* activeHys */
                    100U,       /* noiseTh */
                    100U,       /* negNoiseTh */
                    1U,         /* bslnIIRCoeff */
                    3U,         /* onDebounce */
                    1U,         /* offDebounce */
                    50U,        /* bslnNegStopTimeout */
                },
                0U,             /* status */
            },
            3U,                 /* idacStep */
            12U,                 /* resolution */
            32U,                 /* swClkDiv */
        },
        0U,                     /* buttonStat */
    },
    {   /* Button_ExPad1_Rx */
        {
            {
                /* Meta widget */
                (TSI_MetaWidgetTypeDef *) &TSI_MetaWidgets[1],

                /* Widget enable status */
                TSI_WIDGET_DISABLE,

                /* Basic param */
                {
                    500U,       /* activeTh */
                    50U,        /* activeHys */
                    100U,       /* noiseTh */
                    100U,       /* negNoiseTh */
                    1U,         /* bslnIIRCoeff */
                    3U,         /* onDebounce */
                    1U,         /* offDebounce */
                    50U,        /* bslnNegStopTimeout */
                },
                0U,             /* status */
            },
            100U,               /* sensitivity */
            2U,                 /* idacStep */
            2U,                 /* idacCompStep */
            12U,                 /* resolution */
            2U,                 /* swClkDiv */
            30U,                 /* idacMod */
        },
        0U,                     /* buttonStat */
    },
    {   /* Button_ExPad1_Tx */
        {
            {
                /* Meta widget */
                (TSI_MetaWidgetTypeDef *) &TSI_MetaWidgets[2],

                /* Widget enable status */
                TSI_WIDGET_DISABLE,

                /* Basic param */
                {
                    500U,       /* activeTh */
                    50U,        /* activeHys */
                    100U,       /* noiseTh */
                    100U,       /* negNoiseTh */
                    1U,         /* bslnIIRCoeff */
                    3U,         /* onDebounce */
                    1U,         /* offDebounce */
                    50U,        /* bslnNegStopTimeout */
                },
                0U,             /* status */
            },
            100U,               /* sensitivity */
            2U,                 /* idacStep */
            2U,                 /* idacCompStep */
            12U,                 /* resolution */
            2U,                 /* swClkDiv */
            30U,                 /* idacMod */
        },
        0U,                     /* buttonStat */
    },
    {   /* Button_InPad1_MC */
        {
            {
                /* Meta widget */
                (TSI_MetaWidgetTypeDef *) &TSI_MetaWidgets[3],

                /* Widget enable status */
                TSI_WIDGET_DISABLE,

                /* Basic param */
                {
                    500U,       /* activeTh */
                    50U,        /* activeHys */
                    100U,       /* noiseTh */
                    100U,       /* negNoiseTh */
                    1U,         /* bslnIIRCoeff */
                    3U,         /* onDebounce */
                    1U,         /* offDebounce */
                    50U,        /* bslnNegStopTimeout */
                },
                0U,             /* status */
            },
            3U,                 /* idacStep */
            12U,                 /* resolution */
            32U,                 /* swClkDiv */
        },
        0U,                     /* buttonStat */
    },
    {   /* Button_InPad1_Rx */
        {
            {
                /* Meta widget */
                (TSI_MetaWidgetTypeDef *) &TSI_MetaWidgets[4],

                /* Widget enable status */
                TSI_WIDGET_DISABLE,

                /* Basic param */
                {
                    500U,       /* activeTh */
                    50U,        /* activeHys */
                    100U,       /* noiseTh */
                    100U,       /* negNoiseTh */
                    1U,         /* bslnIIRCoeff */
                    3U,         /* onDebounce */
                    1U,         /* offDebounce */
                    50U,        /* bslnNegStopTimeout */
                },
                0U,             /* status */
            },
            100U,               /* sensitivity */
            2U,                 /* idacStep */
            2U,                 /* idacCompStep */
            12U,                 /* resolution */
            2U,                 /* swClkDiv */
            30U,                 /* idacMod */
        },
        0U,                     /* buttonStat */
    },
    {   /* Button_InPad1_Tx */
        {
            {
                /* Meta widget */
                (TSI_MetaWidgetTypeDef *) &TSI_MetaWidgets[5],

                /* Widget enable status */
                TSI_WIDGET_DISABLE,

                /* Basic param */
                {
                    500U,       /* activeTh */
                    50U,        /* activeHys */
                    100U,       /* noiseTh */
                    100U,       /* negNoiseTh */
                    1U,         /* bslnIIRCoeff */
                    3U,         /* onDebounce */
                    1U,         /* offDebounce */
                    50U,        /* bslnNegStopTimeout */
                },
                0U,             /* status */
            },
            100U,               /* sensitivity */
            2U,                 /* idacStep */
            2U,                 /* idacCompStep */
            12U,                 /* resolution */
            2U,                 /* swClkDiv */
            30U,                 /* idacMod */
        },
        0U,                     /* buttonStat */
    },
    {   /* Button_InPad2_MC */
        {
            {
                /* Meta widget */
                (TSI_MetaWidgetTypeDef *) &TSI_MetaWidgets[6],

                /* Widget enable status */
                TSI_WIDGET_DISABLE,

                /* Basic param */
                {
                    500U,       /* activeTh */
                    50U,        /* activeHys */
                    100U,       /* noiseTh */
                    100U,       /* negNoiseTh */
                    1U,         /* bslnIIRCoeff */
                    3U,         /* onDebounce */
                    1U,         /* offDebounce */
                    50U,        /* bslnNegStopTimeout */
                },
                0U,             /* status */
            },
            3U,                 /* idacStep */
            12U,                 /* resolution */
            32U,                 /* swClkDiv */
        },
        0U,                     /* buttonStat */
    },
    {   /* Button_InPad2_Rx */
        {
            {
                /* Meta widget */
                (TSI_MetaWidgetTypeDef *) &TSI_MetaWidgets[7],

                /* Widget enable status */
                TSI_WIDGET_DISABLE,

                /* Basic param */
                {
                    500U,       /* activeTh */
                    50U,        /* activeHys */
                    100U,       /* noiseTh */
                    100U,       /* negNoiseTh */
                    1U,         /* bslnIIRCoeff */
                    3U,         /* onDebounce */
                    1U,         /* offDebounce */
                    50U,        /* bslnNegStopTimeout */
                },
                0U,             /* status */
            },
            100U,               /* sensitivity */
            2U,                 /* idacStep */
            2U,                 /* idacCompStep */
            12U,                 /* resolution */
            2U,                 /* swClkDiv */
            30U,                 /* idacMod */
        },
        0U,                     /* buttonStat */
    },
    {   /* Button_InPad2_Tx */
        {
            {
                /* Meta widget */
                (TSI_MetaWidgetTypeDef *) &TSI_MetaWidgets[8],

                /* Widget enable status */
                TSI_WIDGET_DISABLE,

                /* Basic param */
                {
                    500U,       /* activeTh */
                    50U,        /* activeHys */
                    100U,       /* noiseTh */
                    100U,       /* negNoiseTh */
                    1U,         /* bslnIIRCoeff */
                    3U,         /* onDebounce */
                    1U,         /* offDebounce */
                    50U,        /* bslnNegStopTimeout */
                },
                0U,             /* status */
            },
            100U,               /* sensitivity */
            2U,                 /* idacStep */
            2U,                 /* idacCompStep */
            12U,                 /* resolution */
            2U,                 /* swClkDiv */
            30U,                 /* idacMod */
        },
        0U,                     /* buttonStat */
    },
    {   /* Prox_All */
        {
            {
                /* Meta widget */
                (TSI_MetaWidgetTypeDef *) &TSI_MetaWidgets[9],

                /* Widget enable status */
                TSI_WIDGET_DISABLE,

                /* Basic param */
                {
                    1500U,       /* activeTh */
                    100U,        /* activeHys */
                    30U,       /* noiseTh */
                    30U,       /* negNoiseTh */
                    1U,         /* bslnIIRCoeff */
                    16U,         /* onDebounce */
                    3U,         /* offDebounce */
                    200U,        /* bslnNegStopTimeout */
                },
                0U,             /* status */
            },
            100U,               /* sensitivity */
            3U,                 /* idacStep */
            6U,                 /* idacCompStep */
            14U,                /* resolution */
            2U,                 /* swClkDiv */
            30U,                  /* idacMod */
        },
        65U,                     /* proxTh */
        10U,                      /* proxHys */
        50U,                     /* filterActiveTh */
        25U,                      /* filterDetectTh */
        0U,                       /* proxStat */
    },
};

/*-----------------------------------*/
/* Sensor info init data             */
/*-----------------------------------*/
TSI_ALIGN4 TSI_USED TSI_SensorTypeDef *const TSI_SensorPointers[TSI_SENSOR_NUM]
TSI_SECTION(TSI_CONST_P_SENSORS_SECTION) = {
    (TSI_SensorTypeDef *) &TSI_SensorList.Button_InPad1_Tx[0],
    (TSI_SensorTypeDef *) &TSI_SensorList.Button_InPad1_Rx[0],
    (TSI_SensorTypeDef *) &TSI_SensorList.Button_InPad1_MC[0],
    (TSI_SensorTypeDef *) &TSI_SensorList.Button_InPad2_Tx[0],
    (TSI_SensorTypeDef *) &TSI_SensorList.Button_InPad2_Rx[0],
    (TSI_SensorTypeDef *) &TSI_SensorList.Button_InPad2_MC[0],
    (TSI_SensorTypeDef *) &TSI_SensorList.Button_ExPad1_Tx[0],
    (TSI_SensorTypeDef *) &TSI_SensorList.Button_ExPad1_Rx[0],
    (TSI_SensorTypeDef *) &TSI_SensorList.Button_ExPad1_MC[0],
    (TSI_SensorTypeDef *) &TSI_SensorList.Prox_All[0],
};

TSI_ALIGN4 TSI_USED const TSI_MetaSensorTypeDef TSI_MetaSensors[TSI_SENSOR_NUM]
TSI_SECTION(TSI_CONST_META_SENSORS_SECTION) = {
    {   /* Button_ExPad1_MC_Sns0 */
        (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_ExPad1_MC,/* parent */
        8U,                                     /* id */
        TSI_SENSOR_MUTUAL_CAP,                  /* type */
        33U,                                     /* txChannel */
        34U,                                     /* rxChannel */
        NULL,                                   /* detConf */
        TSI_FILTER_NORMAL,                      /* filterType */
        &TSI_Filter_Button_ExPad1_MC[0],        /* filter */
        1U,                                     /* debArraySize */
        &TSI_Debounce_Button_ExPad1_MC[0],      /* debArray */
        NULL,                                   /* filter */
    },
    {   /* Button_ExPad1_Rx_Sns0 */
        (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_ExPad1_Rx,/* parent */
        7U,                                     /* id */
        TSI_SENSOR_SELF_CAP,                    /* type */
        0U,                                     /* txChannel */
        34U,                                    /* rxChannel */
        NULL,                                   /* detConf */
        TSI_FILTER_NORMAL,                      /* filterType */
        &TSI_Filter_Button_ExPad1_Rx[0],        /* filter */
        1U,                                     /* debArraySize */
        &TSI_Debounce_Button_ExPad1_Rx[0],      /* debArray */
        TSI_SCAN_GROUP_REF(0),                  /* dedicatedScanGroup */
    },
    {   /* Button_ExPad1_Tx_Sns0 */
        (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_ExPad1_Tx,/* parent */
        6U,                                     /* id */
        TSI_SENSOR_SELF_CAP,                    /* type */
        0U,                                     /* txChannel */
        33U,                                    /* rxChannel */
        NULL,                                   /* detConf */
        TSI_FILTER_NORMAL,                      /* filterType */
        &TSI_Filter_Button_ExPad1_Tx[0],        /* filter */
        1U,                                     /* debArraySize */
        &TSI_Debounce_Button_ExPad1_Tx[0],      /* debArray */
        TSI_SCAN_GROUP_REF(0),                  /* dedicatedScanGroup */
    },
    {   /* Button_InPad1_MC_Sns0 */
        (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_InPad1_MC,/* parent */
        2U,                                     /* id */
        TSI_SENSOR_MUTUAL_CAP,                  /* type */
        5U,                                     /* txChannel */
        15U,                                     /* rxChannel */
        NULL,                                   /* detConf */
        TSI_FILTER_NORMAL,                      /* filterType */
        &TSI_Filter_Button_InPad1_MC[0],        /* filter */
        1U,                                     /* debArraySize */
        &TSI_Debounce_Button_InPad1_MC[0],      /* debArray */
        NULL,                                   /* filter */
    },
    {   /* Button_InPad1_Rx_Sns0 */
        (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_InPad1_Rx,/* parent */
        1U,                                     /* id */
        TSI_SENSOR_SELF_CAP,                    /* type */
        0U,                                     /* txChannel */
        15U,                                    /* rxChannel */
        NULL,                                   /* detConf */
        TSI_FILTER_NORMAL,                      /* filterType */
        &TSI_Filter_Button_InPad1_Rx[0],        /* filter */
        1U,                                     /* debArraySize */
        &TSI_Debounce_Button_InPad1_Rx[0],      /* debArray */
        TSI_SCAN_GROUP_REF(0),                  /* dedicatedScanGroup */
    },
    {   /* Button_InPad1_Tx_Sns0 */
        (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_InPad1_Tx,/* parent */
        0U,                                     /* id */
        TSI_SENSOR_SELF_CAP,                    /* type */
        0U,                                     /* txChannel */
        5U,                                     /* rxChannel */
        NULL,                                   /* detConf */
        TSI_FILTER_NORMAL,                      /* filterType */
        &TSI_Filter_Button_InPad1_Tx[0],        /* filter */
        1U,                                     /* debArraySize */
        &TSI_Debounce_Button_InPad1_Tx[0],      /* debArray */
        TSI_SCAN_GROUP_REF(0),                  /* dedicatedScanGroup */
    },
    {   /* Button_InPad2_MC_Sns0 */
        (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_InPad2_MC,/* parent */
        5U,                                     /* id */
        TSI_SENSOR_MUTUAL_CAP,                  /* type */
        16U,                                     /* txChannel */
        17U,                                     /* rxChannel */
        NULL,                                   /* detConf */
        TSI_FILTER_NORMAL,                      /* filterType */
        &TSI_Filter_Button_InPad2_MC[0],        /* filter */
        1U,                                     /* debArraySize */
        &TSI_Debounce_Button_InPad2_MC[0],      /* debArray */
        NULL,                                   /* filter */
    },
    {   /* Button_InPad2_Rx_Sns0 */
        (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_InPad2_Rx,/* parent */
        4U,                                     /* id */
        TSI_SENSOR_SELF_CAP,                    /* type */
        0U,                                     /* txChannel */
        17U,                                    /* rxChannel */
        NULL,                                   /* detConf */
        TSI_FILTER_NORMAL,                      /* filterType */
        &TSI_Filter_Button_InPad2_Rx[0],        /* filter */
        1U,                                     /* debArraySize */
        &TSI_Debounce_Button_InPad2_Rx[0],      /* debArray */
        TSI_SCAN_GROUP_REF(0),                  /* dedicatedScanGroup */
    },
    {   /* Button_InPad2_Tx_Sns0 */
        (TSI_WidgetTypeDef *) &TSI_WidgetList.Button_InPad2_Tx,/* parent */
        3U,                                     /* id */
        TSI_SENSOR_SELF_CAP,                    /* type */
        0U,                                     /* txChannel */
        16U,                                    /* rxChannel */
        NULL,                                   /* detConf */
        TSI_FILTER_NORMAL,                      /* filterType */
        &TSI_Filter_Button_InPad2_Tx[0],        /* filter */
        1U,                                     /* debArraySize */
        &TSI_Debounce_Button_InPad2_Tx[0],      /* debArray */
        TSI_SCAN_GROUP_REF(0),                  /* dedicatedScanGroup */
    },
    {   /* Prox_All_Sns0 */
        (TSI_WidgetTypeDef *) &TSI_WidgetList.Prox_All,/* parent */
        9U,                                     /* id */
        TSI_SENSOR_SELF_CAP,                    /* type */
        0U,                                     /* txChannel */
        34U,                                     /* rxChannel */
        NULL,                                   /* detConf */
        TSI_FILTER_PROXMITY,                    /* filterType */
        &TSI_Filter_Prox_All[0],                /* filter */
        1U,                                     /* debArraySize */
        &TSI_Debounce_Prox_All[0],              /* debArray */
        TSI_SCAN_GROUP_REF(4),                                   /* dedicatedScanGroup */
    },
};

TSI_ALIGN4 TSI_USED const TSI_SensorListTypeDef TSI_SensorListConstInit
TSI_SECTION(TSI_CONST_SENSORS_SECTION) = {
    {
        {   /* Button_ExPad1_MC_Sns0 */
            (TSI_MetaSensorTypeDef *) &TSI_MetaSensors[0],
            0U,                 /* idac */
            0U,                 /* rawCount */
            0U,                 /* baseline */
            0U,                 /* diffCount */
            0U,                 /* status */
        },
    },
    {
        {   /* Button_ExPad1_Rx_Sns0 */
            (TSI_MetaSensorTypeDef *) &TSI_MetaSensors[1],
            0U,                 /* idac */
            0U,                 /* rawCount */
            0U,                 /* baseline */
            0U,                 /* diffCount */
            0U,                 /* status */
        },
    },
    {
        {   /* Button_ExPad1_Tx_Sns0 */
            (TSI_MetaSensorTypeDef *) &TSI_MetaSensors[2],
            0U,                 /* idac */
            0U,                 /* rawCount */
            0U,                 /* baseline */
            0U,                 /* diffCount */
            0U,                 /* status */
        },
    },
    {
        {   /* Button_InPad1_MC_Sns0 */
            (TSI_MetaSensorTypeDef *) &TSI_MetaSensors[3],
            0U,                 /* idac */
            0U,                 /* rawCount */
            0U,                 /* baseline */
            0U,                 /* diffCount */
            0U,                 /* status */
        },
    },
    {
        {   /* Button_InPad1_Rx_Sns0 */
            (TSI_MetaSensorTypeDef *) &TSI_MetaSensors[4],
            0U,                 /* idac */
            0U,                 /* rawCount */
            0U,                 /* baseline */
            0U,                 /* diffCount */
            0U,                 /* status */
        },
    },
    {
        {   /* Button_InPad1_Tx_Sns0 */
            (TSI_MetaSensorTypeDef *) &TSI_MetaSensors[5],
            0U,                 /* idac */
            0U,                 /* rawCount */
            0U,                 /* baseline */
            0U,                 /* diffCount */
            0U,                 /* status */
        },
    },
    {
        {   /* Button_InPad2_MC_Sns0 */
            (TSI_MetaSensorTypeDef *) &TSI_MetaSensors[6],
            0U,                 /* idac */
            0U,                 /* rawCount */
            0U,                 /* baseline */
            0U,                 /* diffCount */
            0U,                 /* status */
        },
    },
    {
        {   /* Button_InPad2_Rx_Sns0 */
            (TSI_MetaSensorTypeDef *) &TSI_MetaSensors[7],
            0U,                 /* idac */
            0U,                 /* rawCount */
            0U,                 /* baseline */
            0U,                 /* diffCount */
            0U,                 /* status */
        },
    },
    {
        {   /* Button_InPad2_Tx_Sns0 */
            (TSI_MetaSensorTypeDef *) &TSI_MetaSensors[8],
            0U,                 /* idac */
            0U,                 /* rawCount */
            0U,                 /* baseline */
            0U,                 /* diffCount */
            0U,                 /* status */
        },
    },
    {
        {   /* Prox_Sns0 */
            (TSI_MetaSensorTypeDef *) &TSI_MetaSensors[9],
            40U,                /* idac */
            0U,                 /* rawCount */
            0U,                 /* baseline */
            0U,                 /* diffCount */
            0U,                 /* status */
        },
    },
};

#if (TSI_USE_CONFIG_DESCRIPTOR == 1U)
TSI_USED const uint8_t TSI_ConfDesc[TSI_CONF_DESC_SIZE] TSI_SECTION(TSI_CONF_DESC_SECTION) = {
    0x1EU,                              /* Descriptor type (Configuration) */
    0x0U,                               /* Total length (142) */
    0x8EU,                              
    0x01U,                              /* Lib version code (v1.0) */
    0x00U,
    0x09U,                              /* Setting count (9) */
    9U,                                 /* Widget count (9) */

    /* Lib Settings ---------------------------*/
    0xF0U,                              /* Descriptor type (Setting) */
    0x00U,                              /* Id (TSI_SC_CALIB_METHOD) */
    0x01U,                              /* Size (1) */
    TSI_SC_CALIB_METHOD,                /* Value */

    0xF0U,                              /* Descriptor type (Setting) */
    0x01U,                              /* Id (TSI_MC_CALIB_METHOD) */
    0x01U,                              /* Size (1) */
    TSI_MC_CALIB_METHOD,                /* Value */

    0xF0U,                              /* Descriptor type (Setting) */
    0x02U,                              /* Id (TSI_SCAN_FREQ_NUM) */
    0x01U,                              /* Size (1) */
    TSI_SCAN_FREQ_NUM,                  /* Value */

    0xF0U,                              /* Descriptor type (Setting) */
    0x03U,                              /* Id (TSI_SC_USE_UNIFIED_IDAC_STEP) */
    0x01U,                              /* Size (1) */
    TSI_SC_USE_UNIFIED_IDAC_STEP,       /* Value */

    0xF0U,                              /* Descriptor type (Setting) */
    0x04U,                              /* Id (TSI_STATISTIC_SENSOR_CS) */
    0x01U,                              /* Size (1) */
    TSI_STATISTIC_SENSOR_CS,            /* Value */

    0xF0U,                              /* Descriptor type (Setting) */
    0x05U,                              /* Id (TSI_USED_IN_LPM_MODE) */
    0x01U,                              /* Size (1) */
    TSI_USED_IN_LPM_MODE,               /* Value */

    0xF0U,                              /* Descriptor type (Setting) */
    0x06U,                              /* Id (TSI_USE_SHIELD) */
    0x01U,                              /* Size (1) */
    TSI_USE_SHIELD,                     /* Value */

    0xF0U,                              /* Descriptor type (Setting) */
    0x07U,                              /* Id (TSI_SENSOR_BSLN_ALWAYS_UPDATE) */
    0x01U,                              /* Size (1) */
    TSI_SENSOR_BSLN_ALWAYS_UPDATE,      /* Value */

    0xF0U,                              /* Descriptor type (Setting) */
    0x08U,                              /* Id (TSI_SENSOR_BSLN_USE_LTA) */
    0x01U,                              /* Size (1) */
    TSI_SENSOR_BSLN_USE_LTA,            /* Value */

    /* Widgets --------------------------------*/
    /* Button_ExPad1_MC */
    0x2D,                               /* Descriptor type (Widget) */
    TSI_WIDGET_MUTUAL_CAP_BUTTON,       /* Widget type (Self-cap button) */
    0x00,                               /* Widget string descriptor index (NULL) */
    0x0U,                               /* Sensor count (1) */
    0x1U,                               

    /* Button_ExPad1_MC_Sns0 */
    0x3C,                               /* Descriptor type (Sensor) */
    0x0U,                               /* Sensor id(8) */
    0x8U,                               
    TSI_SENSOR_MUTUAL_CAP,              /* Sensor type */
    8U,                                 /* txChannel */
    7U,                                 /* rxChannel */

    /* Button_ExPad1_Rx */
    0x2D,                               /* Descriptor type (Widget) */
    TSI_WIDGET_SELF_CAP_BUTTON,         /* Widget type (Self-cap button) */
    0x00,                               /* Widget string descriptor index (NULL) */
    0x0U,                               /* Sensor count (1) */
    0x1U,                               

    /* Button_ExPad1_Rx_Sns0 */
    0x3C,                               /* Descriptor type (Sensor) */
    0x0U,                               /* Sensor id(7) */
    0x7U,                               
    TSI_SENSOR_SELF_CAP,                /* Sensor type */
    0U,                                 /* txChannel */
    34U,                                /* rxChannel */

    /* Button_ExPad1_Tx */
    0x2D,                               /* Descriptor type (Widget) */
    TSI_WIDGET_SELF_CAP_BUTTON,         /* Widget type (Self-cap button) */
    0x00,                               /* Widget string descriptor index (NULL) */
    0x0U,                               /* Sensor count (1) */
    0x1U,                               

    /* Button_ExPad1_Tx_Sns0 */
    0x3C,                               /* Descriptor type (Sensor) */
    0x0U,                               /* Sensor id(6) */
    0x6U,                               
    TSI_SENSOR_SELF_CAP,                /* Sensor type */
    0U,                                 /* txChannel */
    33U,                                /* rxChannel */

    /* Button_InPad1_MC */
    0x2D,                               /* Descriptor type (Widget) */
    TSI_WIDGET_MUTUAL_CAP_BUTTON,       /* Widget type (Self-cap button) */
    0x00,                               /* Widget string descriptor index (NULL) */
    0x0U,                               /* Sensor count (1) */
    0x1U,                               

    /* Button_InPad1_MC_Sns0 */
    0x3C,                               /* Descriptor type (Sensor) */
    0x0U,                               /* Sensor id(2) */
    0x2U,                               
    TSI_SENSOR_MUTUAL_CAP,              /* Sensor type */
    2U,                                 /* txChannel */
    1U,                                 /* rxChannel */

    /* Button_InPad1_Rx */
    0x2D,                               /* Descriptor type (Widget) */
    TSI_WIDGET_SELF_CAP_BUTTON,         /* Widget type (Self-cap button) */
    0x00,                               /* Widget string descriptor index (NULL) */
    0x0U,                               /* Sensor count (1) */
    0x1U,                               

    /* Button_InPad1_Rx_Sns0 */
    0x3C,                               /* Descriptor type (Sensor) */
    0x0U,                               /* Sensor id(1) */
    0x1U,                               
    TSI_SENSOR_SELF_CAP,                /* Sensor type */
    0U,                                 /* txChannel */
    15U,                                /* rxChannel */

    /* Button_InPad1_Tx */
    0x2D,                               /* Descriptor type (Widget) */
    TSI_WIDGET_SELF_CAP_BUTTON,         /* Widget type (Self-cap button) */
    0x00,                               /* Widget string descriptor index (NULL) */
    0x0U,                               /* Sensor count (1) */
    0x1U,                               

    /* Button_InPad1_Tx_Sns0 */
    0x3C,                               /* Descriptor type (Sensor) */
    0x0U,                               /* Sensor id(0) */
    0x0U,                               
    TSI_SENSOR_SELF_CAP,                /* Sensor type */
    0U,                                 /* txChannel */
    5U,                                 /* rxChannel */

    /* Button_InPad2_MC */
    0x2D,                               /* Descriptor type (Widget) */
    TSI_WIDGET_MUTUAL_CAP_BUTTON,       /* Widget type (Self-cap button) */
    0x00,                               /* Widget string descriptor index (NULL) */
    0x0U,                               /* Sensor count (1) */
    0x1U,                               

    /* Button_InPad2_MC_Sns0 */
    0x3C,                               /* Descriptor type (Sensor) */
    0x0U,                               /* Sensor id(5) */
    0x5U,                               
    TSI_SENSOR_MUTUAL_CAP,              /* Sensor type */
    4U,                                 /* txChannel */
    3U,                                 /* rxChannel */

    /* Button_InPad2_Rx */
    0x2D,                               /* Descriptor type (Widget) */
    TSI_WIDGET_SELF_CAP_BUTTON,         /* Widget type (Self-cap button) */
    0x00,                               /* Widget string descriptor index (NULL) */
    0x0U,                               /* Sensor count (1) */
    0x1U,                               

    /* Button_InPad2_Rx_Sns0 */
    0x3C,                               /* Descriptor type (Sensor) */
    0x0U,                               /* Sensor id(4) */
    0x4U,                               
    TSI_SENSOR_SELF_CAP,                /* Sensor type */
    0U,                                 /* txChannel */
    26U,                                /* rxChannel */

    /* Button_InPad2_Tx */
    0x2D,                               /* Descriptor type (Widget) */
    TSI_WIDGET_SELF_CAP_BUTTON,         /* Widget type (Self-cap button) */
    0x00,                               /* Widget string descriptor index (NULL) */
    0x0U,                               /* Sensor count (1) */
    0x1U,                               

    /* Button_InPad2_Tx_Sns0 */
    0x3C,                               /* Descriptor type (Sensor) */
    0x0U,                               /* Sensor id(3) */
    0x3U,                               
    TSI_SENSOR_SELF_CAP,                /* Sensor type */
    0U,                                 /* txChannel */
    25U,                                /* rxChannel */

};
#endif  /* TSI_USE_CONFIG_DESCRIPTOR == 1U */

/* API implementations ------------------------------------------------------*/
void TSI_InitObjects(TSI_LibHandleTypeDef *handle)
{
    if(handle == &TSI_LibHandle) {
        memcpy(&TSI_Drv, &TSI_DrvConstInit, sizeof(TSI_DriverTypeDef));
        memcpy(&TSI_WidgetList, &TSI_WidgetListConstInit, sizeof(TSI_WidgetListTypeDef));
        memcpy(&TSI_SensorList, &TSI_SensorListConstInit, sizeof(TSI_SensorListTypeDef));
        memcpy(&TSI_ClockConf, &TSI_ClockConfConstInit, sizeof(TSI_ClockConfConstInit));
    }
}



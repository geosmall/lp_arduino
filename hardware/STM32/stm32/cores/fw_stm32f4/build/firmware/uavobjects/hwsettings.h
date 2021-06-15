/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup HwSettings HwSettings
 * @brief Selection of optional hardware configurations.
 *
 * Autogenerated files and functions for HwSettings Object
 *
 * @{
 *
 * @file       hwsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the HwSettings object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: hwsettings.xml.
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef HWSETTINGS_H
#define HWSETTINGS_H
#include <stdbool.h>
/* Object constants */
#define HWSETTINGS_OBJID 0x9DC5032A
#define HWSETTINGS_ISSINGLEINST 1
#define HWSETTINGS_ISSETTINGS 1
#define HWSETTINGS_ISPRIORITY 0
#define HWSETTINGS_NUMBYTES sizeof(HwSettingsData)

/* Generic interface functions */
int32_t HwSettingsInitialize();
UAVObjHandle HwSettingsHandle();
void HwSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field CC_RcvrPort information */

// Enumeration options for field CC_RcvrPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_CC_RCVRPORT_DISABLEDONESHOT=0,
    HWSETTINGS_CC_RCVRPORT_PWMNOONESHOT=1,
    HWSETTINGS_CC_RCVRPORT_PPMNOONESHOT=2,
    HWSETTINGS_CC_RCVRPORT_PPMPWMNOONESHOT=3,
    HWSETTINGS_CC_RCVRPORT_PPMOUTPUTSNOONESHOT=4,
    HWSETTINGS_CC_RCVRPORT_PPM_PIN8ONESHOT=5,
    HWSETTINGS_CC_RCVRPORT_OUTPUTSONESHOT=6
} HwSettingsCC_RcvrPortOptions;

/* Field CC_MainPort information */

// Enumeration options for field CC_MainPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_CC_MAINPORT_DISABLED=0,
    HWSETTINGS_CC_MAINPORT_TELEMETRY=1,
    HWSETTINGS_CC_MAINPORT_GPS=2,
    HWSETTINGS_CC_MAINPORT_SBUS=3,
    HWSETTINGS_CC_MAINPORT_DSM=4,
    HWSETTINGS_CC_MAINPORT_DEBUGCONSOLE=5,
    HWSETTINGS_CC_MAINPORT_COMBRIDGE=6,
    HWSETTINGS_CC_MAINPORT_OSDHK=7,
    HWSETTINGS_CC_MAINPORT_MSP=8,
    HWSETTINGS_CC_MAINPORT_MAVLINK=9
} HwSettingsCC_MainPortOptions;

/* Field CC_FlexiPort information */

// Enumeration options for field CC_FlexiPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_CC_FLEXIPORT_DISABLED=0,
    HWSETTINGS_CC_FLEXIPORT_TELEMETRY=1,
    HWSETTINGS_CC_FLEXIPORT_GPS=2,
    HWSETTINGS_CC_FLEXIPORT_I2C=3,
    HWSETTINGS_CC_FLEXIPORT_PPM=4,
    HWSETTINGS_CC_FLEXIPORT_DSM=5,
    HWSETTINGS_CC_FLEXIPORT_EXBUS=6,
    HWSETTINGS_CC_FLEXIPORT_HOTTSUMD=7,
    HWSETTINGS_CC_FLEXIPORT_HOTTSUMH=8,
    HWSETTINGS_CC_FLEXIPORT_SRXL=9,
    HWSETTINGS_CC_FLEXIPORT_IBUS=10,
    HWSETTINGS_CC_FLEXIPORT_DEBUGCONSOLE=11,
    HWSETTINGS_CC_FLEXIPORT_COMBRIDGE=12,
    HWSETTINGS_CC_FLEXIPORT_OSDHK=13,
    HWSETTINGS_CC_FLEXIPORT_MSP=14,
    HWSETTINGS_CC_FLEXIPORT_MAVLINK=15
} HwSettingsCC_FlexiPortOptions;

/* Field RV_RcvrPort information */

// Enumeration options for field RV_RcvrPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_RV_RCVRPORT_DISABLED=0,
    HWSETTINGS_RV_RCVRPORT_PWM=1,
    HWSETTINGS_RV_RCVRPORT_PPM=2,
    HWSETTINGS_RV_RCVRPORT_PPMOUTPUTS=3,
    HWSETTINGS_RV_RCVRPORT_OUTPUTS=4
} HwSettingsRV_RcvrPortOptions;

/* Field RV_AuxPort information */

// Enumeration options for field RV_AuxPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_RV_AUXPORT_DISABLED=0,
    HWSETTINGS_RV_AUXPORT_TELEMETRY=1,
    HWSETTINGS_RV_AUXPORT_DSM=2,
    HWSETTINGS_RV_AUXPORT_COMAUX=3,
    HWSETTINGS_RV_AUXPORT_COMBRIDGE=4,
    HWSETTINGS_RV_AUXPORT_OSDHK=5,
    HWSETTINGS_RV_AUXPORT_MSP=6,
    HWSETTINGS_RV_AUXPORT_MAVLINK=7
} HwSettingsRV_AuxPortOptions;

/* Field RV_AuxSBusPort information */

// Enumeration options for field RV_AuxSBusPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_RV_AUXSBUSPORT_DISABLED=0,
    HWSETTINGS_RV_AUXSBUSPORT_SBUS=1,
    HWSETTINGS_RV_AUXSBUSPORT_DSM=2,
    HWSETTINGS_RV_AUXSBUSPORT_COMAUX=3,
    HWSETTINGS_RV_AUXSBUSPORT_COMBRIDGE=4,
    HWSETTINGS_RV_AUXSBUSPORT_OSDHK=5,
    HWSETTINGS_RV_AUXSBUSPORT_MSP=6,
    HWSETTINGS_RV_AUXSBUSPORT_MAVLINK=7
} HwSettingsRV_AuxSBusPortOptions;

/* Field RV_FlexiPort information */

// Enumeration options for field RV_FlexiPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_RV_FLEXIPORT_DISABLED=0,
    HWSETTINGS_RV_FLEXIPORT_I2C=1,
    HWSETTINGS_RV_FLEXIPORT_DSM=2,
    HWSETTINGS_RV_FLEXIPORT_COMAUX=3,
    HWSETTINGS_RV_FLEXIPORT_COMBRIDGE=4,
    HWSETTINGS_RV_FLEXIPORT_MSP=5,
    HWSETTINGS_RV_FLEXIPORT_MAVLINK=6
} HwSettingsRV_FlexiPortOptions;

/* Field RV_TelemetryPort information */

// Enumeration options for field RV_TelemetryPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_RV_TELEMETRYPORT_DISABLED=0,
    HWSETTINGS_RV_TELEMETRYPORT_TELEMETRY=1,
    HWSETTINGS_RV_TELEMETRYPORT_COMAUX=2,
    HWSETTINGS_RV_TELEMETRYPORT_COMBRIDGE=3,
    HWSETTINGS_RV_TELEMETRYPORT_MSP=4,
    HWSETTINGS_RV_TELEMETRYPORT_MAVLINK=5
} HwSettingsRV_TelemetryPortOptions;

/* Field RV_GPSPort information */

// Enumeration options for field RV_GPSPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_RV_GPSPORT_DISABLED=0,
    HWSETTINGS_RV_GPSPORT_TELEMETRY=1,
    HWSETTINGS_RV_GPSPORT_GPS=2,
    HWSETTINGS_RV_GPSPORT_COMAUX=3,
    HWSETTINGS_RV_GPSPORT_COMBRIDGE=4,
    HWSETTINGS_RV_GPSPORT_MSP=5,
    HWSETTINGS_RV_GPSPORT_MAVLINK=6
} HwSettingsRV_GPSPortOptions;

/* Field RM_RcvrPort information */

// Enumeration options for field RM_RcvrPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_RM_RCVRPORT_DISABLED=0,
    HWSETTINGS_RM_RCVRPORT_PWM=1,
    HWSETTINGS_RM_RCVRPORT_PPM=2,
    HWSETTINGS_RM_RCVRPORT_PPMPWM=3,
    HWSETTINGS_RM_RCVRPORT_PPMOUTPUTS=4,
    HWSETTINGS_RM_RCVRPORT_PPMTELEMETRY=5,
    HWSETTINGS_RM_RCVRPORT_PPMDEBUGCONSOLE=6,
    HWSETTINGS_RM_RCVRPORT_PPMCOMBRIDGE=7,
    HWSETTINGS_RM_RCVRPORT_PPMMSP=8,
    HWSETTINGS_RM_RCVRPORT_PPMMAVLINK=9,
    HWSETTINGS_RM_RCVRPORT_PPMGPS=10,
    HWSETTINGS_RM_RCVRPORT_OUTPUTS=11,
    HWSETTINGS_RM_RCVRPORT_TELEMETRY=12,
    HWSETTINGS_RM_RCVRPORT_DEBUGCONSOLE=13,
    HWSETTINGS_RM_RCVRPORT_COMBRIDGE=14,
    HWSETTINGS_RM_RCVRPORT_MSP=15,
    HWSETTINGS_RM_RCVRPORT_MAVLINK=16,
    HWSETTINGS_RM_RCVRPORT_GPS=17
} HwSettingsRM_RcvrPortOptions;

/* Field RM_MainPort information */

// Enumeration options for field RM_MainPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_RM_MAINPORT_DISABLED=0,
    HWSETTINGS_RM_MAINPORT_TELEMETRY=1,
    HWSETTINGS_RM_MAINPORT_GPS=2,
    HWSETTINGS_RM_MAINPORT_SBUS=3,
    HWSETTINGS_RM_MAINPORT_DSM=4,
    HWSETTINGS_RM_MAINPORT_DEBUGCONSOLE=5,
    HWSETTINGS_RM_MAINPORT_COMBRIDGE=6,
    HWSETTINGS_RM_MAINPORT_OSDHK=7,
    HWSETTINGS_RM_MAINPORT_MSP=8,
    HWSETTINGS_RM_MAINPORT_MAVLINK=9
} HwSettingsRM_MainPortOptions;

/* Field RM_FlexiPort information */

// Enumeration options for field RM_FlexiPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_RM_FLEXIPORT_DISABLED=0,
    HWSETTINGS_RM_FLEXIPORT_TELEMETRY=1,
    HWSETTINGS_RM_FLEXIPORT_GPS=2,
    HWSETTINGS_RM_FLEXIPORT_I2C=3,
    HWSETTINGS_RM_FLEXIPORT_DSM=4,
    HWSETTINGS_RM_FLEXIPORT_EXBUS=5,
    HWSETTINGS_RM_FLEXIPORT_HOTTSUMD=6,
    HWSETTINGS_RM_FLEXIPORT_HOTTSUMH=7,
    HWSETTINGS_RM_FLEXIPORT_SRXL=8,
    HWSETTINGS_RM_FLEXIPORT_IBUS=9,
    HWSETTINGS_RM_FLEXIPORT_DEBUGCONSOLE=10,
    HWSETTINGS_RM_FLEXIPORT_COMBRIDGE=11,
    HWSETTINGS_RM_FLEXIPORT_OSDHK=12,
    HWSETTINGS_RM_FLEXIPORT_MSP=13,
    HWSETTINGS_RM_FLEXIPORT_MAVLINK=14
} HwSettingsRM_FlexiPortOptions;

/* Field SPK2_RcvrPort information */

// Enumeration options for field SPK2_RcvrPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_SPK2_RCVRPORT_DISABLED=0,
    HWSETTINGS_SPK2_RCVRPORT_PPM=1,
    HWSETTINGS_SPK2_RCVRPORT_SBUS=2,
    HWSETTINGS_SPK2_RCVRPORT_DSM=3,
    HWSETTINGS_SPK2_RCVRPORT_SRXL=4,
    HWSETTINGS_SPK2_RCVRPORT_IBUS=5,
    HWSETTINGS_SPK2_RCVRPORT_EXBUS=6,
    HWSETTINGS_SPK2_RCVRPORT_HOTTSUMD=7,
    HWSETTINGS_SPK2_RCVRPORT_HOTTSUMH=8
} HwSettingsSPK2_RcvrPortOptions;

/* Field SPK2_MainPort information */

// Enumeration options for field SPK2_MainPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_SPK2_MAINPORT_DISABLED=0,
    HWSETTINGS_SPK2_MAINPORT_TELEMETRY=1,
    HWSETTINGS_SPK2_MAINPORT_GPS=2,
    HWSETTINGS_SPK2_MAINPORT_DSM=3,
    HWSETTINGS_SPK2_MAINPORT_DEBUGCONSOLE=4,
    HWSETTINGS_SPK2_MAINPORT_COMBRIDGE=5,
    HWSETTINGS_SPK2_MAINPORT_OSDHK=6,
    HWSETTINGS_SPK2_MAINPORT_MSP=7,
    HWSETTINGS_SPK2_MAINPORT_MAVLINK=8
} HwSettingsSPK2_MainPortOptions;

/* Field SPK2_FlexiPort information */

// Enumeration options for field SPK2_FlexiPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_SPK2_FLEXIPORT_DISABLED=0,
    HWSETTINGS_SPK2_FLEXIPORT_TELEMETRY=1,
    HWSETTINGS_SPK2_FLEXIPORT_GPS=2,
    HWSETTINGS_SPK2_FLEXIPORT_I2C=3,
    HWSETTINGS_SPK2_FLEXIPORT_DSM=4,
    HWSETTINGS_SPK2_FLEXIPORT_EXBUS=5,
    HWSETTINGS_SPK2_FLEXIPORT_HOTTSUMD=6,
    HWSETTINGS_SPK2_FLEXIPORT_HOTTSUMH=7,
    HWSETTINGS_SPK2_FLEXIPORT_SRXL=8,
    HWSETTINGS_SPK2_FLEXIPORT_IBUS=9,
    HWSETTINGS_SPK2_FLEXIPORT_DEBUGCONSOLE=10,
    HWSETTINGS_SPK2_FLEXIPORT_COMBRIDGE=11,
    HWSETTINGS_SPK2_FLEXIPORT_OSDHK=12,
    HWSETTINGS_SPK2_FLEXIPORT_MSP=13,
    HWSETTINGS_SPK2_FLEXIPORT_MAVLINK=14
} HwSettingsSPK2_FlexiPortOptions;

/* Field SPK2_I2CPort information */

// Enumeration options for field SPK2_I2CPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_SPK2_I2CPORT_DISABLED=0,
    HWSETTINGS_SPK2_I2CPORT_I2C=1
} HwSettingsSPK2_I2CPortOptions;

/* Field TelemetrySpeed information */

// Enumeration options for field TelemetrySpeed
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_TELEMETRYSPEED_2400=0,
    HWSETTINGS_TELEMETRYSPEED_4800=1,
    HWSETTINGS_TELEMETRYSPEED_9600=2,
    HWSETTINGS_TELEMETRYSPEED_19200=3,
    HWSETTINGS_TELEMETRYSPEED_38400=4,
    HWSETTINGS_TELEMETRYSPEED_57600=5,
    HWSETTINGS_TELEMETRYSPEED_115200=6
} HwSettingsTelemetrySpeedOptions;

/* Field GPSSpeed information */

// Enumeration options for field GPSSpeed
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_GPSSPEED_2400=0,
    HWSETTINGS_GPSSPEED_4800=1,
    HWSETTINGS_GPSSPEED_9600=2,
    HWSETTINGS_GPSSPEED_19200=3,
    HWSETTINGS_GPSSPEED_38400=4,
    HWSETTINGS_GPSSPEED_57600=5,
    HWSETTINGS_GPSSPEED_115200=6,
    HWSETTINGS_GPSSPEED_230400=7
} HwSettingsGPSSpeedOptions;

/* Field DebugConsoleSpeed information */

// Enumeration options for field DebugConsoleSpeed
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_DEBUGCONSOLESPEED_2400=0,
    HWSETTINGS_DEBUGCONSOLESPEED_4800=1,
    HWSETTINGS_DEBUGCONSOLESPEED_9600=2,
    HWSETTINGS_DEBUGCONSOLESPEED_19200=3,
    HWSETTINGS_DEBUGCONSOLESPEED_38400=4,
    HWSETTINGS_DEBUGCONSOLESPEED_57600=5,
    HWSETTINGS_DEBUGCONSOLESPEED_115200=6
} HwSettingsDebugConsoleSpeedOptions;

/* Field MSPSpeed information */

// Enumeration options for field MSPSpeed
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_MSPSPEED_2400=0,
    HWSETTINGS_MSPSPEED_4800=1,
    HWSETTINGS_MSPSPEED_9600=2,
    HWSETTINGS_MSPSPEED_19200=3,
    HWSETTINGS_MSPSPEED_38400=4,
    HWSETTINGS_MSPSPEED_57600=5,
    HWSETTINGS_MSPSPEED_115200=6
} HwSettingsMSPSpeedOptions;

/* Field MAVLinkSpeed information */

// Enumeration options for field MAVLinkSpeed
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_MAVLINKSPEED_2400=0,
    HWSETTINGS_MAVLINKSPEED_4800=1,
    HWSETTINGS_MAVLINKSPEED_9600=2,
    HWSETTINGS_MAVLINKSPEED_19200=3,
    HWSETTINGS_MAVLINKSPEED_38400=4,
    HWSETTINGS_MAVLINKSPEED_57600=5,
    HWSETTINGS_MAVLINKSPEED_115200=6
} HwSettingsMAVLinkSpeedOptions;

/* Field USB_HIDPort information */

// Enumeration options for field USB_HIDPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_USB_HIDPORT_USBTELEMETRY=0,
    HWSETTINGS_USB_HIDPORT_RCTRANSMITTER=1,
    HWSETTINGS_USB_HIDPORT_DISABLED=2
} HwSettingsUSB_HIDPortOptions;

/* Field USB_VCPPort information */

// Enumeration options for field USB_VCPPort
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_USB_VCPPORT_USBTELEMETRY=0,
    HWSETTINGS_USB_VCPPORT_COMBRIDGE=1,
    HWSETTINGS_USB_VCPPORT_DEBUGCONSOLE=2,
    HWSETTINGS_USB_VCPPORT_DISABLED=3
} HwSettingsUSB_VCPPortOptions;

/* Field OptionalModules information */

// Enumeration options for field OptionalModules
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_OPTIONALMODULES_DISABLED=0,
    HWSETTINGS_OPTIONALMODULES_ENABLED=1
} HwSettingsOptionalModulesOptions;

// Array element names for field OptionalModules
typedef enum {
    HWSETTINGS_OPTIONALMODULES_CAMERASTAB=0,
    HWSETTINGS_OPTIONALMODULES_GPS=1,
    HWSETTINGS_OPTIONALMODULES_FAULT=2,
    HWSETTINGS_OPTIONALMODULES_ALTITUDE=3,
    HWSETTINGS_OPTIONALMODULES_AIRSPEED=4,
    HWSETTINGS_OPTIONALMODULES_TXPID=5,
    HWSETTINGS_OPTIONALMODULES_BATTERY=6,
    HWSETTINGS_OPTIONALMODULES_OVERO=7,
    HWSETTINGS_OPTIONALMODULES_MAGBARO=8,
    HWSETTINGS_OPTIONALMODULES_OSDHK=9,
    HWSETTINGS_OPTIONALMODULES_AUTOTUNE=10
} HwSettingsOptionalModulesElem;

// Number of elements for field OptionalModules
#define HWSETTINGS_OPTIONALMODULES_NUMELEM 11

/* Field ADCRouting information */

// Enumeration options for field ADCRouting
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_ADCROUTING_DISABLED=0,
    HWSETTINGS_ADCROUTING_BATTERYVOLTAGE=1,
    HWSETTINGS_ADCROUTING_BATTERYCURRENT=2,
    HWSETTINGS_ADCROUTING_ANALOGAIRSPEED=3,
    HWSETTINGS_ADCROUTING_GENERIC=4
} HwSettingsADCRoutingOptions;

// Array element names for field ADCRouting
typedef enum {
    HWSETTINGS_ADCROUTING_ADC0=0,
    HWSETTINGS_ADCROUTING_ADC1=1,
    HWSETTINGS_ADCROUTING_ADC2=2,
    HWSETTINGS_ADCROUTING_ADC3=3,
    HWSETTINGS_ADCROUTING_ADC4=4,
    HWSETTINGS_ADCROUTING_ADC5=5,
    HWSETTINGS_ADCROUTING_ADC6=6,
    HWSETTINGS_ADCROUTING_ADC7=7
} HwSettingsADCRoutingElem;

// Number of elements for field ADCRouting
#define HWSETTINGS_ADCROUTING_NUMELEM 8

/* Field DSMxBind information */

/* Field WS2811LED_Out information */

// Enumeration options for field WS2811LED_Out
typedef enum __attribute__ ((__packed__)) {
    HWSETTINGS_WS2811LED_OUT_SERVOOUT1=0,
    HWSETTINGS_WS2811LED_OUT_SERVOOUT2=1,
    HWSETTINGS_WS2811LED_OUT_SERVOOUT3=2,
    HWSETTINGS_WS2811LED_OUT_SERVOOUT4=3,
    HWSETTINGS_WS2811LED_OUT_SERVOOUT5=4,
    HWSETTINGS_WS2811LED_OUT_SERVOOUT6=5,
    HWSETTINGS_WS2811LED_OUT_FLEXIIOPIN3=6,
    HWSETTINGS_WS2811LED_OUT_FLEXIIOPIN4=7,
    HWSETTINGS_WS2811LED_OUT_DISABLED=8
} HwSettingsWS2811LED_OutOptions;



typedef struct __attribute__ ((__packed__)) {
    HwSettingsOptionalModulesOptions CameraStab;
    HwSettingsOptionalModulesOptions GPS;
    HwSettingsOptionalModulesOptions Fault;
    HwSettingsOptionalModulesOptions Altitude;
    HwSettingsOptionalModulesOptions Airspeed;
    HwSettingsOptionalModulesOptions TxPID;
    HwSettingsOptionalModulesOptions Battery;
    HwSettingsOptionalModulesOptions Overo;
    HwSettingsOptionalModulesOptions MagBaro;
    HwSettingsOptionalModulesOptions OsdHk;
    HwSettingsOptionalModulesOptions AutoTune;
}  HwSettingsOptionalModulesData ;
typedef struct __attribute__ ((__packed__)) {
    HwSettingsOptionalModulesOptions array[11];
}  HwSettingsOptionalModulesDataArray ;
#define HwSettingsOptionalModulesToArray( var ) UAVObjectFieldToArray( HwSettingsOptionalModulesData, var )

typedef struct __attribute__ ((__packed__)) {
    HwSettingsADCRoutingOptions adc0;
    HwSettingsADCRoutingOptions adc1;
    HwSettingsADCRoutingOptions adc2;
    HwSettingsADCRoutingOptions adc3;
    HwSettingsADCRoutingOptions adc4;
    HwSettingsADCRoutingOptions adc5;
    HwSettingsADCRoutingOptions adc6;
    HwSettingsADCRoutingOptions adc7;
}  HwSettingsADCRoutingData ;
typedef struct __attribute__ ((__packed__)) {
    HwSettingsADCRoutingOptions array[8];
}  HwSettingsADCRoutingDataArray ;
#define HwSettingsADCRoutingToArray( var ) UAVObjectFieldToArray( HwSettingsADCRoutingData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        HwSettingsCC_RcvrPortOptions CC_RcvrPort;
    HwSettingsCC_MainPortOptions CC_MainPort;
    HwSettingsCC_FlexiPortOptions CC_FlexiPort;
    HwSettingsRV_RcvrPortOptions RV_RcvrPort;
    HwSettingsRV_AuxPortOptions RV_AuxPort;
    HwSettingsRV_AuxSBusPortOptions RV_AuxSBusPort;
    HwSettingsRV_FlexiPortOptions RV_FlexiPort;
    HwSettingsRV_TelemetryPortOptions RV_TelemetryPort;
    HwSettingsRV_GPSPortOptions RV_GPSPort;
    HwSettingsRM_RcvrPortOptions RM_RcvrPort;
    HwSettingsRM_MainPortOptions RM_MainPort;
    HwSettingsRM_FlexiPortOptions RM_FlexiPort;
    HwSettingsSPK2_RcvrPortOptions SPK2_RcvrPort;
    HwSettingsSPK2_MainPortOptions SPK2_MainPort;
    HwSettingsSPK2_FlexiPortOptions SPK2_FlexiPort;
    HwSettingsSPK2_I2CPortOptions SPK2_I2CPort;
    HwSettingsTelemetrySpeedOptions TelemetrySpeed;
    HwSettingsGPSSpeedOptions GPSSpeed;
    HwSettingsDebugConsoleSpeedOptions DebugConsoleSpeed;
    HwSettingsMSPSpeedOptions MSPSpeed;
    HwSettingsMAVLinkSpeedOptions MAVLinkSpeed;
    HwSettingsUSB_HIDPortOptions USB_HIDPort;
    HwSettingsUSB_VCPPortOptions USB_VCPPort;
    HwSettingsOptionalModulesData OptionalModules;
    HwSettingsADCRoutingData ADCRouting;
    uint8_t DSMxBind;
    HwSettingsWS2811LED_OutOptions WS2811LED_Out;

} __attribute__((packed)) HwSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef HwSettingsDataPacked __attribute__((aligned(4))) HwSettingsData;

/* Typesafe Object access functions */
static inline int32_t HwSettingsGet(HwSettingsData * dataOut) {
    return UAVObjGetData(HwSettingsHandle(), dataOut);
}
static inline int32_t HwSettingsSet(const HwSettingsData * dataIn) {
    return UAVObjSetData(HwSettingsHandle(), dataIn);
}
static inline int32_t HwSettingsInstGet(uint16_t instId, HwSettingsData * dataOut) {
    return UAVObjGetInstanceData(HwSettingsHandle(), instId, dataOut);
}
static inline int32_t HwSettingsInstSet(uint16_t instId, const HwSettingsData * dataIn) {
    return UAVObjSetInstanceData(HwSettingsHandle(), instId, dataIn);
}
static inline int32_t HwSettingsConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(HwSettingsHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t HwSettingsConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(HwSettingsHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t HwSettingsConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(HwSettingsHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t HwSettingsCreateInstance() {
    return UAVObjCreateInstance(HwSettingsHandle(), &HwSettingsSetDefaults);
}
static inline void HwSettingsRequestUpdate() {
    UAVObjRequestUpdate(HwSettingsHandle());
}
static inline void HwSettingsRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(HwSettingsHandle(), instId);
}
static inline void HwSettingsUpdated() {
    UAVObjUpdated(HwSettingsHandle());
}
static inline void HwSettingsInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(HwSettingsHandle(), instId);
}
static inline void HwSettingsLogging() {
    UAVObjLogging(HwSettingsHandle());
}
static inline void HwSettingsInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(HwSettingsHandle(), instId);
}
static inline int32_t HwSettingsGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(HwSettingsHandle(), dataOut);
}
static inline int32_t HwSettingsSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(HwSettingsHandle(), dataIn);
}
static inline int8_t HwSettingsReadOnly() {
    return UAVObjReadOnly(HwSettingsHandle());
}

/* Set/Get functions */
extern void HwSettingsCC_RcvrPortSet(HwSettingsCC_RcvrPortOptions *NewCC_RcvrPort);
extern void HwSettingsCC_RcvrPortGet(HwSettingsCC_RcvrPortOptions *NewCC_RcvrPort);
extern void HwSettingsCC_MainPortSet(HwSettingsCC_MainPortOptions *NewCC_MainPort);
extern void HwSettingsCC_MainPortGet(HwSettingsCC_MainPortOptions *NewCC_MainPort);
extern void HwSettingsCC_FlexiPortSet(HwSettingsCC_FlexiPortOptions *NewCC_FlexiPort);
extern void HwSettingsCC_FlexiPortGet(HwSettingsCC_FlexiPortOptions *NewCC_FlexiPort);
extern void HwSettingsRV_RcvrPortSet(HwSettingsRV_RcvrPortOptions *NewRV_RcvrPort);
extern void HwSettingsRV_RcvrPortGet(HwSettingsRV_RcvrPortOptions *NewRV_RcvrPort);
extern void HwSettingsRV_AuxPortSet(HwSettingsRV_AuxPortOptions *NewRV_AuxPort);
extern void HwSettingsRV_AuxPortGet(HwSettingsRV_AuxPortOptions *NewRV_AuxPort);
extern void HwSettingsRV_AuxSBusPortSet(HwSettingsRV_AuxSBusPortOptions *NewRV_AuxSBusPort);
extern void HwSettingsRV_AuxSBusPortGet(HwSettingsRV_AuxSBusPortOptions *NewRV_AuxSBusPort);
extern void HwSettingsRV_FlexiPortSet(HwSettingsRV_FlexiPortOptions *NewRV_FlexiPort);
extern void HwSettingsRV_FlexiPortGet(HwSettingsRV_FlexiPortOptions *NewRV_FlexiPort);
extern void HwSettingsRV_TelemetryPortSet(HwSettingsRV_TelemetryPortOptions *NewRV_TelemetryPort);
extern void HwSettingsRV_TelemetryPortGet(HwSettingsRV_TelemetryPortOptions *NewRV_TelemetryPort);
extern void HwSettingsRV_GPSPortSet(HwSettingsRV_GPSPortOptions *NewRV_GPSPort);
extern void HwSettingsRV_GPSPortGet(HwSettingsRV_GPSPortOptions *NewRV_GPSPort);
extern void HwSettingsRM_RcvrPortSet(HwSettingsRM_RcvrPortOptions *NewRM_RcvrPort);
extern void HwSettingsRM_RcvrPortGet(HwSettingsRM_RcvrPortOptions *NewRM_RcvrPort);
extern void HwSettingsRM_MainPortSet(HwSettingsRM_MainPortOptions *NewRM_MainPort);
extern void HwSettingsRM_MainPortGet(HwSettingsRM_MainPortOptions *NewRM_MainPort);
extern void HwSettingsRM_FlexiPortSet(HwSettingsRM_FlexiPortOptions *NewRM_FlexiPort);
extern void HwSettingsRM_FlexiPortGet(HwSettingsRM_FlexiPortOptions *NewRM_FlexiPort);
extern void HwSettingsSPK2_RcvrPortSet(HwSettingsSPK2_RcvrPortOptions *NewSPK2_RcvrPort);
extern void HwSettingsSPK2_RcvrPortGet(HwSettingsSPK2_RcvrPortOptions *NewSPK2_RcvrPort);
extern void HwSettingsSPK2_MainPortSet(HwSettingsSPK2_MainPortOptions *NewSPK2_MainPort);
extern void HwSettingsSPK2_MainPortGet(HwSettingsSPK2_MainPortOptions *NewSPK2_MainPort);
extern void HwSettingsSPK2_FlexiPortSet(HwSettingsSPK2_FlexiPortOptions *NewSPK2_FlexiPort);
extern void HwSettingsSPK2_FlexiPortGet(HwSettingsSPK2_FlexiPortOptions *NewSPK2_FlexiPort);
extern void HwSettingsSPK2_I2CPortSet(HwSettingsSPK2_I2CPortOptions *NewSPK2_I2CPort);
extern void HwSettingsSPK2_I2CPortGet(HwSettingsSPK2_I2CPortOptions *NewSPK2_I2CPort);
extern void HwSettingsTelemetrySpeedSet(HwSettingsTelemetrySpeedOptions *NewTelemetrySpeed);
extern void HwSettingsTelemetrySpeedGet(HwSettingsTelemetrySpeedOptions *NewTelemetrySpeed);
extern void HwSettingsGPSSpeedSet(HwSettingsGPSSpeedOptions *NewGPSSpeed);
extern void HwSettingsGPSSpeedGet(HwSettingsGPSSpeedOptions *NewGPSSpeed);
extern void HwSettingsDebugConsoleSpeedSet(HwSettingsDebugConsoleSpeedOptions *NewDebugConsoleSpeed);
extern void HwSettingsDebugConsoleSpeedGet(HwSettingsDebugConsoleSpeedOptions *NewDebugConsoleSpeed);
extern void HwSettingsMSPSpeedSet(HwSettingsMSPSpeedOptions *NewMSPSpeed);
extern void HwSettingsMSPSpeedGet(HwSettingsMSPSpeedOptions *NewMSPSpeed);
extern void HwSettingsMAVLinkSpeedSet(HwSettingsMAVLinkSpeedOptions *NewMAVLinkSpeed);
extern void HwSettingsMAVLinkSpeedGet(HwSettingsMAVLinkSpeedOptions *NewMAVLinkSpeed);
extern void HwSettingsUSB_HIDPortSet(HwSettingsUSB_HIDPortOptions *NewUSB_HIDPort);
extern void HwSettingsUSB_HIDPortGet(HwSettingsUSB_HIDPortOptions *NewUSB_HIDPort);
extern void HwSettingsUSB_VCPPortSet(HwSettingsUSB_VCPPortOptions *NewUSB_VCPPort);
extern void HwSettingsUSB_VCPPortGet(HwSettingsUSB_VCPPortOptions *NewUSB_VCPPort);
extern void HwSettingsOptionalModulesSet(HwSettingsOptionalModulesData *NewOptionalModules);
extern void HwSettingsOptionalModulesGet(HwSettingsOptionalModulesData *NewOptionalModules);
extern void HwSettingsOptionalModulesArraySet(HwSettingsOptionalModulesOptions *NewOptionalModules);
extern void HwSettingsOptionalModulesArrayGet(HwSettingsOptionalModulesOptions *NewOptionalModules);
extern void HwSettingsADCRoutingSet(HwSettingsADCRoutingData *NewADCRouting);
extern void HwSettingsADCRoutingGet(HwSettingsADCRoutingData *NewADCRouting);
extern void HwSettingsADCRoutingArraySet(HwSettingsADCRoutingOptions *NewADCRouting);
extern void HwSettingsADCRoutingArrayGet(HwSettingsADCRoutingOptions *NewADCRouting);
extern void HwSettingsDSMxBindSet(uint8_t *NewDSMxBind);
extern void HwSettingsDSMxBindGet(uint8_t *NewDSMxBind);
extern void HwSettingsWS2811LED_OutSet(HwSettingsWS2811LED_OutOptions *NewWS2811LED_Out);
extern void HwSettingsWS2811LED_OutGet(HwSettingsWS2811LED_OutOptions *NewWS2811LED_Out);


#endif // HWSETTINGS_H

/**
 * @}
 * @}
 */

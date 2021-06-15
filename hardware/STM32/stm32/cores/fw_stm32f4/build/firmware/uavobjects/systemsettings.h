/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup SystemSettings SystemSettings
 * @brief Select airframe type.  Currently used by @ref ActuatorModule to choose mixing from @ref ActuatorDesired to @ref ActuatorCommand
 *
 * Autogenerated files and functions for SystemSettings Object
 *
 * @{
 *
 * @file       systemsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the SystemSettings object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: systemsettings.xml.
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

#ifndef SYSTEMSETTINGS_H
#define SYSTEMSETTINGS_H
#include <stdbool.h>
/* Object constants */
#define SYSTEMSETTINGS_OBJID 0xD9D093B8
#define SYSTEMSETTINGS_ISSINGLEINST 1
#define SYSTEMSETTINGS_ISSETTINGS 1
#define SYSTEMSETTINGS_ISPRIORITY 0
#define SYSTEMSETTINGS_NUMBYTES sizeof(SystemSettingsData)

/* Generic interface functions */
int32_t SystemSettingsInitialize();
UAVObjHandle SystemSettingsHandle();
void SystemSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field GUIConfigData information */

// Number of elements for field GUIConfigData
#define SYSTEMSETTINGS_GUICONFIGDATA_NUMELEM 4

/* Field AirSpeedMax information */

/* Field AirSpeedMin information */

/* Field AirframeType information */

// Enumeration options for field AirframeType
typedef enum __attribute__ ((__packed__)) {
    SYSTEMSETTINGS_AIRFRAMETYPE_FIXEDWING=0,
    SYSTEMSETTINGS_AIRFRAMETYPE_FIXEDWINGELEVON=1,
    SYSTEMSETTINGS_AIRFRAMETYPE_FIXEDWINGVTAIL=2,
    SYSTEMSETTINGS_AIRFRAMETYPE_VTOL=3,
    SYSTEMSETTINGS_AIRFRAMETYPE_HELICP=4,
    SYSTEMSETTINGS_AIRFRAMETYPE_QUADX=5,
    SYSTEMSETTINGS_AIRFRAMETYPE_QUADP=6,
    SYSTEMSETTINGS_AIRFRAMETYPE_HEXA=7,
    SYSTEMSETTINGS_AIRFRAMETYPE_OCTO=8,
    SYSTEMSETTINGS_AIRFRAMETYPE_CUSTOM=9,
    SYSTEMSETTINGS_AIRFRAMETYPE_HEXAX=10,
    SYSTEMSETTINGS_AIRFRAMETYPE_HEXAH=11,
    SYSTEMSETTINGS_AIRFRAMETYPE_OCTOV=12,
    SYSTEMSETTINGS_AIRFRAMETYPE_OCTOCOAXP=13,
    SYSTEMSETTINGS_AIRFRAMETYPE_OCTOCOAXX=14,
    SYSTEMSETTINGS_AIRFRAMETYPE_OCTOX=15,
    SYSTEMSETTINGS_AIRFRAMETYPE_HEXACOAX=16,
    SYSTEMSETTINGS_AIRFRAMETYPE_TRI=17,
    SYSTEMSETTINGS_AIRFRAMETYPE_GROUNDVEHICLECAR=18,
    SYSTEMSETTINGS_AIRFRAMETYPE_GROUNDVEHICLEDIFFERENTIAL=19,
    SYSTEMSETTINGS_AIRFRAMETYPE_GROUNDVEHICLEMOTORCYCLE=20
} SystemSettingsAirframeTypeOptions;

/* Field VehicleName information */

// Number of elements for field VehicleName
#define SYSTEMSETTINGS_VEHICLENAME_NUMELEM 20

/* Field ThrustControl information */

// Enumeration options for field ThrustControl
typedef enum __attribute__ ((__packed__)) {
    SYSTEMSETTINGS_THRUSTCONTROL_THROTTLE=0,
    SYSTEMSETTINGS_THRUSTCONTROL_COLLECTIVE=1,
    SYSTEMSETTINGS_THRUSTCONTROL_NONE=2
} SystemSettingsThrustControlOptions;




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        uint32_t GUIConfigData[4];
    float AirSpeedMax;
    float AirSpeedMin;
    SystemSettingsAirframeTypeOptions AirframeType;
    uint8_t VehicleName[20];
    SystemSettingsThrustControlOptions ThrustControl;

} __attribute__((packed)) SystemSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef SystemSettingsDataPacked __attribute__((aligned(4))) SystemSettingsData;

/* Typesafe Object access functions */
static inline int32_t SystemSettingsGet(SystemSettingsData * dataOut) {
    return UAVObjGetData(SystemSettingsHandle(), dataOut);
}
static inline int32_t SystemSettingsSet(const SystemSettingsData * dataIn) {
    return UAVObjSetData(SystemSettingsHandle(), dataIn);
}
static inline int32_t SystemSettingsInstGet(uint16_t instId, SystemSettingsData * dataOut) {
    return UAVObjGetInstanceData(SystemSettingsHandle(), instId, dataOut);
}
static inline int32_t SystemSettingsInstSet(uint16_t instId, const SystemSettingsData * dataIn) {
    return UAVObjSetInstanceData(SystemSettingsHandle(), instId, dataIn);
}
static inline int32_t SystemSettingsConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(SystemSettingsHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t SystemSettingsConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(SystemSettingsHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t SystemSettingsConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(SystemSettingsHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t SystemSettingsCreateInstance() {
    return UAVObjCreateInstance(SystemSettingsHandle(), &SystemSettingsSetDefaults);
}
static inline void SystemSettingsRequestUpdate() {
    UAVObjRequestUpdate(SystemSettingsHandle());
}
static inline void SystemSettingsRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(SystemSettingsHandle(), instId);
}
static inline void SystemSettingsUpdated() {
    UAVObjUpdated(SystemSettingsHandle());
}
static inline void SystemSettingsInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(SystemSettingsHandle(), instId);
}
static inline void SystemSettingsLogging() {
    UAVObjLogging(SystemSettingsHandle());
}
static inline void SystemSettingsInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(SystemSettingsHandle(), instId);
}
static inline int32_t SystemSettingsGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(SystemSettingsHandle(), dataOut);
}
static inline int32_t SystemSettingsSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(SystemSettingsHandle(), dataIn);
}
static inline int8_t SystemSettingsReadOnly() {
    return UAVObjReadOnly(SystemSettingsHandle());
}

/* Set/Get functions */
extern void SystemSettingsGUIConfigDataSet(uint32_t *NewGUIConfigData);
extern void SystemSettingsGUIConfigDataGet(uint32_t *NewGUIConfigData);
extern void SystemSettingsAirSpeedMaxSet(float *NewAirSpeedMax);
extern void SystemSettingsAirSpeedMaxGet(float *NewAirSpeedMax);
extern void SystemSettingsAirSpeedMinSet(float *NewAirSpeedMin);
extern void SystemSettingsAirSpeedMinGet(float *NewAirSpeedMin);
extern void SystemSettingsAirframeTypeSet(SystemSettingsAirframeTypeOptions *NewAirframeType);
extern void SystemSettingsAirframeTypeGet(SystemSettingsAirframeTypeOptions *NewAirframeType);
extern void SystemSettingsVehicleNameSet(uint8_t *NewVehicleName);
extern void SystemSettingsVehicleNameGet(uint8_t *NewVehicleName);
extern void SystemSettingsThrustControlSet(SystemSettingsThrustControlOptions *NewThrustControl);
extern void SystemSettingsThrustControlGet(SystemSettingsThrustControlOptions *NewThrustControl);


#endif // SYSTEMSETTINGS_H

/**
 * @}
 * @}
 */

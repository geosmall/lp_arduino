/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup AttitudeSettings AttitudeSettings
 * @brief Settings for the @ref Attitude module used on CopterControl
 *
 * Autogenerated files and functions for AttitudeSettings Object
 *
 * @{
 *
 * @file       attitudesettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the AttitudeSettings object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: attitudesettings.xml.
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

#ifndef ATTITUDESETTINGS_H
#define ATTITUDESETTINGS_H
#include <stdbool.h>
/* Object constants */
#define ATTITUDESETTINGS_OBJID 0xB20D3DE
#define ATTITUDESETTINGS_ISSINGLEINST 1
#define ATTITUDESETTINGS_ISSETTINGS 1
#define ATTITUDESETTINGS_ISPRIORITY 0
#define ATTITUDESETTINGS_NUMBYTES sizeof(AttitudeSettingsData)

/* Generic interface functions */
int32_t AttitudeSettingsInitialize();
UAVObjHandle AttitudeSettingsHandle();
void AttitudeSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field BoardRotation information */

// Array element names for field BoardRotation
typedef enum {
    ATTITUDESETTINGS_BOARDROTATION_ROLL=0,
    ATTITUDESETTINGS_BOARDROTATION_PITCH=1,
    ATTITUDESETTINGS_BOARDROTATION_YAW=2
} AttitudeSettingsBoardRotationElem;

// Number of elements for field BoardRotation
#define ATTITUDESETTINGS_BOARDROTATION_NUMELEM 3

/* Field BoardLevelTrim information */

// Array element names for field BoardLevelTrim
typedef enum {
    ATTITUDESETTINGS_BOARDLEVELTRIM_ROLL=0,
    ATTITUDESETTINGS_BOARDLEVELTRIM_PITCH=1
} AttitudeSettingsBoardLevelTrimElem;

// Number of elements for field BoardLevelTrim
#define ATTITUDESETTINGS_BOARDLEVELTRIM_NUMELEM 2

/* Field AccelKp information */

/* Field AccelKi information */

/* Field MagKi information */

/* Field MagKp information */

/* Field AccelTau information */

/* Field YawBiasRate information */

/* Field BoardSteadyMaxVariance information */

/* Field ZeroDuringArming information */

// Enumeration options for field ZeroDuringArming
typedef enum __attribute__ ((__packed__)) {
    ATTITUDESETTINGS_ZERODURINGARMING_FALSE=0,
    ATTITUDESETTINGS_ZERODURINGARMING_TRUE=1
} AttitudeSettingsZeroDuringArmingOptions;

/* Field BiasCorrectGyro information */

// Enumeration options for field BiasCorrectGyro
typedef enum __attribute__ ((__packed__)) {
    ATTITUDESETTINGS_BIASCORRECTGYRO_FALSE=0,
    ATTITUDESETTINGS_BIASCORRECTGYRO_TRUE=1
} AttitudeSettingsBiasCorrectGyroOptions;

/* Field InitialZeroWhenBoardSteady information */

// Enumeration options for field InitialZeroWhenBoardSteady
typedef enum __attribute__ ((__packed__)) {
    ATTITUDESETTINGS_INITIALZEROWHENBOARDSTEADY_FALSE=0,
    ATTITUDESETTINGS_INITIALZEROWHENBOARDSTEADY_TRUE=1
} AttitudeSettingsInitialZeroWhenBoardSteadyOptions;

/* Field TrimFlight information */

// Enumeration options for field TrimFlight
typedef enum __attribute__ ((__packed__)) {
    ATTITUDESETTINGS_TRIMFLIGHT_NORMAL=0,
    ATTITUDESETTINGS_TRIMFLIGHT_START=1,
    ATTITUDESETTINGS_TRIMFLIGHT_LOAD=2
} AttitudeSettingsTrimFlightOptions;



typedef struct __attribute__ ((__packed__)) {
    float Roll;
    float Pitch;
    float Yaw;
}  AttitudeSettingsBoardRotationData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  AttitudeSettingsBoardRotationDataArray ;
#define AttitudeSettingsBoardRotationToArray( var ) UAVObjectFieldToArray( AttitudeSettingsBoardRotationData, var )

typedef struct __attribute__ ((__packed__)) {
    float Roll;
    float Pitch;
}  AttitudeSettingsBoardLevelTrimData ;
typedef struct __attribute__ ((__packed__)) {
    float array[2];
}  AttitudeSettingsBoardLevelTrimDataArray ;
#define AttitudeSettingsBoardLevelTrimToArray( var ) UAVObjectFieldToArray( AttitudeSettingsBoardLevelTrimData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        AttitudeSettingsBoardRotationData BoardRotation;
    AttitudeSettingsBoardLevelTrimData BoardLevelTrim;
    float AccelKp;
    float AccelKi;
    float MagKi;
    float MagKp;
    float AccelTau;
    float YawBiasRate;
    float BoardSteadyMaxVariance;
    AttitudeSettingsZeroDuringArmingOptions ZeroDuringArming;
    AttitudeSettingsBiasCorrectGyroOptions BiasCorrectGyro;
    AttitudeSettingsInitialZeroWhenBoardSteadyOptions InitialZeroWhenBoardSteady;
    AttitudeSettingsTrimFlightOptions TrimFlight;

} __attribute__((packed)) AttitudeSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef AttitudeSettingsDataPacked __attribute__((aligned(4))) AttitudeSettingsData;

/* Typesafe Object access functions */
static inline int32_t AttitudeSettingsGet(AttitudeSettingsData * dataOut) {
    return UAVObjGetData(AttitudeSettingsHandle(), dataOut);
}
static inline int32_t AttitudeSettingsSet(const AttitudeSettingsData * dataIn) {
    return UAVObjSetData(AttitudeSettingsHandle(), dataIn);
}
static inline int32_t AttitudeSettingsInstGet(uint16_t instId, AttitudeSettingsData * dataOut) {
    return UAVObjGetInstanceData(AttitudeSettingsHandle(), instId, dataOut);
}
static inline int32_t AttitudeSettingsInstSet(uint16_t instId, const AttitudeSettingsData * dataIn) {
    return UAVObjSetInstanceData(AttitudeSettingsHandle(), instId, dataIn);
}
static inline int32_t AttitudeSettingsConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(AttitudeSettingsHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t AttitudeSettingsConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(AttitudeSettingsHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t AttitudeSettingsConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(AttitudeSettingsHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t AttitudeSettingsCreateInstance() {
    return UAVObjCreateInstance(AttitudeSettingsHandle(), &AttitudeSettingsSetDefaults);
}
static inline void AttitudeSettingsRequestUpdate() {
    UAVObjRequestUpdate(AttitudeSettingsHandle());
}
static inline void AttitudeSettingsRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(AttitudeSettingsHandle(), instId);
}
static inline void AttitudeSettingsUpdated() {
    UAVObjUpdated(AttitudeSettingsHandle());
}
static inline void AttitudeSettingsInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(AttitudeSettingsHandle(), instId);
}
static inline void AttitudeSettingsLogging() {
    UAVObjLogging(AttitudeSettingsHandle());
}
static inline void AttitudeSettingsInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(AttitudeSettingsHandle(), instId);
}
static inline int32_t AttitudeSettingsGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(AttitudeSettingsHandle(), dataOut);
}
static inline int32_t AttitudeSettingsSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(AttitudeSettingsHandle(), dataIn);
}
static inline int8_t AttitudeSettingsReadOnly() {
    return UAVObjReadOnly(AttitudeSettingsHandle());
}

/* Set/Get functions */
extern void AttitudeSettingsBoardRotationSet(AttitudeSettingsBoardRotationData *NewBoardRotation);
extern void AttitudeSettingsBoardRotationGet(AttitudeSettingsBoardRotationData *NewBoardRotation);
extern void AttitudeSettingsBoardRotationArraySet(float *NewBoardRotation);
extern void AttitudeSettingsBoardRotationArrayGet(float *NewBoardRotation);
extern void AttitudeSettingsBoardLevelTrimSet(AttitudeSettingsBoardLevelTrimData *NewBoardLevelTrim);
extern void AttitudeSettingsBoardLevelTrimGet(AttitudeSettingsBoardLevelTrimData *NewBoardLevelTrim);
extern void AttitudeSettingsBoardLevelTrimArraySet(float *NewBoardLevelTrim);
extern void AttitudeSettingsBoardLevelTrimArrayGet(float *NewBoardLevelTrim);
extern void AttitudeSettingsAccelKpSet(float *NewAccelKp);
extern void AttitudeSettingsAccelKpGet(float *NewAccelKp);
extern void AttitudeSettingsAccelKiSet(float *NewAccelKi);
extern void AttitudeSettingsAccelKiGet(float *NewAccelKi);
extern void AttitudeSettingsMagKiSet(float *NewMagKi);
extern void AttitudeSettingsMagKiGet(float *NewMagKi);
extern void AttitudeSettingsMagKpSet(float *NewMagKp);
extern void AttitudeSettingsMagKpGet(float *NewMagKp);
extern void AttitudeSettingsAccelTauSet(float *NewAccelTau);
extern void AttitudeSettingsAccelTauGet(float *NewAccelTau);
extern void AttitudeSettingsYawBiasRateSet(float *NewYawBiasRate);
extern void AttitudeSettingsYawBiasRateGet(float *NewYawBiasRate);
extern void AttitudeSettingsBoardSteadyMaxVarianceSet(float *NewBoardSteadyMaxVariance);
extern void AttitudeSettingsBoardSteadyMaxVarianceGet(float *NewBoardSteadyMaxVariance);
extern void AttitudeSettingsZeroDuringArmingSet(AttitudeSettingsZeroDuringArmingOptions *NewZeroDuringArming);
extern void AttitudeSettingsZeroDuringArmingGet(AttitudeSettingsZeroDuringArmingOptions *NewZeroDuringArming);
extern void AttitudeSettingsBiasCorrectGyroSet(AttitudeSettingsBiasCorrectGyroOptions *NewBiasCorrectGyro);
extern void AttitudeSettingsBiasCorrectGyroGet(AttitudeSettingsBiasCorrectGyroOptions *NewBiasCorrectGyro);
extern void AttitudeSettingsInitialZeroWhenBoardSteadySet(AttitudeSettingsInitialZeroWhenBoardSteadyOptions *NewInitialZeroWhenBoardSteady);
extern void AttitudeSettingsInitialZeroWhenBoardSteadyGet(AttitudeSettingsInitialZeroWhenBoardSteadyOptions *NewInitialZeroWhenBoardSteady);
extern void AttitudeSettingsTrimFlightSet(AttitudeSettingsTrimFlightOptions *NewTrimFlight);
extern void AttitudeSettingsTrimFlightGet(AttitudeSettingsTrimFlightOptions *NewTrimFlight);


#endif // ATTITUDESETTINGS_H

/**
 * @}
 * @}
 */

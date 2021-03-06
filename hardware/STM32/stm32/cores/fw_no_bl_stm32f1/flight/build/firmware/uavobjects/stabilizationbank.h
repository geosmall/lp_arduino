/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup StabilizationBank StabilizationBank
 * @brief Currently selected PID bank
 *
 * Autogenerated files and functions for StabilizationBank Object
 *
 * @{
 *
 * @file       stabilizationbank.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the StabilizationBank object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: stabilizationbank.xml.
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

#ifndef STABILIZATIONBANK_H
#define STABILIZATIONBANK_H
#include <stdbool.h>
/* Object constants */
#define STABILIZATIONBANK_OBJID 0x373871F0
#define STABILIZATIONBANK_ISSINGLEINST 1
#define STABILIZATIONBANK_ISSETTINGS 0
#define STABILIZATIONBANK_ISPRIORITY 0
#define STABILIZATIONBANK_NUMBYTES sizeof(StabilizationBankData)

/* Generic interface functions */
int32_t StabilizationBankInitialize();
UAVObjHandle StabilizationBankHandle();
void StabilizationBankSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field RollRatePID information */

// Array element names for field RollRatePID
typedef enum {
    STABILIZATIONBANK_ROLLRATEPID_KP=0,
    STABILIZATIONBANK_ROLLRATEPID_KI=1,
    STABILIZATIONBANK_ROLLRATEPID_KD=2,
    STABILIZATIONBANK_ROLLRATEPID_ILIMIT=3
} StabilizationBankRollRatePIDElem;

// Number of elements for field RollRatePID
#define STABILIZATIONBANK_ROLLRATEPID_NUMELEM 4

/* Field PitchRatePID information */

// Array element names for field PitchRatePID
typedef enum {
    STABILIZATIONBANK_PITCHRATEPID_KP=0,
    STABILIZATIONBANK_PITCHRATEPID_KI=1,
    STABILIZATIONBANK_PITCHRATEPID_KD=2,
    STABILIZATIONBANK_PITCHRATEPID_ILIMIT=3
} StabilizationBankPitchRatePIDElem;

// Number of elements for field PitchRatePID
#define STABILIZATIONBANK_PITCHRATEPID_NUMELEM 4

/* Field YawRatePID information */

// Array element names for field YawRatePID
typedef enum {
    STABILIZATIONBANK_YAWRATEPID_KP=0,
    STABILIZATIONBANK_YAWRATEPID_KI=1,
    STABILIZATIONBANK_YAWRATEPID_KD=2,
    STABILIZATIONBANK_YAWRATEPID_ILIMIT=3
} StabilizationBankYawRatePIDElem;

// Number of elements for field YawRatePID
#define STABILIZATIONBANK_YAWRATEPID_NUMELEM 4

/* Field RollPI information */

// Array element names for field RollPI
typedef enum {
    STABILIZATIONBANK_ROLLPI_KP=0,
    STABILIZATIONBANK_ROLLPI_KI=1,
    STABILIZATIONBANK_ROLLPI_ILIMIT=2
} StabilizationBankRollPIElem;

// Number of elements for field RollPI
#define STABILIZATIONBANK_ROLLPI_NUMELEM 3

/* Field PitchPI information */

// Array element names for field PitchPI
typedef enum {
    STABILIZATIONBANK_PITCHPI_KP=0,
    STABILIZATIONBANK_PITCHPI_KI=1,
    STABILIZATIONBANK_PITCHPI_ILIMIT=2
} StabilizationBankPitchPIElem;

// Number of elements for field PitchPI
#define STABILIZATIONBANK_PITCHPI_NUMELEM 3

/* Field YawPI information */

// Array element names for field YawPI
typedef enum {
    STABILIZATIONBANK_YAWPI_KP=0,
    STABILIZATIONBANK_YAWPI_KI=1,
    STABILIZATIONBANK_YAWPI_ILIMIT=2
} StabilizationBankYawPIElem;

// Number of elements for field YawPI
#define STABILIZATIONBANK_YAWPI_NUMELEM 3

/* Field ManualRate information */

// Array element names for field ManualRate
typedef enum {
    STABILIZATIONBANK_MANUALRATE_ROLL=0,
    STABILIZATIONBANK_MANUALRATE_PITCH=1,
    STABILIZATIONBANK_MANUALRATE_YAW=2
} StabilizationBankManualRateElem;

// Number of elements for field ManualRate
#define STABILIZATIONBANK_MANUALRATE_NUMELEM 3

/* Field MaximumRate information */

// Array element names for field MaximumRate
typedef enum {
    STABILIZATIONBANK_MAXIMUMRATE_ROLL=0,
    STABILIZATIONBANK_MAXIMUMRATE_PITCH=1,
    STABILIZATIONBANK_MAXIMUMRATE_YAW=2
} StabilizationBankMaximumRateElem;

// Number of elements for field MaximumRate
#define STABILIZATIONBANK_MAXIMUMRATE_NUMELEM 3

/* Field RollMax information */

/* Field PitchMax information */

/* Field YawMax information */

/* Field StickExpo information */

// Array element names for field StickExpo
typedef enum {
    STABILIZATIONBANK_STICKEXPO_ROLL=0,
    STABILIZATIONBANK_STICKEXPO_PITCH=1,
    STABILIZATIONBANK_STICKEXPO_YAW=2
} StabilizationBankStickExpoElem;

// Number of elements for field StickExpo
#define STABILIZATIONBANK_STICKEXPO_NUMELEM 3

/* Field AcroInsanityFactor information */

// Array element names for field AcroInsanityFactor
typedef enum {
    STABILIZATIONBANK_ACROINSANITYFACTOR_ROLL=0,
    STABILIZATIONBANK_ACROINSANITYFACTOR_PITCH=1,
    STABILIZATIONBANK_ACROINSANITYFACTOR_YAW=2
} StabilizationBankAcroInsanityFactorElem;

// Number of elements for field AcroInsanityFactor
#define STABILIZATIONBANK_ACROINSANITYFACTOR_NUMELEM 3

/* Field EnablePiroComp information */

// Enumeration options for field EnablePiroComp
typedef enum __attribute__ ((__packed__)) {
    STABILIZATIONBANK_ENABLEPIROCOMP_FALSE=0,
    STABILIZATIONBANK_ENABLEPIROCOMP_TRUE=1
} StabilizationBankEnablePiroCompOptions;

/* Field FpvCamTiltCompensation information */

/* Field EnableThrustPIDScaling information */

// Enumeration options for field EnableThrustPIDScaling
typedef enum __attribute__ ((__packed__)) {
    STABILIZATIONBANK_ENABLETHRUSTPIDSCALING_FALSE=0,
    STABILIZATIONBANK_ENABLETHRUSTPIDSCALING_TRUE=1
} StabilizationBankEnableThrustPIDScalingOptions;

/* Field ThrustPIDScaleCurve information */

// Array element names for field ThrustPIDScaleCurve
typedef enum {
    STABILIZATIONBANK_THRUSTPIDSCALECURVE_0=0,
    STABILIZATIONBANK_THRUSTPIDSCALECURVE_25=1,
    STABILIZATIONBANK_THRUSTPIDSCALECURVE_50=2,
    STABILIZATIONBANK_THRUSTPIDSCALECURVE_75=3,
    STABILIZATIONBANK_THRUSTPIDSCALECURVE_100=4
} StabilizationBankThrustPIDScaleCurveElem;

// Number of elements for field ThrustPIDScaleCurve
#define STABILIZATIONBANK_THRUSTPIDSCALECURVE_NUMELEM 5

/* Field ThrustPIDScaleSource information */

// Enumeration options for field ThrustPIDScaleSource
typedef enum __attribute__ ((__packed__)) {
    STABILIZATIONBANK_THRUSTPIDSCALESOURCE_MANUALCONTROLTHROTTLE=0,
    STABILIZATIONBANK_THRUSTPIDSCALESOURCE_STABILIZATIONDESIREDTHRUST=1,
    STABILIZATIONBANK_THRUSTPIDSCALESOURCE_ACTUATORDESIREDTHRUST=2
} StabilizationBankThrustPIDScaleSourceOptions;

/* Field ThrustPIDScaleTarget information */

// Enumeration options for field ThrustPIDScaleTarget
typedef enum __attribute__ ((__packed__)) {
    STABILIZATIONBANK_THRUSTPIDSCALETARGET_PID=0,
    STABILIZATIONBANK_THRUSTPIDSCALETARGET_PI=1,
    STABILIZATIONBANK_THRUSTPIDSCALETARGET_PD=2,
    STABILIZATIONBANK_THRUSTPIDSCALETARGET_ID=3,
    STABILIZATIONBANK_THRUSTPIDSCALETARGET_P=4,
    STABILIZATIONBANK_THRUSTPIDSCALETARGET_I=5,
    STABILIZATIONBANK_THRUSTPIDSCALETARGET_D=6
} StabilizationBankThrustPIDScaleTargetOptions;

/* Field ThrustPIDScaleAxes information */

// Enumeration options for field ThrustPIDScaleAxes
typedef enum __attribute__ ((__packed__)) {
    STABILIZATIONBANK_THRUSTPIDSCALEAXES_ROLLPITCHYAW=0,
    STABILIZATIONBANK_THRUSTPIDSCALEAXES_ROLLPITCH=1,
    STABILIZATIONBANK_THRUSTPIDSCALEAXES_ROLLYAW=2,
    STABILIZATIONBANK_THRUSTPIDSCALEAXES_ROLL=3,
    STABILIZATIONBANK_THRUSTPIDSCALEAXES_PITCHYAW=4,
    STABILIZATIONBANK_THRUSTPIDSCALEAXES_PITCH=5,
    STABILIZATIONBANK_THRUSTPIDSCALEAXES_YAW=6
} StabilizationBankThrustPIDScaleAxesOptions;



typedef struct __attribute__ ((__packed__)) {
    float Kp;
    float Ki;
    float Kd;
    float ILimit;
}  StabilizationBankRollRatePIDData ;
typedef struct __attribute__ ((__packed__)) {
    float array[4];
}  StabilizationBankRollRatePIDDataArray ;
#define StabilizationBankRollRatePIDToArray( var ) UAVObjectFieldToArray( StabilizationBankRollRatePIDData, var )

typedef struct __attribute__ ((__packed__)) {
    float Kp;
    float Ki;
    float Kd;
    float ILimit;
}  StabilizationBankPitchRatePIDData ;
typedef struct __attribute__ ((__packed__)) {
    float array[4];
}  StabilizationBankPitchRatePIDDataArray ;
#define StabilizationBankPitchRatePIDToArray( var ) UAVObjectFieldToArray( StabilizationBankPitchRatePIDData, var )

typedef struct __attribute__ ((__packed__)) {
    float Kp;
    float Ki;
    float Kd;
    float ILimit;
}  StabilizationBankYawRatePIDData ;
typedef struct __attribute__ ((__packed__)) {
    float array[4];
}  StabilizationBankYawRatePIDDataArray ;
#define StabilizationBankYawRatePIDToArray( var ) UAVObjectFieldToArray( StabilizationBankYawRatePIDData, var )

typedef struct __attribute__ ((__packed__)) {
    float Kp;
    float Ki;
    float ILimit;
}  StabilizationBankRollPIData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  StabilizationBankRollPIDataArray ;
#define StabilizationBankRollPIToArray( var ) UAVObjectFieldToArray( StabilizationBankRollPIData, var )

typedef struct __attribute__ ((__packed__)) {
    float Kp;
    float Ki;
    float ILimit;
}  StabilizationBankPitchPIData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  StabilizationBankPitchPIDataArray ;
#define StabilizationBankPitchPIToArray( var ) UAVObjectFieldToArray( StabilizationBankPitchPIData, var )

typedef struct __attribute__ ((__packed__)) {
    float Kp;
    float Ki;
    float ILimit;
}  StabilizationBankYawPIData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  StabilizationBankYawPIDataArray ;
#define StabilizationBankYawPIToArray( var ) UAVObjectFieldToArray( StabilizationBankYawPIData, var )

typedef struct __attribute__ ((__packed__)) {
    uint16_t Roll;
    uint16_t Pitch;
    uint16_t Yaw;
}  StabilizationBankManualRateData ;
typedef struct __attribute__ ((__packed__)) {
    uint16_t array[3];
}  StabilizationBankManualRateDataArray ;
#define StabilizationBankManualRateToArray( var ) UAVObjectFieldToArray( StabilizationBankManualRateData, var )

typedef struct __attribute__ ((__packed__)) {
    uint16_t Roll;
    uint16_t Pitch;
    uint16_t Yaw;
}  StabilizationBankMaximumRateData ;
typedef struct __attribute__ ((__packed__)) {
    uint16_t array[3];
}  StabilizationBankMaximumRateDataArray ;
#define StabilizationBankMaximumRateToArray( var ) UAVObjectFieldToArray( StabilizationBankMaximumRateData, var )

typedef struct __attribute__ ((__packed__)) {
    int8_t Roll;
    int8_t Pitch;
    int8_t Yaw;
}  StabilizationBankStickExpoData ;
typedef struct __attribute__ ((__packed__)) {
    int8_t array[3];
}  StabilizationBankStickExpoDataArray ;
#define StabilizationBankStickExpoToArray( var ) UAVObjectFieldToArray( StabilizationBankStickExpoData, var )

typedef struct __attribute__ ((__packed__)) {
    uint8_t Roll;
    uint8_t Pitch;
    uint8_t Yaw;
}  StabilizationBankAcroInsanityFactorData ;
typedef struct __attribute__ ((__packed__)) {
    uint8_t array[3];
}  StabilizationBankAcroInsanityFactorDataArray ;
#define StabilizationBankAcroInsanityFactorToArray( var ) UAVObjectFieldToArray( StabilizationBankAcroInsanityFactorData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        StabilizationBankRollRatePIDData RollRatePID;
    StabilizationBankPitchRatePIDData PitchRatePID;
    StabilizationBankYawRatePIDData YawRatePID;
    StabilizationBankRollPIData RollPI;
    StabilizationBankPitchPIData PitchPI;
    StabilizationBankYawPIData YawPI;
    StabilizationBankManualRateData ManualRate;
    StabilizationBankMaximumRateData MaximumRate;
    uint8_t RollMax;
    uint8_t PitchMax;
    uint8_t YawMax;
    StabilizationBankStickExpoData StickExpo;
    StabilizationBankAcroInsanityFactorData AcroInsanityFactor;
    StabilizationBankEnablePiroCompOptions EnablePiroComp;
    uint8_t FpvCamTiltCompensation;
    StabilizationBankEnableThrustPIDScalingOptions EnableThrustPIDScaling;
    int8_t ThrustPIDScaleCurve[5];
    StabilizationBankThrustPIDScaleSourceOptions ThrustPIDScaleSource;
    StabilizationBankThrustPIDScaleTargetOptions ThrustPIDScaleTarget;
    StabilizationBankThrustPIDScaleAxesOptions ThrustPIDScaleAxes;

} __attribute__((packed)) StabilizationBankDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef StabilizationBankDataPacked __attribute__((aligned(4))) StabilizationBankData;

/* Typesafe Object access functions */
static inline int32_t StabilizationBankGet(StabilizationBankData * dataOut) {
    return UAVObjGetData(StabilizationBankHandle(), dataOut);
}
static inline int32_t StabilizationBankSet(const StabilizationBankData * dataIn) {
    return UAVObjSetData(StabilizationBankHandle(), dataIn);
}
static inline int32_t StabilizationBankInstGet(uint16_t instId, StabilizationBankData * dataOut) {
    return UAVObjGetInstanceData(StabilizationBankHandle(), instId, dataOut);
}
static inline int32_t StabilizationBankInstSet(uint16_t instId, const StabilizationBankData * dataIn) {
    return UAVObjSetInstanceData(StabilizationBankHandle(), instId, dataIn);
}
static inline int32_t StabilizationBankConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(StabilizationBankHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t StabilizationBankConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(StabilizationBankHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t StabilizationBankConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(StabilizationBankHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t StabilizationBankCreateInstance() {
    return UAVObjCreateInstance(StabilizationBankHandle(), &StabilizationBankSetDefaults);
}
static inline void StabilizationBankRequestUpdate() {
    UAVObjRequestUpdate(StabilizationBankHandle());
}
static inline void StabilizationBankRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(StabilizationBankHandle(), instId);
}
static inline void StabilizationBankUpdated() {
    UAVObjUpdated(StabilizationBankHandle());
}
static inline void StabilizationBankInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(StabilizationBankHandle(), instId);
}
static inline void StabilizationBankLogging() {
    UAVObjLogging(StabilizationBankHandle());
}
static inline void StabilizationBankInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(StabilizationBankHandle(), instId);
}
static inline int32_t StabilizationBankGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(StabilizationBankHandle(), dataOut);
}
static inline int32_t StabilizationBankSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(StabilizationBankHandle(), dataIn);
}
static inline int8_t StabilizationBankReadOnly() {
    return UAVObjReadOnly(StabilizationBankHandle());
}

/* Set/Get functions */
extern void StabilizationBankRollRatePIDSet(StabilizationBankRollRatePIDData *NewRollRatePID);
extern void StabilizationBankRollRatePIDGet(StabilizationBankRollRatePIDData *NewRollRatePID);
extern void StabilizationBankRollRatePIDArraySet(float *NewRollRatePID);
extern void StabilizationBankRollRatePIDArrayGet(float *NewRollRatePID);
extern void StabilizationBankPitchRatePIDSet(StabilizationBankPitchRatePIDData *NewPitchRatePID);
extern void StabilizationBankPitchRatePIDGet(StabilizationBankPitchRatePIDData *NewPitchRatePID);
extern void StabilizationBankPitchRatePIDArraySet(float *NewPitchRatePID);
extern void StabilizationBankPitchRatePIDArrayGet(float *NewPitchRatePID);
extern void StabilizationBankYawRatePIDSet(StabilizationBankYawRatePIDData *NewYawRatePID);
extern void StabilizationBankYawRatePIDGet(StabilizationBankYawRatePIDData *NewYawRatePID);
extern void StabilizationBankYawRatePIDArraySet(float *NewYawRatePID);
extern void StabilizationBankYawRatePIDArrayGet(float *NewYawRatePID);
extern void StabilizationBankRollPISet(StabilizationBankRollPIData *NewRollPI);
extern void StabilizationBankRollPIGet(StabilizationBankRollPIData *NewRollPI);
extern void StabilizationBankRollPIArraySet(float *NewRollPI);
extern void StabilizationBankRollPIArrayGet(float *NewRollPI);
extern void StabilizationBankPitchPISet(StabilizationBankPitchPIData *NewPitchPI);
extern void StabilizationBankPitchPIGet(StabilizationBankPitchPIData *NewPitchPI);
extern void StabilizationBankPitchPIArraySet(float *NewPitchPI);
extern void StabilizationBankPitchPIArrayGet(float *NewPitchPI);
extern void StabilizationBankYawPISet(StabilizationBankYawPIData *NewYawPI);
extern void StabilizationBankYawPIGet(StabilizationBankYawPIData *NewYawPI);
extern void StabilizationBankYawPIArraySet(float *NewYawPI);
extern void StabilizationBankYawPIArrayGet(float *NewYawPI);
extern void StabilizationBankManualRateSet(StabilizationBankManualRateData *NewManualRate);
extern void StabilizationBankManualRateGet(StabilizationBankManualRateData *NewManualRate);
extern void StabilizationBankManualRateArraySet(uint16_t *NewManualRate);
extern void StabilizationBankManualRateArrayGet(uint16_t *NewManualRate);
extern void StabilizationBankMaximumRateSet(StabilizationBankMaximumRateData *NewMaximumRate);
extern void StabilizationBankMaximumRateGet(StabilizationBankMaximumRateData *NewMaximumRate);
extern void StabilizationBankMaximumRateArraySet(uint16_t *NewMaximumRate);
extern void StabilizationBankMaximumRateArrayGet(uint16_t *NewMaximumRate);
extern void StabilizationBankRollMaxSet(uint8_t *NewRollMax);
extern void StabilizationBankRollMaxGet(uint8_t *NewRollMax);
extern void StabilizationBankPitchMaxSet(uint8_t *NewPitchMax);
extern void StabilizationBankPitchMaxGet(uint8_t *NewPitchMax);
extern void StabilizationBankYawMaxSet(uint8_t *NewYawMax);
extern void StabilizationBankYawMaxGet(uint8_t *NewYawMax);
extern void StabilizationBankStickExpoSet(StabilizationBankStickExpoData *NewStickExpo);
extern void StabilizationBankStickExpoGet(StabilizationBankStickExpoData *NewStickExpo);
extern void StabilizationBankStickExpoArraySet(int8_t *NewStickExpo);
extern void StabilizationBankStickExpoArrayGet(int8_t *NewStickExpo);
extern void StabilizationBankAcroInsanityFactorSet(StabilizationBankAcroInsanityFactorData *NewAcroInsanityFactor);
extern void StabilizationBankAcroInsanityFactorGet(StabilizationBankAcroInsanityFactorData *NewAcroInsanityFactor);
extern void StabilizationBankAcroInsanityFactorArraySet(uint8_t *NewAcroInsanityFactor);
extern void StabilizationBankAcroInsanityFactorArrayGet(uint8_t *NewAcroInsanityFactor);
extern void StabilizationBankEnablePiroCompSet(StabilizationBankEnablePiroCompOptions *NewEnablePiroComp);
extern void StabilizationBankEnablePiroCompGet(StabilizationBankEnablePiroCompOptions *NewEnablePiroComp);
extern void StabilizationBankFpvCamTiltCompensationSet(uint8_t *NewFpvCamTiltCompensation);
extern void StabilizationBankFpvCamTiltCompensationGet(uint8_t *NewFpvCamTiltCompensation);
extern void StabilizationBankEnableThrustPIDScalingSet(StabilizationBankEnableThrustPIDScalingOptions *NewEnableThrustPIDScaling);
extern void StabilizationBankEnableThrustPIDScalingGet(StabilizationBankEnableThrustPIDScalingOptions *NewEnableThrustPIDScaling);
extern void StabilizationBankThrustPIDScaleCurveSet(int8_t *NewThrustPIDScaleCurve);
extern void StabilizationBankThrustPIDScaleCurveGet(int8_t *NewThrustPIDScaleCurve);
extern void StabilizationBankThrustPIDScaleSourceSet(StabilizationBankThrustPIDScaleSourceOptions *NewThrustPIDScaleSource);
extern void StabilizationBankThrustPIDScaleSourceGet(StabilizationBankThrustPIDScaleSourceOptions *NewThrustPIDScaleSource);
extern void StabilizationBankThrustPIDScaleTargetSet(StabilizationBankThrustPIDScaleTargetOptions *NewThrustPIDScaleTarget);
extern void StabilizationBankThrustPIDScaleTargetGet(StabilizationBankThrustPIDScaleTargetOptions *NewThrustPIDScaleTarget);
extern void StabilizationBankThrustPIDScaleAxesSet(StabilizationBankThrustPIDScaleAxesOptions *NewThrustPIDScaleAxes);
extern void StabilizationBankThrustPIDScaleAxesGet(StabilizationBankThrustPIDScaleAxesOptions *NewThrustPIDScaleAxes);


#endif // STABILIZATIONBANK_H

/**
 * @}
 * @}
 */

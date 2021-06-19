/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup OAVMixerVolumes OAVMixerVolumes
 * @brief OAV Mixer Volumes
 *
 * Autogenerated files and functions for OAVMixerVolumes Object
 *
 * @{
 *
 * @file       oavmixervolumes.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the OAVMixerVolumes object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: oavmixervolumes.xml.
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

#ifndef OAVMIXERVOLUMES_H
#define OAVMIXERVOLUMES_H
#include <stdbool.h>
/* Object constants */
#define OAVMIXERVOLUMES_OBJID 0x64795790
#define OAVMIXERVOLUMES_ISSINGLEINST 1
#define OAVMIXERVOLUMES_ISSETTINGS 1
#define OAVMIXERVOLUMES_ISPRIORITY 0
#define OAVMIXERVOLUMES_NUMBYTES sizeof(OAVMixerVolumesData)

/* Generic interface functions */
int32_t OAVMixerVolumesInitialize();
UAVObjHandle OAVMixerVolumesHandle();
void OAVMixerVolumesSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field P1ThrottleVolume information */

// Number of elements for field P1ThrottleVolume
#define OAVMIXERVOLUMES_P1THROTTLEVOLUME_NUMELEM 10

/* Field P2ThrottleVolume information */

// Number of elements for field P2ThrottleVolume
#define OAVMIXERVOLUMES_P2THROTTLEVOLUME_NUMELEM 10

/* Field ThrottleCurve information */

// Enumeration options for field ThrottleCurve
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERVOLUMES_THROTTLECURVE_LINEAR=0,
    OAVMIXERVOLUMES_THROTTLECURVE_SINE=1,
    OAVMIXERVOLUMES_THROTTLECURVE_SQRTSINE=2
} OAVMixerVolumesThrottleCurveOptions;

// Number of elements for field ThrottleCurve
#define OAVMIXERVOLUMES_THROTTLECURVE_NUMELEM 10

/* Field P1AileronVolume information */

// Number of elements for field P1AileronVolume
#define OAVMIXERVOLUMES_P1AILERONVOLUME_NUMELEM 10

/* Field P2AileronVolume information */

// Number of elements for field P2AileronVolume
#define OAVMIXERVOLUMES_P2AILERONVOLUME_NUMELEM 10

/* Field P1ElevatorVolume information */

// Number of elements for field P1ElevatorVolume
#define OAVMIXERVOLUMES_P1ELEVATORVOLUME_NUMELEM 10

/* Field P2ElevatorVolume information */

// Number of elements for field P2ElevatorVolume
#define OAVMIXERVOLUMES_P2ELEVATORVOLUME_NUMELEM 10

/* Field P1RudderVolume information */

// Number of elements for field P1RudderVolume
#define OAVMIXERVOLUMES_P1RUDDERVOLUME_NUMELEM 10

/* Field P2RudderVolume information */

// Number of elements for field P2RudderVolume
#define OAVMIXERVOLUMES_P2RUDDERVOLUME_NUMELEM 10

/* Field P1SourceA information */

// Enumeration options for field P1SourceA
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERVOLUMES_P1SOURCEA_THROTTLECURVE=0,
    OAVMIXERVOLUMES_P1SOURCEA_COLLECTIVECURVE=1,
    OAVMIXERVOLUMES_P1SOURCEA_CURVEC=2,
    OAVMIXERVOLUMES_P1SOURCEA_CURVED=3,
    OAVMIXERVOLUMES_P1SOURCEA_THROTTLE=4,
    OAVMIXERVOLUMES_P1SOURCEA_AILERON=5,
    OAVMIXERVOLUMES_P1SOURCEA_ELEVATOR=6,
    OAVMIXERVOLUMES_P1SOURCEA_RUDDER=7,
    OAVMIXERVOLUMES_P1SOURCEA_GEAR=8,
    OAVMIXERVOLUMES_P1SOURCEA_AUX1=9,
    OAVMIXERVOLUMES_P1SOURCEA_AUX2=10,
    OAVMIXERVOLUMES_P1SOURCEA_AUX3=11,
    OAVMIXERVOLUMES_P1SOURCEA_ROLLGYRO=12,
    OAVMIXERVOLUMES_P1SOURCEA_PITCHGYRO=13,
    OAVMIXERVOLUMES_P1SOURCEA_YAWGYRO=14,
    OAVMIXERVOLUMES_P1SOURCEA_ROLLSMOOTH=15,
    OAVMIXERVOLUMES_P1SOURCEA_PITCHSMOOTH=16,
    OAVMIXERVOLUMES_P1SOURCEA_ACCX=17,
    OAVMIXERVOLUMES_P1SOURCEA_ACCY=18,
    OAVMIXERVOLUMES_P1SOURCEA_ACCZ=19,
    OAVMIXERVOLUMES_P1SOURCEA_NOSOURCE=20
} OAVMixerVolumesP1SourceAOptions;

// Number of elements for field P1SourceA
#define OAVMIXERVOLUMES_P1SOURCEA_NUMELEM 10

/* Field P1SourceAVolume information */

// Number of elements for field P1SourceAVolume
#define OAVMIXERVOLUMES_P1SOURCEAVOLUME_NUMELEM 10

/* Field P2SourceA information */

// Enumeration options for field P2SourceA
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERVOLUMES_P2SOURCEA_THROTTLECURVE=0,
    OAVMIXERVOLUMES_P2SOURCEA_COLLECTIVECURVE=1,
    OAVMIXERVOLUMES_P2SOURCEA_CURVEC=2,
    OAVMIXERVOLUMES_P2SOURCEA_CURVED=3,
    OAVMIXERVOLUMES_P2SOURCEA_THROTTLE=4,
    OAVMIXERVOLUMES_P2SOURCEA_AILERON=5,
    OAVMIXERVOLUMES_P2SOURCEA_ELEVATOR=6,
    OAVMIXERVOLUMES_P2SOURCEA_RUDDER=7,
    OAVMIXERVOLUMES_P2SOURCEA_GEAR=8,
    OAVMIXERVOLUMES_P2SOURCEA_AUX1=9,
    OAVMIXERVOLUMES_P2SOURCEA_AUX2=10,
    OAVMIXERVOLUMES_P2SOURCEA_AUX3=11,
    OAVMIXERVOLUMES_P2SOURCEA_ROLLGYRO=12,
    OAVMIXERVOLUMES_P2SOURCEA_PITCHGYRO=13,
    OAVMIXERVOLUMES_P2SOURCEA_YAWGYRO=14,
    OAVMIXERVOLUMES_P2SOURCEA_ROLLSMOOTH=15,
    OAVMIXERVOLUMES_P2SOURCEA_PITCHSMOOTH=16,
    OAVMIXERVOLUMES_P2SOURCEA_ACCX=17,
    OAVMIXERVOLUMES_P2SOURCEA_ACCY=18,
    OAVMIXERVOLUMES_P2SOURCEA_ACCZ=19,
    OAVMIXERVOLUMES_P2SOURCEA_NOSOURCE=20
} OAVMixerVolumesP2SourceAOptions;

// Number of elements for field P2SourceA
#define OAVMIXERVOLUMES_P2SOURCEA_NUMELEM 10

/* Field P2SourceAVolume information */

// Number of elements for field P2SourceAVolume
#define OAVMIXERVOLUMES_P2SOURCEAVOLUME_NUMELEM 10

/* Field P1SourceB information */

// Enumeration options for field P1SourceB
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERVOLUMES_P1SOURCEB_THROTTLECURVE=0,
    OAVMIXERVOLUMES_P1SOURCEB_COLLECTIVECURVE=1,
    OAVMIXERVOLUMES_P1SOURCEB_CURVEC=2,
    OAVMIXERVOLUMES_P1SOURCEB_CURVED=3,
    OAVMIXERVOLUMES_P1SOURCEB_THROTTLE=4,
    OAVMIXERVOLUMES_P1SOURCEB_AILERON=5,
    OAVMIXERVOLUMES_P1SOURCEB_ELEVATOR=6,
    OAVMIXERVOLUMES_P1SOURCEB_RUDDER=7,
    OAVMIXERVOLUMES_P1SOURCEB_GEAR=8,
    OAVMIXERVOLUMES_P1SOURCEB_AUX1=9,
    OAVMIXERVOLUMES_P1SOURCEB_AUX2=10,
    OAVMIXERVOLUMES_P1SOURCEB_AUX3=11,
    OAVMIXERVOLUMES_P1SOURCEB_ROLLGYRO=12,
    OAVMIXERVOLUMES_P1SOURCEB_PITCHGYRO=13,
    OAVMIXERVOLUMES_P1SOURCEB_YAWGYRO=14,
    OAVMIXERVOLUMES_P1SOURCEB_ROLLSMOOTH=15,
    OAVMIXERVOLUMES_P1SOURCEB_PITCHSMOOTH=16,
    OAVMIXERVOLUMES_P1SOURCEB_ACCX=17,
    OAVMIXERVOLUMES_P1SOURCEB_ACCY=18,
    OAVMIXERVOLUMES_P1SOURCEB_ACCZ=19,
    OAVMIXERVOLUMES_P1SOURCEB_NOSOURCE=20
} OAVMixerVolumesP1SourceBOptions;

// Number of elements for field P1SourceB
#define OAVMIXERVOLUMES_P1SOURCEB_NUMELEM 10

/* Field P1SourceBVolume information */

// Number of elements for field P1SourceBVolume
#define OAVMIXERVOLUMES_P1SOURCEBVOLUME_NUMELEM 10

/* Field P2SourceB information */

// Enumeration options for field P2SourceB
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERVOLUMES_P2SOURCEB_THROTTLECURVE=0,
    OAVMIXERVOLUMES_P2SOURCEB_COLLECTIVECURVE=1,
    OAVMIXERVOLUMES_P2SOURCEB_CURVEC=2,
    OAVMIXERVOLUMES_P2SOURCEB_CURVED=3,
    OAVMIXERVOLUMES_P2SOURCEB_THROTTLE=4,
    OAVMIXERVOLUMES_P2SOURCEB_AILERON=5,
    OAVMIXERVOLUMES_P2SOURCEB_ELEVATOR=6,
    OAVMIXERVOLUMES_P2SOURCEB_RUDDER=7,
    OAVMIXERVOLUMES_P2SOURCEB_GEAR=8,
    OAVMIXERVOLUMES_P2SOURCEB_AUX1=9,
    OAVMIXERVOLUMES_P2SOURCEB_AUX2=10,
    OAVMIXERVOLUMES_P2SOURCEB_AUX3=11,
    OAVMIXERVOLUMES_P2SOURCEB_ROLLGYRO=12,
    OAVMIXERVOLUMES_P2SOURCEB_PITCHGYRO=13,
    OAVMIXERVOLUMES_P2SOURCEB_YAWGYRO=14,
    OAVMIXERVOLUMES_P2SOURCEB_ROLLSMOOTH=15,
    OAVMIXERVOLUMES_P2SOURCEB_PITCHSMOOTH=16,
    OAVMIXERVOLUMES_P2SOURCEB_ACCX=17,
    OAVMIXERVOLUMES_P2SOURCEB_ACCY=18,
    OAVMIXERVOLUMES_P2SOURCEB_ACCZ=19,
    OAVMIXERVOLUMES_P2SOURCEB_NOSOURCE=20
} OAVMixerVolumesP2SourceBOptions;

// Number of elements for field P2SourceB
#define OAVMIXERVOLUMES_P2SOURCEB_NUMELEM 10

/* Field P2SourceBVolume information */

// Number of elements for field P2SourceBVolume
#define OAVMIXERVOLUMES_P2SOURCEBVOLUME_NUMELEM 10




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        int8_t P1ThrottleVolume[10];
    int8_t P2ThrottleVolume[10];
    OAVMixerVolumesThrottleCurveOptions ThrottleCurve[10];
    int8_t P1AileronVolume[10];
    int8_t P2AileronVolume[10];
    int8_t P1ElevatorVolume[10];
    int8_t P2ElevatorVolume[10];
    int8_t P1RudderVolume[10];
    int8_t P2RudderVolume[10];
    OAVMixerVolumesP1SourceAOptions P1SourceA[10];
    int8_t P1SourceAVolume[10];
    OAVMixerVolumesP2SourceAOptions P2SourceA[10];
    int8_t P2SourceAVolume[10];
    OAVMixerVolumesP1SourceBOptions P1SourceB[10];
    int8_t P1SourceBVolume[10];
    OAVMixerVolumesP2SourceBOptions P2SourceB[10];
    int8_t P2SourceBVolume[10];

} __attribute__((packed)) OAVMixerVolumesDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef OAVMixerVolumesDataPacked __attribute__((aligned(4))) OAVMixerVolumesData;

/* Typesafe Object access functions */
static inline int32_t OAVMixerVolumesGet(OAVMixerVolumesData * dataOut) {
    return UAVObjGetData(OAVMixerVolumesHandle(), dataOut);
}
static inline int32_t OAVMixerVolumesSet(const OAVMixerVolumesData * dataIn) {
    return UAVObjSetData(OAVMixerVolumesHandle(), dataIn);
}
static inline int32_t OAVMixerVolumesInstGet(uint16_t instId, OAVMixerVolumesData * dataOut) {
    return UAVObjGetInstanceData(OAVMixerVolumesHandle(), instId, dataOut);
}
static inline int32_t OAVMixerVolumesInstSet(uint16_t instId, const OAVMixerVolumesData * dataIn) {
    return UAVObjSetInstanceData(OAVMixerVolumesHandle(), instId, dataIn);
}
static inline int32_t OAVMixerVolumesConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(OAVMixerVolumesHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t OAVMixerVolumesConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(OAVMixerVolumesHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t OAVMixerVolumesConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(OAVMixerVolumesHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t OAVMixerVolumesCreateInstance() {
    return UAVObjCreateInstance(OAVMixerVolumesHandle(), &OAVMixerVolumesSetDefaults);
}
static inline void OAVMixerVolumesRequestUpdate() {
    UAVObjRequestUpdate(OAVMixerVolumesHandle());
}
static inline void OAVMixerVolumesRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(OAVMixerVolumesHandle(), instId);
}
static inline void OAVMixerVolumesUpdated() {
    UAVObjUpdated(OAVMixerVolumesHandle());
}
static inline void OAVMixerVolumesInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(OAVMixerVolumesHandle(), instId);
}
static inline void OAVMixerVolumesLogging() {
    UAVObjLogging(OAVMixerVolumesHandle());
}
static inline void OAVMixerVolumesInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(OAVMixerVolumesHandle(), instId);
}
static inline int32_t OAVMixerVolumesGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(OAVMixerVolumesHandle(), dataOut);
}
static inline int32_t OAVMixerVolumesSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(OAVMixerVolumesHandle(), dataIn);
}
static inline int8_t OAVMixerVolumesReadOnly() {
    return UAVObjReadOnly(OAVMixerVolumesHandle());
}

/* Set/Get functions */
extern void OAVMixerVolumesP1ThrottleVolumeSet(int8_t *NewP1ThrottleVolume);
extern void OAVMixerVolumesP1ThrottleVolumeGet(int8_t *NewP1ThrottleVolume);
extern void OAVMixerVolumesP2ThrottleVolumeSet(int8_t *NewP2ThrottleVolume);
extern void OAVMixerVolumesP2ThrottleVolumeGet(int8_t *NewP2ThrottleVolume);
extern void OAVMixerVolumesThrottleCurveSet(OAVMixerVolumesThrottleCurveOptions *NewThrottleCurve);
extern void OAVMixerVolumesThrottleCurveGet(OAVMixerVolumesThrottleCurveOptions *NewThrottleCurve);
extern void OAVMixerVolumesP1AileronVolumeSet(int8_t *NewP1AileronVolume);
extern void OAVMixerVolumesP1AileronVolumeGet(int8_t *NewP1AileronVolume);
extern void OAVMixerVolumesP2AileronVolumeSet(int8_t *NewP2AileronVolume);
extern void OAVMixerVolumesP2AileronVolumeGet(int8_t *NewP2AileronVolume);
extern void OAVMixerVolumesP1ElevatorVolumeSet(int8_t *NewP1ElevatorVolume);
extern void OAVMixerVolumesP1ElevatorVolumeGet(int8_t *NewP1ElevatorVolume);
extern void OAVMixerVolumesP2ElevatorVolumeSet(int8_t *NewP2ElevatorVolume);
extern void OAVMixerVolumesP2ElevatorVolumeGet(int8_t *NewP2ElevatorVolume);
extern void OAVMixerVolumesP1RudderVolumeSet(int8_t *NewP1RudderVolume);
extern void OAVMixerVolumesP1RudderVolumeGet(int8_t *NewP1RudderVolume);
extern void OAVMixerVolumesP2RudderVolumeSet(int8_t *NewP2RudderVolume);
extern void OAVMixerVolumesP2RudderVolumeGet(int8_t *NewP2RudderVolume);
extern void OAVMixerVolumesP1SourceASet(OAVMixerVolumesP1SourceAOptions *NewP1SourceA);
extern void OAVMixerVolumesP1SourceAGet(OAVMixerVolumesP1SourceAOptions *NewP1SourceA);
extern void OAVMixerVolumesP1SourceAVolumeSet(int8_t *NewP1SourceAVolume);
extern void OAVMixerVolumesP1SourceAVolumeGet(int8_t *NewP1SourceAVolume);
extern void OAVMixerVolumesP2SourceASet(OAVMixerVolumesP2SourceAOptions *NewP2SourceA);
extern void OAVMixerVolumesP2SourceAGet(OAVMixerVolumesP2SourceAOptions *NewP2SourceA);
extern void OAVMixerVolumesP2SourceAVolumeSet(int8_t *NewP2SourceAVolume);
extern void OAVMixerVolumesP2SourceAVolumeGet(int8_t *NewP2SourceAVolume);
extern void OAVMixerVolumesP1SourceBSet(OAVMixerVolumesP1SourceBOptions *NewP1SourceB);
extern void OAVMixerVolumesP1SourceBGet(OAVMixerVolumesP1SourceBOptions *NewP1SourceB);
extern void OAVMixerVolumesP1SourceBVolumeSet(int8_t *NewP1SourceBVolume);
extern void OAVMixerVolumesP1SourceBVolumeGet(int8_t *NewP1SourceBVolume);
extern void OAVMixerVolumesP2SourceBSet(OAVMixerVolumesP2SourceBOptions *NewP2SourceB);
extern void OAVMixerVolumesP2SourceBGet(OAVMixerVolumesP2SourceBOptions *NewP2SourceB);
extern void OAVMixerVolumesP2SourceBVolumeSet(int8_t *NewP2SourceBVolume);
extern void OAVMixerVolumesP2SourceBVolumeGet(int8_t *NewP2SourceBVolume);


#endif // OAVMIXERVOLUMES_H

/**
 * @}
 * @}
 */

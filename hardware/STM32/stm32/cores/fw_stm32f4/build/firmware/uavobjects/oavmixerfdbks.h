/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup OAVMixerFdbks OAVMixerFdbks
 * @brief OAV Mixer Feedbacks
 *
 * Autogenerated files and functions for OAVMixerFdbks Object
 *
 * @{
 *
 * @file       oavmixerfdbks.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the OAVMixerFdbks object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: oavmixerfdbks.xml.
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

#ifndef OAVMIXERFDBKS_H
#define OAVMIXERFDBKS_H
#include <stdbool.h>
/* Object constants */
#define OAVMIXERFDBKS_OBJID 0x2C3FFF4A
#define OAVMIXERFDBKS_ISSINGLEINST 1
#define OAVMIXERFDBKS_ISSETTINGS 1
#define OAVMIXERFDBKS_ISPRIORITY 0
#define OAVMIXERFDBKS_NUMBYTES sizeof(OAVMixerFdbksData)

/* Generic interface functions */
int32_t OAVMixerFdbksInitialize();
UAVObjHandle OAVMixerFdbksHandle();
void OAVMixerFdbksSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field P1RollGyro information */

// Enumeration options for field P1RollGyro
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERFDBKS_P1ROLLGYRO_OFF=0,
    OAVMIXERFDBKS_P1ROLLGYRO_ON=1,
    OAVMIXERFDBKS_P1ROLLGYRO_SCALEX5=2
} OAVMixerFdbksP1RollGyroOptions;

// Number of elements for field P1RollGyro
#define OAVMIXERFDBKS_P1ROLLGYRO_NUMELEM 10

/* Field P2RollGyro information */

// Enumeration options for field P2RollGyro
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERFDBKS_P2ROLLGYRO_OFF=0,
    OAVMIXERFDBKS_P2ROLLGYRO_ON=1,
    OAVMIXERFDBKS_P2ROLLGYRO_SCALEX5=2
} OAVMixerFdbksP2RollGyroOptions;

// Number of elements for field P2RollGyro
#define OAVMIXERFDBKS_P2ROLLGYRO_NUMELEM 10

/* Field P1PitchGyro information */

// Enumeration options for field P1PitchGyro
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERFDBKS_P1PITCHGYRO_OFF=0,
    OAVMIXERFDBKS_P1PITCHGYRO_ON=1,
    OAVMIXERFDBKS_P1PITCHGYRO_SCALEX5=2
} OAVMixerFdbksP1PitchGyroOptions;

// Number of elements for field P1PitchGyro
#define OAVMIXERFDBKS_P1PITCHGYRO_NUMELEM 10

/* Field P2PitchGyro information */

// Enumeration options for field P2PitchGyro
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERFDBKS_P2PITCHGYRO_OFF=0,
    OAVMIXERFDBKS_P2PITCHGYRO_ON=1,
    OAVMIXERFDBKS_P2PITCHGYRO_SCALEX5=2
} OAVMixerFdbksP2PitchGyroOptions;

// Number of elements for field P2PitchGyro
#define OAVMIXERFDBKS_P2PITCHGYRO_NUMELEM 10

/* Field P1YawGyro information */

// Enumeration options for field P1YawGyro
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERFDBKS_P1YAWGYRO_OFF=0,
    OAVMIXERFDBKS_P1YAWGYRO_ON=1,
    OAVMIXERFDBKS_P1YAWGYRO_SCALEX5=2
} OAVMixerFdbksP1YawGyroOptions;

// Number of elements for field P1YawGyro
#define OAVMIXERFDBKS_P1YAWGYRO_NUMELEM 10

/* Field P2YawGyro information */

// Enumeration options for field P2YawGyro
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERFDBKS_P2YAWGYRO_OFF=0,
    OAVMIXERFDBKS_P2YAWGYRO_ON=1,
    OAVMIXERFDBKS_P2YAWGYRO_SCALEX5=2
} OAVMixerFdbksP2YawGyroOptions;

// Number of elements for field P2YawGyro
#define OAVMIXERFDBKS_P2YAWGYRO_NUMELEM 10

/* Field P1RollAL information */

// Enumeration options for field P1RollAL
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERFDBKS_P1ROLLAL_OFF=0,
    OAVMIXERFDBKS_P1ROLLAL_ON=1,
    OAVMIXERFDBKS_P1ROLLAL_SCALEX5=2
} OAVMixerFdbksP1RollALOptions;

// Number of elements for field P1RollAL
#define OAVMIXERFDBKS_P1ROLLAL_NUMELEM 10

/* Field P2RollAL information */

// Enumeration options for field P2RollAL
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERFDBKS_P2ROLLAL_OFF=0,
    OAVMIXERFDBKS_P2ROLLAL_ON=1,
    OAVMIXERFDBKS_P2ROLLAL_SCALEX5=2
} OAVMixerFdbksP2RollALOptions;

// Number of elements for field P2RollAL
#define OAVMIXERFDBKS_P2ROLLAL_NUMELEM 10

/* Field P1PitchAL information */

// Enumeration options for field P1PitchAL
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERFDBKS_P1PITCHAL_OFF=0,
    OAVMIXERFDBKS_P1PITCHAL_ON=1,
    OAVMIXERFDBKS_P1PITCHAL_SCALEX5=2
} OAVMixerFdbksP1PitchALOptions;

// Number of elements for field P1PitchAL
#define OAVMIXERFDBKS_P1PITCHAL_NUMELEM 10

/* Field P2PitchAL information */

// Enumeration options for field P2PitchAL
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERFDBKS_P2PITCHAL_OFF=0,
    OAVMIXERFDBKS_P2PITCHAL_ON=1,
    OAVMIXERFDBKS_P2PITCHAL_SCALEX5=2
} OAVMixerFdbksP2PitchALOptions;

// Number of elements for field P2PitchAL
#define OAVMIXERFDBKS_P2PITCHAL_NUMELEM 10

/* Field P1AltDamp information */

// Enumeration options for field P1AltDamp
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERFDBKS_P1ALTDAMP_OFF=0,
    OAVMIXERFDBKS_P1ALTDAMP_ON=1,
    OAVMIXERFDBKS_P1ALTDAMP_SCALEX5=2
} OAVMixerFdbksP1AltDampOptions;

// Number of elements for field P1AltDamp
#define OAVMIXERFDBKS_P1ALTDAMP_NUMELEM 10

/* Field P2AltDamp information */

// Enumeration options for field P2AltDamp
typedef enum __attribute__ ((__packed__)) {
    OAVMIXERFDBKS_P2ALTDAMP_OFF=0,
    OAVMIXERFDBKS_P2ALTDAMP_ON=1,
    OAVMIXERFDBKS_P2ALTDAMP_SCALEX5=2
} OAVMixerFdbksP2AltDampOptions;

// Number of elements for field P2AltDamp
#define OAVMIXERFDBKS_P2ALTDAMP_NUMELEM 10




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        OAVMixerFdbksP1RollGyroOptions P1RollGyro[10];
    OAVMixerFdbksP2RollGyroOptions P2RollGyro[10];
    OAVMixerFdbksP1PitchGyroOptions P1PitchGyro[10];
    OAVMixerFdbksP2PitchGyroOptions P2PitchGyro[10];
    OAVMixerFdbksP1YawGyroOptions P1YawGyro[10];
    OAVMixerFdbksP2YawGyroOptions P2YawGyro[10];
    OAVMixerFdbksP1RollALOptions P1RollAL[10];
    OAVMixerFdbksP2RollALOptions P2RollAL[10];
    OAVMixerFdbksP1PitchALOptions P1PitchAL[10];
    OAVMixerFdbksP2PitchALOptions P2PitchAL[10];
    OAVMixerFdbksP1AltDampOptions P1AltDamp[10];
    OAVMixerFdbksP2AltDampOptions P2AltDamp[10];

} __attribute__((packed)) OAVMixerFdbksDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef OAVMixerFdbksDataPacked __attribute__((aligned(4))) OAVMixerFdbksData;

/* Typesafe Object access functions */
static inline int32_t OAVMixerFdbksGet(OAVMixerFdbksData * dataOut) {
    return UAVObjGetData(OAVMixerFdbksHandle(), dataOut);
}
static inline int32_t OAVMixerFdbksSet(const OAVMixerFdbksData * dataIn) {
    return UAVObjSetData(OAVMixerFdbksHandle(), dataIn);
}
static inline int32_t OAVMixerFdbksInstGet(uint16_t instId, OAVMixerFdbksData * dataOut) {
    return UAVObjGetInstanceData(OAVMixerFdbksHandle(), instId, dataOut);
}
static inline int32_t OAVMixerFdbksInstSet(uint16_t instId, const OAVMixerFdbksData * dataIn) {
    return UAVObjSetInstanceData(OAVMixerFdbksHandle(), instId, dataIn);
}
static inline int32_t OAVMixerFdbksConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(OAVMixerFdbksHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t OAVMixerFdbksConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(OAVMixerFdbksHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t OAVMixerFdbksConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(OAVMixerFdbksHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t OAVMixerFdbksCreateInstance() {
    return UAVObjCreateInstance(OAVMixerFdbksHandle(), &OAVMixerFdbksSetDefaults);
}
static inline void OAVMixerFdbksRequestUpdate() {
    UAVObjRequestUpdate(OAVMixerFdbksHandle());
}
static inline void OAVMixerFdbksRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(OAVMixerFdbksHandle(), instId);
}
static inline void OAVMixerFdbksUpdated() {
    UAVObjUpdated(OAVMixerFdbksHandle());
}
static inline void OAVMixerFdbksInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(OAVMixerFdbksHandle(), instId);
}
static inline void OAVMixerFdbksLogging() {
    UAVObjLogging(OAVMixerFdbksHandle());
}
static inline void OAVMixerFdbksInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(OAVMixerFdbksHandle(), instId);
}
static inline int32_t OAVMixerFdbksGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(OAVMixerFdbksHandle(), dataOut);
}
static inline int32_t OAVMixerFdbksSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(OAVMixerFdbksHandle(), dataIn);
}
static inline int8_t OAVMixerFdbksReadOnly() {
    return UAVObjReadOnly(OAVMixerFdbksHandle());
}

/* Set/Get functions */
extern void OAVMixerFdbksP1RollGyroSet(OAVMixerFdbksP1RollGyroOptions *NewP1RollGyro);
extern void OAVMixerFdbksP1RollGyroGet(OAVMixerFdbksP1RollGyroOptions *NewP1RollGyro);
extern void OAVMixerFdbksP2RollGyroSet(OAVMixerFdbksP2RollGyroOptions *NewP2RollGyro);
extern void OAVMixerFdbksP2RollGyroGet(OAVMixerFdbksP2RollGyroOptions *NewP2RollGyro);
extern void OAVMixerFdbksP1PitchGyroSet(OAVMixerFdbksP1PitchGyroOptions *NewP1PitchGyro);
extern void OAVMixerFdbksP1PitchGyroGet(OAVMixerFdbksP1PitchGyroOptions *NewP1PitchGyro);
extern void OAVMixerFdbksP2PitchGyroSet(OAVMixerFdbksP2PitchGyroOptions *NewP2PitchGyro);
extern void OAVMixerFdbksP2PitchGyroGet(OAVMixerFdbksP2PitchGyroOptions *NewP2PitchGyro);
extern void OAVMixerFdbksP1YawGyroSet(OAVMixerFdbksP1YawGyroOptions *NewP1YawGyro);
extern void OAVMixerFdbksP1YawGyroGet(OAVMixerFdbksP1YawGyroOptions *NewP1YawGyro);
extern void OAVMixerFdbksP2YawGyroSet(OAVMixerFdbksP2YawGyroOptions *NewP2YawGyro);
extern void OAVMixerFdbksP2YawGyroGet(OAVMixerFdbksP2YawGyroOptions *NewP2YawGyro);
extern void OAVMixerFdbksP1RollALSet(OAVMixerFdbksP1RollALOptions *NewP1RollAL);
extern void OAVMixerFdbksP1RollALGet(OAVMixerFdbksP1RollALOptions *NewP1RollAL);
extern void OAVMixerFdbksP2RollALSet(OAVMixerFdbksP2RollALOptions *NewP2RollAL);
extern void OAVMixerFdbksP2RollALGet(OAVMixerFdbksP2RollALOptions *NewP2RollAL);
extern void OAVMixerFdbksP1PitchALSet(OAVMixerFdbksP1PitchALOptions *NewP1PitchAL);
extern void OAVMixerFdbksP1PitchALGet(OAVMixerFdbksP1PitchALOptions *NewP1PitchAL);
extern void OAVMixerFdbksP2PitchALSet(OAVMixerFdbksP2PitchALOptions *NewP2PitchAL);
extern void OAVMixerFdbksP2PitchALGet(OAVMixerFdbksP2PitchALOptions *NewP2PitchAL);
extern void OAVMixerFdbksP1AltDampSet(OAVMixerFdbksP1AltDampOptions *NewP1AltDamp);
extern void OAVMixerFdbksP1AltDampGet(OAVMixerFdbksP1AltDampOptions *NewP1AltDamp);
extern void OAVMixerFdbksP2AltDampSet(OAVMixerFdbksP2AltDampOptions *NewP2AltDamp);
extern void OAVMixerFdbksP2AltDampGet(OAVMixerFdbksP2AltDampOptions *NewP2AltDamp);


#endif // OAVMIXERFDBKS_H

/**
 * @}
 * @}
 */

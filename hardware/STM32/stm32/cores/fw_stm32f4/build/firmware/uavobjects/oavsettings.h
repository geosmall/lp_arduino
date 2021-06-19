/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup OAVSettings OAVSettings
 * @brief OAV Curve Settings
 *
 * Autogenerated files and functions for OAVSettings Object
 *
 * @{
 *
 * @file       oavsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the OAVSettings object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: oavsettings.xml.
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

#ifndef OAVSETTINGS_H
#define OAVSETTINGS_H
#include <stdbool.h>
/* Object constants */
#define OAVSETTINGS_OBJID 0xBD20A370
#define OAVSETTINGS_ISSINGLEINST 1
#define OAVSETTINGS_ISSETTINGS 1
#define OAVSETTINGS_ISPRIORITY 0
#define OAVSETTINGS_NUMBYTES sizeof(OAVSettingsData)

/* Generic interface functions */
int32_t OAVSettingsInitialize();
UAVObjHandle OAVSettingsHandle();
void OAVSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field P1Reference information */

// Enumeration options for field P1Reference
typedef enum __attribute__ ((__packed__)) {
    OAVSETTINGS_P1REFERENCE_NO_ORIENT=0,
    OAVSETTINGS_P1REFERENCE_EARTH=1,
    OAVSETTINGS_P1REFERENCE_MODEL=2
} OAVSettingsP1ReferenceOptions;

/* Field CFFactor information */

/* Field AccelLPF information */

// Enumeration options for field AccelLPF
typedef enum __attribute__ ((__packed__)) {
    OAVSETTINGS_ACCELLPF_HZ5=0,
    OAVSETTINGS_ACCELLPF_HZ10=1,
    OAVSETTINGS_ACCELLPF_HZ21=2,
    OAVSETTINGS_ACCELLPF_HZ44=3,
    OAVSETTINGS_ACCELLPF_HZ94=4,
    OAVSETTINGS_ACCELLPF_HZ184=5,
    OAVSETTINGS_ACCELLPF_HZ260=6,
    OAVSETTINGS_ACCELLPF_NOFILTER=7
} OAVSettingsAccelLPFOptions;

/* Field GyroLPF information */

// Enumeration options for field GyroLPF
typedef enum __attribute__ ((__packed__)) {
    OAVSETTINGS_GYROLPF_HZ5=0,
    OAVSETTINGS_GYROLPF_HZ10=1,
    OAVSETTINGS_GYROLPF_HZ21=2,
    OAVSETTINGS_GYROLPF_HZ44=3,
    OAVSETTINGS_GYROLPF_HZ94=4,
    OAVSETTINGS_GYROLPF_HZ184=5,
    OAVSETTINGS_GYROLPF_HZ260=6,
    OAVSETTINGS_GYROLPF_NOFILTER=7
} OAVSettingsGyroLPFOptions;

/* Field ProfileChannel information */

// Enumeration options for field ProfileChannel
typedef enum __attribute__ ((__packed__)) {
    OAVSETTINGS_PROFILECHANNEL_THROTTLE=0,
    OAVSETTINGS_PROFILECHANNEL_AILERON=1,
    OAVSETTINGS_PROFILECHANNEL_ELEVATOR=2,
    OAVSETTINGS_PROFILECHANNEL_RUDDER=3,
    OAVSETTINGS_PROFILECHANNEL_GEAR=4,
    OAVSETTINGS_PROFILECHANNEL_AUX1=5,
    OAVSETTINGS_PROFILECHANNEL_AUX2=6,
    OAVSETTINGS_PROFILECHANNEL_AUX3=7
} OAVSettingsProfileChannelOptions;

/* Field OutboundTransition information */

/* Field InboundTransition information */

/* Field TransitionLow information */

/* Field TransitionMid information */

/* Field TransitionHigh information */

/* Field AccelVertFilter information */

/* Field EnableOAV information */

// Enumeration options for field EnableOAV
typedef enum __attribute__ ((__packed__)) {
    OAVSETTINGS_ENABLEOAV_DISABLE=0,
    OAVSETTINGS_ENABLEOAV_ENABLE=1
} OAVSettingsEnableOAVOptions;




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        OAVSettingsP1ReferenceOptions P1Reference;
    int8_t CFFactor;
    OAVSettingsAccelLPFOptions AccelLPF;
    OAVSettingsGyroLPFOptions GyroLPF;
    OAVSettingsProfileChannelOptions ProfileChannel;
    int8_t OutboundTransition;
    int8_t InboundTransition;
    int8_t TransitionLow;
    int8_t TransitionMid;
    int8_t TransitionHigh;
    int8_t AccelVertFilter;
    OAVSettingsEnableOAVOptions EnableOAV;

} __attribute__((packed)) OAVSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef OAVSettingsDataPacked __attribute__((aligned(4))) OAVSettingsData;

/* Typesafe Object access functions */
static inline int32_t OAVSettingsGet(OAVSettingsData * dataOut) {
    return UAVObjGetData(OAVSettingsHandle(), dataOut);
}
static inline int32_t OAVSettingsSet(const OAVSettingsData * dataIn) {
    return UAVObjSetData(OAVSettingsHandle(), dataIn);
}
static inline int32_t OAVSettingsInstGet(uint16_t instId, OAVSettingsData * dataOut) {
    return UAVObjGetInstanceData(OAVSettingsHandle(), instId, dataOut);
}
static inline int32_t OAVSettingsInstSet(uint16_t instId, const OAVSettingsData * dataIn) {
    return UAVObjSetInstanceData(OAVSettingsHandle(), instId, dataIn);
}
static inline int32_t OAVSettingsConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(OAVSettingsHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t OAVSettingsConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(OAVSettingsHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t OAVSettingsConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(OAVSettingsHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t OAVSettingsCreateInstance() {
    return UAVObjCreateInstance(OAVSettingsHandle(), &OAVSettingsSetDefaults);
}
static inline void OAVSettingsRequestUpdate() {
    UAVObjRequestUpdate(OAVSettingsHandle());
}
static inline void OAVSettingsRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(OAVSettingsHandle(), instId);
}
static inline void OAVSettingsUpdated() {
    UAVObjUpdated(OAVSettingsHandle());
}
static inline void OAVSettingsInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(OAVSettingsHandle(), instId);
}
static inline void OAVSettingsLogging() {
    UAVObjLogging(OAVSettingsHandle());
}
static inline void OAVSettingsInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(OAVSettingsHandle(), instId);
}
static inline int32_t OAVSettingsGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(OAVSettingsHandle(), dataOut);
}
static inline int32_t OAVSettingsSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(OAVSettingsHandle(), dataIn);
}
static inline int8_t OAVSettingsReadOnly() {
    return UAVObjReadOnly(OAVSettingsHandle());
}

/* Set/Get functions */
extern void OAVSettingsP1ReferenceSet(OAVSettingsP1ReferenceOptions *NewP1Reference);
extern void OAVSettingsP1ReferenceGet(OAVSettingsP1ReferenceOptions *NewP1Reference);
extern void OAVSettingsCFFactorSet(int8_t *NewCFFactor);
extern void OAVSettingsCFFactorGet(int8_t *NewCFFactor);
extern void OAVSettingsAccelLPFSet(OAVSettingsAccelLPFOptions *NewAccelLPF);
extern void OAVSettingsAccelLPFGet(OAVSettingsAccelLPFOptions *NewAccelLPF);
extern void OAVSettingsGyroLPFSet(OAVSettingsGyroLPFOptions *NewGyroLPF);
extern void OAVSettingsGyroLPFGet(OAVSettingsGyroLPFOptions *NewGyroLPF);
extern void OAVSettingsProfileChannelSet(OAVSettingsProfileChannelOptions *NewProfileChannel);
extern void OAVSettingsProfileChannelGet(OAVSettingsProfileChannelOptions *NewProfileChannel);
extern void OAVSettingsOutboundTransitionSet(int8_t *NewOutboundTransition);
extern void OAVSettingsOutboundTransitionGet(int8_t *NewOutboundTransition);
extern void OAVSettingsInboundTransitionSet(int8_t *NewInboundTransition);
extern void OAVSettingsInboundTransitionGet(int8_t *NewInboundTransition);
extern void OAVSettingsTransitionLowSet(int8_t *NewTransitionLow);
extern void OAVSettingsTransitionLowGet(int8_t *NewTransitionLow);
extern void OAVSettingsTransitionMidSet(int8_t *NewTransitionMid);
extern void OAVSettingsTransitionMidGet(int8_t *NewTransitionMid);
extern void OAVSettingsTransitionHighSet(int8_t *NewTransitionHigh);
extern void OAVSettingsTransitionHighGet(int8_t *NewTransitionHigh);
extern void OAVSettingsAccelVertFilterSet(int8_t *NewAccelVertFilter);
extern void OAVSettingsAccelVertFilterGet(int8_t *NewAccelVertFilter);
extern void OAVSettingsEnableOAVSet(OAVSettingsEnableOAVOptions *NewEnableOAV);
extern void OAVSettingsEnableOAVGet(OAVSettingsEnableOAVOptions *NewEnableOAV);


#endif // OAVSETTINGS_H

/**
 * @}
 * @}
 */

/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup StatusVtolAutoTakeoff StatusVtolAutoTakeoff
 * @brief Status of a AutoTakeoff autopilot
 *
 * Autogenerated files and functions for StatusVtolAutoTakeoff Object
 *
 * @{
 *
 * @file       statusvtolautotakeoff.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the StatusVtolAutoTakeoff object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: statusvtolautotakeoff.xml.
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

#ifndef STATUSVTOLAUTOTAKEOFF_H
#define STATUSVTOLAUTOTAKEOFF_H
#include <stdbool.h>
/* Object constants */
#define STATUSVTOLAUTOTAKEOFF_OBJID 0x9FD49FEC
#define STATUSVTOLAUTOTAKEOFF_ISSINGLEINST 1
#define STATUSVTOLAUTOTAKEOFF_ISSETTINGS 0
#define STATUSVTOLAUTOTAKEOFF_ISPRIORITY 0
#define STATUSVTOLAUTOTAKEOFF_NUMBYTES sizeof(StatusVtolAutoTakeoffData)

/* Generic interface functions */
int32_t StatusVtolAutoTakeoffInitialize();
UAVObjHandle StatusVtolAutoTakeoffHandle();
void StatusVtolAutoTakeoffSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field AltitudeAtState information */

// Number of elements for field AltitudeAtState
#define STATUSVTOLAUTOTAKEOFF_ALTITUDEATSTATE_NUMELEM 10

/* Field State information */

// Enumeration options for field State
typedef enum __attribute__ ((__packed__)) {
    STATUSVTOLAUTOTAKEOFF_STATE_INACTIVE=0,
    STATUSVTOLAUTOTAKEOFF_STATE_CHECKSTATE=1,
    STATUSVTOLAUTOTAKEOFF_STATE_SLOWSTART=2,
    STATUSVTOLAUTOTAKEOFF_STATE_THRUSTUP=3,
    STATUSVTOLAUTOTAKEOFF_STATE_TAKEOFF=4,
    STATUSVTOLAUTOTAKEOFF_STATE_HOLD=5,
    STATUSVTOLAUTOTAKEOFF_STATE_THRUSTDOWN=6,
    STATUSVTOLAUTOTAKEOFF_STATE_THRUSTOFF=7,
    STATUSVTOLAUTOTAKEOFF_STATE_DISARMED=8
} StatusVtolAutoTakeoffStateOptions;

/* Field StateExitReason information */

// Enumeration options for field StateExitReason
typedef enum __attribute__ ((__packed__)) {
    STATUSVTOLAUTOTAKEOFF_STATEEXITREASON_NONE=0,
    STATUSVTOLAUTOTAKEOFF_STATEEXITREASON_ARRIVEDATALT=1,
    STATUSVTOLAUTOTAKEOFF_STATEEXITREASON_ZEROTHRUST=2,
    STATUSVTOLAUTOTAKEOFF_STATEEXITREASON_POSITIONERROR=3,
    STATUSVTOLAUTOTAKEOFF_STATEEXITREASON_TIMEOUT=4
} StatusVtolAutoTakeoffStateExitReasonOptions;

// Number of elements for field StateExitReason
#define STATUSVTOLAUTOTAKEOFF_STATEEXITREASON_NUMELEM 10

/* Field AltitudeState information */

// Enumeration options for field AltitudeState
typedef enum __attribute__ ((__packed__)) {
    STATUSVTOLAUTOTAKEOFF_ALTITUDESTATE_HIGH=0,
    STATUSVTOLAUTOTAKEOFF_ALTITUDESTATE_LOW=1
} StatusVtolAutoTakeoffAltitudeStateOptions;

/* Field ControlState information */

// Enumeration options for field ControlState
typedef enum __attribute__ ((__packed__)) {
    STATUSVTOLAUTOTAKEOFF_CONTROLSTATE_WAITFORARMED=0,
    STATUSVTOLAUTOTAKEOFF_CONTROLSTATE_WAITFORMIDTHROTTLE=1,
    STATUSVTOLAUTOTAKEOFF_CONTROLSTATE_REQUIREUNARMEDFIRST=2,
    STATUSVTOLAUTOTAKEOFF_CONTROLSTATE_INITIATE=3,
    STATUSVTOLAUTOTAKEOFF_CONTROLSTATE_POSITIONHOLD=4,
    STATUSVTOLAUTOTAKEOFF_CONTROLSTATE_ABORT=5
} StatusVtolAutoTakeoffControlStateOptions;




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        float AltitudeAtState[10];
    StatusVtolAutoTakeoffStateOptions State;
    StatusVtolAutoTakeoffStateExitReasonOptions StateExitReason[10];
    StatusVtolAutoTakeoffAltitudeStateOptions AltitudeState;
    StatusVtolAutoTakeoffControlStateOptions ControlState;

} __attribute__((packed)) StatusVtolAutoTakeoffDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef StatusVtolAutoTakeoffDataPacked __attribute__((aligned(4))) StatusVtolAutoTakeoffData;

/* Typesafe Object access functions */
static inline int32_t StatusVtolAutoTakeoffGet(StatusVtolAutoTakeoffData * dataOut) {
    return UAVObjGetData(StatusVtolAutoTakeoffHandle(), dataOut);
}
static inline int32_t StatusVtolAutoTakeoffSet(const StatusVtolAutoTakeoffData * dataIn) {
    return UAVObjSetData(StatusVtolAutoTakeoffHandle(), dataIn);
}
static inline int32_t StatusVtolAutoTakeoffInstGet(uint16_t instId, StatusVtolAutoTakeoffData * dataOut) {
    return UAVObjGetInstanceData(StatusVtolAutoTakeoffHandle(), instId, dataOut);
}
static inline int32_t StatusVtolAutoTakeoffInstSet(uint16_t instId, const StatusVtolAutoTakeoffData * dataIn) {
    return UAVObjSetInstanceData(StatusVtolAutoTakeoffHandle(), instId, dataIn);
}
static inline int32_t StatusVtolAutoTakeoffConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(StatusVtolAutoTakeoffHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t StatusVtolAutoTakeoffConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(StatusVtolAutoTakeoffHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t StatusVtolAutoTakeoffConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(StatusVtolAutoTakeoffHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t StatusVtolAutoTakeoffCreateInstance() {
    return UAVObjCreateInstance(StatusVtolAutoTakeoffHandle(), &StatusVtolAutoTakeoffSetDefaults);
}
static inline void StatusVtolAutoTakeoffRequestUpdate() {
    UAVObjRequestUpdate(StatusVtolAutoTakeoffHandle());
}
static inline void StatusVtolAutoTakeoffRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(StatusVtolAutoTakeoffHandle(), instId);
}
static inline void StatusVtolAutoTakeoffUpdated() {
    UAVObjUpdated(StatusVtolAutoTakeoffHandle());
}
static inline void StatusVtolAutoTakeoffInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(StatusVtolAutoTakeoffHandle(), instId);
}
static inline void StatusVtolAutoTakeoffLogging() {
    UAVObjLogging(StatusVtolAutoTakeoffHandle());
}
static inline void StatusVtolAutoTakeoffInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(StatusVtolAutoTakeoffHandle(), instId);
}
static inline int32_t StatusVtolAutoTakeoffGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(StatusVtolAutoTakeoffHandle(), dataOut);
}
static inline int32_t StatusVtolAutoTakeoffSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(StatusVtolAutoTakeoffHandle(), dataIn);
}
static inline int8_t StatusVtolAutoTakeoffReadOnly() {
    return UAVObjReadOnly(StatusVtolAutoTakeoffHandle());
}

/* Set/Get functions */
extern void StatusVtolAutoTakeoffAltitudeAtStateSet(float *NewAltitudeAtState);
extern void StatusVtolAutoTakeoffAltitudeAtStateGet(float *NewAltitudeAtState);
extern void StatusVtolAutoTakeoffStateSet(StatusVtolAutoTakeoffStateOptions *NewState);
extern void StatusVtolAutoTakeoffStateGet(StatusVtolAutoTakeoffStateOptions *NewState);
extern void StatusVtolAutoTakeoffStateExitReasonSet(StatusVtolAutoTakeoffStateExitReasonOptions *NewStateExitReason);
extern void StatusVtolAutoTakeoffStateExitReasonGet(StatusVtolAutoTakeoffStateExitReasonOptions *NewStateExitReason);
extern void StatusVtolAutoTakeoffAltitudeStateSet(StatusVtolAutoTakeoffAltitudeStateOptions *NewAltitudeState);
extern void StatusVtolAutoTakeoffAltitudeStateGet(StatusVtolAutoTakeoffAltitudeStateOptions *NewAltitudeState);
extern void StatusVtolAutoTakeoffControlStateSet(StatusVtolAutoTakeoffControlStateOptions *NewControlState);
extern void StatusVtolAutoTakeoffControlStateGet(StatusVtolAutoTakeoffControlStateOptions *NewControlState);


#endif // STATUSVTOLAUTOTAKEOFF_H

/**
 * @}
 * @}
 */

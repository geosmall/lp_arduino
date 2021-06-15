/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup Waypoint Waypoint
 * @brief A waypoint the aircraft can try and hit.  Used by the @ref PathPlanner module
 *
 * Autogenerated files and functions for Waypoint Object
 *
 * @{
 *
 * @file       waypoint.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the Waypoint object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: waypoint.xml.
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

#ifndef WAYPOINT_H
#define WAYPOINT_H
#include <stdbool.h>
/* Object constants */
#define WAYPOINT_OBJID 0xD23852DC
#define WAYPOINT_ISSINGLEINST 0
#define WAYPOINT_ISSETTINGS 0
#define WAYPOINT_ISPRIORITY 0
#define WAYPOINT_NUMBYTES sizeof(WaypointData)

/* Generic interface functions */
int32_t WaypointInitialize();
UAVObjHandle WaypointHandle();
void WaypointSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field Position information */

// Array element names for field Position
typedef enum {
    WAYPOINT_POSITION_NORTH=0,
    WAYPOINT_POSITION_EAST=1,
    WAYPOINT_POSITION_DOWN=2
} WaypointPositionElem;

// Number of elements for field Position
#define WAYPOINT_POSITION_NUMELEM 3

/* Field Velocity information */

/* Field Action information */



typedef struct __attribute__ ((__packed__)) {
    float North;
    float East;
    float Down;
}  WaypointPositionData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  WaypointPositionDataArray ;
#define WaypointPositionToArray( var ) UAVObjectFieldToArray( WaypointPositionData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        WaypointPositionData Position;
    float Velocity;
    uint8_t Action;

} __attribute__((packed)) WaypointDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef WaypointDataPacked __attribute__((aligned(4))) WaypointData;

/* Typesafe Object access functions */
static inline int32_t WaypointGet(WaypointData * dataOut) {
    return UAVObjGetData(WaypointHandle(), dataOut);
}
static inline int32_t WaypointSet(const WaypointData * dataIn) {
    return UAVObjSetData(WaypointHandle(), dataIn);
}
static inline int32_t WaypointInstGet(uint16_t instId, WaypointData * dataOut) {
    return UAVObjGetInstanceData(WaypointHandle(), instId, dataOut);
}
static inline int32_t WaypointInstSet(uint16_t instId, const WaypointData * dataIn) {
    return UAVObjSetInstanceData(WaypointHandle(), instId, dataIn);
}
static inline int32_t WaypointConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(WaypointHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t WaypointConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(WaypointHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t WaypointConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(WaypointHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t WaypointCreateInstance() {
    return UAVObjCreateInstance(WaypointHandle(), &WaypointSetDefaults);
}
static inline void WaypointRequestUpdate() {
    UAVObjRequestUpdate(WaypointHandle());
}
static inline void WaypointRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(WaypointHandle(), instId);
}
static inline void WaypointUpdated() {
    UAVObjUpdated(WaypointHandle());
}
static inline void WaypointInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(WaypointHandle(), instId);
}
static inline void WaypointLogging() {
    UAVObjLogging(WaypointHandle());
}
static inline void WaypointInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(WaypointHandle(), instId);
}
static inline int32_t WaypointGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(WaypointHandle(), dataOut);
}
static inline int32_t WaypointSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(WaypointHandle(), dataIn);
}
static inline int8_t WaypointReadOnly() {
    return UAVObjReadOnly(WaypointHandle());
}

/* Set/Get functions */
extern void WaypointPositionSet(WaypointPositionData *NewPosition);
extern void WaypointPositionGet(WaypointPositionData *NewPosition);
extern void WaypointPositionArraySet(float *NewPosition);
extern void WaypointPositionArrayGet(float *NewPosition);
extern void WaypointVelocitySet(float *NewVelocity);
extern void WaypointVelocityGet(float *NewVelocity);
extern void WaypointActionSet(uint8_t *NewAction);
extern void WaypointActionGet(uint8_t *NewAction);


#endif // WAYPOINT_H

/**
 * @}
 * @}
 */

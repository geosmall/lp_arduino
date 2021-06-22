/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup DebugLogStatus DebugLogStatus
 * @brief Log Status Object, contains log partition status information
 *
 * Autogenerated files and functions for DebugLogStatus Object
 *
 * @{
 *
 * @file       debuglogstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the DebugLogStatus object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: debuglogstatus.xml.
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

#ifndef DEBUGLOGSTATUS_H
#define DEBUGLOGSTATUS_H
#include <stdbool.h>
/* Object constants */
#define DEBUGLOGSTATUS_OBJID 0x85A4DAD6
#define DEBUGLOGSTATUS_ISSINGLEINST 1
#define DEBUGLOGSTATUS_ISSETTINGS 0
#define DEBUGLOGSTATUS_ISPRIORITY 0
#define DEBUGLOGSTATUS_NUMBYTES sizeof(DebugLogStatusData)

/* Generic interface functions */
int32_t DebugLogStatusInitialize();
UAVObjHandle DebugLogStatusHandle();
void DebugLogStatusSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field Flight information */

/* Field Entry information */

/* Field UsedSlots information */

/* Field FreeSlots information */




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        uint16_t Flight;
    uint16_t Entry;
    uint16_t UsedSlots;
    uint16_t FreeSlots;

} __attribute__((packed)) DebugLogStatusDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef DebugLogStatusDataPacked __attribute__((aligned(4))) DebugLogStatusData;

/* Typesafe Object access functions */
static inline int32_t DebugLogStatusGet(DebugLogStatusData * dataOut) {
    return UAVObjGetData(DebugLogStatusHandle(), dataOut);
}
static inline int32_t DebugLogStatusSet(const DebugLogStatusData * dataIn) {
    return UAVObjSetData(DebugLogStatusHandle(), dataIn);
}
static inline int32_t DebugLogStatusInstGet(uint16_t instId, DebugLogStatusData * dataOut) {
    return UAVObjGetInstanceData(DebugLogStatusHandle(), instId, dataOut);
}
static inline int32_t DebugLogStatusInstSet(uint16_t instId, const DebugLogStatusData * dataIn) {
    return UAVObjSetInstanceData(DebugLogStatusHandle(), instId, dataIn);
}
static inline int32_t DebugLogStatusConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(DebugLogStatusHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t DebugLogStatusConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(DebugLogStatusHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t DebugLogStatusConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(DebugLogStatusHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t DebugLogStatusCreateInstance() {
    return UAVObjCreateInstance(DebugLogStatusHandle(), &DebugLogStatusSetDefaults);
}
static inline void DebugLogStatusRequestUpdate() {
    UAVObjRequestUpdate(DebugLogStatusHandle());
}
static inline void DebugLogStatusRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(DebugLogStatusHandle(), instId);
}
static inline void DebugLogStatusUpdated() {
    UAVObjUpdated(DebugLogStatusHandle());
}
static inline void DebugLogStatusInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(DebugLogStatusHandle(), instId);
}
static inline void DebugLogStatusLogging() {
    UAVObjLogging(DebugLogStatusHandle());
}
static inline void DebugLogStatusInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(DebugLogStatusHandle(), instId);
}
static inline int32_t DebugLogStatusGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(DebugLogStatusHandle(), dataOut);
}
static inline int32_t DebugLogStatusSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(DebugLogStatusHandle(), dataIn);
}
static inline int8_t DebugLogStatusReadOnly() {
    return UAVObjReadOnly(DebugLogStatusHandle());
}

/* Set/Get functions */
extern void DebugLogStatusFlightSet(uint16_t *NewFlight);
extern void DebugLogStatusFlightGet(uint16_t *NewFlight);
extern void DebugLogStatusEntrySet(uint16_t *NewEntry);
extern void DebugLogStatusEntryGet(uint16_t *NewEntry);
extern void DebugLogStatusUsedSlotsSet(uint16_t *NewUsedSlots);
extern void DebugLogStatusUsedSlotsGet(uint16_t *NewUsedSlots);
extern void DebugLogStatusFreeSlotsSet(uint16_t *NewFreeSlots);
extern void DebugLogStatusFreeSlotsGet(uint16_t *NewFreeSlots);


#endif // DEBUGLOGSTATUS_H

/**
 * @}
 * @}
 */

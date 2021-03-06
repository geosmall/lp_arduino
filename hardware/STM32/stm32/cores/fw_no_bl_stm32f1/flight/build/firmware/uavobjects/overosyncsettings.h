/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup OveroSyncSettings OveroSyncSettings
 * @brief Settings to control the behavior of the overo sync module
 *
 * Autogenerated files and functions for OveroSyncSettings Object
 *
 * @{
 *
 * @file       overosyncsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the OveroSyncSettings object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: overosyncsettings.xml.
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

#ifndef OVEROSYNCSETTINGS_H
#define OVEROSYNCSETTINGS_H
#include <stdbool.h>
/* Object constants */
#define OVEROSYNCSETTINGS_OBJID 0xA1ABC278
#define OVEROSYNCSETTINGS_ISSINGLEINST 1
#define OVEROSYNCSETTINGS_ISSETTINGS 1
#define OVEROSYNCSETTINGS_ISPRIORITY 0
#define OVEROSYNCSETTINGS_NUMBYTES sizeof(OveroSyncSettingsData)

/* Generic interface functions */
int32_t OveroSyncSettingsInitialize();
UAVObjHandle OveroSyncSettingsHandle();
void OveroSyncSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field LogOn information */

// Enumeration options for field LogOn
typedef enum __attribute__ ((__packed__)) {
    OVEROSYNCSETTINGS_LOGON_NEVER=0,
    OVEROSYNCSETTINGS_LOGON_ALWAYS=1,
    OVEROSYNCSETTINGS_LOGON_ARMED=2
} OveroSyncSettingsLogOnOptions;




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        OveroSyncSettingsLogOnOptions LogOn;

} __attribute__((packed)) OveroSyncSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef OveroSyncSettingsDataPacked __attribute__((aligned(4))) OveroSyncSettingsData;

/* Typesafe Object access functions */
static inline int32_t OveroSyncSettingsGet(OveroSyncSettingsData * dataOut) {
    return UAVObjGetData(OveroSyncSettingsHandle(), dataOut);
}
static inline int32_t OveroSyncSettingsSet(const OveroSyncSettingsData * dataIn) {
    return UAVObjSetData(OveroSyncSettingsHandle(), dataIn);
}
static inline int32_t OveroSyncSettingsInstGet(uint16_t instId, OveroSyncSettingsData * dataOut) {
    return UAVObjGetInstanceData(OveroSyncSettingsHandle(), instId, dataOut);
}
static inline int32_t OveroSyncSettingsInstSet(uint16_t instId, const OveroSyncSettingsData * dataIn) {
    return UAVObjSetInstanceData(OveroSyncSettingsHandle(), instId, dataIn);
}
static inline int32_t OveroSyncSettingsConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(OveroSyncSettingsHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t OveroSyncSettingsConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(OveroSyncSettingsHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t OveroSyncSettingsConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(OveroSyncSettingsHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t OveroSyncSettingsCreateInstance() {
    return UAVObjCreateInstance(OveroSyncSettingsHandle(), &OveroSyncSettingsSetDefaults);
}
static inline void OveroSyncSettingsRequestUpdate() {
    UAVObjRequestUpdate(OveroSyncSettingsHandle());
}
static inline void OveroSyncSettingsRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(OveroSyncSettingsHandle(), instId);
}
static inline void OveroSyncSettingsUpdated() {
    UAVObjUpdated(OveroSyncSettingsHandle());
}
static inline void OveroSyncSettingsInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(OveroSyncSettingsHandle(), instId);
}
static inline void OveroSyncSettingsLogging() {
    UAVObjLogging(OveroSyncSettingsHandle());
}
static inline void OveroSyncSettingsInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(OveroSyncSettingsHandle(), instId);
}
static inline int32_t OveroSyncSettingsGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(OveroSyncSettingsHandle(), dataOut);
}
static inline int32_t OveroSyncSettingsSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(OveroSyncSettingsHandle(), dataIn);
}
static inline int8_t OveroSyncSettingsReadOnly() {
    return UAVObjReadOnly(OveroSyncSettingsHandle());
}

/* Set/Get functions */
extern void OveroSyncSettingsLogOnSet(OveroSyncSettingsLogOnOptions *NewLogOn);
extern void OveroSyncSettingsLogOnGet(OveroSyncSettingsLogOnOptions *NewLogOn);


#endif // OVEROSYNCSETTINGS_H

/**
 * @}
 * @}
 */

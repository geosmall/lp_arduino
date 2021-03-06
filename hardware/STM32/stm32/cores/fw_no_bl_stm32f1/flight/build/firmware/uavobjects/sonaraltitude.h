/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup SonarAltitude SonarAltitude
 * @brief The raw data from the ultrasound sonar sensor with altitude estimate.
 *
 * Autogenerated files and functions for SonarAltitude Object
 *
 * @{
 *
 * @file       sonaraltitude.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the SonarAltitude object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: sonaraltitude.xml.
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

#ifndef SONARALTITUDE_H
#define SONARALTITUDE_H
#include <stdbool.h>
/* Object constants */
#define SONARALTITUDE_OBJID 0x6C5A0CBC
#define SONARALTITUDE_ISSINGLEINST 1
#define SONARALTITUDE_ISSETTINGS 0
#define SONARALTITUDE_ISPRIORITY 0
#define SONARALTITUDE_NUMBYTES sizeof(SonarAltitudeData)

/* Generic interface functions */
int32_t SonarAltitudeInitialize();
UAVObjHandle SonarAltitudeHandle();
void SonarAltitudeSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field Altitude information */




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        float Altitude;

} __attribute__((packed)) SonarAltitudeDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef SonarAltitudeDataPacked __attribute__((aligned(4))) SonarAltitudeData;

/* Typesafe Object access functions */
static inline int32_t SonarAltitudeGet(SonarAltitudeData * dataOut) {
    return UAVObjGetData(SonarAltitudeHandle(), dataOut);
}
static inline int32_t SonarAltitudeSet(const SonarAltitudeData * dataIn) {
    return UAVObjSetData(SonarAltitudeHandle(), dataIn);
}
static inline int32_t SonarAltitudeInstGet(uint16_t instId, SonarAltitudeData * dataOut) {
    return UAVObjGetInstanceData(SonarAltitudeHandle(), instId, dataOut);
}
static inline int32_t SonarAltitudeInstSet(uint16_t instId, const SonarAltitudeData * dataIn) {
    return UAVObjSetInstanceData(SonarAltitudeHandle(), instId, dataIn);
}
static inline int32_t SonarAltitudeConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(SonarAltitudeHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t SonarAltitudeConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(SonarAltitudeHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t SonarAltitudeConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(SonarAltitudeHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t SonarAltitudeCreateInstance() {
    return UAVObjCreateInstance(SonarAltitudeHandle(), &SonarAltitudeSetDefaults);
}
static inline void SonarAltitudeRequestUpdate() {
    UAVObjRequestUpdate(SonarAltitudeHandle());
}
static inline void SonarAltitudeRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(SonarAltitudeHandle(), instId);
}
static inline void SonarAltitudeUpdated() {
    UAVObjUpdated(SonarAltitudeHandle());
}
static inline void SonarAltitudeInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(SonarAltitudeHandle(), instId);
}
static inline void SonarAltitudeLogging() {
    UAVObjLogging(SonarAltitudeHandle());
}
static inline void SonarAltitudeInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(SonarAltitudeHandle(), instId);
}
static inline int32_t SonarAltitudeGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(SonarAltitudeHandle(), dataOut);
}
static inline int32_t SonarAltitudeSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(SonarAltitudeHandle(), dataIn);
}
static inline int8_t SonarAltitudeReadOnly() {
    return UAVObjReadOnly(SonarAltitudeHandle());
}

/* Set/Get functions */
extern void SonarAltitudeAltitudeSet(float *NewAltitude);
extern void SonarAltitudeAltitudeGet(float *NewAltitude);


#endif // SONARALTITUDE_H

/**
 * @}
 * @}
 */

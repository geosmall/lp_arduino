/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup TaskInfo TaskInfo
 * @brief Task information
 *
 * Autogenerated files and functions for TaskInfo Object
 * @{ 
 *
 * @file       taskinfo.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the TaskInfo object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: taskinfo.xml. 
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

#include <openpilot.h>
#include "taskinfo.h"

// Private variables
#if (defined(__MACH__) && defined(__APPLE__))
static UAVObjHandle handle __attribute__((section("__DATA,_uavo_handles")));
#else
static UAVObjHandle handle __attribute__((section("_uavo_handles")));
#endif

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t TaskInfoInitialize(void)
{
    // Compile time assertion that the TaskInfoDataPacked and TaskInfoData structs
    // have the same size (though instances of TaskInfoData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(TaskInfoDataPacked) == sizeof(TaskInfoData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(TASKINFO_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(TASKINFO_OBJID,
        TASKINFO_ISSINGLEINST, TASKINFO_ISSETTINGS, TASKINFO_ISPRIORITY, TASKINFO_NUMBYTES, &TaskInfoSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void TaskInfoSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    TaskInfoData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(TaskInfoData));

    UAVObjSetInstanceData(obj, instId, &data);

    // Initialize object metadata to their default values
    if ( instId == 0 ) {
        UAVObjMetadata metadata;
        metadata.flags =
            ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
            ACCESS_READONLY << UAVOBJ_GCS_ACCESS_SHIFT |
            0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
            0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
            UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
        metadata.telemetryUpdatePeriod = 10000;
        metadata.gcsTelemetryUpdatePeriod = 0;
        metadata.loggingUpdatePeriod = 0;
        UAVObjSetMetadata(obj, &metadata);
    }
}

/**
 * Get object handle
 */
UAVObjHandle TaskInfoHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void TaskInfoStackRemainingSet( TaskInfoStackRemainingData *NewStackRemaining )
{
    UAVObjSetDataField(TaskInfoHandle(), (void *)NewStackRemaining, offsetof(TaskInfoData, StackRemaining), 25*sizeof(uint16_t));
}
void TaskInfoStackRemainingGet( TaskInfoStackRemainingData *NewStackRemaining )
{
    UAVObjGetDataField(TaskInfoHandle(), (void *)NewStackRemaining, offsetof(TaskInfoData, StackRemaining), 25*sizeof(uint16_t));
}
void TaskInfoStackRemainingArraySet( uint16_t *NewStackRemaining )
{
    UAVObjSetDataField(TaskInfoHandle(), (void *)NewStackRemaining, offsetof(TaskInfoData, StackRemaining), 25*sizeof(uint16_t));
}
void TaskInfoStackRemainingArrayGet( uint16_t *NewStackRemaining )
{
    UAVObjGetDataField(TaskInfoHandle(), (void *)NewStackRemaining, offsetof(TaskInfoData, StackRemaining), 25*sizeof(uint16_t));
}
void TaskInfoRunningSet( TaskInfoRunningData *NewRunning )
{
    UAVObjSetDataField(TaskInfoHandle(), (void *)NewRunning, offsetof(TaskInfoData, Running), 25*sizeof(TaskInfoRunningOptions));
}
void TaskInfoRunningGet( TaskInfoRunningData *NewRunning )
{
    UAVObjGetDataField(TaskInfoHandle(), (void *)NewRunning, offsetof(TaskInfoData, Running), 25*sizeof(TaskInfoRunningOptions));
}
void TaskInfoRunningArraySet( TaskInfoRunningOptions *NewRunning )
{
    UAVObjSetDataField(TaskInfoHandle(), (void *)NewRunning, offsetof(TaskInfoData, Running), 25*sizeof(TaskInfoRunningOptions));
}
void TaskInfoRunningArrayGet( TaskInfoRunningOptions *NewRunning )
{
    UAVObjGetDataField(TaskInfoHandle(), (void *)NewRunning, offsetof(TaskInfoData, Running), 25*sizeof(TaskInfoRunningOptions));
}
void TaskInfoRunningTimeSet( TaskInfoRunningTimeData *NewRunningTime )
{
    UAVObjSetDataField(TaskInfoHandle(), (void *)NewRunningTime, offsetof(TaskInfoData, RunningTime), 25*sizeof(uint8_t));
}
void TaskInfoRunningTimeGet( TaskInfoRunningTimeData *NewRunningTime )
{
    UAVObjGetDataField(TaskInfoHandle(), (void *)NewRunningTime, offsetof(TaskInfoData, RunningTime), 25*sizeof(uint8_t));
}
void TaskInfoRunningTimeArraySet( uint8_t *NewRunningTime )
{
    UAVObjSetDataField(TaskInfoHandle(), (void *)NewRunningTime, offsetof(TaskInfoData, RunningTime), 25*sizeof(uint8_t));
}
void TaskInfoRunningTimeArrayGet( uint8_t *NewRunningTime )
{
    UAVObjGetDataField(TaskInfoHandle(), (void *)NewRunningTime, offsetof(TaskInfoData, RunningTime), 25*sizeof(uint8_t));
}


/**
 * @}
 */

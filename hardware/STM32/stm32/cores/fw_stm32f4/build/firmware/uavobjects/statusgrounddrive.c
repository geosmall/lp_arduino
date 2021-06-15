/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup StatusGroundDrive StatusGroundDrive
 * @brief Status of a Ground drive sequence
 *
 * Autogenerated files and functions for StatusGroundDrive Object
 * @{ 
 *
 * @file       statusgrounddrive.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the StatusGroundDrive object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: statusgrounddrive.xml. 
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
#include "statusgrounddrive.h"

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
int32_t StatusGroundDriveInitialize(void)
{
    // Compile time assertion that the StatusGroundDriveDataPacked and StatusGroundDriveData structs
    // have the same size (though instances of StatusGroundDriveData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(StatusGroundDriveDataPacked) == sizeof(StatusGroundDriveData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(STATUSGROUNDDRIVE_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(STATUSGROUNDDRIVE_OBJID,
        STATUSGROUNDDRIVE_ISSINGLEINST, STATUSGROUNDDRIVE_ISSETTINGS, STATUSGROUNDDRIVE_ISPRIORITY, STATUSGROUNDDRIVE_NUMBYTES, &StatusGroundDriveSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void StatusGroundDriveSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    StatusGroundDriveData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(StatusGroundDriveData));
    data.NECommand.North = 0.000000e+00f;
    data.NECommand.East = 0.000000e+00f;
    data.State.Yaw = 0.000000e+00f;
    data.State.Velocity = 0.000000e+00f;
    data.State.Thrust = 0.000000e+00f;
    data.BodyCommand.Forward = 0.000000e+00f;
    data.BodyCommand.Right = 0.000000e+00f;
    data.ControlCommand.Speed = 0.000000e+00f;
    data.ControlCommand.Course = 0.000000e+00f;

    UAVObjSetInstanceData(obj, instId, &data);

    // Initialize object metadata to their default values
    if ( instId == 0 ) {
        UAVObjMetadata metadata;
        metadata.flags =
            ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
            ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
            0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
            0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
            UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
        metadata.telemetryUpdatePeriod = 100;
        metadata.gcsTelemetryUpdatePeriod = 0;
        metadata.loggingUpdatePeriod = 0;
        UAVObjSetMetadata(obj, &metadata);
    }
}

/**
 * Get object handle
 */
UAVObjHandle StatusGroundDriveHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void StatusGroundDriveNECommandSet( StatusGroundDriveNECommandData *NewNECommand )
{
    UAVObjSetDataField(StatusGroundDriveHandle(), (void *)NewNECommand, offsetof(StatusGroundDriveData, NECommand), 2*sizeof(float));
}
void StatusGroundDriveNECommandGet( StatusGroundDriveNECommandData *NewNECommand )
{
    UAVObjGetDataField(StatusGroundDriveHandle(), (void *)NewNECommand, offsetof(StatusGroundDriveData, NECommand), 2*sizeof(float));
}
void StatusGroundDriveNECommandArraySet( float *NewNECommand )
{
    UAVObjSetDataField(StatusGroundDriveHandle(), (void *)NewNECommand, offsetof(StatusGroundDriveData, NECommand), 2*sizeof(float));
}
void StatusGroundDriveNECommandArrayGet( float *NewNECommand )
{
    UAVObjGetDataField(StatusGroundDriveHandle(), (void *)NewNECommand, offsetof(StatusGroundDriveData, NECommand), 2*sizeof(float));
}
void StatusGroundDriveStateSet( StatusGroundDriveStateData *NewState )
{
    UAVObjSetDataField(StatusGroundDriveHandle(), (void *)NewState, offsetof(StatusGroundDriveData, State), 3*sizeof(float));
}
void StatusGroundDriveStateGet( StatusGroundDriveStateData *NewState )
{
    UAVObjGetDataField(StatusGroundDriveHandle(), (void *)NewState, offsetof(StatusGroundDriveData, State), 3*sizeof(float));
}
void StatusGroundDriveStateArraySet( float *NewState )
{
    UAVObjSetDataField(StatusGroundDriveHandle(), (void *)NewState, offsetof(StatusGroundDriveData, State), 3*sizeof(float));
}
void StatusGroundDriveStateArrayGet( float *NewState )
{
    UAVObjGetDataField(StatusGroundDriveHandle(), (void *)NewState, offsetof(StatusGroundDriveData, State), 3*sizeof(float));
}
void StatusGroundDriveBodyCommandSet( StatusGroundDriveBodyCommandData *NewBodyCommand )
{
    UAVObjSetDataField(StatusGroundDriveHandle(), (void *)NewBodyCommand, offsetof(StatusGroundDriveData, BodyCommand), 2*sizeof(float));
}
void StatusGroundDriveBodyCommandGet( StatusGroundDriveBodyCommandData *NewBodyCommand )
{
    UAVObjGetDataField(StatusGroundDriveHandle(), (void *)NewBodyCommand, offsetof(StatusGroundDriveData, BodyCommand), 2*sizeof(float));
}
void StatusGroundDriveBodyCommandArraySet( float *NewBodyCommand )
{
    UAVObjSetDataField(StatusGroundDriveHandle(), (void *)NewBodyCommand, offsetof(StatusGroundDriveData, BodyCommand), 2*sizeof(float));
}
void StatusGroundDriveBodyCommandArrayGet( float *NewBodyCommand )
{
    UAVObjGetDataField(StatusGroundDriveHandle(), (void *)NewBodyCommand, offsetof(StatusGroundDriveData, BodyCommand), 2*sizeof(float));
}
void StatusGroundDriveControlCommandSet( StatusGroundDriveControlCommandData *NewControlCommand )
{
    UAVObjSetDataField(StatusGroundDriveHandle(), (void *)NewControlCommand, offsetof(StatusGroundDriveData, ControlCommand), 2*sizeof(float));
}
void StatusGroundDriveControlCommandGet( StatusGroundDriveControlCommandData *NewControlCommand )
{
    UAVObjGetDataField(StatusGroundDriveHandle(), (void *)NewControlCommand, offsetof(StatusGroundDriveData, ControlCommand), 2*sizeof(float));
}
void StatusGroundDriveControlCommandArraySet( float *NewControlCommand )
{
    UAVObjSetDataField(StatusGroundDriveHandle(), (void *)NewControlCommand, offsetof(StatusGroundDriveData, ControlCommand), 2*sizeof(float));
}
void StatusGroundDriveControlCommandArrayGet( float *NewControlCommand )
{
    UAVObjGetDataField(StatusGroundDriveHandle(), (void *)NewControlCommand, offsetof(StatusGroundDriveData, ControlCommand), 2*sizeof(float));
}
void StatusGroundDriveControlStateSet(StatusGroundDriveControlStateOptions *NewControlState)
{
    UAVObjSetDataField(StatusGroundDriveHandle(), (void *)NewControlState, offsetof(StatusGroundDriveData, ControlState), sizeof(StatusGroundDriveControlStateOptions));
}
void StatusGroundDriveControlStateGet(StatusGroundDriveControlStateOptions *NewControlState)
{
    UAVObjGetDataField(StatusGroundDriveHandle(), (void *)NewControlState, offsetof(StatusGroundDriveData, ControlState), sizeof(StatusGroundDriveControlStateOptions));
}


/**
 * @}
 */

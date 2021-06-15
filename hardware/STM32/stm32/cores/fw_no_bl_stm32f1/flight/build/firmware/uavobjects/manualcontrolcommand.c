/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup ManualControlCommand ManualControlCommand
 * @brief The output from the @ref ManualControlModule which decodes the receiver inputs. Overriden by GCS for fly-by-wire control.
 *
 * Autogenerated files and functions for ManualControlCommand Object
 * @{ 
 *
 * @file       manualcontrolcommand.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the ManualControlCommand object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: manualcontrolcommand.xml. 
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
#include "manualcontrolcommand.h"

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
int32_t ManualControlCommandInitialize(void)
{
    // Compile time assertion that the ManualControlCommandDataPacked and ManualControlCommandData structs
    // have the same size (though instances of ManualControlCommandData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(ManualControlCommandDataPacked) == sizeof(ManualControlCommandData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(MANUALCONTROLCOMMAND_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(MANUALCONTROLCOMMAND_OBJID,
        MANUALCONTROLCOMMAND_ISSINGLEINST, MANUALCONTROLCOMMAND_ISSETTINGS, MANUALCONTROLCOMMAND_ISPRIORITY, MANUALCONTROLCOMMAND_NUMBYTES, &ManualControlCommandSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void ManualControlCommandSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    ManualControlCommandData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(ManualControlCommandData));
    data.FlightModeSwitchPosition = 0;

    UAVObjSetInstanceData(obj, instId, &data);

    // Initialize object metadata to their default values
    if ( instId == 0 ) {
        UAVObjMetadata metadata;
        metadata.flags =
            ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
            ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
            0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
            0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
            UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
        metadata.telemetryUpdatePeriod = 2000;
        metadata.gcsTelemetryUpdatePeriod = 0;
        metadata.loggingUpdatePeriod = 0;
        UAVObjSetMetadata(obj, &metadata);
    }
}

/**
 * Get object handle
 */
UAVObjHandle ManualControlCommandHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void ManualControlCommandThrottleSet(float *NewThrottle)
{
    UAVObjSetDataField(ManualControlCommandHandle(), (void *)NewThrottle, offsetof(ManualControlCommandData, Throttle), sizeof(float));
}
void ManualControlCommandThrottleGet(float *NewThrottle)
{
    UAVObjGetDataField(ManualControlCommandHandle(), (void *)NewThrottle, offsetof(ManualControlCommandData, Throttle), sizeof(float));
}
void ManualControlCommandRollSet(float *NewRoll)
{
    UAVObjSetDataField(ManualControlCommandHandle(), (void *)NewRoll, offsetof(ManualControlCommandData, Roll), sizeof(float));
}
void ManualControlCommandRollGet(float *NewRoll)
{
    UAVObjGetDataField(ManualControlCommandHandle(), (void *)NewRoll, offsetof(ManualControlCommandData, Roll), sizeof(float));
}
void ManualControlCommandPitchSet(float *NewPitch)
{
    UAVObjSetDataField(ManualControlCommandHandle(), (void *)NewPitch, offsetof(ManualControlCommandData, Pitch), sizeof(float));
}
void ManualControlCommandPitchGet(float *NewPitch)
{
    UAVObjGetDataField(ManualControlCommandHandle(), (void *)NewPitch, offsetof(ManualControlCommandData, Pitch), sizeof(float));
}
void ManualControlCommandYawSet(float *NewYaw)
{
    UAVObjSetDataField(ManualControlCommandHandle(), (void *)NewYaw, offsetof(ManualControlCommandData, Yaw), sizeof(float));
}
void ManualControlCommandYawGet(float *NewYaw)
{
    UAVObjGetDataField(ManualControlCommandHandle(), (void *)NewYaw, offsetof(ManualControlCommandData, Yaw), sizeof(float));
}
void ManualControlCommandCollectiveSet(float *NewCollective)
{
    UAVObjSetDataField(ManualControlCommandHandle(), (void *)NewCollective, offsetof(ManualControlCommandData, Collective), sizeof(float));
}
void ManualControlCommandCollectiveGet(float *NewCollective)
{
    UAVObjGetDataField(ManualControlCommandHandle(), (void *)NewCollective, offsetof(ManualControlCommandData, Collective), sizeof(float));
}
void ManualControlCommandThrustSet(float *NewThrust)
{
    UAVObjSetDataField(ManualControlCommandHandle(), (void *)NewThrust, offsetof(ManualControlCommandData, Thrust), sizeof(float));
}
void ManualControlCommandThrustGet(float *NewThrust)
{
    UAVObjGetDataField(ManualControlCommandHandle(), (void *)NewThrust, offsetof(ManualControlCommandData, Thrust), sizeof(float));
}
void ManualControlCommandChannelSet( uint16_t *NewChannel )
{
    UAVObjSetDataField(ManualControlCommandHandle(), (void *)NewChannel, offsetof(ManualControlCommandData, Channel), 10*sizeof(uint16_t));
}
void ManualControlCommandChannelGet( uint16_t *NewChannel )
{
    UAVObjGetDataField(ManualControlCommandHandle(), (void *)NewChannel, offsetof(ManualControlCommandData, Channel), 10*sizeof(uint16_t));
}
void ManualControlCommandConnectedSet(ManualControlCommandConnectedOptions *NewConnected)
{
    UAVObjSetDataField(ManualControlCommandHandle(), (void *)NewConnected, offsetof(ManualControlCommandData, Connected), sizeof(ManualControlCommandConnectedOptions));
}
void ManualControlCommandConnectedGet(ManualControlCommandConnectedOptions *NewConnected)
{
    UAVObjGetDataField(ManualControlCommandHandle(), (void *)NewConnected, offsetof(ManualControlCommandData, Connected), sizeof(ManualControlCommandConnectedOptions));
}
void ManualControlCommandFlightModeSwitchPositionSet(uint8_t *NewFlightModeSwitchPosition)
{
    UAVObjSetDataField(ManualControlCommandHandle(), (void *)NewFlightModeSwitchPosition, offsetof(ManualControlCommandData, FlightModeSwitchPosition), sizeof(uint8_t));
}
void ManualControlCommandFlightModeSwitchPositionGet(uint8_t *NewFlightModeSwitchPosition)
{
    UAVObjGetDataField(ManualControlCommandHandle(), (void *)NewFlightModeSwitchPosition, offsetof(ManualControlCommandData, FlightModeSwitchPosition), sizeof(uint8_t));
}


/**
 * @}
 */

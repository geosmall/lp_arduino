/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup GroundPathFollowerSettings GroundPathFollowerSettings
 * @brief Settings for the @ref GroundPathFollowerModule
 *
 * Autogenerated files and functions for GroundPathFollowerSettings Object
 * @{ 
 *
 * @file       groundpathfollowersettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the GroundPathFollowerSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: groundpathfollowersettings.xml. 
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
#include "groundpathfollowersettings.h"

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
int32_t GroundPathFollowerSettingsInitialize(void)
{
    // Compile time assertion that the GroundPathFollowerSettingsDataPacked and GroundPathFollowerSettingsData structs
    // have the same size (though instances of GroundPathFollowerSettingsData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(GroundPathFollowerSettingsDataPacked) == sizeof(GroundPathFollowerSettingsData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(GROUNDPATHFOLLOWERSETTINGS_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(GROUNDPATHFOLLOWERSETTINGS_OBJID,
        GROUNDPATHFOLLOWERSETTINGS_ISSINGLEINST, GROUNDPATHFOLLOWERSETTINGS_ISSETTINGS, GROUNDPATHFOLLOWERSETTINGS_ISPRIORITY, GROUNDPATHFOLLOWERSETTINGS_NUMBYTES, &GroundPathFollowerSettingsSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void GroundPathFollowerSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    GroundPathFollowerSettingsData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(GroundPathFollowerSettingsData));
    data.HorizontalVelMax = 2.000000e+00f;
    data.HorizontalVelMin = 0.000000e+00f;
    data.CourseFeedForward = 3.000000e+00f;
    data.VelocityFeedForward = 1.000000e-01f;
    data.HorizontalPosP = 2.000000e-01f;
    data.SpeedPI.Kp = 1.000000e-01f;
    data.SpeedPI.Ki = 1.000000e-01f;
    data.SpeedPI.Kd = 1.000000e-03f;
    data.SpeedPI.Beta = 8.000000e-01f;
    data.ThrustLimit.Min = -3.000000e-01f;
    data.ThrustLimit.SlowForward = 1.500000e-01f;
    data.ThrustLimit.Max = 3.000000e-01f;
    data.UpdatePeriod = 100;

    UAVObjSetInstanceData(obj, instId, &data);

    // Initialize object metadata to their default values
    if ( instId == 0 ) {
        UAVObjMetadata metadata;
        metadata.flags =
            ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
            ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
            1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
            1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
            UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
        metadata.telemetryUpdatePeriod = 0;
        metadata.gcsTelemetryUpdatePeriod = 0;
        metadata.loggingUpdatePeriod = 0;
        UAVObjSetMetadata(obj, &metadata);
    }
}

/**
 * Get object handle
 */
UAVObjHandle GroundPathFollowerSettingsHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void GroundPathFollowerSettingsHorizontalVelMaxSet(float *NewHorizontalVelMax)
{
    UAVObjSetDataField(GroundPathFollowerSettingsHandle(), (void *)NewHorizontalVelMax, offsetof(GroundPathFollowerSettingsData, HorizontalVelMax), sizeof(float));
}
void GroundPathFollowerSettingsHorizontalVelMaxGet(float *NewHorizontalVelMax)
{
    UAVObjGetDataField(GroundPathFollowerSettingsHandle(), (void *)NewHorizontalVelMax, offsetof(GroundPathFollowerSettingsData, HorizontalVelMax), sizeof(float));
}
void GroundPathFollowerSettingsHorizontalVelMinSet(float *NewHorizontalVelMin)
{
    UAVObjSetDataField(GroundPathFollowerSettingsHandle(), (void *)NewHorizontalVelMin, offsetof(GroundPathFollowerSettingsData, HorizontalVelMin), sizeof(float));
}
void GroundPathFollowerSettingsHorizontalVelMinGet(float *NewHorizontalVelMin)
{
    UAVObjGetDataField(GroundPathFollowerSettingsHandle(), (void *)NewHorizontalVelMin, offsetof(GroundPathFollowerSettingsData, HorizontalVelMin), sizeof(float));
}
void GroundPathFollowerSettingsCourseFeedForwardSet(float *NewCourseFeedForward)
{
    UAVObjSetDataField(GroundPathFollowerSettingsHandle(), (void *)NewCourseFeedForward, offsetof(GroundPathFollowerSettingsData, CourseFeedForward), sizeof(float));
}
void GroundPathFollowerSettingsCourseFeedForwardGet(float *NewCourseFeedForward)
{
    UAVObjGetDataField(GroundPathFollowerSettingsHandle(), (void *)NewCourseFeedForward, offsetof(GroundPathFollowerSettingsData, CourseFeedForward), sizeof(float));
}
void GroundPathFollowerSettingsVelocityFeedForwardSet(float *NewVelocityFeedForward)
{
    UAVObjSetDataField(GroundPathFollowerSettingsHandle(), (void *)NewVelocityFeedForward, offsetof(GroundPathFollowerSettingsData, VelocityFeedForward), sizeof(float));
}
void GroundPathFollowerSettingsVelocityFeedForwardGet(float *NewVelocityFeedForward)
{
    UAVObjGetDataField(GroundPathFollowerSettingsHandle(), (void *)NewVelocityFeedForward, offsetof(GroundPathFollowerSettingsData, VelocityFeedForward), sizeof(float));
}
void GroundPathFollowerSettingsHorizontalPosPSet(float *NewHorizontalPosP)
{
    UAVObjSetDataField(GroundPathFollowerSettingsHandle(), (void *)NewHorizontalPosP, offsetof(GroundPathFollowerSettingsData, HorizontalPosP), sizeof(float));
}
void GroundPathFollowerSettingsHorizontalPosPGet(float *NewHorizontalPosP)
{
    UAVObjGetDataField(GroundPathFollowerSettingsHandle(), (void *)NewHorizontalPosP, offsetof(GroundPathFollowerSettingsData, HorizontalPosP), sizeof(float));
}
void GroundPathFollowerSettingsSpeedPISet( GroundPathFollowerSettingsSpeedPIData *NewSpeedPI )
{
    UAVObjSetDataField(GroundPathFollowerSettingsHandle(), (void *)NewSpeedPI, offsetof(GroundPathFollowerSettingsData, SpeedPI), 4*sizeof(float));
}
void GroundPathFollowerSettingsSpeedPIGet( GroundPathFollowerSettingsSpeedPIData *NewSpeedPI )
{
    UAVObjGetDataField(GroundPathFollowerSettingsHandle(), (void *)NewSpeedPI, offsetof(GroundPathFollowerSettingsData, SpeedPI), 4*sizeof(float));
}
void GroundPathFollowerSettingsSpeedPIArraySet( float *NewSpeedPI )
{
    UAVObjSetDataField(GroundPathFollowerSettingsHandle(), (void *)NewSpeedPI, offsetof(GroundPathFollowerSettingsData, SpeedPI), 4*sizeof(float));
}
void GroundPathFollowerSettingsSpeedPIArrayGet( float *NewSpeedPI )
{
    UAVObjGetDataField(GroundPathFollowerSettingsHandle(), (void *)NewSpeedPI, offsetof(GroundPathFollowerSettingsData, SpeedPI), 4*sizeof(float));
}
void GroundPathFollowerSettingsThrustLimitSet( GroundPathFollowerSettingsThrustLimitData *NewThrustLimit )
{
    UAVObjSetDataField(GroundPathFollowerSettingsHandle(), (void *)NewThrustLimit, offsetof(GroundPathFollowerSettingsData, ThrustLimit), 3*sizeof(float));
}
void GroundPathFollowerSettingsThrustLimitGet( GroundPathFollowerSettingsThrustLimitData *NewThrustLimit )
{
    UAVObjGetDataField(GroundPathFollowerSettingsHandle(), (void *)NewThrustLimit, offsetof(GroundPathFollowerSettingsData, ThrustLimit), 3*sizeof(float));
}
void GroundPathFollowerSettingsThrustLimitArraySet( float *NewThrustLimit )
{
    UAVObjSetDataField(GroundPathFollowerSettingsHandle(), (void *)NewThrustLimit, offsetof(GroundPathFollowerSettingsData, ThrustLimit), 3*sizeof(float));
}
void GroundPathFollowerSettingsThrustLimitArrayGet( float *NewThrustLimit )
{
    UAVObjGetDataField(GroundPathFollowerSettingsHandle(), (void *)NewThrustLimit, offsetof(GroundPathFollowerSettingsData, ThrustLimit), 3*sizeof(float));
}
void GroundPathFollowerSettingsUpdatePeriodSet(int32_t *NewUpdatePeriod)
{
    UAVObjSetDataField(GroundPathFollowerSettingsHandle(), (void *)NewUpdatePeriod, offsetof(GroundPathFollowerSettingsData, UpdatePeriod), sizeof(int32_t));
}
void GroundPathFollowerSettingsUpdatePeriodGet(int32_t *NewUpdatePeriod)
{
    UAVObjGetDataField(GroundPathFollowerSettingsHandle(), (void *)NewUpdatePeriod, offsetof(GroundPathFollowerSettingsData, UpdatePeriod), sizeof(int32_t));
}


/**
 * @}
 */

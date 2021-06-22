/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup MixerSettings MixerSettings
 * @brief Settings for the @ref ActuatorModule that controls the channel assignments for the mixer based on AircraftType
 *
 * Autogenerated files and functions for MixerSettings Object
 * @{ 
 *
 * @file       mixersettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the MixerSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: mixersettings.xml. 
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
#include "mixersettings.h"

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
int32_t MixerSettingsInitialize(void)
{
    // Compile time assertion that the MixerSettingsDataPacked and MixerSettingsData structs
    // have the same size (though instances of MixerSettingsData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(MixerSettingsDataPacked) == sizeof(MixerSettingsData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(MIXERSETTINGS_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(MIXERSETTINGS_OBJID,
        MIXERSETTINGS_ISSINGLEINST, MIXERSETTINGS_ISSETTINGS, MIXERSETTINGS_ISPRIORITY, MIXERSETTINGS_NUMBYTES, &MixerSettingsSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void MixerSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    MixerSettingsData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(MixerSettingsData));
    data.ThrottleCurve1[0] = 0.000000e+00f;
    data.ThrottleCurve1[1] = 0.000000e+00f;
    data.ThrottleCurve1[2] = 0.000000e+00f;
    data.ThrottleCurve1[3] = 0.000000e+00f;
    data.ThrottleCurve1[4] = 0.000000e+00f;
    data.ThrottleCurve2[0] = 0.000000e+00f;
    data.ThrottleCurve2[1] = 2.500000e-01f;
    data.ThrottleCurve2[2] = 5.000000e-01f;
    data.ThrottleCurve2[3] = 7.500000e-01f;
    data.ThrottleCurve2[4] = 1.000000e+00f;
    data.MixerValueRoll = 50;
    data.MixerValuePitch = 50;
    data.MixerValueYaw = 50;
    data.RollDifferential = 0;
    data.FirstRollServo = 0;
    data.Curve2Source = 0;
    data.Mixer1Type = 0;
    data.Mixer1Vector.ThrottleCurve1 = 0;
    data.Mixer1Vector.ThrottleCurve2 = 0;
    data.Mixer1Vector.Roll = 0;
    data.Mixer1Vector.Pitch = 0;
    data.Mixer1Vector.Yaw = 0;
    data.Mixer2Type = 0;
    data.Mixer2Vector.ThrottleCurve1 = 0;
    data.Mixer2Vector.ThrottleCurve2 = 0;
    data.Mixer2Vector.Roll = 0;
    data.Mixer2Vector.Pitch = 0;
    data.Mixer2Vector.Yaw = 0;
    data.Mixer3Type = 0;
    data.Mixer3Vector.ThrottleCurve1 = 0;
    data.Mixer3Vector.ThrottleCurve2 = 0;
    data.Mixer3Vector.Roll = 0;
    data.Mixer3Vector.Pitch = 0;
    data.Mixer3Vector.Yaw = 0;
    data.Mixer4Type = 0;
    data.Mixer4Vector.ThrottleCurve1 = 0;
    data.Mixer4Vector.ThrottleCurve2 = 0;
    data.Mixer4Vector.Roll = 0;
    data.Mixer4Vector.Pitch = 0;
    data.Mixer4Vector.Yaw = 0;
    data.Mixer5Type = 0;
    data.Mixer5Vector.ThrottleCurve1 = 0;
    data.Mixer5Vector.ThrottleCurve2 = 0;
    data.Mixer5Vector.Roll = 0;
    data.Mixer5Vector.Pitch = 0;
    data.Mixer5Vector.Yaw = 0;
    data.Mixer6Type = 0;
    data.Mixer6Vector.ThrottleCurve1 = 0;
    data.Mixer6Vector.ThrottleCurve2 = 0;
    data.Mixer6Vector.Roll = 0;
    data.Mixer6Vector.Pitch = 0;
    data.Mixer6Vector.Yaw = 0;
    data.Mixer7Type = 0;
    data.Mixer7Vector.ThrottleCurve1 = 0;
    data.Mixer7Vector.ThrottleCurve2 = 0;
    data.Mixer7Vector.Roll = 0;
    data.Mixer7Vector.Pitch = 0;
    data.Mixer7Vector.Yaw = 0;
    data.Mixer8Type = 0;
    data.Mixer8Vector.ThrottleCurve1 = 0;
    data.Mixer8Vector.ThrottleCurve2 = 0;
    data.Mixer8Vector.Roll = 0;
    data.Mixer8Vector.Pitch = 0;
    data.Mixer8Vector.Yaw = 0;
    data.Mixer9Type = 0;
    data.Mixer9Vector.ThrottleCurve1 = 0;
    data.Mixer9Vector.ThrottleCurve2 = 0;
    data.Mixer9Vector.Roll = 0;
    data.Mixer9Vector.Pitch = 0;
    data.Mixer9Vector.Yaw = 0;
    data.Mixer10Type = 0;
    data.Mixer10Vector.ThrottleCurve1 = 0;
    data.Mixer10Vector.ThrottleCurve2 = 0;
    data.Mixer10Vector.Roll = 0;
    data.Mixer10Vector.Pitch = 0;
    data.Mixer10Vector.Yaw = 0;
    data.Mixer11Type = 0;
    data.Mixer11Vector.ThrottleCurve1 = 0;
    data.Mixer11Vector.ThrottleCurve2 = 0;
    data.Mixer11Vector.Roll = 0;
    data.Mixer11Vector.Pitch = 0;
    data.Mixer11Vector.Yaw = 0;
    data.Mixer12Type = 0;
    data.Mixer12Vector.ThrottleCurve1 = 0;
    data.Mixer12Vector.ThrottleCurve2 = 0;
    data.Mixer12Vector.Roll = 0;
    data.Mixer12Vector.Pitch = 0;
    data.Mixer12Vector.Yaw = 0;

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
UAVObjHandle MixerSettingsHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void MixerSettingsThrottleCurve1Set( float *NewThrottleCurve1 )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewThrottleCurve1, offsetof(MixerSettingsData, ThrottleCurve1), 5*sizeof(float));
}
void MixerSettingsThrottleCurve1Get( float *NewThrottleCurve1 )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewThrottleCurve1, offsetof(MixerSettingsData, ThrottleCurve1), 5*sizeof(float));
}
void MixerSettingsThrottleCurve2Set( float *NewThrottleCurve2 )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewThrottleCurve2, offsetof(MixerSettingsData, ThrottleCurve2), 5*sizeof(float));
}
void MixerSettingsThrottleCurve2Get( float *NewThrottleCurve2 )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewThrottleCurve2, offsetof(MixerSettingsData, ThrottleCurve2), 5*sizeof(float));
}
void MixerSettingsMixerValueRollSet(int8_t *NewMixerValueRoll)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixerValueRoll, offsetof(MixerSettingsData, MixerValueRoll), sizeof(int8_t));
}
void MixerSettingsMixerValueRollGet(int8_t *NewMixerValueRoll)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixerValueRoll, offsetof(MixerSettingsData, MixerValueRoll), sizeof(int8_t));
}
void MixerSettingsMixerValuePitchSet(int8_t *NewMixerValuePitch)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixerValuePitch, offsetof(MixerSettingsData, MixerValuePitch), sizeof(int8_t));
}
void MixerSettingsMixerValuePitchGet(int8_t *NewMixerValuePitch)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixerValuePitch, offsetof(MixerSettingsData, MixerValuePitch), sizeof(int8_t));
}
void MixerSettingsMixerValueYawSet(int8_t *NewMixerValueYaw)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixerValueYaw, offsetof(MixerSettingsData, MixerValueYaw), sizeof(int8_t));
}
void MixerSettingsMixerValueYawGet(int8_t *NewMixerValueYaw)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixerValueYaw, offsetof(MixerSettingsData, MixerValueYaw), sizeof(int8_t));
}
void MixerSettingsRollDifferentialSet(int8_t *NewRollDifferential)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewRollDifferential, offsetof(MixerSettingsData, RollDifferential), sizeof(int8_t));
}
void MixerSettingsRollDifferentialGet(int8_t *NewRollDifferential)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewRollDifferential, offsetof(MixerSettingsData, RollDifferential), sizeof(int8_t));
}
void MixerSettingsFirstRollServoSet(uint8_t *NewFirstRollServo)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewFirstRollServo, offsetof(MixerSettingsData, FirstRollServo), sizeof(uint8_t));
}
void MixerSettingsFirstRollServoGet(uint8_t *NewFirstRollServo)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewFirstRollServo, offsetof(MixerSettingsData, FirstRollServo), sizeof(uint8_t));
}
void MixerSettingsCurve2SourceSet(MixerSettingsCurve2SourceOptions *NewCurve2Source)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewCurve2Source, offsetof(MixerSettingsData, Curve2Source), sizeof(MixerSettingsCurve2SourceOptions));
}
void MixerSettingsCurve2SourceGet(MixerSettingsCurve2SourceOptions *NewCurve2Source)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewCurve2Source, offsetof(MixerSettingsData, Curve2Source), sizeof(MixerSettingsCurve2SourceOptions));
}
void MixerSettingsMixer1TypeSet(MixerSettingsMixer1TypeOptions *NewMixer1Type)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer1Type, offsetof(MixerSettingsData, Mixer1Type), sizeof(MixerSettingsMixer1TypeOptions));
}
void MixerSettingsMixer1TypeGet(MixerSettingsMixer1TypeOptions *NewMixer1Type)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer1Type, offsetof(MixerSettingsData, Mixer1Type), sizeof(MixerSettingsMixer1TypeOptions));
}
void MixerSettingsMixer1VectorSet( MixerSettingsMixer1VectorData *NewMixer1Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer1Vector, offsetof(MixerSettingsData, Mixer1Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer1VectorGet( MixerSettingsMixer1VectorData *NewMixer1Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer1Vector, offsetof(MixerSettingsData, Mixer1Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer1VectorArraySet( int8_t *NewMixer1Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer1Vector, offsetof(MixerSettingsData, Mixer1Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer1VectorArrayGet( int8_t *NewMixer1Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer1Vector, offsetof(MixerSettingsData, Mixer1Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer2TypeSet(MixerSettingsMixer2TypeOptions *NewMixer2Type)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer2Type, offsetof(MixerSettingsData, Mixer2Type), sizeof(MixerSettingsMixer2TypeOptions));
}
void MixerSettingsMixer2TypeGet(MixerSettingsMixer2TypeOptions *NewMixer2Type)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer2Type, offsetof(MixerSettingsData, Mixer2Type), sizeof(MixerSettingsMixer2TypeOptions));
}
void MixerSettingsMixer2VectorSet( MixerSettingsMixer2VectorData *NewMixer2Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer2Vector, offsetof(MixerSettingsData, Mixer2Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer2VectorGet( MixerSettingsMixer2VectorData *NewMixer2Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer2Vector, offsetof(MixerSettingsData, Mixer2Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer2VectorArraySet( int8_t *NewMixer2Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer2Vector, offsetof(MixerSettingsData, Mixer2Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer2VectorArrayGet( int8_t *NewMixer2Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer2Vector, offsetof(MixerSettingsData, Mixer2Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer3TypeSet(MixerSettingsMixer3TypeOptions *NewMixer3Type)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer3Type, offsetof(MixerSettingsData, Mixer3Type), sizeof(MixerSettingsMixer3TypeOptions));
}
void MixerSettingsMixer3TypeGet(MixerSettingsMixer3TypeOptions *NewMixer3Type)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer3Type, offsetof(MixerSettingsData, Mixer3Type), sizeof(MixerSettingsMixer3TypeOptions));
}
void MixerSettingsMixer3VectorSet( MixerSettingsMixer3VectorData *NewMixer3Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer3Vector, offsetof(MixerSettingsData, Mixer3Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer3VectorGet( MixerSettingsMixer3VectorData *NewMixer3Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer3Vector, offsetof(MixerSettingsData, Mixer3Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer3VectorArraySet( int8_t *NewMixer3Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer3Vector, offsetof(MixerSettingsData, Mixer3Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer3VectorArrayGet( int8_t *NewMixer3Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer3Vector, offsetof(MixerSettingsData, Mixer3Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer4TypeSet(MixerSettingsMixer4TypeOptions *NewMixer4Type)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer4Type, offsetof(MixerSettingsData, Mixer4Type), sizeof(MixerSettingsMixer4TypeOptions));
}
void MixerSettingsMixer4TypeGet(MixerSettingsMixer4TypeOptions *NewMixer4Type)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer4Type, offsetof(MixerSettingsData, Mixer4Type), sizeof(MixerSettingsMixer4TypeOptions));
}
void MixerSettingsMixer4VectorSet( MixerSettingsMixer4VectorData *NewMixer4Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer4Vector, offsetof(MixerSettingsData, Mixer4Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer4VectorGet( MixerSettingsMixer4VectorData *NewMixer4Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer4Vector, offsetof(MixerSettingsData, Mixer4Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer4VectorArraySet( int8_t *NewMixer4Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer4Vector, offsetof(MixerSettingsData, Mixer4Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer4VectorArrayGet( int8_t *NewMixer4Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer4Vector, offsetof(MixerSettingsData, Mixer4Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer5TypeSet(MixerSettingsMixer5TypeOptions *NewMixer5Type)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer5Type, offsetof(MixerSettingsData, Mixer5Type), sizeof(MixerSettingsMixer5TypeOptions));
}
void MixerSettingsMixer5TypeGet(MixerSettingsMixer5TypeOptions *NewMixer5Type)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer5Type, offsetof(MixerSettingsData, Mixer5Type), sizeof(MixerSettingsMixer5TypeOptions));
}
void MixerSettingsMixer5VectorSet( MixerSettingsMixer5VectorData *NewMixer5Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer5Vector, offsetof(MixerSettingsData, Mixer5Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer5VectorGet( MixerSettingsMixer5VectorData *NewMixer5Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer5Vector, offsetof(MixerSettingsData, Mixer5Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer5VectorArraySet( int8_t *NewMixer5Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer5Vector, offsetof(MixerSettingsData, Mixer5Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer5VectorArrayGet( int8_t *NewMixer5Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer5Vector, offsetof(MixerSettingsData, Mixer5Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer6TypeSet(MixerSettingsMixer6TypeOptions *NewMixer6Type)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer6Type, offsetof(MixerSettingsData, Mixer6Type), sizeof(MixerSettingsMixer6TypeOptions));
}
void MixerSettingsMixer6TypeGet(MixerSettingsMixer6TypeOptions *NewMixer6Type)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer6Type, offsetof(MixerSettingsData, Mixer6Type), sizeof(MixerSettingsMixer6TypeOptions));
}
void MixerSettingsMixer6VectorSet( MixerSettingsMixer6VectorData *NewMixer6Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer6Vector, offsetof(MixerSettingsData, Mixer6Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer6VectorGet( MixerSettingsMixer6VectorData *NewMixer6Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer6Vector, offsetof(MixerSettingsData, Mixer6Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer6VectorArraySet( int8_t *NewMixer6Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer6Vector, offsetof(MixerSettingsData, Mixer6Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer6VectorArrayGet( int8_t *NewMixer6Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer6Vector, offsetof(MixerSettingsData, Mixer6Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer7TypeSet(MixerSettingsMixer7TypeOptions *NewMixer7Type)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer7Type, offsetof(MixerSettingsData, Mixer7Type), sizeof(MixerSettingsMixer7TypeOptions));
}
void MixerSettingsMixer7TypeGet(MixerSettingsMixer7TypeOptions *NewMixer7Type)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer7Type, offsetof(MixerSettingsData, Mixer7Type), sizeof(MixerSettingsMixer7TypeOptions));
}
void MixerSettingsMixer7VectorSet( MixerSettingsMixer7VectorData *NewMixer7Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer7Vector, offsetof(MixerSettingsData, Mixer7Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer7VectorGet( MixerSettingsMixer7VectorData *NewMixer7Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer7Vector, offsetof(MixerSettingsData, Mixer7Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer7VectorArraySet( int8_t *NewMixer7Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer7Vector, offsetof(MixerSettingsData, Mixer7Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer7VectorArrayGet( int8_t *NewMixer7Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer7Vector, offsetof(MixerSettingsData, Mixer7Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer8TypeSet(MixerSettingsMixer8TypeOptions *NewMixer8Type)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer8Type, offsetof(MixerSettingsData, Mixer8Type), sizeof(MixerSettingsMixer8TypeOptions));
}
void MixerSettingsMixer8TypeGet(MixerSettingsMixer8TypeOptions *NewMixer8Type)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer8Type, offsetof(MixerSettingsData, Mixer8Type), sizeof(MixerSettingsMixer8TypeOptions));
}
void MixerSettingsMixer8VectorSet( MixerSettingsMixer8VectorData *NewMixer8Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer8Vector, offsetof(MixerSettingsData, Mixer8Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer8VectorGet( MixerSettingsMixer8VectorData *NewMixer8Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer8Vector, offsetof(MixerSettingsData, Mixer8Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer8VectorArraySet( int8_t *NewMixer8Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer8Vector, offsetof(MixerSettingsData, Mixer8Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer8VectorArrayGet( int8_t *NewMixer8Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer8Vector, offsetof(MixerSettingsData, Mixer8Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer9TypeSet(MixerSettingsMixer9TypeOptions *NewMixer9Type)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer9Type, offsetof(MixerSettingsData, Mixer9Type), sizeof(MixerSettingsMixer9TypeOptions));
}
void MixerSettingsMixer9TypeGet(MixerSettingsMixer9TypeOptions *NewMixer9Type)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer9Type, offsetof(MixerSettingsData, Mixer9Type), sizeof(MixerSettingsMixer9TypeOptions));
}
void MixerSettingsMixer9VectorSet( MixerSettingsMixer9VectorData *NewMixer9Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer9Vector, offsetof(MixerSettingsData, Mixer9Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer9VectorGet( MixerSettingsMixer9VectorData *NewMixer9Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer9Vector, offsetof(MixerSettingsData, Mixer9Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer9VectorArraySet( int8_t *NewMixer9Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer9Vector, offsetof(MixerSettingsData, Mixer9Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer9VectorArrayGet( int8_t *NewMixer9Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer9Vector, offsetof(MixerSettingsData, Mixer9Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer10TypeSet(MixerSettingsMixer10TypeOptions *NewMixer10Type)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer10Type, offsetof(MixerSettingsData, Mixer10Type), sizeof(MixerSettingsMixer10TypeOptions));
}
void MixerSettingsMixer10TypeGet(MixerSettingsMixer10TypeOptions *NewMixer10Type)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer10Type, offsetof(MixerSettingsData, Mixer10Type), sizeof(MixerSettingsMixer10TypeOptions));
}
void MixerSettingsMixer10VectorSet( MixerSettingsMixer10VectorData *NewMixer10Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer10Vector, offsetof(MixerSettingsData, Mixer10Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer10VectorGet( MixerSettingsMixer10VectorData *NewMixer10Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer10Vector, offsetof(MixerSettingsData, Mixer10Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer10VectorArraySet( int8_t *NewMixer10Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer10Vector, offsetof(MixerSettingsData, Mixer10Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer10VectorArrayGet( int8_t *NewMixer10Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer10Vector, offsetof(MixerSettingsData, Mixer10Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer11TypeSet(MixerSettingsMixer11TypeOptions *NewMixer11Type)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer11Type, offsetof(MixerSettingsData, Mixer11Type), sizeof(MixerSettingsMixer11TypeOptions));
}
void MixerSettingsMixer11TypeGet(MixerSettingsMixer11TypeOptions *NewMixer11Type)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer11Type, offsetof(MixerSettingsData, Mixer11Type), sizeof(MixerSettingsMixer11TypeOptions));
}
void MixerSettingsMixer11VectorSet( MixerSettingsMixer11VectorData *NewMixer11Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer11Vector, offsetof(MixerSettingsData, Mixer11Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer11VectorGet( MixerSettingsMixer11VectorData *NewMixer11Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer11Vector, offsetof(MixerSettingsData, Mixer11Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer11VectorArraySet( int8_t *NewMixer11Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer11Vector, offsetof(MixerSettingsData, Mixer11Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer11VectorArrayGet( int8_t *NewMixer11Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer11Vector, offsetof(MixerSettingsData, Mixer11Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer12TypeSet(MixerSettingsMixer12TypeOptions *NewMixer12Type)
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer12Type, offsetof(MixerSettingsData, Mixer12Type), sizeof(MixerSettingsMixer12TypeOptions));
}
void MixerSettingsMixer12TypeGet(MixerSettingsMixer12TypeOptions *NewMixer12Type)
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer12Type, offsetof(MixerSettingsData, Mixer12Type), sizeof(MixerSettingsMixer12TypeOptions));
}
void MixerSettingsMixer12VectorSet( MixerSettingsMixer12VectorData *NewMixer12Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer12Vector, offsetof(MixerSettingsData, Mixer12Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer12VectorGet( MixerSettingsMixer12VectorData *NewMixer12Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer12Vector, offsetof(MixerSettingsData, Mixer12Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer12VectorArraySet( int8_t *NewMixer12Vector )
{
    UAVObjSetDataField(MixerSettingsHandle(), (void *)NewMixer12Vector, offsetof(MixerSettingsData, Mixer12Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer12VectorArrayGet( int8_t *NewMixer12Vector )
{
    UAVObjGetDataField(MixerSettingsHandle(), (void *)NewMixer12Vector, offsetof(MixerSettingsData, Mixer12Vector), 5*sizeof(int8_t));
}


/**
 * @}
 */
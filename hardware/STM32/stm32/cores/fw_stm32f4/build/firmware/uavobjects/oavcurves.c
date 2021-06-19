/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup OAVCurves OAVCurves
 * @brief OAV Curve Set Points
 *
 * Autogenerated files and functions for OAVCurves Object
 * @{ 
 *
 * @file       oavcurves.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the OAVCurves object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: oavcurves.xml. 
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
#include "oavcurves.h"

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
int32_t OAVCurvesInitialize(void)
{
    // Compile time assertion that the OAVCurvesDataPacked and OAVCurvesData structs
    // have the same size (though instances of OAVCurvesData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(OAVCurvesDataPacked) == sizeof(OAVCurvesData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(OAVCURVES_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(OAVCURVES_OBJID,
        OAVCURVES_ISSINGLEINST, OAVCURVES_ISSETTINGS, OAVCURVES_ISPRIORITY, OAVCURVES_NUMBYTES, &OAVCurvesSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void OAVCurvesSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    OAVCurvesData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(OAVCurvesData));
    data.CurvePoint1[0] = 0;
    data.CurvePoint1[1] = 0;
    data.CurvePoint1[2] = -100;
    data.CurvePoint1[3] = -100;
    data.CurvePoint1[4] = -100;
    data.CurvePoint1[5] = -100;
    data.CurvePoint2[0] = 17;
    data.CurvePoint2[1] = 17;
    data.CurvePoint2[2] = -67;
    data.CurvePoint2[3] = -67;
    data.CurvePoint2[4] = -67;
    data.CurvePoint2[5] = -67;
    data.CurvePoint3[0] = 33;
    data.CurvePoint3[1] = 33;
    data.CurvePoint3[2] = -33;
    data.CurvePoint3[3] = -33;
    data.CurvePoint3[4] = -33;
    data.CurvePoint3[5] = -33;
    data.CurvePoint4[0] = 50;
    data.CurvePoint4[1] = 50;
    data.CurvePoint4[2] = 0;
    data.CurvePoint4[3] = 0;
    data.CurvePoint4[4] = 0;
    data.CurvePoint4[5] = 0;
    data.CurvePoint5[0] = 67;
    data.CurvePoint5[1] = 67;
    data.CurvePoint5[2] = 33;
    data.CurvePoint5[3] = 33;
    data.CurvePoint5[4] = 33;
    data.CurvePoint5[5] = 33;
    data.CurvePoint6[0] = 83;
    data.CurvePoint6[1] = 83;
    data.CurvePoint6[2] = 67;
    data.CurvePoint6[3] = 67;
    data.CurvePoint6[4] = 67;
    data.CurvePoint6[5] = 67;
    data.CurvePoint7[0] = 100;
    data.CurvePoint7[1] = 100;
    data.CurvePoint7[2] = 100;
    data.CurvePoint7[3] = 100;
    data.CurvePoint7[4] = 100;
    data.CurvePoint7[5] = 100;
    data.CurveSource[0] = 0;
    data.CurveSource[1] = 0;
    data.CurveSource[2] = 0;
    data.CurveSource[3] = 0;
    data.CurveSource[4] = 15;
    data.CurveSource[5] = 15;

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
            UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_PERIODIC << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
        metadata.telemetryUpdatePeriod = 0;
        metadata.gcsTelemetryUpdatePeriod = 0;
        metadata.loggingUpdatePeriod = 1000;
        UAVObjSetMetadata(obj, &metadata);
    }
}

/**
 * Get object handle
 */
UAVObjHandle OAVCurvesHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void OAVCurvesCurvePoint1Set( int8_t *NewCurvePoint1 )
{
    UAVObjSetDataField(OAVCurvesHandle(), (void *)NewCurvePoint1, offsetof(OAVCurvesData, CurvePoint1), 6*sizeof(int8_t));
}
void OAVCurvesCurvePoint1Get( int8_t *NewCurvePoint1 )
{
    UAVObjGetDataField(OAVCurvesHandle(), (void *)NewCurvePoint1, offsetof(OAVCurvesData, CurvePoint1), 6*sizeof(int8_t));
}
void OAVCurvesCurvePoint2Set( int8_t *NewCurvePoint2 )
{
    UAVObjSetDataField(OAVCurvesHandle(), (void *)NewCurvePoint2, offsetof(OAVCurvesData, CurvePoint2), 6*sizeof(int8_t));
}
void OAVCurvesCurvePoint2Get( int8_t *NewCurvePoint2 )
{
    UAVObjGetDataField(OAVCurvesHandle(), (void *)NewCurvePoint2, offsetof(OAVCurvesData, CurvePoint2), 6*sizeof(int8_t));
}
void OAVCurvesCurvePoint3Set( int8_t *NewCurvePoint3 )
{
    UAVObjSetDataField(OAVCurvesHandle(), (void *)NewCurvePoint3, offsetof(OAVCurvesData, CurvePoint3), 6*sizeof(int8_t));
}
void OAVCurvesCurvePoint3Get( int8_t *NewCurvePoint3 )
{
    UAVObjGetDataField(OAVCurvesHandle(), (void *)NewCurvePoint3, offsetof(OAVCurvesData, CurvePoint3), 6*sizeof(int8_t));
}
void OAVCurvesCurvePoint4Set( int8_t *NewCurvePoint4 )
{
    UAVObjSetDataField(OAVCurvesHandle(), (void *)NewCurvePoint4, offsetof(OAVCurvesData, CurvePoint4), 6*sizeof(int8_t));
}
void OAVCurvesCurvePoint4Get( int8_t *NewCurvePoint4 )
{
    UAVObjGetDataField(OAVCurvesHandle(), (void *)NewCurvePoint4, offsetof(OAVCurvesData, CurvePoint4), 6*sizeof(int8_t));
}
void OAVCurvesCurvePoint5Set( int8_t *NewCurvePoint5 )
{
    UAVObjSetDataField(OAVCurvesHandle(), (void *)NewCurvePoint5, offsetof(OAVCurvesData, CurvePoint5), 6*sizeof(int8_t));
}
void OAVCurvesCurvePoint5Get( int8_t *NewCurvePoint5 )
{
    UAVObjGetDataField(OAVCurvesHandle(), (void *)NewCurvePoint5, offsetof(OAVCurvesData, CurvePoint5), 6*sizeof(int8_t));
}
void OAVCurvesCurvePoint6Set( int8_t *NewCurvePoint6 )
{
    UAVObjSetDataField(OAVCurvesHandle(), (void *)NewCurvePoint6, offsetof(OAVCurvesData, CurvePoint6), 6*sizeof(int8_t));
}
void OAVCurvesCurvePoint6Get( int8_t *NewCurvePoint6 )
{
    UAVObjGetDataField(OAVCurvesHandle(), (void *)NewCurvePoint6, offsetof(OAVCurvesData, CurvePoint6), 6*sizeof(int8_t));
}
void OAVCurvesCurvePoint7Set( int8_t *NewCurvePoint7 )
{
    UAVObjSetDataField(OAVCurvesHandle(), (void *)NewCurvePoint7, offsetof(OAVCurvesData, CurvePoint7), 6*sizeof(int8_t));
}
void OAVCurvesCurvePoint7Get( int8_t *NewCurvePoint7 )
{
    UAVObjGetDataField(OAVCurvesHandle(), (void *)NewCurvePoint7, offsetof(OAVCurvesData, CurvePoint7), 6*sizeof(int8_t));
}
void OAVCurvesCurveSourceSet( OAVCurvesCurveSourceOptions *NewCurveSource )
{
    UAVObjSetDataField(OAVCurvesHandle(), (void *)NewCurveSource, offsetof(OAVCurvesData, CurveSource), 6*sizeof(OAVCurvesCurveSourceOptions));
}
void OAVCurvesCurveSourceGet( OAVCurvesCurveSourceOptions *NewCurveSource )
{
    UAVObjGetDataField(OAVCurvesHandle(), (void *)NewCurveSource, offsetof(OAVCurvesData, CurveSource), 6*sizeof(OAVCurvesCurveSourceOptions));
}


/**
 * @}
 */

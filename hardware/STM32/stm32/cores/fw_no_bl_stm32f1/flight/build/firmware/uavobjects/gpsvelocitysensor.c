/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup GPSVelocitySensor GPSVelocitySensor
 * @brief Raw GPS velocity in NED frame and m/s from @ref GPSModule.
 *
 * Autogenerated files and functions for GPSVelocitySensor Object
 * @{ 
 *
 * @file       gpsvelocitysensor.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the GPSVelocitySensor object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: gpsvelocitysensor.xml. 
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
#include "gpsvelocitysensor.h"

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
int32_t GPSVelocitySensorInitialize(void)
{
    // Compile time assertion that the GPSVelocitySensorDataPacked and GPSVelocitySensorData structs
    // have the same size (though instances of GPSVelocitySensorData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(GPSVelocitySensorDataPacked) == sizeof(GPSVelocitySensorData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(GPSVELOCITYSENSOR_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(GPSVELOCITYSENSOR_OBJID,
        GPSVELOCITYSENSOR_ISSINGLEINST, GPSVELOCITYSENSOR_ISSETTINGS, GPSVELOCITYSENSOR_ISPRIORITY, GPSVELOCITYSENSOR_NUMBYTES, &GPSVelocitySensorSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void GPSVelocitySensorSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    GPSVelocitySensorData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(GPSVelocitySensorData));

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
        metadata.telemetryUpdatePeriod = 1000;
        metadata.gcsTelemetryUpdatePeriod = 0;
        metadata.loggingUpdatePeriod = 0;
        UAVObjSetMetadata(obj, &metadata);
    }
}

/**
 * Get object handle
 */
UAVObjHandle GPSVelocitySensorHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void GPSVelocitySensorNorthSet(float *NewNorth)
{
    UAVObjSetDataField(GPSVelocitySensorHandle(), (void *)NewNorth, offsetof(GPSVelocitySensorData, North), sizeof(float));
}
void GPSVelocitySensorNorthGet(float *NewNorth)
{
    UAVObjGetDataField(GPSVelocitySensorHandle(), (void *)NewNorth, offsetof(GPSVelocitySensorData, North), sizeof(float));
}
void GPSVelocitySensorEastSet(float *NewEast)
{
    UAVObjSetDataField(GPSVelocitySensorHandle(), (void *)NewEast, offsetof(GPSVelocitySensorData, East), sizeof(float));
}
void GPSVelocitySensorEastGet(float *NewEast)
{
    UAVObjGetDataField(GPSVelocitySensorHandle(), (void *)NewEast, offsetof(GPSVelocitySensorData, East), sizeof(float));
}
void GPSVelocitySensorDownSet(float *NewDown)
{
    UAVObjSetDataField(GPSVelocitySensorHandle(), (void *)NewDown, offsetof(GPSVelocitySensorData, Down), sizeof(float));
}
void GPSVelocitySensorDownGet(float *NewDown)
{
    UAVObjGetDataField(GPSVelocitySensorHandle(), (void *)NewDown, offsetof(GPSVelocitySensorData, Down), sizeof(float));
}


/**
 * @}
 */

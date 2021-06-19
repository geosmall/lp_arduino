/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup OAVStatus OAVStatus
 * @brief OAV Status
 *
 * Autogenerated files and functions for OAVStatus Object
 * @{ 
 *
 * @file       oavstatus.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the OAVStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: oavstatus.xml. 
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
#include "oavstatus.h"

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
int32_t OAVStatusInitialize(void)
{
    // Compile time assertion that the OAVStatusDataPacked and OAVStatusData structs
    // have the same size (though instances of OAVStatusData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(OAVStatusDataPacked) == sizeof(OAVStatusData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(OAVSTATUS_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(OAVSTATUS_OBJID,
        OAVSTATUS_ISSINGLEINST, OAVSTATUS_ISSETTINGS, OAVSTATUS_ISPRIORITY, OAVSTATUS_NUMBYTES, &OAVStatusSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void OAVStatusSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    OAVStatusData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(OAVStatusData));

    UAVObjSetInstanceData(obj, instId, &data);

    // Initialize object metadata to their default values
    if ( instId == 0 ) {
        UAVObjMetadata metadata;
        metadata.flags =
            ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
            ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
            0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
            0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
            UPDATEMODE_THROTTLED << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
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
UAVObjHandle OAVStatusHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void OAVStatusP1ValueSet( int16_t *NewP1Value )
{
    UAVObjSetDataField(OAVStatusHandle(), (void *)NewP1Value, offsetof(OAVStatusData, P1Value), 10*sizeof(int16_t));
}
void OAVStatusP1ValueGet( int16_t *NewP1Value )
{
    UAVObjGetDataField(OAVStatusHandle(), (void *)NewP1Value, offsetof(OAVStatusData, P1Value), 10*sizeof(int16_t));
}
void OAVStatusP2ValueSet( int16_t *NewP2Value )
{
    UAVObjSetDataField(OAVStatusHandle(), (void *)NewP2Value, offsetof(OAVStatusData, P2Value), 10*sizeof(int16_t));
}
void OAVStatusP2ValueGet( int16_t *NewP2Value )
{
    UAVObjGetDataField(OAVStatusHandle(), (void *)NewP2Value, offsetof(OAVStatusData, P2Value), 10*sizeof(int16_t));
}
void OAVStatusOAVGyrosSet( int16_t *NewOAVGyros )
{
    UAVObjSetDataField(OAVStatusHandle(), (void *)NewOAVGyros, offsetof(OAVStatusData, OAVGyros), 3*sizeof(int16_t));
}
void OAVStatusOAVGyrosGet( int16_t *NewOAVGyros )
{
    UAVObjGetDataField(OAVStatusHandle(), (void *)NewOAVGyros, offsetof(OAVStatusData, OAVGyros), 3*sizeof(int16_t));
}
void OAVStatusOAVAccelsSet( int16_t *NewOAVAccels )
{
    UAVObjSetDataField(OAVStatusHandle(), (void *)NewOAVAccels, offsetof(OAVStatusData, OAVAccels), 3*sizeof(int16_t));
}
void OAVStatusOAVAccelsGet( int16_t *NewOAVAccels )
{
    UAVObjGetDataField(OAVStatusHandle(), (void *)NewOAVAccels, offsetof(OAVStatusData, OAVAccels), 3*sizeof(int16_t));
}
void OAVStatusOAVAnglesSet( int16_t *NewOAVAngles )
{
    UAVObjSetDataField(OAVStatusHandle(), (void *)NewOAVAngles, offsetof(OAVStatusData, OAVAngles), 2*sizeof(int16_t));
}
void OAVStatusOAVAnglesGet( int16_t *NewOAVAngles )
{
    UAVObjGetDataField(OAVStatusHandle(), (void *)NewOAVAngles, offsetof(OAVStatusData, OAVAngles), 2*sizeof(int16_t));
}
void OAVStatusOAVTransitionSet(int16_t *NewOAVTransition)
{
    UAVObjSetDataField(OAVStatusHandle(), (void *)NewOAVTransition, offsetof(OAVStatusData, OAVTransition), sizeof(int16_t));
}
void OAVStatusOAVTransitionGet(int16_t *NewOAVTransition)
{
    UAVObjGetDataField(OAVStatusHandle(), (void *)NewOAVTransition, offsetof(OAVStatusData, OAVTransition), sizeof(int16_t));
}
void OAVStatusInitializedSet(OAVStatusInitializedOptions *NewInitialized)
{
    UAVObjSetDataField(OAVStatusHandle(), (void *)NewInitialized, offsetof(OAVStatusData, Initialized), sizeof(OAVStatusInitializedOptions));
}
void OAVStatusInitializedGet(OAVStatusInitializedOptions *NewInitialized)
{
    UAVObjGetDataField(OAVStatusHandle(), (void *)NewInitialized, offsetof(OAVStatusData, Initialized), sizeof(OAVStatusInitializedOptions));
}


/**
 * @}
 */

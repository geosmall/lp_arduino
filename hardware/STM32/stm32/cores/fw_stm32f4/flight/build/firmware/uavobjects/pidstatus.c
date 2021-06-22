/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup PIDStatus PIDStatus
 * @brief Status of a PID loop for debugging
 *
 * Autogenerated files and functions for PIDStatus Object
 * @{ 
 *
 * @file       pidstatus.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the PIDStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: pidstatus.xml. 
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
#include "pidstatus.h"

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
int32_t PIDStatusInitialize(void)
{
    // Compile time assertion that the PIDStatusDataPacked and PIDStatusData structs
    // have the same size (though instances of PIDStatusData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(PIDStatusDataPacked) == sizeof(PIDStatusData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(PIDSTATUS_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(PIDSTATUS_OBJID,
        PIDSTATUS_ISSINGLEINST, PIDSTATUS_ISSETTINGS, PIDSTATUS_ISPRIORITY, PIDSTATUS_NUMBYTES, &PIDStatusSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void PIDStatusSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    PIDStatusData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(PIDStatusData));

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
UAVObjHandle PIDStatusHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void PIDStatussetpointSet(float *Newsetpoint)
{
    UAVObjSetDataField(PIDStatusHandle(), (void *)Newsetpoint, offsetof(PIDStatusData, setpoint), sizeof(float));
}
void PIDStatussetpointGet(float *Newsetpoint)
{
    UAVObjGetDataField(PIDStatusHandle(), (void *)Newsetpoint, offsetof(PIDStatusData, setpoint), sizeof(float));
}
void PIDStatusactualSet(float *Newactual)
{
    UAVObjSetDataField(PIDStatusHandle(), (void *)Newactual, offsetof(PIDStatusData, actual), sizeof(float));
}
void PIDStatusactualGet(float *Newactual)
{
    UAVObjGetDataField(PIDStatusHandle(), (void *)Newactual, offsetof(PIDStatusData, actual), sizeof(float));
}
void PIDStatuserrorSet(float *Newerror)
{
    UAVObjSetDataField(PIDStatusHandle(), (void *)Newerror, offsetof(PIDStatusData, error), sizeof(float));
}
void PIDStatuserrorGet(float *Newerror)
{
    UAVObjGetDataField(PIDStatusHandle(), (void *)Newerror, offsetof(PIDStatusData, error), sizeof(float));
}
void PIDStatusulowSet(float *Newulow)
{
    UAVObjSetDataField(PIDStatusHandle(), (void *)Newulow, offsetof(PIDStatusData, ulow), sizeof(float));
}
void PIDStatusulowGet(float *Newulow)
{
    UAVObjGetDataField(PIDStatusHandle(), (void *)Newulow, offsetof(PIDStatusData, ulow), sizeof(float));
}
void PIDStatusuhighSet(float *Newuhigh)
{
    UAVObjSetDataField(PIDStatusHandle(), (void *)Newuhigh, offsetof(PIDStatusData, uhigh), sizeof(float));
}
void PIDStatusuhighGet(float *Newuhigh)
{
    UAVObjGetDataField(PIDStatusHandle(), (void *)Newuhigh, offsetof(PIDStatusData, uhigh), sizeof(float));
}
void PIDStatuscommandSet(float *Newcommand)
{
    UAVObjSetDataField(PIDStatusHandle(), (void *)Newcommand, offsetof(PIDStatusData, command), sizeof(float));
}
void PIDStatuscommandGet(float *Newcommand)
{
    UAVObjGetDataField(PIDStatusHandle(), (void *)Newcommand, offsetof(PIDStatusData, command), sizeof(float));
}
void PIDStatusPSet(float *NewP)
{
    UAVObjSetDataField(PIDStatusHandle(), (void *)NewP, offsetof(PIDStatusData, P), sizeof(float));
}
void PIDStatusPGet(float *NewP)
{
    UAVObjGetDataField(PIDStatusHandle(), (void *)NewP, offsetof(PIDStatusData, P), sizeof(float));
}
void PIDStatusISet(float *NewI)
{
    UAVObjSetDataField(PIDStatusHandle(), (void *)NewI, offsetof(PIDStatusData, I), sizeof(float));
}
void PIDStatusIGet(float *NewI)
{
    UAVObjGetDataField(PIDStatusHandle(), (void *)NewI, offsetof(PIDStatusData, I), sizeof(float));
}
void PIDStatusDSet(float *NewD)
{
    UAVObjSetDataField(PIDStatusHandle(), (void *)NewD, offsetof(PIDStatusData, D), sizeof(float));
}
void PIDStatusDGet(float *NewD)
{
    UAVObjGetDataField(PIDStatusHandle(), (void *)NewD, offsetof(PIDStatusData, D), sizeof(float));
}


/**
 * @}
 */

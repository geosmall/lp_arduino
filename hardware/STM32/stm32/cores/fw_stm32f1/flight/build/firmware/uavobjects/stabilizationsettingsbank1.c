/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup StabilizationSettingsBank1 StabilizationSettingsBank1
 * @brief Currently selected PID bank
 *
 * Autogenerated files and functions for StabilizationSettingsBank1 Object
 * @{ 
 *
 * @file       stabilizationsettingsbank1.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the StabilizationSettingsBank1 object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: stabilizationsettingsbank1.xml. 
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
#include "stabilizationsettingsbank1.h"

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
int32_t StabilizationSettingsBank1Initialize(void)
{
    // Compile time assertion that the StabilizationSettingsBank1DataPacked and StabilizationSettingsBank1Data structs
    // have the same size (though instances of StabilizationSettingsBank1Data
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(StabilizationSettingsBank1DataPacked) == sizeof(StabilizationSettingsBank1Data));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(STABILIZATIONSETTINGSBANK1_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(STABILIZATIONSETTINGSBANK1_OBJID,
        STABILIZATIONSETTINGSBANK1_ISSINGLEINST, STABILIZATIONSETTINGSBANK1_ISSETTINGS, STABILIZATIONSETTINGSBANK1_ISPRIORITY, STABILIZATIONSETTINGSBANK1_NUMBYTES, &StabilizationSettingsBank1SetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void StabilizationSettingsBank1SetDefaults(UAVObjHandle obj, uint16_t instId)
{
    StabilizationSettingsBank1Data data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(StabilizationSettingsBank1Data));
    data.RollRatePID.Kp = 3.000000e-03f;
    data.RollRatePID.Ki = 6.500000e-03f;
    data.RollRatePID.Kd = 3.300000e-05f;
    data.RollRatePID.ILimit = 3.000000e-01f;
    data.PitchRatePID.Kp = 3.000000e-03f;
    data.PitchRatePID.Ki = 6.500000e-03f;
    data.PitchRatePID.Kd = 3.300000e-05f;
    data.PitchRatePID.ILimit = 3.000000e-01f;
    data.YawRatePID.Kp = 6.200000e-03f;
    data.YawRatePID.Ki = 1.000000e-02f;
    data.YawRatePID.Kd = 5.000000e-05f;
    data.YawRatePID.ILimit = 3.000000e-01f;
    data.RollPI.Kp = 2.500000e+00f;
    data.RollPI.Ki = 0.000000e+00f;
    data.RollPI.ILimit = 5.000000e+01f;
    data.PitchPI.Kp = 2.500000e+00f;
    data.PitchPI.Ki = 0.000000e+00f;
    data.PitchPI.ILimit = 5.000000e+01f;
    data.YawPI.Kp = 2.500000e+00f;
    data.YawPI.Ki = 0.000000e+00f;
    data.YawPI.ILimit = 5.000000e+01f;
    data.ManualRate.Roll = 220;
    data.ManualRate.Pitch = 220;
    data.ManualRate.Yaw = 220;
    data.MaximumRate.Roll = 300;
    data.MaximumRate.Pitch = 300;
    data.MaximumRate.Yaw = 300;
    data.RollMax = 55;
    data.PitchMax = 55;
    data.YawMax = 35;
    data.StickExpo.Roll = 0;
    data.StickExpo.Pitch = 0;
    data.StickExpo.Yaw = 0;
    data.AcroInsanityFactor.Roll = 40;
    data.AcroInsanityFactor.Pitch = 40;
    data.AcroInsanityFactor.Yaw = 40;
    data.EnablePiroComp = 1;
    data.FpvCamTiltCompensation = 0;
    data.EnableThrustPIDScaling = 0;
    data.ThrustPIDScaleCurve[0] = 30;
    data.ThrustPIDScaleCurve[1] = 15;
    data.ThrustPIDScaleCurve[2] = 0;
    data.ThrustPIDScaleCurve[3] = -15;
    data.ThrustPIDScaleCurve[4] = -30;
    data.ThrustPIDScaleSource = 2;
    data.ThrustPIDScaleTarget = 0;
    data.ThrustPIDScaleAxes = 1;

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
UAVObjHandle StabilizationSettingsBank1Handle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void StabilizationSettingsBank1RollRatePIDSet( StabilizationSettingsBank1RollRatePIDData *NewRollRatePID )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewRollRatePID, offsetof(StabilizationSettingsBank1Data, RollRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank1RollRatePIDGet( StabilizationSettingsBank1RollRatePIDData *NewRollRatePID )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewRollRatePID, offsetof(StabilizationSettingsBank1Data, RollRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank1RollRatePIDArraySet( float *NewRollRatePID )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewRollRatePID, offsetof(StabilizationSettingsBank1Data, RollRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank1RollRatePIDArrayGet( float *NewRollRatePID )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewRollRatePID, offsetof(StabilizationSettingsBank1Data, RollRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank1PitchRatePIDSet( StabilizationSettingsBank1PitchRatePIDData *NewPitchRatePID )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewPitchRatePID, offsetof(StabilizationSettingsBank1Data, PitchRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank1PitchRatePIDGet( StabilizationSettingsBank1PitchRatePIDData *NewPitchRatePID )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewPitchRatePID, offsetof(StabilizationSettingsBank1Data, PitchRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank1PitchRatePIDArraySet( float *NewPitchRatePID )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewPitchRatePID, offsetof(StabilizationSettingsBank1Data, PitchRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank1PitchRatePIDArrayGet( float *NewPitchRatePID )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewPitchRatePID, offsetof(StabilizationSettingsBank1Data, PitchRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank1YawRatePIDSet( StabilizationSettingsBank1YawRatePIDData *NewYawRatePID )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewYawRatePID, offsetof(StabilizationSettingsBank1Data, YawRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank1YawRatePIDGet( StabilizationSettingsBank1YawRatePIDData *NewYawRatePID )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewYawRatePID, offsetof(StabilizationSettingsBank1Data, YawRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank1YawRatePIDArraySet( float *NewYawRatePID )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewYawRatePID, offsetof(StabilizationSettingsBank1Data, YawRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank1YawRatePIDArrayGet( float *NewYawRatePID )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewYawRatePID, offsetof(StabilizationSettingsBank1Data, YawRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank1RollPISet( StabilizationSettingsBank1RollPIData *NewRollPI )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewRollPI, offsetof(StabilizationSettingsBank1Data, RollPI), 3*sizeof(float));
}
void StabilizationSettingsBank1RollPIGet( StabilizationSettingsBank1RollPIData *NewRollPI )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewRollPI, offsetof(StabilizationSettingsBank1Data, RollPI), 3*sizeof(float));
}
void StabilizationSettingsBank1RollPIArraySet( float *NewRollPI )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewRollPI, offsetof(StabilizationSettingsBank1Data, RollPI), 3*sizeof(float));
}
void StabilizationSettingsBank1RollPIArrayGet( float *NewRollPI )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewRollPI, offsetof(StabilizationSettingsBank1Data, RollPI), 3*sizeof(float));
}
void StabilizationSettingsBank1PitchPISet( StabilizationSettingsBank1PitchPIData *NewPitchPI )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewPitchPI, offsetof(StabilizationSettingsBank1Data, PitchPI), 3*sizeof(float));
}
void StabilizationSettingsBank1PitchPIGet( StabilizationSettingsBank1PitchPIData *NewPitchPI )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewPitchPI, offsetof(StabilizationSettingsBank1Data, PitchPI), 3*sizeof(float));
}
void StabilizationSettingsBank1PitchPIArraySet( float *NewPitchPI )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewPitchPI, offsetof(StabilizationSettingsBank1Data, PitchPI), 3*sizeof(float));
}
void StabilizationSettingsBank1PitchPIArrayGet( float *NewPitchPI )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewPitchPI, offsetof(StabilizationSettingsBank1Data, PitchPI), 3*sizeof(float));
}
void StabilizationSettingsBank1YawPISet( StabilizationSettingsBank1YawPIData *NewYawPI )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewYawPI, offsetof(StabilizationSettingsBank1Data, YawPI), 3*sizeof(float));
}
void StabilizationSettingsBank1YawPIGet( StabilizationSettingsBank1YawPIData *NewYawPI )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewYawPI, offsetof(StabilizationSettingsBank1Data, YawPI), 3*sizeof(float));
}
void StabilizationSettingsBank1YawPIArraySet( float *NewYawPI )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewYawPI, offsetof(StabilizationSettingsBank1Data, YawPI), 3*sizeof(float));
}
void StabilizationSettingsBank1YawPIArrayGet( float *NewYawPI )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewYawPI, offsetof(StabilizationSettingsBank1Data, YawPI), 3*sizeof(float));
}
void StabilizationSettingsBank1ManualRateSet( StabilizationSettingsBank1ManualRateData *NewManualRate )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewManualRate, offsetof(StabilizationSettingsBank1Data, ManualRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank1ManualRateGet( StabilizationSettingsBank1ManualRateData *NewManualRate )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewManualRate, offsetof(StabilizationSettingsBank1Data, ManualRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank1ManualRateArraySet( uint16_t *NewManualRate )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewManualRate, offsetof(StabilizationSettingsBank1Data, ManualRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank1ManualRateArrayGet( uint16_t *NewManualRate )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewManualRate, offsetof(StabilizationSettingsBank1Data, ManualRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank1MaximumRateSet( StabilizationSettingsBank1MaximumRateData *NewMaximumRate )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewMaximumRate, offsetof(StabilizationSettingsBank1Data, MaximumRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank1MaximumRateGet( StabilizationSettingsBank1MaximumRateData *NewMaximumRate )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewMaximumRate, offsetof(StabilizationSettingsBank1Data, MaximumRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank1MaximumRateArraySet( uint16_t *NewMaximumRate )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewMaximumRate, offsetof(StabilizationSettingsBank1Data, MaximumRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank1MaximumRateArrayGet( uint16_t *NewMaximumRate )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewMaximumRate, offsetof(StabilizationSettingsBank1Data, MaximumRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank1RollMaxSet(uint8_t *NewRollMax)
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewRollMax, offsetof(StabilizationSettingsBank1Data, RollMax), sizeof(uint8_t));
}
void StabilizationSettingsBank1RollMaxGet(uint8_t *NewRollMax)
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewRollMax, offsetof(StabilizationSettingsBank1Data, RollMax), sizeof(uint8_t));
}
void StabilizationSettingsBank1PitchMaxSet(uint8_t *NewPitchMax)
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewPitchMax, offsetof(StabilizationSettingsBank1Data, PitchMax), sizeof(uint8_t));
}
void StabilizationSettingsBank1PitchMaxGet(uint8_t *NewPitchMax)
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewPitchMax, offsetof(StabilizationSettingsBank1Data, PitchMax), sizeof(uint8_t));
}
void StabilizationSettingsBank1YawMaxSet(uint8_t *NewYawMax)
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewYawMax, offsetof(StabilizationSettingsBank1Data, YawMax), sizeof(uint8_t));
}
void StabilizationSettingsBank1YawMaxGet(uint8_t *NewYawMax)
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewYawMax, offsetof(StabilizationSettingsBank1Data, YawMax), sizeof(uint8_t));
}
void StabilizationSettingsBank1StickExpoSet( StabilizationSettingsBank1StickExpoData *NewStickExpo )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewStickExpo, offsetof(StabilizationSettingsBank1Data, StickExpo), 3*sizeof(int8_t));
}
void StabilizationSettingsBank1StickExpoGet( StabilizationSettingsBank1StickExpoData *NewStickExpo )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewStickExpo, offsetof(StabilizationSettingsBank1Data, StickExpo), 3*sizeof(int8_t));
}
void StabilizationSettingsBank1StickExpoArraySet( int8_t *NewStickExpo )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewStickExpo, offsetof(StabilizationSettingsBank1Data, StickExpo), 3*sizeof(int8_t));
}
void StabilizationSettingsBank1StickExpoArrayGet( int8_t *NewStickExpo )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewStickExpo, offsetof(StabilizationSettingsBank1Data, StickExpo), 3*sizeof(int8_t));
}
void StabilizationSettingsBank1AcroInsanityFactorSet( StabilizationSettingsBank1AcroInsanityFactorData *NewAcroInsanityFactor )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewAcroInsanityFactor, offsetof(StabilizationSettingsBank1Data, AcroInsanityFactor), 3*sizeof(uint8_t));
}
void StabilizationSettingsBank1AcroInsanityFactorGet( StabilizationSettingsBank1AcroInsanityFactorData *NewAcroInsanityFactor )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewAcroInsanityFactor, offsetof(StabilizationSettingsBank1Data, AcroInsanityFactor), 3*sizeof(uint8_t));
}
void StabilizationSettingsBank1AcroInsanityFactorArraySet( uint8_t *NewAcroInsanityFactor )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewAcroInsanityFactor, offsetof(StabilizationSettingsBank1Data, AcroInsanityFactor), 3*sizeof(uint8_t));
}
void StabilizationSettingsBank1AcroInsanityFactorArrayGet( uint8_t *NewAcroInsanityFactor )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewAcroInsanityFactor, offsetof(StabilizationSettingsBank1Data, AcroInsanityFactor), 3*sizeof(uint8_t));
}
void StabilizationSettingsBank1EnablePiroCompSet(StabilizationSettingsBank1EnablePiroCompOptions *NewEnablePiroComp)
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewEnablePiroComp, offsetof(StabilizationSettingsBank1Data, EnablePiroComp), sizeof(StabilizationSettingsBank1EnablePiroCompOptions));
}
void StabilizationSettingsBank1EnablePiroCompGet(StabilizationSettingsBank1EnablePiroCompOptions *NewEnablePiroComp)
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewEnablePiroComp, offsetof(StabilizationSettingsBank1Data, EnablePiroComp), sizeof(StabilizationSettingsBank1EnablePiroCompOptions));
}
void StabilizationSettingsBank1FpvCamTiltCompensationSet(uint8_t *NewFpvCamTiltCompensation)
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewFpvCamTiltCompensation, offsetof(StabilizationSettingsBank1Data, FpvCamTiltCompensation), sizeof(uint8_t));
}
void StabilizationSettingsBank1FpvCamTiltCompensationGet(uint8_t *NewFpvCamTiltCompensation)
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewFpvCamTiltCompensation, offsetof(StabilizationSettingsBank1Data, FpvCamTiltCompensation), sizeof(uint8_t));
}
void StabilizationSettingsBank1EnableThrustPIDScalingSet(StabilizationSettingsBank1EnableThrustPIDScalingOptions *NewEnableThrustPIDScaling)
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewEnableThrustPIDScaling, offsetof(StabilizationSettingsBank1Data, EnableThrustPIDScaling), sizeof(StabilizationSettingsBank1EnableThrustPIDScalingOptions));
}
void StabilizationSettingsBank1EnableThrustPIDScalingGet(StabilizationSettingsBank1EnableThrustPIDScalingOptions *NewEnableThrustPIDScaling)
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewEnableThrustPIDScaling, offsetof(StabilizationSettingsBank1Data, EnableThrustPIDScaling), sizeof(StabilizationSettingsBank1EnableThrustPIDScalingOptions));
}
void StabilizationSettingsBank1ThrustPIDScaleCurveSet( int8_t *NewThrustPIDScaleCurve )
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewThrustPIDScaleCurve, offsetof(StabilizationSettingsBank1Data, ThrustPIDScaleCurve), 5*sizeof(int8_t));
}
void StabilizationSettingsBank1ThrustPIDScaleCurveGet( int8_t *NewThrustPIDScaleCurve )
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewThrustPIDScaleCurve, offsetof(StabilizationSettingsBank1Data, ThrustPIDScaleCurve), 5*sizeof(int8_t));
}
void StabilizationSettingsBank1ThrustPIDScaleSourceSet(StabilizationSettingsBank1ThrustPIDScaleSourceOptions *NewThrustPIDScaleSource)
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewThrustPIDScaleSource, offsetof(StabilizationSettingsBank1Data, ThrustPIDScaleSource), sizeof(StabilizationSettingsBank1ThrustPIDScaleSourceOptions));
}
void StabilizationSettingsBank1ThrustPIDScaleSourceGet(StabilizationSettingsBank1ThrustPIDScaleSourceOptions *NewThrustPIDScaleSource)
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewThrustPIDScaleSource, offsetof(StabilizationSettingsBank1Data, ThrustPIDScaleSource), sizeof(StabilizationSettingsBank1ThrustPIDScaleSourceOptions));
}
void StabilizationSettingsBank1ThrustPIDScaleTargetSet(StabilizationSettingsBank1ThrustPIDScaleTargetOptions *NewThrustPIDScaleTarget)
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewThrustPIDScaleTarget, offsetof(StabilizationSettingsBank1Data, ThrustPIDScaleTarget), sizeof(StabilizationSettingsBank1ThrustPIDScaleTargetOptions));
}
void StabilizationSettingsBank1ThrustPIDScaleTargetGet(StabilizationSettingsBank1ThrustPIDScaleTargetOptions *NewThrustPIDScaleTarget)
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewThrustPIDScaleTarget, offsetof(StabilizationSettingsBank1Data, ThrustPIDScaleTarget), sizeof(StabilizationSettingsBank1ThrustPIDScaleTargetOptions));
}
void StabilizationSettingsBank1ThrustPIDScaleAxesSet(StabilizationSettingsBank1ThrustPIDScaleAxesOptions *NewThrustPIDScaleAxes)
{
    UAVObjSetDataField(StabilizationSettingsBank1Handle(), (void *)NewThrustPIDScaleAxes, offsetof(StabilizationSettingsBank1Data, ThrustPIDScaleAxes), sizeof(StabilizationSettingsBank1ThrustPIDScaleAxesOptions));
}
void StabilizationSettingsBank1ThrustPIDScaleAxesGet(StabilizationSettingsBank1ThrustPIDScaleAxesOptions *NewThrustPIDScaleAxes)
{
    UAVObjGetDataField(StabilizationSettingsBank1Handle(), (void *)NewThrustPIDScaleAxes, offsetof(StabilizationSettingsBank1Data, ThrustPIDScaleAxes), sizeof(StabilizationSettingsBank1ThrustPIDScaleAxesOptions));
}


/**
 * @}
 */

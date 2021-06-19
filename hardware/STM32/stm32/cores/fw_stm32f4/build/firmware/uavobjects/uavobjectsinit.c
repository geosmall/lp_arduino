/**
 ******************************************************************************
 *
 * @file       uavobjectsinit.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Initialize all objects.
 *             Automatically generated by the UAVObjectGenerator.
 *   
 * @note       This is an automatically generated file.
 *             DO NOT modify manually.
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
#include "accelgyrosettings.h"
#include "accelsensor.h"
// #include "accelstate.h"
// #include "accessorydesired.h"
// #include "actuatorcommand.h"
// #include "actuatordesired.h"
// #include "actuatorsettings.h"
// #include "airspeedsensor.h"
// #include "airspeedsettings.h"
// #include "airspeedstate.h"
// #include "altitudefiltersettings.h"
// #include "altitudeholdsettings.h"
// #include "altitudeholdstatus.h"
// #include "attitudesettings.h"
// #include "attitudesimulated.h"
// #include "attitudestate.h"
// #include "auxmagsensor.h"
// #include "auxmagsettings.h"
// #include "barosensor.h"
#include "callbackinfo.h"
// #include "cameradesired.h"
// #include "camerastabsettings.h"
// #include "debuglogcontrol.h"
// #include "debuglogentry.h"
// #include "debuglogsettings.h"
// #include "debuglogstatus.h"
// #include "ekfconfiguration.h"
// #include "ekfstatevariance.h"
// #include "faultsettings.h"
// #include "firmwareiapobj.h"
// #include "fixedwingpathfollowersettings.h"
// #include "fixedwingpathfollowerstatus.h"
// #include "flightbatterysettings.h"
// #include "flightbatterystate.h"
// #include "flightmodesettings.h"
// #include "flightplancontrol.h"
// #include "flightplansettings.h"
// #include "flightplanstatus.h"
#include "flightstatus.h"
// #include "flighttelemetrystats.h"
// #include "gcsreceiver.h"
// #include "gcstelemetrystats.h"
// #include "gpsextendedstatus.h"
// #include "gpspositionsensor.h"
// #include "gpssatellites.h"
// #include "gpssettings.h"
// #include "gpstime.h"
// #include "gpsvelocitysensor.h"
// #include "groundpathfollowersettings.h"
// #include "groundtruth.h"
#include "gyrosensor.h"
// #include "gyrostate.h"
// #include "homelocation.h"
#include "hwsettings.h"
#include "i2cstats.h"
// #include "magsensor.h"
// #include "magstate.h"
#include "manualcontrolcommand.h"
#include "manualcontrolsettings.h"
#include "mixersettings.h"
// #include "mixerstatus.h"
#include "mpugyroaccelsettings.h"
// #include "nedaccel.h"
#include "oavcurves.h"
#include "oavflightprofiles.h"
#include "oavmixerfdbks.h"
#include "oavmixervolumes.h"
#include "oavoffsets.h"
#include "oavsettings.h"
#include "oavstatus.h"
#include "objectpersistence.h"
// #include "oplinkreceiver.h"
// #include "oplinksettings.h"
// #include "oplinkstatus.h"
// #include "osdsettings.h"
// #include "overosyncsettings.h"
// #include "overosyncstats.h"
// #include "pathaction.h"
// #include "pathdesired.h"
// #include "pathplan.h"
// #include "pathstatus.h"
// #include "pathsummary.h"
// #include "perfcounter.h"
// #include "pidstatus.h"
// #include "poilearnsettings.h"
// #include "poilocation.h"
// #include "positionstate.h"
// #include "radiocombridgestats.h"
// #include "ratedesired.h"
// #include "receiveractivity.h"
// #include "receiverstatus.h"
// #include "revocalibration.h"
// #include "revosettings.h"
// #include "sonaraltitude.h"
// #include "stabilizationbank.h"
// #include "stabilizationdesired.h"
// #include "stabilizationsettings.h"
// #include "stabilizationsettingsbank1.h"
// #include "stabilizationsettingsbank2.h"
// #include "stabilizationsettingsbank3.h"
// #include "stabilizationstatus.h"
// #include "statusgrounddrive.h"
// #include "statusvtolautotakeoff.h"
// #include "statusvtolland.h"
#include "systemalarms.h"
// #include "systemidentsettings.h"
// #include "systemidentstate.h"
#include "systemsettings.h"
#include "systemstats.h"
// #include "takeofflocation.h"
#include "taskinfo.h"
// #include "txpidsettings.h"
// #include "txpidstatus.h"
// #include "velocitydesired.h"
// #include "velocitystate.h"
// #include "vtolpathfollowersettings.h"
// #include "vtolselftuningstats.h"
#include "watchdogstatus.h"
// #include "waypoint.h"
// #include "waypointactive.h"


/**
 * Function used to initialize the first instance of each object.
 * This file is automatically updated by the UAVObjectGenerator.
 */
void UAVObjectsInitializeAll()
{
#ifdef UAVOBJ_INIT_accelgyrosettings
    AccelGyroSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_accelsensor
    AccelSensorInitialize();
#endif
#ifdef UAVOBJ_INIT_accelstate
    AccelStateInitialize();
#endif
#ifdef UAVOBJ_INIT_accessorydesired
    AccessoryDesiredInitialize();
#endif
#ifdef UAVOBJ_INIT_actuatorcommand
    ActuatorCommandInitialize();
#endif
#ifdef UAVOBJ_INIT_actuatordesired
    ActuatorDesiredInitialize();
#endif
#ifdef UAVOBJ_INIT_actuatorsettings
    ActuatorSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_airspeedsensor
    AirspeedSensorInitialize();
#endif
#ifdef UAVOBJ_INIT_airspeedsettings
    AirspeedSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_airspeedstate
    AirspeedStateInitialize();
#endif
#ifdef UAVOBJ_INIT_altitudefiltersettings
    AltitudeFilterSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_altitudeholdsettings
    AltitudeHoldSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_altitudeholdstatus
    AltitudeHoldStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_attitudesettings
    AttitudeSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_attitudesimulated
    AttitudeSimulatedInitialize();
#endif
#ifdef UAVOBJ_INIT_attitudestate
    AttitudeStateInitialize();
#endif
#ifdef UAVOBJ_INIT_auxmagsensor
    AuxMagSensorInitialize();
#endif
#ifdef UAVOBJ_INIT_auxmagsettings
    AuxMagSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_barosensor
    BaroSensorInitialize();
#endif
#ifdef UAVOBJ_INIT_callbackinfo
    CallbackInfoInitialize();
#endif
#ifdef UAVOBJ_INIT_cameradesired
    CameraDesiredInitialize();
#endif
#ifdef UAVOBJ_INIT_camerastabsettings
    CameraStabSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_debuglogcontrol
    DebugLogControlInitialize();
#endif
#ifdef UAVOBJ_INIT_debuglogentry
    DebugLogEntryInitialize();
#endif
#ifdef UAVOBJ_INIT_debuglogsettings
    DebugLogSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_debuglogstatus
    DebugLogStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_ekfconfiguration
    EKFConfigurationInitialize();
#endif
#ifdef UAVOBJ_INIT_ekfstatevariance
    EKFStateVarianceInitialize();
#endif
#ifdef UAVOBJ_INIT_faultsettings
    FaultSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_firmwareiapobj
    FirmwareIAPObjInitialize();
#endif
#ifdef UAVOBJ_INIT_fixedwingpathfollowersettings
    FixedWingPathFollowerSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_fixedwingpathfollowerstatus
    FixedWingPathFollowerStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_flightbatterysettings
    FlightBatterySettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_flightbatterystate
    FlightBatteryStateInitialize();
#endif
#ifdef UAVOBJ_INIT_flightmodesettings
    FlightModeSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_flightplancontrol
    FlightPlanControlInitialize();
#endif
#ifdef UAVOBJ_INIT_flightplansettings
    FlightPlanSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_flightplanstatus
    FlightPlanStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_flightstatus
    FlightStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_flighttelemetrystats
    FlightTelemetryStatsInitialize();
#endif
#ifdef UAVOBJ_INIT_gcsreceiver
    GCSReceiverInitialize();
#endif
#ifdef UAVOBJ_INIT_gcstelemetrystats
    GCSTelemetryStatsInitialize();
#endif
#ifdef UAVOBJ_INIT_gpsextendedstatus
    GPSExtendedStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_gpspositionsensor
    GPSPositionSensorInitialize();
#endif
#ifdef UAVOBJ_INIT_gpssatellites
    GPSSatellitesInitialize();
#endif
#ifdef UAVOBJ_INIT_gpssettings
    GPSSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_gpstime
    GPSTimeInitialize();
#endif
#ifdef UAVOBJ_INIT_gpsvelocitysensor
    GPSVelocitySensorInitialize();
#endif
#ifdef UAVOBJ_INIT_groundpathfollowersettings
    GroundPathFollowerSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_groundtruth
    GroundTruthInitialize();
#endif
#ifdef UAVOBJ_INIT_gyrosensor
    GyroSensorInitialize();
#endif
#ifdef UAVOBJ_INIT_gyrostate
    GyroStateInitialize();
#endif
#ifdef UAVOBJ_INIT_homelocation
    HomeLocationInitialize();
#endif
#ifdef UAVOBJ_INIT_hwsettings
    HwSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_i2cstats
    I2CStatsInitialize();
#endif
#ifdef UAVOBJ_INIT_magsensor
    MagSensorInitialize();
#endif
#ifdef UAVOBJ_INIT_magstate
    MagStateInitialize();
#endif
#ifdef UAVOBJ_INIT_manualcontrolcommand
    ManualControlCommandInitialize();
#endif
#ifdef UAVOBJ_INIT_manualcontrolsettings
    ManualControlSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_mixersettings
    MixerSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_mixerstatus
    MixerStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_mpugyroaccelsettings
    MPUGyroAccelSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_nedaccel
    NedAccelInitialize();
#endif
#ifdef UAVOBJ_INIT_oavcurves
    OAVCurvesInitialize();
#endif
#ifdef UAVOBJ_INIT_oavflightprofiles
    OAVFlightProfilesInitialize();
#endif
#ifdef UAVOBJ_INIT_oavmixerfdbks
    OAVMixerFdbksInitialize();
#endif
#ifdef UAVOBJ_INIT_oavmixervolumes
    OAVMixerVolumesInitialize();
#endif
#ifdef UAVOBJ_INIT_oavoffsets
    OAVOffsetsInitialize();
#endif
#ifdef UAVOBJ_INIT_oavsettings
    OAVSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_oavstatus
    OAVStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_objectpersistence
    ObjectPersistenceInitialize();
#endif
#ifdef UAVOBJ_INIT_oplinkreceiver
    OPLinkReceiverInitialize();
#endif
#ifdef UAVOBJ_INIT_oplinksettings
    OPLinkSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_oplinkstatus
    OPLinkStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_osdsettings
    OsdSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_overosyncsettings
    OveroSyncSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_overosyncstats
    OveroSyncStatsInitialize();
#endif
#ifdef UAVOBJ_INIT_pathaction
    PathActionInitialize();
#endif
#ifdef UAVOBJ_INIT_pathdesired
    PathDesiredInitialize();
#endif
#ifdef UAVOBJ_INIT_pathplan
    PathPlanInitialize();
#endif
#ifdef UAVOBJ_INIT_pathstatus
    PathStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_pathsummary
    PathSummaryInitialize();
#endif
#ifdef UAVOBJ_INIT_perfcounter
    PerfCounterInitialize();
#endif
#ifdef UAVOBJ_INIT_pidstatus
    PIDStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_poilearnsettings
    PoiLearnSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_poilocation
    PoiLocationInitialize();
#endif
#ifdef UAVOBJ_INIT_positionstate
    PositionStateInitialize();
#endif
#ifdef UAVOBJ_INIT_radiocombridgestats
    RadioComBridgeStatsInitialize();
#endif
#ifdef UAVOBJ_INIT_ratedesired
    RateDesiredInitialize();
#endif
#ifdef UAVOBJ_INIT_receiveractivity
    ReceiverActivityInitialize();
#endif
#ifdef UAVOBJ_INIT_receiverstatus
    ReceiverStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_revocalibration
    RevoCalibrationInitialize();
#endif
#ifdef UAVOBJ_INIT_revosettings
    RevoSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_sonaraltitude
    SonarAltitudeInitialize();
#endif
#ifdef UAVOBJ_INIT_stabilizationbank
    StabilizationBankInitialize();
#endif
#ifdef UAVOBJ_INIT_stabilizationdesired
    StabilizationDesiredInitialize();
#endif
#ifdef UAVOBJ_INIT_stabilizationsettings
    StabilizationSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_stabilizationsettingsbank1
    StabilizationSettingsBank1Initialize();
#endif
#ifdef UAVOBJ_INIT_stabilizationsettingsbank2
    StabilizationSettingsBank2Initialize();
#endif
#ifdef UAVOBJ_INIT_stabilizationsettingsbank3
    StabilizationSettingsBank3Initialize();
#endif
#ifdef UAVOBJ_INIT_stabilizationstatus
    StabilizationStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_statusgrounddrive
    StatusGroundDriveInitialize();
#endif
#ifdef UAVOBJ_INIT_statusvtolautotakeoff
    StatusVtolAutoTakeoffInitialize();
#endif
#ifdef UAVOBJ_INIT_statusvtolland
    StatusVtolLandInitialize();
#endif
#ifdef UAVOBJ_INIT_systemalarms
    SystemAlarmsInitialize();
#endif
#ifdef UAVOBJ_INIT_systemidentsettings
    SystemIdentSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_systemidentstate
    SystemIdentStateInitialize();
#endif
#ifdef UAVOBJ_INIT_systemsettings
    SystemSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_systemstats
    SystemStatsInitialize();
#endif
#ifdef UAVOBJ_INIT_takeofflocation
    TakeOffLocationInitialize();
#endif
#ifdef UAVOBJ_INIT_taskinfo
    TaskInfoInitialize();
#endif
#ifdef UAVOBJ_INIT_txpidsettings
    TxPIDSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_txpidstatus
    TxPIDStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_velocitydesired
    VelocityDesiredInitialize();
#endif
#ifdef UAVOBJ_INIT_velocitystate
    VelocityStateInitialize();
#endif
#ifdef UAVOBJ_INIT_vtolpathfollowersettings
    VtolPathFollowerSettingsInitialize();
#endif
#ifdef UAVOBJ_INIT_vtolselftuningstats
    VtolSelfTuningStatsInitialize();
#endif
#ifdef UAVOBJ_INIT_watchdogstatus
    WatchdogStatusInitialize();
#endif
#ifdef UAVOBJ_INIT_waypoint
    WaypointInitialize();
#endif
#ifdef UAVOBJ_INIT_waypointactive
    WaypointActiveInitialize();
#endif

}

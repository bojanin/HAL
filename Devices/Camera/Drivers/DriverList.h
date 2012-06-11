// Single inclusion point for drivers. In the future this file will likely be
// automatically generated by CMake.

#ifndef _CAMERA_DRIVER_LIST_H_
#define _CAMERA_DRIVER_LIST_H_

///////////////////////////////////////////////////////////////////////////////
// Global map of driver name to driver creation function pointers:
std::map<std::string,CameraDriver*(*)()> g_mCameraDriverTable;

#include "RPG/Devices/Camera/Drivers/FileReader/FileReaderDriver.h"
CameraDriverRegisteryEntry<FileReaderDriver> _FileReaderReg( "FileReader" );

#include "RPG/Devices/Camera/Drivers/Webcam/WebcamDriver.h"
CameraDriverRegisteryEntry<WebcamDriver> _WebcamReg( "Webcam" );

#include "RPG/Devices/Camera/Drivers/HDMI/HDMIDriver.h"
CameraDriverRegisteryEntry<HDMIDriver> _HDMIReg( "HDMI" );

#include "RPG/Devices/Camera/Drivers/Dvi2Pci/Dvi2PciDriver.h"
CameraDriverRegisteryEntry<Dvi2PciDriver> _Dvi2PciReg( "Dvi2Pci" );


#ifdef USE_BUMBLEBEE_2
#include "RPG/Devices/Camera/Drivers/Bumblebee2/Bumblebee2Driver.h"
CameraDriverRegisteryEntry<Bumblebee2Driver> _Bumblebee2Reg( "Bumblebee2" );
#endif

#ifdef USE_ALLIEDVISION
#include "RPG/Devices/Camera/Drivers/AlliedVision/AlliedVisionDriver.h"
CameraDriverRegisteryEntry<AlliedVisionDriver> _AlliedVisionReg( "AlliedVision" );
#endif

#ifdef USE_FIREFLY
#include "RPG/Devices/Camera/Drivers/FireFly/FireFlyDriver.h"
CameraDriverRegisteryEntry<FireFlyDriver> _FireFlyReg( "FireFly" );
#endif

#ifdef USE_KINECT
#include "RPG/Devices/Camera/Drivers/Kinect/KinectDriver.h"
CameraDriverRegisteryEntry<KinectDriver> _KinectReg( "Kinect" );
#endif

#ifdef USE_NODECAM
#include "RPG/Devices/Camera/Drivers/NodeCam/NodeCamDriver.h"
CameraDriverRegisteryEntry<NodeCamDriver> _NodeCamReg( "NodeCam" );
#endif

#endif


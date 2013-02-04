#ifndef IMULOGDRIVER_H
#define IMULOGDRIVER_H

#include "RPG/Devices/IMU/IMUDriverInterface.h"

#include <fstream>
#include <boost/thread.hpp>

class IMULogDriver : public IMUDriver
{

public:
    IMULogDriver();
    ~IMULogDriver();
    bool Init();
    void RegisterDataCallback(IMUDriverDataCallback callback);
    void RegisterDataCallback(GPSDriverDataCallback callback);

private:
    double _GetNextTime();
    static void _ThreadCaptureFunc( IMULogDriver* Ptr );

private:
    bool                    m_bHaveAccel;
    bool                    m_bHaveGyro;
    bool                    m_bHaveMag;
    bool                    m_bHaveGPS;
    std::string             m_sDataSourceDir;
    std::ifstream           m_pFileTime;
    std::ifstream           m_pFileAccel;
    std::ifstream           m_pFileGyro;
    std::ifstream           m_pFileMag;
    std::ifstream           m_pFileGPS;
    volatile bool           m_bShouldRun;
    double                  m_dNextTime;
    IMUData                 m_NextData;
    GPSData                 m_NextGPS;
    boost::thread           m_DeviceThread;
    IMUDriverDataCallback   m_IMUCallback;
    GPSDriverDataCallback   m_GPSCallback;

};

#endif // IMULOGDRIVER_H

#include <iostream>
#include "logger/incl/logger.h"
#include "../_System/mainBuild.cpp"

using namespace std;

int main()
{
    // Specify the full path to your log file
    string logFilePath = "AUTOSAR-SIMULATION/FS_AUTOSAR_V1/build/log/logfile.txt";

    // Ensure directory for log file exists
    string directory = logFilePath.substr(0, logFilePath.find_last_of('/'));
    system(("mkdir -p " + directory).c_str());

    // Initialize logger
    Logger logger(logFilePath);

    // Log messages
    logger.log("This is a log message.");

    BuildChoise(0x01);
    BuildChoise(0x02);

    logger.log("Another log message.");

    return 0;
}

#include <iostream>
#include "logger/logger.h"

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
    logger.log("Another log message.");

    return 0;
}

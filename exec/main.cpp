#include <iostream>
#include <windows.h>
#include "logger/incl/logger.h"
#include "startMenu/src/menu.cpp"
#include "../_System/mainBuild.cpp"

using namespace std;

int main()
{
    // Specify the full path to your log file
    //string logFilePath = "AUTOSAR-SIMULATION/FS_AUTOSAR_V1/build/log/logfile.txt";

    // Ensure directory for log file exists
    //string directory = logFilePath.substr(0, logFilePath.find_last_of('/'));
    //system(("mkdir -p " + directory).c_str());

    // Initialize logger
    //Logger logger(logFilePath);

    // Log messages
    //logger.log("This is a log message.");

    char tmp;

        //startMenu();

        for (char c_tmp = 0x01 ; c_tmp <= 0x0D ; c_tmp++ )
        {
            system("cls");
            BuildChoise(c_tmp);
            //logger.log("Build status - success");
            Sleep(1000);
        }

    //logger.log("Another log message.");

    return 0;
}

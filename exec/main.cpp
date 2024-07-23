#include <iostream>
#include <windows.h>

#include "logger/incl/logger.h"
#include "startMenu/src/menu.cpp"
#include "startMenu/src/checker.cpp"
#include "../_System/mainBuild.cpp"

using namespace std;

int c_flag = 1, c_temp = 1;

int mainFuncion(int temp_flag)
{
    int temp_c = 1;
    startMenu1();

    while(true)
        {
            if (checkerBUTTON_UP())
            {
                switch (temp_c)
                {
                case 1:
                    temp_c = 4;
                    startMenu4();
                        Sleep(100);
                    break;
                case 2:
                    temp_c = 1;
                    startMenu1();
                        Sleep(100);
                    break;
                case 3:
                    temp_c = 2;
                    startMenu2();
                        Sleep(100);
                    break;
                case 4:
                    temp_c = 3;
                    startMenu3();
                        Sleep(100);
                    break;
                }
            }
            if (checkerBUTTON_DOWN())
            {
                switch (temp_c)
                {
                case 1:
                    temp_c = 2;
                    startMenu2();
                        Sleep(100);
                    break;
                case 2:
                    temp_c = 3;
                    startMenu3();
                        Sleep(100);
                    break;
                case 3:
                    temp_c = 4;
                    startMenu4();
                        Sleep(100);
                    break;
                case 4:
                    temp_c = 1;
                    startMenu1();
                        Sleep(100);
                    break;
                }
            }
            if (checkerBUTTON_ENTER())
            {
                switch (temp_c)
                {
                case 1:
                    temp_flag = 1;
                        return temp_flag;
                    break;
                case 2:
                    temp_flag = 2;
                        return temp_flag;
                    break;
                case 3:
                    temp_flag = 3;
                        return temp_flag;
                    break;
                case 4:
                    temp_flag = 4;
                        return temp_flag;
                    break;
                }
            }
        }

    return 0;
}

int buildGUI()
{
    int c_temp = 1;
    BuildMenu1();

    while(true)
    {
        system("cls");
        if (checkerBUTTON_UP())
        {
            system("cls");
            cout << "UP" << endl;
        }
        if (checkerBUTTON_DOWN())
        {
            system("cls");
            cout << "DOWN" << endl;
        }
        if (checkerBUTTON_ENTER())
        {
            system("cls");
            cout << "ENTER" << endl;
        }
    }

    return 0;
}

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
    while(true)
    {
        mainFuncion(c_flag);
        switch(c_flag)
        {
            case 1:
                    buildGUI();
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

        }
    }
    //logger.log("Another log message.");

    return 0;
}

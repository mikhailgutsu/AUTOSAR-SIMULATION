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
                    break;
                case 2:
                    temp_c = 1;
                    startMenu1();
                    break;
                case 3:
                    temp_c = 2;
                    startMenu2();
                    break;
                case 4:
                    temp_c = 3;
                    startMenu3();
                    break;
                }
                Sleep(100);
            }
            if (checkerBUTTON_DOWN())
            {
                switch (temp_c)
                {
                case 1:
                    temp_c = 2;
                    startMenu2();
                    break;
                case 2:
                    temp_c = 3;
                    startMenu3();
                    break;
                case 3:
                    temp_c = 4;
                    startMenu4();
                    break;
                case 4:
                    temp_c = 1;
                    startMenu1();
                    break;
                }
                Sleep(100);
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
                Sleep(100);
            }
        }

    return 0;
}

int buildGUI(int temp_flag)
{
    int c_temp = 1;
    BuildMenu1();

    while(true)
    {
        if (checkerBUTTON_UP())
        {
            switch (c_temp)
                {
                case 1:
                    c_temp = 15;
                    BuildMenu15();
                    break;
                case 2:
                    c_temp = 1;
                    BuildMenu1();
                    break;
                case 3:
                    c_temp = 2;
                    BuildMenu2();
                    break;
                case 4:
                    c_temp = 3;
                    BuildMenu3();
                    break;
                case 5:
                    c_temp = 4;
                    BuildMenu4();
                    break;
                case 6:
                    c_temp = 5;
                    BuildMenu5();
                    break;
                case 7:
                    c_temp = 6;
                    BuildMenu6();
                    break;
                case 8:
                    c_temp = 7;
                    BuildMenu7();
                    break;
                case 9:
                    c_temp = 8;
                    BuildMenu8();
                    break;
                case 10:
                    c_temp = 9;
                    BuildMenu9();
                    break;
                case 11:
                    c_temp = 10;
                    BuildMenu10();
                    break;
                case 12:
                    c_temp = 11;
                    BuildMenu11();
                    break;
                case 13:
                    c_temp = 12;
                    BuildMenu12();
                    break;
                case 14:
                    c_temp = 13;
                    BuildMenu13();
                    break;
                case 15:
                    c_temp = 14;
                    BuildMenu14();
                    break;
                }
                Sleep(100);
        }
        if (checkerBUTTON_DOWN())
        {
            switch (c_temp)
                {
                case 14:
                    c_temp = 15;
                    BuildMenu15();
                    break;
                case 15:
                    c_temp = 1;
                    BuildMenu1();
                    break;
                case 1:
                    c_temp = 2;
                    BuildMenu2();
                    break;
                case 2:
                    c_temp = 3;
                    BuildMenu3();
                    break;
                case 3:
                    c_temp = 4;
                    BuildMenu4();
                    break;
                case 4:
                    c_temp = 5;
                    BuildMenu5();
                    break;
                case 5:
                    c_temp = 6;
                    BuildMenu6();
                    break;
                case 6:
                    c_temp = 7;
                    BuildMenu7();
                    break;
                case 7:
                    c_temp = 8;
                    BuildMenu8();
                    break;
                case 8:
                    c_temp = 9;
                    BuildMenu9();
                    break;
                case 9:
                    c_temp = 10;
                    BuildMenu10();
                    break;
                case 10:
                    c_temp = 11;
                    BuildMenu11();
                    break;
                case 11:
                    c_temp = 12;
                    BuildMenu12();
                    break;
                case 12:
                    c_temp = 13;
                    BuildMenu13();
                    break;
                case 13:
                    c_temp = 14;
                    BuildMenu14();
                    break;
                }
                Sleep(100);
        }
        if (checkerBUTTON_ENTER())
        {
            switch (c_temp)
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
                case 5:
                        temp_flag = 5;
                        return temp_flag;
                    break;
                case 6:
                        temp_flag = 6;
                        return temp_flag;
                    break;
                case 7:
                        temp_flag = 7;
                        return temp_flag;
                    break;
                case 8:
                        temp_flag = 8;
                        return temp_flag;
                    break;
                case 9:
                        temp_flag = 9;
                        return temp_flag;
                    break;
                case 10:
                        temp_flag = 10;
                        return temp_flag;
                    break;
                case 11:
                        temp_flag = 11;
                        return temp_flag;
                    break;
                case 12:
                        temp_flag = 12;
                        return temp_flag;
                    break;
                case 13:
                        temp_flag = 13;
                        return temp_flag;
                    break;
                case 14:
                        temp_flag = 14;
                        return temp_flag;
                    break;
                case 15:
                        temp_flag = 15;
                        return temp_flag;
                    break;
                }
                Sleep(100);
            
            return temp_flag;
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
                    buildGUI(c_flag);
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

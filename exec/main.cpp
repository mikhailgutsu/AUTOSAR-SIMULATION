#include <iostream>
#include <windows.h>

#include "logger/incl/logger.h"
#include "startMenu/src/menu.cpp"
#include "startMenu/src/checker.cpp"
#include "../_System/mainBuild.cpp"

using namespace std;

int mainFuncion()
{
    int temp_c = 1;

    while(true)
        {
            //<---------------------------------------------------------    Trigger -> BTN_UP
            if (checkerBUTTON_UP() == 0x01)
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

            //<---------------------------------------------------------    Trigger -> BTN_DOWN
            if (checkerBUTTON_DOWN() == 0x01)
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

            //<---------------------------------------------------------    Trigger -> BTN_ENTER/RETURN
            if (checkerBUTTON_ENTER() == 0x01)
            {
                return temp_c;
                Sleep(100);
            }
        }
}

int buildGUI()
{
    int c_temp = 1;

    while(true)
    {
        //<---------------------------------------------------------    Trigger -> BTN_UP
        if (checkerBUTTON_UP() == 0x01)
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

        //<---------------------------------------------------------    Trigger -> BTN_DOWN
        if (checkerBUTTON_DOWN() == 0x01)
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

        //<---------------------------------------------------------    Trigger -> BTN_ENTER/RETURN
        if (checkerBUTTON_ENTER() == 0x01)
        {
            return c_temp;
            Sleep(100);
        }

        //<---------------------------------------------------------    Trigger -> BTN_ESC
        if (checkerBUTTON_ESCAPE())
        {
            c_temp = 0;
            return c_temp;
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
        startMenu1();
        switch(mainFuncion())
        {
            case 1:
                system("cls");
                    BuildMenu1();
                    switch(buildGUI())
                    {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                        case 8:
                        case 9:
                        case 10:
                        case 11:
                        case 12:
                        case 13:
                        case 14:
                        case 15:
                        case 0:

                            return 0;
                        break;
                    }
            break;
            case 2:
            case 3:
            case 4:

                return 0;
            break;

        }

        
    }
    //logger.log("Another log message.");

    return 0;
}

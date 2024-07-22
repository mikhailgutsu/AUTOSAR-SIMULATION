#include <iostream>
#include <windows.h>

#include "logger/incl/logger.h"
#include "startMenu/src/menu.cpp"
#include "../_System/mainBuild.cpp"

using namespace std;

void setCursorPosition(int x, int y) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    COORD position = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
    SetConsoleCursorPosition(hConsole, position);
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

    int c_flag = 1, c_temp = 1;

    startMenu1();
    while(true)
    {

        while(c_flag == 1)
    {
            //<-------------------------------------------------------  UP_BUTTON trigger
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 1)) 
            {
                c_temp = 4;
                startMenu4();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 4)) 
            {
                c_temp = 3;
                startMenu3();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 3)) 
            {
                c_temp = 2;
                startMenu2();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 2)) 
            {
                c_temp = 1;
                startMenu1();

                Sleep(200);
            }

            //<-------------------------------------------------------  DOWN_BUTTON trigger
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 1)) 
            {
                c_temp = 2;
                startMenu2();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 2)) 
            {
                c_temp = 3;
                startMenu3();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 3)) 
            {
                c_temp = 4;
                startMenu4();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 4)) 
            {
                c_temp = 1;
                startMenu1();

                Sleep(200);
            }

            //<-------------------------------------------------------  ENTER_BUTTON trigger
            if (GetAsyncKeyState(VK_RETURN) & 0x8000)
            {
                c_flag = 2;

                switch(c_temp)
                {
                    case 1:
                        BuildMenu1();
                    break;
                    case 2:
                        //  to be continue..
                    break;
                    case 3:
                        //  to be continue..
                    break;
                    case 4:
                        //  to be continue..
                    break;
                }
            }
    }

    Sleep(1000);
    c_temp = 1;

    while(c_flag == 2);
    {
            //<-------------------------------------------------------  UP_BUTTON trigger
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 1)) 
            {
                c_temp = 15;
                BuildMenu15();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 2)) 
            {
                c_temp = 1;
                BuildMenu1();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 3)) 
            {
                c_temp = 2;
                BuildMenu2();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 4)) 
            {
                c_temp = 3;
                BuildMenu3();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 5)) 
            {
                c_temp = 4;
                BuildMenu4();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 6)) 
            {
                c_temp = 5;
                BuildMenu5();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 7)) 
            {
                c_temp = 6;
                BuildMenu6();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 8)) 
            {
                c_temp = 7;
                BuildMenu7();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 9)) 
            {
                c_temp = 8;
                BuildMenu8();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 10)) 
            {
                c_temp = 9;
                BuildMenu9();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 11)) 
            {
                c_temp = 10;
                BuildMenu10();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 12)) 
            {
                c_temp = 11;
                BuildMenu11();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 13)) 
            {
                c_temp = 12;
                BuildMenu12();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 14)) 
            {
                c_temp = 13;
                BuildMenu13();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_UP) & 0x8000) && (c_temp == 15)) 
            {
                c_temp = 14;
                BuildMenu14();

                Sleep(200);
            }

            //<-------------------------------------------------------  DOWN_BUTTON trigger
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 1)) 
            {
                c_temp = 2;
                BuildMenu2();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 2)) 
            {
                c_temp = 3;
                BuildMenu3();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 3)) 
            {
                c_temp = 4;
                BuildMenu4();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 4)) 
            {
                c_temp = 5;
                BuildMenu5();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 5)) 
            {
                c_temp = 6;
                BuildMenu6();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 6)) 
            {
                c_temp = 7;
                BuildMenu7();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 7)) 
            {
                c_temp = 8;
                BuildMenu8();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 8)) 
            {
                c_temp = 9;
                BuildMenu9();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 9)) 
            {
                c_temp = 10;
                BuildMenu10();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 10)) 
            {
                c_temp = 11;
                BuildMenu11();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 11)) 
            {
                c_temp = 12;
                BuildMenu12();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 12)) 
            {
                c_temp = 13;
                BuildMenu13();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 13)) 
            {
                c_temp = 14;
                BuildMenu14();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 14)) 
            {
                c_temp = 15;
                BuildMenu15();

                Sleep(200);
            }
            if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && (c_temp == 15)) 
            {
                c_temp = 1;
                BuildMenu1();

                Sleep(200);
            }
            
            //<-------------------------------------------------------  ENTER_BUTTON trigger
            if (GetAsyncKeyState(VK_RETURN) & 0x8000)
            {
                switch(c_temp)
                {
                    case 1:
                        //  to be continue..
                    break;
                    case 2:
                        //  to be continue..
                    break;
                    case 3:
                        //  to be continue..
                    break;
                    case 4:
                        //  to be continue..
                    break;
                    case 5:
                        //  to be continue..
                    break;
                    case 6:
                        //  to be continue..
                    break;
                    case 7:
                        //  to be continue..
                    break;
                    case 8:
                        //  to be continue..
                    break;
                    case 9:
                        //  to be continue..
                    break;
                    case 10:
                        //  to be continue..
                    break;
                    case 11:
                        //  to be continue..
                    break;
                    case 12:
                        //  to be continue..
                    break;
                    case 13:
                        //  to be continue..
                    break;
                    case 14:
                        //  to be continue..
                    break;
                    case 15:
                        //  to be continue..;
                    break;
                }
            }
        }
    }

    //logger.log("Another log message.");

    return 0;
}

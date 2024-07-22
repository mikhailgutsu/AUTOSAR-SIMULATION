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
    char c_temp = 1;
    startMenu1();

    while(true)
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
    }
    
    //logger.log("Another log message.");

    return 0;
}

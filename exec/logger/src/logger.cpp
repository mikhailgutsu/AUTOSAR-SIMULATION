#include "../incl/logger.h"
#include <iostream>
#include <ctime>

void SetColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void Logger::log(const std::string& message) {
        std::time_t now = std::time(nullptr);
        std::cout << std::ctime(&now) << "[LOG]>> " << message << std::endl;
}
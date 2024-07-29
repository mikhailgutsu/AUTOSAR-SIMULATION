#include "../incl/logger.h"
#include <iostream>
#include <ctime>

Logger::Logger() 
{

}


Logger::~Logger() 
{
}

void Logger::log(const std::string& message) {
        std::time_t now = std::time(nullptr);
        std::cout << std::ctime(&now) << ": " << message << std::endl;
}
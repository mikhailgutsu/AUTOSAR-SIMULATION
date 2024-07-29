#include "../incl/f_logger.h"
#include <iostream>
#include <ctime>

F_Logger::F_Logger(const std::string& filename) {
    logfile.open(filename, std::ios::out | std::ios::app);
    if (!logfile.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
    }
}

F_Logger::~F_Logger() {
    if (logfile.is_open()) {
        logfile.close();
    }
}

void F_Logger::log(const std::string& message) {
    if (logfile.is_open()) {
        std::time_t now = std::time(nullptr);
        logfile << std::ctime(&now) << ": " << message << std::endl;
    } else {
        std::cerr << "Logger is not open!" << std::endl;
    }
}

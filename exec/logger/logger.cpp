#include "Logger.h"

Logger::Logger(const std::string& filename)
    : logFile(filename, std::ios::app)
{
    if (!logFile.is_open()) {
        throw std::runtime_error("Unable to open log file");
    }
}

Logger::~Logger() {
    if (logFile.is_open()) {
        logFile.close();
    }
}

void Logger::log(LogLevel level, const std::string& message) {
    logFile << currentDateTime() << " [" << logLevelToString(level) << "] " << message << std::endl;
}

void Logger::debug(const std::string& message) {
    log(DEBUG, message);
}

void Logger::info(const std::string& message) {
    log(INFO, message);
}

void Logger::warning(const std::string& message) {
    log(WARNING, message);
}

void Logger::error(const std::string& message) {
    log(ERROR, message);
}

std::string Logger::currentDateTime() {
    std::time_t now = std::time(nullptr);
    char buf[80];
    std::strftime(buf, sizeof(buf), "%Y-%m-%d %X", std::localtime(&now));
    return std::string(buf);
}

std::string Logger::logLevelToString(LogLevel level) {
    switch (level) {
        case DEBUG: return "DEBUG";
        case INFO: return "INFO";
        case WARNING: return "WARNING";
        case ERROR: return "ERROR";
        default: return "UNKNOWN";
    }
}

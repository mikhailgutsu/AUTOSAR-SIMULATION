#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

class Logger {
public:
    enum LogLevel { DEBUG, INFO, WARNING, ERROR };

    Logger(const std::string& filename);
    ~Logger();

    void log(LogLevel level, const std::string& message);
    void debug(const std::string& message);
    void info(const std::string& message);
    void warning(const std::string& message);
    void error(const std::string& message);

private:
    std::ofstream logFile;

    std::string currentDateTime();
    std::string logLevelToString(LogLevel level);
};

#endif // LOGGER_H

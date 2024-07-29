#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <string>

class Logger {
private:

public:
    Logger();
    ~Logger();
    void log(const std::string& message);
};

#endif // LOGGER_H

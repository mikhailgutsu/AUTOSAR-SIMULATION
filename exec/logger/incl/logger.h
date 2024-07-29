#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <windows.h>

void SetColor(int color);

class Logger {
private:

public:
    void log(const std::string& message);
};

#endif // LOGGER_H

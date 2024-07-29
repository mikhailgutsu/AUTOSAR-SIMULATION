#ifndef F_LOGGER_H
#define F_LOGGER_H

#include <fstream>
#include <string>

class F_Logger {
private:
    std::ofstream logfile;

public:
    F_Logger(const std::string& filename);
    ~F_Logger();
    void log(const std::string& message);
};

#endif // LOGGER_H

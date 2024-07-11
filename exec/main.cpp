#include <iostream>
#include "logger/logger.h"

using namespace std;

int main()
{
    Logger logger("logfile.txt");
    logger.log("This is a log message.");
    logger.log("Another log message.");

    return 0;
}
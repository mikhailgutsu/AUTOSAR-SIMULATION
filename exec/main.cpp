#include <iostream>
#include "logger/logger.h"

using namespace std;

int main()
{
    cout << endl << "Start" << endl;

    Logger logger("logfile.txt");
    logger.log("This is a log message.");
    logger.log("Another log message.");

    cout << endl << "success" << endl;

    return 0;
}
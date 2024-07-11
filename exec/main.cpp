#include <iostream>
#include "logger/Logger.h"

using namespace std;

int main()
{
    cout << "Start" << endl;
     try {
        Logger logger("log.txt");

        logger.debug("This is a debug message");
        logger.info("This is an info message");
        logger.warning("This is a warning message");
        logger.error("This is an error message");
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
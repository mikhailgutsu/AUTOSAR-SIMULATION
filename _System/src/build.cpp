#include <iostream>
#include "../incl/build.h"

Build::Build(){}
Build::~Build(){}

char Build::All()
{
    std::cout << "Build all success" << std::endl;
    return 0x01;
}

char Build::withoutPreprecess()
{
    std::cout << "Build withoutPreprecess success" << std::endl;

    return 0x01;
}
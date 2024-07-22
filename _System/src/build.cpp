#include <iostream>
#include "../incl/build.h"

Build::Build(){}
Build::~Build(){}

char Build::All()
{
    std::cout << "Build all success" << std::endl;
    Sleep(100);
    return 0x01;
}

char Build::withoutPreprecess()
{
    std::cout << "Build withoutPreprecess success" << std::endl;
    Sleep(100);
    return 0x02;
}

char Build::Preprocess()
{
    std::cout << "Build Preprocess success" << std::endl;
    Sleep(100);
    return 0x03;
}

char Build::preprocessWithoutCusReprog()
{
    std::cout << "Build preprocessWithoutCusReprog success" << std::endl;
    Sleep(100);
    return 0x04;
}

char Build::Compile()
{
    std::cout << "Build Compile success" << std::endl;
    Sleep(100);
    return 0x05;
}

char Build::compileLink()
{
    std::cout << "Build compileLink success" << std::endl;
    Sleep(100);
    return 0x06;
}

char Build::reportGenerator()
{
    std::cout << "Build reportGenerator success" << std::endl;
    Sleep(100);
    return 0x07;
}

char Build::RUNIN_GUI_Fast()
{
    std::cout << "Build RUNIN_GUI_Fast success" << std::endl;
    Sleep(100);
    return 0x08;
}

char Build::RUNIN_GUI_Slow()
{
    std::cout << "Build RUNIN_GUI_Slow success" << std::endl;
    Sleep(100);
    return 0x09;
}

char Build::Tessy()
{
    std::cout << "Build Tessy success" << std::endl;
    Sleep(100);
    return 0x0A;
}

char Build::PCLINT()
{
    std::cout << "Build PCLINT success" << std::endl;
    Sleep(100);
    return 0x0B;
}

char Build::PCLINT_ALL()
{
    std::cout << "Build PCLINT_ALL success" << std::endl;
    Sleep(100);
    return 0x0C;
}

char Build::tresosCnf()
{
    std::cout << "Build tresosCnf success" << std::endl;
    Sleep(100);
    return 0x0D;
}


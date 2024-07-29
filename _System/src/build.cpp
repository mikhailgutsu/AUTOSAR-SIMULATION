#include "../incl/build.h"
#include <windows.h>

//STACK INCLUDE
#include "../../exec/logger/src/logger.cpp"

#include "../../work/app/app.cpp"
#include "../../work/dds/dds.cpp"
#include "../../work/mcal/mcal.cpp"
#include "../../work/rte/rte.cpp"
#include "../../work/bsw/cdd/cdd.cpp"
#include "../../work/bsw/com/com.cpp"
#include "../../work/bsw/mem/mem.cpp"
#include "../../work/bsw/sec/sec.cpp"
#include "../../work/bsw/diag/obd/obd.cpp"
///////////////

Build::Build(){}
Build::~Build(){}

char Build::All()
{
    Logger message;
    system("cls");
    Sleep(300);

    if (app_Init() == E_OK)
    {   
        SetColor(10);
        message.log("Initialization APP - passed");
    }
    Sleep(200);
    if (dds_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization DDS - passed");
    }
    Sleep(200);
    if (mcal_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization MCAL - passed");
    }
    Sleep(200);
    if (rte_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization RTE - passed");
    }
    Sleep(200);
    if (cdd_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization CDD - passed");
    }
    Sleep(200);
    if (com_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization COM - passed");
    }
    Sleep(200);
    if (mem_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization MEM - passed");
    }
    Sleep(200);
    if (sec_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization SEC - passed");
    }
    Sleep(200);
    if (obd_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization OBD - passed");
    }
    Sleep(2000);

    SetColor(15);

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


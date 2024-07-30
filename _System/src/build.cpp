#include "../incl/build.h"
#include <windows.h>

//DEFINE USER
#define E_OK                 0x01
#define E_NOT_OK             0x00
//////////////////////////////

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

char Init_Checker()
{
    Logger message;
    char RetVal = E_NOT_OK;
    int counter = 0;

    if (app_Init() == E_OK)
    {   
        SetColor(10);
        message.log("Initialization APP - passed");
        counter++;
    }
    Sleep(200);
    if (dds_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization DDS - passed");
        counter++;
    }
    Sleep(200);
    if (mcal_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization MCAL - passed");
        counter++;
    }
    Sleep(200);
    if (rte_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization RTE - passed");
        counter++;
    }
    Sleep(200);
    if (cdd_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization CDD - passed");
        counter++;
    }
    Sleep(200);
    if (com_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization COM - passed");
        counter++;
    }
    Sleep(200);
    if (mem_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization MEM - passed");
        counter++;
    }
    Sleep(200);
    if (sec_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization SEC - passed");
        counter++;
    }
    Sleep(200);
    if (obd_Init() == E_OK)
    {
        SetColor(10);
        message.log("Initialization OBD - passed");
        counter++;
    }
    Sleep(2000);
    if(counter == 9)
    {
        RetVal = E_OK;
    }
    return RetVal;
}

Build::Build(){}
Build::~Build(){}

char Build::All()
{
    Logger message;
    system("cls");
    Sleep(500);

    if (Init_Checker() == E_OK)
    {
        message.log("Stack Initialization was done with success.");
        Sleep(500);
    }
    SetColor(15);
    return 0x01;
}

char Build::withoutPreprecess()
{
    Logger message;
    system("cls");
    Sleep(500);

    if (Init_Checker() == E_OK)
    {
        message.log("Stack Initialization was done with success.");
        Sleep(500);
    }
    SetColor(15);
    return 0x02;
}

char Build::Preprocess()
{
    Logger message;
    system("cls");
    Sleep(500);

    if (Init_Checker() == E_OK)
    {
        message.log("Stack Initialization was done with success.");
        Sleep(500);
    }
    SetColor(15);
    return 0x03;
}

char Build::preprocessWithoutCusReprog()
{
    Logger message;
    system("cls");
    Sleep(500);

    if (Init_Checker() == E_OK)
    {
        message.log("Stack Initialization was done with success.");
        Sleep(500);
    }
    SetColor(15);
    return 0x04;
}

char Build::Compile()
{
    Logger message;
    system("cls");
    Sleep(500);

    if (Init_Checker() == E_OK)
    {
        message.log("Stack Initialization was done with success.");
        Sleep(500);
    }
    SetColor(15);
    return 0x05;
}

char Build::compileLink()
{
    Logger message;
    system("cls");
    Sleep(500);

    if (Init_Checker() == E_OK)
    {
        message.log("Stack Initialization was done with success.");
        Sleep(500);
    }
    SetColor(15);
    return 0x06;
}

char Build::reportGenerator()
{
     Logger message;
    system("cls");
    Sleep(500);

    if (Init_Checker() == E_OK)
    {
        message.log("Stack Initialization was done with success.");
        Sleep(500);
    }
    SetColor(15);
    return 0x07;
}

char Build::RUNIN_GUI_Fast()
{
    Logger message;
    system("cls");
    Sleep(500);

    if (Init_Checker() == E_OK)
    {
        message.log("Stack Initialization was done with success.");
        Sleep(500);
    }
    SetColor(15);
    return 0x08;
}

char Build::RUNIN_GUI_Slow()
{
    Logger message;
    system("cls");
    Sleep(500);

    if (Init_Checker() == E_OK)
    {
        message.log("Stack Initialization was done with success.");
        Sleep(500);
    }
    SetColor(15);
    return 0x09;
}

char Build::Tessy()
{
    Logger message;
    system("cls");
    Sleep(500);

    if (Init_Checker() == E_OK)
    {
        message.log("Stack Initialization was done with success.");
        Sleep(500);
    }
    SetColor(15);
    return 0x0A;
}

char Build::PCLINT()
{
    Logger message;
    system("cls");
    Sleep(500);

    if (Init_Checker() == E_OK)
    {
        message.log("Stack Initialization was done with success.");
        Sleep(500);
    }
    SetColor(15);
    return 0x0B;
}

char Build::PCLINT_ALL()
{
    Logger message;
    system("cls");
    Sleep(500);

    if (Init_Checker() == E_OK)
    {
        message.log("Stack Initialization was done with success.");
        Sleep(500);
    }
    SetColor(15);
    return 0x0C;
}

char Build::tresosCnf()
{
    Logger message;
    system("cls");
    Sleep(500);

    if (Init_Checker() == E_OK)
    {
        message.log("Stack Initialization was done with success.");
        Sleep(500);
    }
    SetColor(15);
    return 0x0D;
}


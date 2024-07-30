#include "src/build.cpp"

extern char BuildChoise(char tmp)
{
    std::cout << "build choise" << std::endl;

    Build b1;

    switch(tmp)
    {
        case 0x01:
            b1.All();
            break;
        case 0x02:
            b1.withoutPreprecess();
            break;
        case 0x03:
            b1.Preprocess();
            break;
        case 0x04:
            b1.preprocessWithoutCusReprog();
            break;
        case 0x05:
            b1.Compile();
            break;
        case 0x06:
            b1.compileLink();
            break;
        case 0x07:
            b1.reportGenerator();
            break;
        case 0x08:
            b1.RUNIN_GUI_Fast();
            break;
        case 0x09:
            b1.RUNIN_GUI_Slow();
            break;
        case 0x0A:
            b1.Tessy();
            break;
        case 0x0B:
            b1.PCLINT();
            break;
        case 0x0C:
            b1.PCLINT_ALL();
            break;
        case 0x0D:
            b1.tresosCnf();
            break;
        case 0x0E:
            b1.tresosCnf();
            break;

        default:
            std::cout << "default" << std::endl;
    }

    return 0x01;
}
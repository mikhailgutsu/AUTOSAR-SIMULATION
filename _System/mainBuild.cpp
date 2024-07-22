#include "src/build.cpp"

extern char BuildChoise(char tmp)
{
    std::cout << "build choise" << std::endl;

    Build b1;

    switch(tmp)
    {
        case 0x01:
            std::cout << "0x01" << std::endl;

            b1.All();
                // To be continue..
            break;
        case 0x02:
            std::cout << "0x02" << std::endl;

            b1.withoutPreprecess();
                // To be continue..
            break;
        case 0x03:
            std::cout << "0x03" << std::endl;

            b1.Preprocess();
                // To be continue..
            break;
        case 0x04:
            std::cout << "0x04" << std::endl;

            b1.preprocessWithoutCusReprog();
                // To be continue..
            break;
        case 0x05:
            std::cout << "0x05" << std::endl;

            b1.Compile();
                // To be continue..
            break;
        case 0x06:
            std::cout << "0x06" << std::endl;

            b1.compileLink();
                // To be continue..
            break;
        case 0x07:
            std::cout << "0x07" << std::endl;

            b1.reportGenerator();
                // To be continue..
            break;
        case 0x08:
            std::cout << "0x08" << std::endl;

            b1.RUNIN_GUI_Fast();
                 // To be continue..
            break;
        case 0x09:
            std::cout << "0x09" << std::endl;

            b1.RUNIN_GUI_Slow();
                 // To be continue..
            break;
        case 0x0A:
            std::cout << "0x0A" << std::endl;

            b1.Tessy();
                // To be continue..
            break;
        case 0x0B:
            std::cout << "0x0B" << std::endl;

            b1.PCLINT();
                // To be continue..
            break;
        case 0x0C:
            std::cout << "0x0C" << std::endl;

            b1.PCLINT_ALL();
                // To be continue..
            break;
        case 0x0D:
            std::cout << "0x0D" << std::endl;

            b1.tresosCnf();
                // To be continue..
            break;
        default:
            std::cout << "default" << std::endl;
    }

    return 0x01;
}
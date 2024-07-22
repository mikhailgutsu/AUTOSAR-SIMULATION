#include <iostream>
#include "src/build.cpp"

using namespace std;

extern char BuildChoise(char tmp)
{
    cout << "build choise" << endl;

    Build b1;

    switch(tmp)
    {
        case 0x01:
            cout << "0x01" << endl;

            b1.All();
                // To be continue..
            break;
        case 0x02:
            cout << "0x02" << endl;

            b1.withoutPreprecess();
                // To be continue..
            break;
        case 0x03:
            cout << "0x03" << endl;

            b1.Preprocess();
                // To be continue..
            break;
        case 0x04:
            cout << "0x04" << endl;

            b1.preprocessWithoutCusReprog();
                // To be continue..
            break;
        case 0x05:
            cout << "0x05" << endl;

            b1.Compile();
                // To be continue..
            break;
        case 0x06:
            cout << "0x06" << endl;

            b1.compileLink();
                // To be continue..
            break;
        case 0x07:
            cout << "0x07" << endl;

            b1.reportGenerator();
                // To be continue..
            break;
        case 0x08:
            cout << "0x08" << endl;

            b1.RUNIN_GUI_Fast();
                 // To be continue..
            break;
        case 0x09:
            cout << "0x09" << endl;

            b1.RUNIN_GUI_Slow();
                 // To be continue..
            break;
        case 0x0A:
            cout << "0x0A" << endl;

            b1.Tessy();
                // To be continue..
            break;
        case 0x0B:
            cout << "0x0B" << endl;

            b1.PCLINT();
                // To be continue..
            break;
        case 0x0C:
            cout << "0x0C" << endl;

            b1.PCLINT_ALL();
                // To be continue..
            break;
        case 0x0D:
            cout << "0x0D" << endl;

            b1.tresosCnf();
                // To be continue..
            break;
        default:
            cout << "default" << endl;
    }

    return 0x01;
}
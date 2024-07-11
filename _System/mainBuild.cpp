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
        default:
            cout << "default" << endl;
    }

    return 0x01;
}
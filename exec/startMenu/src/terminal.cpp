#include "../incl/terminal.h"

void terminalLoading()
{
    for(int i = 0 ; i < 2 ; i++)
    {
        system("cls");
    std::cout << "\\";
    Sleep(50);

        system("cls");
        std::cout << "|";
        Sleep(50);

    system("cls");
    std::cout << "/";
    Sleep(50);

        system("cls");
        std::cout << "-";
        Sleep(50);
    }
    system("cls");
}

void terminalWelcome()
{
    terminalLoading();

    std::cout << "Terminal v1.0 [AUTOSAR-SIMULATION]" << std::endl;
    std::cout << "(c) https://github.com/mikhailgutsu/AUTOSAR-SIMULATION/" << std::endl;

    std::cout << "&projectPATH:\\Admin >> ";
}

void terminalHelp()
{
    std::cout << std::endl << std::endl << "----- Command Panel -------------------------------" << std::endl;
    std::cout << "  1.  --main" << std::endl;
    std::cout << "  2.  bbb" << std::endl;
    std::cout << "  3.  ccc" << std::endl;
    std::cout << "  4.  ddd" << std::endl;
    std::cout << "  5.  eee" << std::endl;
    std::cout << "  6.  fff" << std::endl << std::endl;

    system("pause"); 
}

int terminal()
{
    system("cls");
    
    std::pmr::string commandINPUT;
    int commandINPUT_ID = 0;

    while(true)
    {
        terminalWelcome();

        std::cin >> commandINPUT;
        if (commandINPUT == "/help")
        {
            commandINPUT_ID = 1;
        }
        if (commandINPUT == "--main")
        {
            commandINPUT_ID = 2;
        }

        switch(commandINPUT_ID)
        {
            case 0:
                    system("cls");
                    std::cout << commandINPUT << " - Isn't internal/external command. Please use '/help' for information." << std::endl;
                break;
            case 1:
                    terminalHelp();
                break;
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                break;
        }
    }

    return 0;
}
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
    std::cout << std::endl << "Terminal v1.0 [AUTOSAR-SIMULATION]" << std::endl;
    std::cout << "(c) https://github.com/mikhailgutsu/AUTOSAR-SIMULATION/" << std::endl;

    std::cout << "&projectPATH:\\Admin >> ";
}

void terminalHelp()
{
    std::cout << std::endl << std::endl << "----- Command Panel -------------------------------" << std::endl;
    std::cout << "  1.  --main      " << std::endl;
    std::cout << "  2.  --info" << std::endl;
    std::cout << "  3.  --check DCM" << std::endl;
    std::cout << "  4.  --check COM" << std::endl;
    std::cout << "  5.  --check MEM" << std::endl;
    std::cout << "  6.  --back" << std::endl << std::endl;

    system("pause"); 
}

int terminal()
{
    bool status = TRUE;
    terminalLoading();

    std::pmr::string commandINPUT;
    int commandINPUT_ID = 0;

    while(status)
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
        if (commandINPUT == "--check DCM")
        {
            commandINPUT_ID = 3;
        }
            if (commandINPUT == "--check COM")
            {
                commandINPUT_ID = 4;
            }
        if (commandINPUT == "--check MEM")
        {
            commandINPUT_ID = 5;
        }
            if (commandINPUT == "--back")
            {
                commandINPUT_ID = 6;
            }

        switch(commandINPUT_ID)
        {
            case 0:
                    std::cout << std::endl << commandINPUT << " - Isn't internal/external command. Please use '/help' for information." << std::endl;

                    system("pause");
                break;
            case 1:
                    terminalHelp();
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:
             
                break;
            case 5:
            
                break;
            case 6:
                status = FALSE;
                break;
        }
        commandINPUT_ID = 0;
    }

    return 0;
}
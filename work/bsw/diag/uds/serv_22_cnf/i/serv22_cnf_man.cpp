#include "serv22_cnf_man.h"

//<--------------------------------------------------------------------------------------------------------------- DCM CLASS
Dcm::Dcm(char x1, char x2)
{
    firstBYTE = x1;
    secondBYTE = x2;
}

Dcm::~Dcm(){}

char Dcm::Push(char temp)
{
    positiveResponse = 22 + 40;
    additionalBYTE = temp;

    std::cout << positiveResponse  << " " << firstBYTE << " " << secondBYTE << " " << additionalBYTE << std::endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//<---------------------------------------------------------------------------------------------------------------  STUBS
char VIN_GETTER(char temp)
{
    temp = VIN;
        return temp;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


char DCM_ReadDataByIdentifier_VIN_F190(char x1, char x2, int UTEST = 0)
{
    /*
        SIGNAL INFORMATION:
            MULT = 1;
            DIV = 1;
            ADD = 1;
    
        INPUT:
            unsigned char: 0x22 - SID
            unsigned char: 0xF1 - 1st BYTE
            unsigned char: 0x90 - 2nd BYTE
        
        DisplayValue:
            MUL * CoddedValue / DIV + ADD
    */

    char RetVal = DCM_IN_HOLD;
    char temp;
    VIN_GETTER(temp);

    Dcm d_temp(x1, x2);
    
    //<--------------------------------------------------------------------------------------------------------------- UTEST SEGMENT
    if ((temp == VIN) && (UTEST == 1))
    {
        RetVal = E_OK;
        d_temp.Push(temp);
        return RetVal;
    }
        else 
        {   
            d_temp.Push(temp);
            RetVal = E_NOT_OK;
            return RetVal;
        }

    return RetVal;
}
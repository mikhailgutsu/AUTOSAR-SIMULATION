#ifndef SERV22_H
#define SERV22_H

#include <iostream>

#define VIN 0xFF
#define E_OK 0x01
#define E_NOT_OK 0x00
#define DCM_IN_HOLD 0x1A

class Dcm {
private:
    char positiveResponse;
    char firstBYTE, secondBYTE;
    char additionalBYTE;

public:
    Dcm(char x1, char x2);
    ~Dcm();
    char Push(char temp);
};

char VIN_GETTER(char temp);

char DCM_ReadDataByIdentifier_VIN_F190();

#endif //SERV22_H
#ifndef CDD_H
#define CDD_H

#include "Std_Types.h"

// CDD configuration structure
struct CDD_ConfigType {
    // Add configuration parameters as needed
    uint32 parameter1;
    uint32 parameter2;
};

// CDD status structure
struct CDD_StatusType {
    // Add status parameters as needed
    uint8 status;
    uint8 error;
};

// CDD initialization function
void CDD_Init(const CDD_ConfigType* ConfigPtr);

// CDD de-initialization function
void CDD_DeInit(void);

// CDD main function for cyclic processing
void CDD_MainFunction(void);

// CDD function to read data
Std_ReturnType CDD_ReadData(uint8* dataBuffer, uint16 length);

// CDD function to write data
Std_ReturnType CDD_WriteData(const uint8* dataBuffer, uint16 length);

// CDD function to get status
void CDD_GetStatus(CDD_StatusType* StatusPtr);

#endif // CDD_H

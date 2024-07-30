#include "CDD.h"

int cdd_exec() {
    CDD_ConfigType cddConfig = { /* initialize configuration parameters */ };
    
    CDD_Init(&cddConfig);
    
    // Example cyclic task call
    while (true) {
        CDD_MainFunction();
        // Other tasks
    }
    
    CDD_DeInit();
    return 0;
}

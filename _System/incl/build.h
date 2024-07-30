#ifndef BUILD_H
#define BUILD_H

char Init_Checker();

class Build {
private:

public:
    Build();
    ~Build();
    
    //   Build Normal Options
    char All();
    char withoutPreprecess();
    char Preprocess();
    char preprocessWithoutCusReprog();
    char Compile();
    char compileLink();
    char reportGenerator();
    char RUNIN_GUI_Fast();
    char RUNIN_GUI_Slow();
    char Tessy();
    char PCLINT();
    char PCLINT_ALL();
    char tresosCnf();
};

#endif // BUILD_H
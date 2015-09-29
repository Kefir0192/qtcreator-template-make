#include "globalincludefile.h"
#include "main.h"
#include "phisic.h"



//------------------------------------------------------
// Peripheral initialization
//------------------------------------------------------
void Init_Hardware(void)
{
	// Initialize clock
    Oscillator_int();
	// Initialization GPIO
    Port_Init();
}

//------------------------------------------------------
// MAIN
//------------------------------------------------------
int main(void)
{
    // Peripheral initialization
    Init_Hardware();

    while(1) {


    }
}

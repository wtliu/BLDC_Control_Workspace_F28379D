//###########################################################################
//
// FILE:   BLDC_V0.c
//
// TITLE:  BLDC control with F2837xD.
//!
//! V0: Led Blinky
//!
//!
//
//###########################################################################

// Included Files

#include "F28x_Project.h"
#include "F2837xD_Ipc_drivers.h"
void Init_GPIO0();

// Main
void main(void)
{

// Step 1. Initialize System Control:
   InitSysCtrl();

// Step 2. Initialize GPIO:
    Init_GPIO0();

    GpioDataRegs.GPADAT.bit.GPIO0 = 1;// turn off LED

// Disable CPU interrupts
    DINT;

    InitPieCtrl();

// Disable CPU interrupts and clear all CPU interrupt flags:
    IER = 0x0000;
    IFR = 0x0000;

    InitPieVectTable();

// Enable global Interrupts and higher priority real-time debug events:
    EINT;  // Enable Global interrupt INTM
    ERTM;  // Enable Global realtime interrupt DBGM

// Step 6. IDLE loop. Just sit and loop forever (optional):
    for(;;)
    {
        // Turn on LED
        GpioDataRegs.GPADAT.bit.GPIO0 = 0;

        // Delay for a bit.
        DELAY_US(1000 * 500);

        // Turn off LED
        GpioDataRegs.GPADAT.bit.GPIO0 = 1;

        // Delay for a bit.
        DELAY_US(1000 * 500);
    }
}


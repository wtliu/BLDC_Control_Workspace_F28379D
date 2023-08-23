/*
 * Init_GPIO.c
 *
 *  Created on: Aug 23, 2023
 *      Author: VUPC
 */

#include "F2837xD_device.h"
#include "F2837xD_Examples.h"

//Port A consists of GPIO0-GPIO31
//Port B consists of GPIO32-GPIO63
//Port C consists of GPIO64-GPIO95
//Port D consists of GPIO96-GPIO127
//Port E consists of GPIO128-GPIO159
//Port F consists of GPIO160-GPIO168


void Init_GPIO0()
{
    //--------- GPIO-0
    EALLOW;

//    1. Plan the device pin-out GPyMUX1/2 and GPyGMUX1/2 registers
    GpioCtrlRegs.GPAGMUX1.bit.GPIO0 = 0;  // GPIO mode
    GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 0;   // GPIO mode

//    2. (Optional) Enable internal pullup resistors
//    GPIO pullup disable registers (GPyPUD). All pullups are disabled by default.
    GpioCtrlRegs.GPAPUD.bit.GPIO0 = 1; //0: Enables the Pull-Up. ** 1: Disables the Pull-Up.

//    3. Select input qualification
//    If the pin will be used as an input, specify the required input qualification, if any.
//    The input qualification sampling period is selected in the GPyCTRL registers,
//    while the type of qualification is selected in the GPyQSEL1 and GPyQSEL2 registers.
//    By default, all qualification is synchronous with a sampling period equal to PLLSYSCLK.

//    4. Select the direction of any general-purpose I/O pins
    GpioCtrlRegs.GPADIR.bit.GPIO0 = 1;    // 0:input. ** 1:output

//    5. Select low-power mode wake-up sources

//    6. Select external interrupt sources

//    7. Set initial value
    GpioDataRegs.GPADAT.bit.GPIO0 = 1;    // Set initial value
    EDIS;

}


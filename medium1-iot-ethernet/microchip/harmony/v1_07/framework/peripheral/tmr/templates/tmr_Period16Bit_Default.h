/*******************************************************************************
  TMR Peripheral Library Template Implementation

  File Name:
    tmr_Period16Bit_Default.h

  Summary:
    TMR PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : Period16Bit
    and its Variant : Default
    For following APIs :
        PLIB_TMR_Period16BitSet
        PLIB_TMR_Period16BitGet
        PLIB_TMR_ExistsPeriod16Bit

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2012 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _TMR_PERIOD16BIT_Default_H
#define _TMR_PERIOD16BIT_Default_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are

  VREGs:
    _TMR_PERIOD_REGISTER_16BIT_VREG(index)

  MASKs:
    _TMR_PERIOD_REGISTER_16BIT_MASK(index)

  POSs:
    _TMR_PERIOD_REGISTER_16BIT_POS(index)

  LENs:
    _TMR_PERIOD_REGISTER_16BIT_LEN(index)

*/


//******************************************************************************
/* Function :  TMR_Period16BitSet_Default

  Summary:
    Implements Default variant of PLIB_TMR_Period16BitSet

  Description:
    This template implements the Default variant of the PLIB_TMR_Period16BitSet function.
*/

PLIB_TEMPLATE void TMR_Period16BitSet_Default( TMR_MODULE_ID index , uint16_t period )
{
    /* Period Match TMR */
    _SFR_WRITE( _TMR_PERIOD_REGISTER_16BIT_VREG( index ), period );

}


//******************************************************************************
/* Function :  TMR_Period16BitGet_Default

  Summary:
    Implements Default variant of PLIB_TMR_Period16BitGet

  Description:
    This template implements the Default variant of the PLIB_TMR_Period16BitGet function.
*/

PLIB_TEMPLATE uint16_t TMR_Period16BitGet_Default( TMR_MODULE_ID index )
{
    return ( _SFR_READ( _TMR_PERIOD_REGISTER_16BIT_VREG( index ) ) );
}


//******************************************************************************
/* Function :  TMR_ExistsPeriod16Bit_Default

  Summary:
    Implements Default variant of PLIB_TMR_ExistsPeriod16Bit

  Description:
    This template implements the Default variant of the PLIB_TMR_ExistsPeriod16Bit function.
*/

#define PLIB_TMR_ExistsPeriod16Bit PLIB_TMR_ExistsPeriod16Bit
PLIB_TEMPLATE bool TMR_ExistsPeriod16Bit_Default( TMR_MODULE_ID index )
{
    return true;
}


#endif /*_TMR_PERIOD16BIT_Default_H*/

/******************************************************************************
 End of File
*/


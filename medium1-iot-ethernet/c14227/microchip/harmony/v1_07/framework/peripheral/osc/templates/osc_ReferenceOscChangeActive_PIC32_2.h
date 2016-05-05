/*******************************************************************************
  OSC Peripheral Library Template Implementation

  File Name:
    osc_ReferenceOscChangeActive_PIC32_2.h

  Summary:
    OSC PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : ReferenceOscChangeActive
    and its Variant : PIC32_2
    For following APIs :
        PLIB_OSC_ExistsReferenceOscChangeActive
        PLIB_OSC_ReferenceOscSourceChangeIsActive

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc.  All rights reserved.

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

#ifndef _OSC_REFERENCEOSCCHANGEACTIVE_PIC32_2_H
#define _OSC_REFERENCEOSCCHANGEACTIVE_PIC32_2_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    _OSC_REF_CHANGE_ACTIVE_1_VREG(index)
    _OSC_REF_CHANGE_ACTIVE_2_VREG(index)
    _OSC_REF_CHANGE_ACTIVE_3_VREG(index)
    _OSC_REF_CHANGE_ACTIVE_4_VREG(index)

  MASKs: 
    _OSC_REF_CHANGE_ACTIVE_1_MASK(index)
    _OSC_REF_CHANGE_ACTIVE_2_MASK(index)
    _OSC_REF_CHANGE_ACTIVE_3_MASK(index)
    _OSC_REF_CHANGE_ACTIVE_4_MASK(index)

  POSs: 
    _OSC_REF_CHANGE_ACTIVE_1_POS(index)
    _OSC_REF_CHANGE_ACTIVE_2_POS(index)
    _OSC_REF_CHANGE_ACTIVE_3_POS(index)
    _OSC_REF_CHANGE_ACTIVE_4_POS(index)

  LENs: 
    _OSC_REF_CHANGE_ACTIVE_1_LEN(index)
    _OSC_REF_CHANGE_ACTIVE_2_LEN(index)
    _OSC_REF_CHANGE_ACTIVE_3_LEN(index)
    _OSC_REF_CHANGE_ACTIVE_4_LEN(index)

*/


//******************************************************************************
/* Function :  OSC_ExistsReferenceOscChangeActive_PIC32_2

  Summary:
    Implements PIC32_2 variant of PLIB_OSC_ExistsReferenceOscChangeActive

  Description:
    This template implements the PIC32_2 variant of the PLIB_OSC_ExistsReferenceOscChangeActive function.
*/

#define PLIB_OSC_ExistsReferenceOscChangeActive PLIB_OSC_ExistsReferenceOscChangeActive
PLIB_TEMPLATE bool OSC_ExistsReferenceOscChangeActive_PIC32_2( OSC_MODULE_ID index )
{
    return true;
}


//******************************************************************************
/* Function :  OSC_ReferenceOscSourceChangeIsActive_PIC32_2

  Summary:
    Implements PIC32_2 variant of PLIB_OSC_ReferenceOscSourceChangeIsActive 

  Description:
    This template implements the PIC32_2 variant of the PLIB_OSC_ReferenceOscSourceChangeIsActive function.
*/

PLIB_TEMPLATE bool OSC_ReferenceOscSourceChangeIsActive_PIC32_2( OSC_MODULE_ID index , OSC_REFERENCE referenceOsc )
{

        return (_SFR_BIT_READ(_OSC_REF_CHANGE_ACTIVE_1_VREG(index)+(referenceOsc * 0x08),
                                 _OSC_REF_CHANGE_ACTIVE_1_POS(index) ));

}


#endif /*_OSC_REFERENCEOSCCHANGEACTIVE_PIC32_2_H*/

/******************************************************************************
 End of File
*/


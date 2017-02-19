/*
 * drive_out.h
 *
 *  Created on: Feb 14, 2017
 *      Author: Jon
 */

#ifndef SOURCE_DRIVE_OUT_H_
#define SOURCE_DRIVE_OUT_H_

#include "pin_mux.h"

void DRIVE_InitPinOutput(); //Used to start all output pins outputting.

void DRIVE_SetPins(int a[]); //This will set all the pin states based on the matrix passed in.

#endif /* SOURCE_DRIVE_OUT_H_ */

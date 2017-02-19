/*
 * drive_out.c
 *
 *  Created on: Feb 14, 2017
 *      Author: Jon
 */
#include "drive_out.h"
#include "fsl_gpio.h"

void DRIVE_InitPinOutput(){
	GPIO_WritePinOutput(BOARD_INITPINS_M0P0_GPIO, BOARD_INITPINS_M0P0_GPIO_PIN, 1);
	BOARD_INITPINS_M0P0_GPIO->PDDR |= (1U << BOARD_INITPINS_M0P0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M0P1_GPIO, BOARD_INITPINS_M0P1_GPIO_PIN, 1);
	BOARD_INITPINS_M0P1_GPIO->PDDR |= (1U << BOARD_INITPINS_M0P1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M0D0_GPIO, BOARD_INITPINS_M0D0_GPIO_PIN, 1);
	BOARD_INITPINS_M0D0_GPIO->PDDR |= (1U << BOARD_INITPINS_M0D0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M0D1_GPIO, BOARD_INITPINS_M0D1_GPIO_PIN, 1);
	BOARD_INITPINS_M0D1_GPIO->PDDR |= (1U << BOARD_INITPINS_M0D1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M0D2_GPIO, BOARD_INITPINS_M0D2_GPIO_PIN, 1);
	BOARD_INITPINS_M0D2_GPIO->PDDR |= (1U << BOARD_INITPINS_M0D2_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M0D3_GPIO, BOARD_INITPINS_M0D3_GPIO_PIN, 1);
	BOARD_INITPINS_M0D3_GPIO->PDDR |= (1U << BOARD_INITPINS_M0D3_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M1P0_GPIO, BOARD_INITPINS_M1P0_GPIO_PIN, 1);
	BOARD_INITPINS_M1P0_GPIO->PDDR |= (1U << BOARD_INITPINS_M1P0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M1P1_GPIO, BOARD_INITPINS_M1P1_GPIO_PIN, 1);
	BOARD_INITPINS_M1P1_GPIO->PDDR |= (1U << BOARD_INITPINS_M1P1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M1D0_GPIO, BOARD_INITPINS_M1D0_GPIO_PIN, 1);
	BOARD_INITPINS_M1D0_GPIO->PDDR |= (1U << BOARD_INITPINS_M1D0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M1D1_GPIO, BOARD_INITPINS_M1D1_GPIO_PIN, 1);
	BOARD_INITPINS_M1D1_GPIO->PDDR |= (1U << BOARD_INITPINS_M1D1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M1D2_GPIO, BOARD_INITPINS_M1D2_GPIO_PIN, 1);
	BOARD_INITPINS_M1D2_GPIO->PDDR |= (1U << BOARD_INITPINS_M1D2_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M1D3_GPIO, BOARD_INITPINS_M1D3_GPIO_PIN, 1);
	BOARD_INITPINS_M1D3_GPIO->PDDR |= (1U << BOARD_INITPINS_M1D3_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M2P0_GPIO, BOARD_INITPINS_M2P0_GPIO_PIN, 1);
	BOARD_INITPINS_M2P0_GPIO->PDDR |= (1U << BOARD_INITPINS_M2P0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M2P1_GPIO, BOARD_INITPINS_M2P1_GPIO_PIN, 1);
	BOARD_INITPINS_M2P1_GPIO->PDDR |= (1U << BOARD_INITPINS_M2P1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M2D0_GPIO, BOARD_INITPINS_M2D0_GPIO_PIN, 1);
	BOARD_INITPINS_M2D0_GPIO->PDDR |= (1U << BOARD_INITPINS_M2D0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M2D1_GPIO, BOARD_INITPINS_M2D1_GPIO_PIN, 1);
	BOARD_INITPINS_M2D1_GPIO->PDDR |= (1U << BOARD_INITPINS_M2D1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M2D2_GPIO, BOARD_INITPINS_M2D2_GPIO_PIN, 1);
	BOARD_INITPINS_M2D2_GPIO->PDDR |= (1U << BOARD_INITPINS_M2D2_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M2D3_GPIO, BOARD_INITPINS_M2D3_GPIO_PIN, 1);
	BOARD_INITPINS_M2D3_GPIO->PDDR |= (1U << BOARD_INITPINS_M2D3_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M3P0_GPIO, BOARD_INITPINS_M3P0_GPIO_PIN, 1);
	BOARD_INITPINS_M3P0_GPIO->PDDR |= (1U << BOARD_INITPINS_M3P0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M3P1_GPIO, BOARD_INITPINS_M3P1_GPIO_PIN, 1);
	BOARD_INITPINS_M3P1_GPIO->PDDR |= (1U << BOARD_INITPINS_M3P1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M3D0_GPIO, BOARD_INITPINS_M3D0_GPIO_PIN, 1);
	BOARD_INITPINS_M3D0_GPIO->PDDR |= (1U << BOARD_INITPINS_M3D0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M3D1_GPIO, BOARD_INITPINS_M3D1_GPIO_PIN, 1);
	BOARD_INITPINS_M3D1_GPIO->PDDR |= (1U << BOARD_INITPINS_M3D1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M3D2_GPIO, BOARD_INITPINS_M3D2_GPIO_PIN, 1);
	BOARD_INITPINS_M3D2_GPIO->PDDR |= (1U << BOARD_INITPINS_M3D2_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M3D3_GPIO, BOARD_INITPINS_M3D3_GPIO_PIN, 1);
	BOARD_INITPINS_M3D3_GPIO->PDDR |= (1U << BOARD_INITPINS_M3D3_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M4P0_GPIO, BOARD_INITPINS_M4P0_GPIO_PIN, 1);
	BOARD_INITPINS_M4P0_GPIO->PDDR |= (1U << BOARD_INITPINS_M4P0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M4P1_GPIO, BOARD_INITPINS_M4P1_GPIO_PIN, 1);
	BOARD_INITPINS_M4P1_GPIO->PDDR |= (1U << BOARD_INITPINS_M4P1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M4D0_GPIO, BOARD_INITPINS_M4D0_GPIO_PIN, 1);
	BOARD_INITPINS_M4D0_GPIO->PDDR |= (1U << BOARD_INITPINS_M4D0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M4D1_GPIO, BOARD_INITPINS_M4D1_GPIO_PIN, 1);
	BOARD_INITPINS_M4D1_GPIO->PDDR |= (1U << BOARD_INITPINS_M4D1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M4D2_GPIO, BOARD_INITPINS_M4D2_GPIO_PIN, 1);
	BOARD_INITPINS_M4D2_GPIO->PDDR |= (1U << BOARD_INITPINS_M4D2_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M4D3_GPIO, BOARD_INITPINS_M4D3_GPIO_PIN, 1);
	BOARD_INITPINS_M4D3_GPIO->PDDR |= (1U << BOARD_INITPINS_M4D3_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M5P0_GPIO, BOARD_INITPINS_M5P0_GPIO_PIN, 1);
	BOARD_INITPINS_M5P0_GPIO->PDDR |= (1U << BOARD_INITPINS_M5P0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M5P1_GPIO, BOARD_INITPINS_M5P1_GPIO_PIN, 1);
	BOARD_INITPINS_M5P1_GPIO->PDDR |= (1U << BOARD_INITPINS_M5P1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M5D0_GPIO, BOARD_INITPINS_M5D0_GPIO_PIN, 1);
	BOARD_INITPINS_M5D0_GPIO->PDDR |= (1U << BOARD_INITPINS_M5D0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M5D1_GPIO, BOARD_INITPINS_M5D1_GPIO_PIN, 1);
	BOARD_INITPINS_M5D1_GPIO->PDDR |= (1U << BOARD_INITPINS_M5D1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M5D2_GPIO, BOARD_INITPINS_M5D2_GPIO_PIN, 1);
	BOARD_INITPINS_M5D2_GPIO->PDDR |= (1U << BOARD_INITPINS_M5D2_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M5D3_GPIO, BOARD_INITPINS_M5D3_GPIO_PIN, 1);
	BOARD_INITPINS_M5D3_GPIO->PDDR |= (1U << BOARD_INITPINS_M5D3_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M6P0_GPIO, BOARD_INITPINS_M6P0_GPIO_PIN, 1);
	BOARD_INITPINS_M6P0_GPIO->PDDR |= (1U << BOARD_INITPINS_M6P0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M6P1_GPIO, BOARD_INITPINS_M6P1_GPIO_PIN, 1);
	BOARD_INITPINS_M6P1_GPIO->PDDR |= (1U << BOARD_INITPINS_M6P1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M6D0_GPIO, BOARD_INITPINS_M6D0_GPIO_PIN, 1);
	BOARD_INITPINS_M6D0_GPIO->PDDR |= (1U << BOARD_INITPINS_M6D0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M6D1_GPIO, BOARD_INITPINS_M6D1_GPIO_PIN, 1);
	BOARD_INITPINS_M6D1_GPIO->PDDR |= (1U << BOARD_INITPINS_M6D1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M6D2_GPIO, BOARD_INITPINS_M6D2_GPIO_PIN, 1);
	BOARD_INITPINS_M6D2_GPIO->PDDR |= (1U << BOARD_INITPINS_M6D2_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M6D3_GPIO, BOARD_INITPINS_M6D3_GPIO_PIN, 1);
	BOARD_INITPINS_M6D3_GPIO->PDDR |= (1U << BOARD_INITPINS_M6D3_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M7P0_GPIO, BOARD_INITPINS_M7P0_GPIO_PIN, 1);
	BOARD_INITPINS_M7P0_GPIO->PDDR |= (1U << BOARD_INITPINS_M7P0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M7P1_GPIO, BOARD_INITPINS_M7P1_GPIO_PIN, 1);
	BOARD_INITPINS_M7P1_GPIO->PDDR |= (1U << BOARD_INITPINS_M7P1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M7D0_GPIO, BOARD_INITPINS_M7D0_GPIO_PIN, 1);
	BOARD_INITPINS_M7D0_GPIO->PDDR |= (1U << BOARD_INITPINS_M7D0_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M7D1_GPIO, BOARD_INITPINS_M7D1_GPIO_PIN, 1);
	BOARD_INITPINS_M7D1_GPIO->PDDR |= (1U << BOARD_INITPINS_M7D1_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M7D2_GPIO, BOARD_INITPINS_M7D2_GPIO_PIN, 1);
	BOARD_INITPINS_M7D2_GPIO->PDDR |= (1U << BOARD_INITPINS_M7D2_GPIO_PIN);

	GPIO_WritePinOutput(BOARD_INITPINS_M7D3_GPIO, BOARD_INITPINS_M7D3_GPIO_PIN, 1);
	BOARD_INITPINS_M7D3_GPIO->PDDR |= (1U << BOARD_INITPINS_M7D3_GPIO_PIN);
}

//This will set all the pin states based on the matrix passed in.
void DRIVE_SetPins(int curr[]){

	GPIO_WritePinOutput(BOARD_INITPINS_M0P0_GPIO, BOARD_INITPINS_M0P0_GPIO_PIN, curr[0]);
	GPIO_WritePinOutput(BOARD_INITPINS_M0D0_GPIO, BOARD_INITPINS_M0D0_GPIO_PIN, curr[1]);
	GPIO_WritePinOutput(BOARD_INITPINS_M0D2_GPIO,BOARD_INITPINS_M0D2_GPIO_PIN, curr[2]);
	GPIO_WritePinOutput(BOARD_INITPINS_M0P1_GPIO, BOARD_INITPINS_M0P1_GPIO_PIN, curr[3]);
	GPIO_WritePinOutput(BOARD_INITPINS_M0D1_GPIO, BOARD_INITPINS_M0D1_GPIO_PIN, curr[4]);
	GPIO_WritePinOutput(BOARD_INITPINS_M0D3_GPIO,BOARD_INITPINS_M0D3_GPIO_PIN, curr[5]);
	GPIO_WritePinOutput(BOARD_INITPINS_M1P0_GPIO, BOARD_INITPINS_M1P0_GPIO_PIN, curr[6]);
	GPIO_WritePinOutput(BOARD_INITPINS_M1D0_GPIO, BOARD_INITPINS_M1D0_GPIO_PIN, curr[7]);
	GPIO_WritePinOutput(BOARD_INITPINS_M1D2_GPIO,BOARD_INITPINS_M1D2_GPIO_PIN, curr[8]);
	GPIO_WritePinOutput(BOARD_INITPINS_M1P1_GPIO, BOARD_INITPINS_M1P1_GPIO_PIN, curr[9]);
	GPIO_WritePinOutput(BOARD_INITPINS_M1D1_GPIO, BOARD_INITPINS_M1D1_GPIO_PIN, curr[10]);
	GPIO_WritePinOutput(BOARD_INITPINS_M1D3_GPIO,BOARD_INITPINS_M1D3_GPIO_PIN, curr[11]);
	GPIO_WritePinOutput(BOARD_INITPINS_M2P0_GPIO, BOARD_INITPINS_M2P0_GPIO_PIN, curr[12]);
	GPIO_WritePinOutput(BOARD_INITPINS_M2D0_GPIO, BOARD_INITPINS_M2D0_GPIO_PIN, curr[13]);
	GPIO_WritePinOutput(BOARD_INITPINS_M2D2_GPIO,BOARD_INITPINS_M2D2_GPIO_PIN, curr[14]);
	GPIO_WritePinOutput(BOARD_INITPINS_M2P1_GPIO, BOARD_INITPINS_M2P1_GPIO_PIN, curr[15]);
	GPIO_WritePinOutput(BOARD_INITPINS_M2D1_GPIO, BOARD_INITPINS_M2D1_GPIO_PIN, curr[16]);
	GPIO_WritePinOutput(BOARD_INITPINS_M2D3_GPIO,BOARD_INITPINS_M2D3_GPIO_PIN, curr[17]);
	GPIO_WritePinOutput(BOARD_INITPINS_M3P0_GPIO, BOARD_INITPINS_M3P0_GPIO_PIN, curr[18]);
	GPIO_WritePinOutput(BOARD_INITPINS_M3D0_GPIO, BOARD_INITPINS_M3D0_GPIO_PIN, curr[19]);
	GPIO_WritePinOutput(BOARD_INITPINS_M3D2_GPIO,BOARD_INITPINS_M3D2_GPIO_PIN, curr[20]);
	GPIO_WritePinOutput(BOARD_INITPINS_M3P1_GPIO, BOARD_INITPINS_M3P1_GPIO_PIN, curr[21]);
	GPIO_WritePinOutput(BOARD_INITPINS_M3D1_GPIO, BOARD_INITPINS_M3D1_GPIO_PIN, curr[22]);
	GPIO_WritePinOutput(BOARD_INITPINS_M3D3_GPIO,BOARD_INITPINS_M3D3_GPIO_PIN, curr[23]);
	GPIO_WritePinOutput(BOARD_INITPINS_M4P0_GPIO, BOARD_INITPINS_M4P0_GPIO_PIN, curr[24]);
	GPIO_WritePinOutput(BOARD_INITPINS_M4D0_GPIO, BOARD_INITPINS_M4D0_GPIO_PIN, curr[25]);
	GPIO_WritePinOutput(BOARD_INITPINS_M4D2_GPIO,BOARD_INITPINS_M4D2_GPIO_PIN, curr[26]);
	GPIO_WritePinOutput(BOARD_INITPINS_M4P1_GPIO, BOARD_INITPINS_M4P1_GPIO_PIN, curr[27]);
	GPIO_WritePinOutput(BOARD_INITPINS_M4D1_GPIO, BOARD_INITPINS_M4D1_GPIO_PIN, curr[28]);
	GPIO_WritePinOutput(BOARD_INITPINS_M4D3_GPIO,BOARD_INITPINS_M4D3_GPIO_PIN, curr[29]);
	GPIO_WritePinOutput(BOARD_INITPINS_M5P0_GPIO, BOARD_INITPINS_M5P0_GPIO_PIN, curr[30]);
	GPIO_WritePinOutput(BOARD_INITPINS_M5D0_GPIO, BOARD_INITPINS_M5D0_GPIO_PIN, curr[31]);
	GPIO_WritePinOutput(BOARD_INITPINS_M5D2_GPIO,BOARD_INITPINS_M5D2_GPIO_PIN, curr[32]);
	GPIO_WritePinOutput(BOARD_INITPINS_M5P1_GPIO, BOARD_INITPINS_M5P1_GPIO_PIN, curr[33]);
	GPIO_WritePinOutput(BOARD_INITPINS_M5D1_GPIO, BOARD_INITPINS_M5D1_GPIO_PIN, curr[34]);
	GPIO_WritePinOutput(BOARD_INITPINS_M5D3_GPIO,BOARD_INITPINS_M5D3_GPIO_PIN, curr[35]);
	GPIO_WritePinOutput(BOARD_INITPINS_M6P0_GPIO, BOARD_INITPINS_M6P0_GPIO_PIN, curr[36]);
	GPIO_WritePinOutput(BOARD_INITPINS_M6D0_GPIO, BOARD_INITPINS_M6D0_GPIO_PIN, curr[37]);
	GPIO_WritePinOutput(BOARD_INITPINS_M6D2_GPIO,BOARD_INITPINS_M6D2_GPIO_PIN, curr[38]);
	GPIO_WritePinOutput(BOARD_INITPINS_M6P1_GPIO, BOARD_INITPINS_M6P1_GPIO_PIN, curr[39]);
	GPIO_WritePinOutput(BOARD_INITPINS_M6D1_GPIO, BOARD_INITPINS_M6D1_GPIO_PIN, curr[40]);
	GPIO_WritePinOutput(BOARD_INITPINS_M6D3_GPIO,BOARD_INITPINS_M6D3_GPIO_PIN, curr[41]);
	GPIO_WritePinOutput(BOARD_INITPINS_M7P0_GPIO, BOARD_INITPINS_M7P0_GPIO_PIN, curr[42]);
	GPIO_WritePinOutput(BOARD_INITPINS_M7D0_GPIO, BOARD_INITPINS_M7D0_GPIO_PIN, curr[43]);
	GPIO_WritePinOutput(BOARD_INITPINS_M7D2_GPIO,BOARD_INITPINS_M7D2_GPIO_PIN, curr[44]);
	GPIO_WritePinOutput(BOARD_INITPINS_M7P1_GPIO, BOARD_INITPINS_M7P1_GPIO_PIN, curr[45]);
	GPIO_WritePinOutput(BOARD_INITPINS_M7D1_GPIO, BOARD_INITPINS_M7D1_GPIO_PIN, curr[46]);
	GPIO_WritePinOutput(BOARD_INITPINS_M7D3_GPIO,BOARD_INITPINS_M7D3_GPIO_PIN, curr[47]);

};
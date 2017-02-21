/*
 * Copyright (c) 2013 - 2016, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * This is template for main module created by New Kinetis SDK 2.x Project Wizard. Enjoy!
 **/

#include "board.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "fsl_gpio.h"
#include "fsl_rtc.h"
#include "drive_out.h"

/*!
 * @brief Application entry point.
 */
void setLed(char ledCode)
{
	switch(ledCode)
	{
	default:
		//blue
	case 1:
		GPIO_SetPinsOutput(BOARD_INITPINS_LED0_GPIO, 1U << BOARD_INITPINS_LED0_GPIO_PIN);
		GPIO_SetPinsOutput(BOARD_INITPINS_LED1_GPIO, 1U << BOARD_INITPINS_LED1_GPIO_PIN);
		break;

		//red
	case 2:
		GPIO_ClearPinsOutput(BOARD_INITPINS_LED0_GPIO, 1U << BOARD_INITPINS_LED0_GPIO_PIN);
		GPIO_ClearPinsOutput(BOARD_INITPINS_LED1_GPIO, 1U << BOARD_INITPINS_LED1_GPIO_PIN);
		break;

		//green
	case 3:
		GPIO_SetPinsOutput(BOARD_INITPINS_LED0_GPIO, 1U << BOARD_INITPINS_LED0_GPIO_PIN);
		GPIO_ClearPinsOutput(BOARD_INITPINS_LED1_GPIO, 1U << BOARD_INITPINS_LED1_GPIO_PIN);
		break;
	}
}

/* Delay some time in milliseconds. */
void Delay(uint32_t milliseconds)
{
    uint32_t i;
    uint32_t j;

    for (i = 0; i < milliseconds; i++)
    {
        for (j = 0; j < 20000U; j++)
        {
            __asm("NOP");
        }
    }
}

int main(void) {
  /* Init board hardware. */
	BOARD_InitPins();
	BOARD_BootClockRUN();
	BOARD_InitDebugConsole();

	GPIO_WritePinOutput(BOARD_INITPINS_LED0_GPIO, BOARD_INITPINS_LED0_GPIO_PIN, 0);
	BOARD_INITPINS_LED0_GPIO->PDDR |= (1U << BOARD_INITPINS_LED0_GPIO_PIN);
	GPIO_WritePinOutput(BOARD_INITPINS_LED1_GPIO, BOARD_INITPINS_LED1_GPIO_PIN, 0);
	BOARD_INITPINS_LED1_GPIO->PDDR |= (1U << BOARD_INITPINS_LED1_GPIO_PIN);
	DRIVE_InitPinOutput();

  /* Add your code here */

	int i = 0;
	int k = 0;
	int j = 1;
	int l = 0;
	int prev = 2;
	int curr = 0;
	int prev_b = 1;
	int curr_b = 2;
	int temp = 0;
	int dir = 1;
	int led_matrix[48];
	int led_matrix_prev[48];

	for(l = 0; l < 48; ++l){
		led_matrix[l] = 0;
		led_matrix_prev[l] = 0;
	}

	//Init as all LEDs off.
	DRIVE_SetPins(led_matrix);
	Delay(200);

	//Run through individual colors on all output.
	for(i=0; i<3; ++i){
		for(l = 0; l < 48; l = l+3){
			led_matrix[i+l] = 1;
		}
		DRIVE_SetPins(led_matrix);
		Delay(500);
		memcpy(&led_matrix, led_matrix_prev, 48 * sizeof(int)); //Swap the all off matrix into the active matrix.
	}

	//Light up each segment sequentially.
	for(l = 0; l < 48; l = l+3){
		for(i=0; i<3; ++i){
			led_matrix[i+l] = 1;
		}
		DRIVE_SetPins(led_matrix);
		Delay(100);
		memcpy(&led_matrix, led_matrix_prev, 48 * sizeof(int)); //Swap the all off matrix into the active matrix.
	}

	led_matrix[2] = 1;
	led_matrix[12] = 1;
	led_matrix[13] = 1;
	led_matrix[14] = 1;
	led_matrix[24] = 1;
	led_matrix[37] = 1;

	while(1)
	{
		for(i = 0; i < 100000; ++i)
		{
			if(0==k){
				k=200;
				++j;
			}
			if(k<=j){
				setLed(curr);	//This sets the on board LEDs.
				DRIVE_SetPins(led_matrix);
			} else {
				setLed(prev);
				DRIVE_SetPins(led_matrix_prev);
			}
			--k;
		}
		j=1;
		prev = curr ;
		curr = curr + dir;
		if(4==curr){
			curr = 1;
		}
		if(0==curr){
			curr = 3;
		}
		memcpy(&led_matrix_prev, led_matrix, 48 * sizeof(int));
		for(i = 0; i <48; i = i+12){	//This currently just creates a progression of RGB divided up into the four columns of the display.
			if(1==led_matrix_prev[2+i]){
				if(0==led_matrix_prev[1+i]){
					led_matrix[i] = 1;
					led_matrix[i+1] = 1;
					led_matrix[i+2] = 1;
				} else {
					led_matrix[i] = 1;
					led_matrix[i+1] = 0;
					led_matrix[i+2] = 0;
				}
			} else {
				led_matrix[i] = led_matrix_prev[i+2];
				led_matrix[i+1] = led_matrix_prev[i];
				led_matrix[i+2] = led_matrix_prev[i+1];
			}
			for(l = 3; l < 12; l = l+3){
				led_matrix[i+l] = led_matrix[i];
				led_matrix[i+l+1] = led_matrix[i+1];
				led_matrix[i+l+2] = led_matrix[i+2];
			}
		}
	}


  for(;;) { /* Infinite loop to avoid leaving the main function */
    __asm("NOP"); /* something to use as a breakpoint stop while looping */
  }
}

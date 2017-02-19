/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
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
 *
 */

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_


/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/* PORTE9 (number 12), M5D0 */
#define BOARD_INITPINS_M5D0_GPIO                                           GPIOE   /*!< GPIO device name: GPIOE */
#define BOARD_INITPINS_M5D0_PORT                                           PORTE   /*!< PORT device name: PORTE */
#define BOARD_INITPINS_M5D0_GPIO_PIN                                          9U   /*!< PORTE pin index: 9 */
#define BOARD_INITPINS_M5D0_PIN_NAME                                        PTE9   /*!< Pin name */
#define BOARD_INITPINS_M5D0_LABEL                                         "M5D0"   /*!< Label */
#define BOARD_INITPINS_M5D0_NAME                                          "M5D0"   /*!< Identifier name */
#define BOARD_INITPINS_M5D0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTE10 (number 13), M5D1 */
#define BOARD_INITPINS_M5D1_GPIO                                           GPIOE   /*!< GPIO device name: GPIOE */
#define BOARD_INITPINS_M5D1_PORT                                           PORTE   /*!< PORT device name: PORTE */
#define BOARD_INITPINS_M5D1_GPIO_PIN                                         10U   /*!< PORTE pin index: 10 */
#define BOARD_INITPINS_M5D1_PIN_NAME                                       PTE10   /*!< Pin name */
#define BOARD_INITPINS_M5D1_LABEL                                         "M5D1"   /*!< Label */
#define BOARD_INITPINS_M5D1_NAME                                          "M5D1"   /*!< Identifier name */
#define BOARD_INITPINS_M5D1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* ADC0_DP1 (number 23), SA1 */
#define BOARD_INITPINS_SA1_PERIPHERAL                                       ADC0   /*!< Device name: ADC0 */
#define BOARD_INITPINS_SA1_SIGNAL                                             SE   /*!< ADC0 signal: SE */
#define BOARD_INITPINS_SA1_CHANNEL                                             1   /*!< ADC0 SE channel: 1 */
#define BOARD_INITPINS_SA1_PIN_NAME                                     ADC0_DP1   /*!< Pin name */
#define BOARD_INITPINS_SA1_LABEL                                           "SA1"   /*!< Label */
#define BOARD_INITPINS_SA1_NAME                                            "SA1"   /*!< Identifier name */

/* ADC0_DM1 (number 24), SA0 */
#define BOARD_INITPINS_SA0_PERIPHERAL                                       ADC0   /*!< Device name: ADC0 */
#define BOARD_INITPINS_SA0_SIGNAL                                             SE   /*!< ADC0 signal: SE */
#define BOARD_INITPINS_SA0_CHANNEL                                            20   /*!< ADC0 SE channel: 20 */
#define BOARD_INITPINS_SA0_PIN_NAME                                     ADC0_DM1   /*!< Pin name */
#define BOARD_INITPINS_SA0_LABEL                                           "SA0"   /*!< Label */
#define BOARD_INITPINS_SA0_NAME                                            "SA0"   /*!< Identifier name */

/* ADC1_DP1 (number 25), M2A0 */
#define BOARD_INITPINS_M2A0_PERIPHERAL                                      ADC1   /*!< Device name: ADC1 */
#define BOARD_INITPINS_M2A0_SIGNAL                                            SE   /*!< ADC1 signal: SE */
#define BOARD_INITPINS_M2A0_CHANNEL                                            1   /*!< ADC1 SE channel: 1 */
#define BOARD_INITPINS_M2A0_PIN_NAME                                    ADC1_DP1   /*!< Pin name */
#define BOARD_INITPINS_M2A0_LABEL                                         "M2A0"   /*!< Label */
#define BOARD_INITPINS_M2A0_NAME                                          "M2A0"   /*!< Identifier name */

/* ADC1_DM1 (number 26), M2A1 */
#define BOARD_INITPINS_M2A1_PERIPHERAL                                      ADC1   /*!< Device name: ADC1 */
#define BOARD_INITPINS_M2A1_SIGNAL                                            SE   /*!< ADC1 signal: SE */
#define BOARD_INITPINS_M2A1_CHANNEL                                           20   /*!< ADC1 SE channel: 20 */
#define BOARD_INITPINS_M2A1_PIN_NAME                                    ADC1_DM1   /*!< Pin name */
#define BOARD_INITPINS_M2A1_LABEL                                         "M2A1"   /*!< Label */
#define BOARD_INITPINS_M2A1_NAME                                          "M2A1"   /*!< Identifier name */

/* ADC1_DM0 (number 30), M3A1 */
#define BOARD_INITPINS_M3A1_PERIPHERAL                                      ADC1   /*!< Device name: ADC1 */
#define BOARD_INITPINS_M3A1_SIGNAL                                            SE   /*!< ADC1 signal: SE */
#define BOARD_INITPINS_M3A1_CHANNEL                                           19   /*!< ADC1 SE channel: 19 */
#define BOARD_INITPINS_M3A1_PIN_NAME                                    ADC1_DM0   /*!< Pin name */
#define BOARD_INITPINS_M3A1_LABEL                                         "M3A1"   /*!< Label */
#define BOARD_INITPINS_M3A1_NAME                                          "M3A1"   /*!< Identifier name */

/* ADC1_DP0 (number 29), M3A0 */
#define BOARD_INITPINS_M3A0_PERIPHERAL                                      ADC1   /*!< Device name: ADC1 */
#define BOARD_INITPINS_M3A0_SIGNAL                                            SE   /*!< ADC1 signal: SE */
#define BOARD_INITPINS_M3A0_CHANNEL                                            0   /*!< ADC1 SE channel: 0 */
#define BOARD_INITPINS_M3A0_PIN_NAME                                    ADC1_DP0   /*!< Pin name */
#define BOARD_INITPINS_M3A0_LABEL                                         "M3A0"   /*!< Label */
#define BOARD_INITPINS_M3A0_NAME                                          "M3A0"   /*!< Identifier name */

/* ADC0_DM0 (number 28), M1A1 */
#define BOARD_INITPINS_M1A1_PERIPHERAL                                      ADC0   /*!< Device name: ADC0 */
#define BOARD_INITPINS_M1A1_SIGNAL                                            SE   /*!< ADC0 signal: SE */
#define BOARD_INITPINS_M1A1_CHANNEL                                           19   /*!< ADC0 SE channel: 19 */
#define BOARD_INITPINS_M1A1_PIN_NAME                                    ADC0_DM0   /*!< Pin name */
#define BOARD_INITPINS_M1A1_LABEL                                         "M1A1"   /*!< Label */
#define BOARD_INITPINS_M1A1_NAME                                          "M1A1"   /*!< Identifier name */

/* ADC0_DP0 (number 27), M1A0 */
#define BOARD_INITPINS_M1A0_PERIPHERAL                                      ADC0   /*!< Device name: ADC0 */
#define BOARD_INITPINS_M1A0_SIGNAL                                            SE   /*!< ADC0 signal: SE */
#define BOARD_INITPINS_M1A0_CHANNEL                                            0   /*!< ADC0 SE channel: 0 */
#define BOARD_INITPINS_M1A0_PIN_NAME                                    ADC0_DP0   /*!< Pin name */
#define BOARD_INITPINS_M1A0_LABEL                                         "M1A0"   /*!< Label */
#define BOARD_INITPINS_M1A0_NAME                                          "M1A0"   /*!< Identifier name */

/* ADC1_SE16 (number 35), M4A0 */
#define BOARD_INITPINS_M4A0_PERIPHERAL                                      ADC1   /*!< Device name: ADC1 */
#define BOARD_INITPINS_M4A0_SIGNAL                                            SE   /*!< ADC1 signal: SE */
#define BOARD_INITPINS_M4A0_CHANNEL                                           16   /*!< ADC1 SE channel: 16 */
#define BOARD_INITPINS_M4A0_PIN_NAME                                   ADC1_SE16   /*!< Pin name */
#define BOARD_INITPINS_M4A0_LABEL                                         "M4A0"   /*!< Label */
#define BOARD_INITPINS_M4A0_NAME                                          "M4A0"   /*!< Identifier name */

/* ADC0_SE16 (number 36), M5A0 */
#define BOARD_INITPINS_M5A0_PERIPHERAL                                      ADC0   /*!< Device name: ADC0 */
#define BOARD_INITPINS_M5A0_SIGNAL                                            SE   /*!< ADC0 signal: SE */
#define BOARD_INITPINS_M5A0_CHANNEL                                           16   /*!< ADC0 SE channel: 16 */
#define BOARD_INITPINS_M5A0_PIN_NAME                                   ADC0_SE16   /*!< Pin name */
#define BOARD_INITPINS_M5A0_LABEL                                         "M5A0"   /*!< Label */
#define BOARD_INITPINS_M5A0_NAME                                          "M5A0"   /*!< Identifier name */

/* ADC1_SE18 (number 37), M0A0 */
#define BOARD_INITPINS_M0A0_PERIPHERAL                                      ADC1   /*!< Device name: ADC1 */
#define BOARD_INITPINS_M0A0_SIGNAL                                            SE   /*!< ADC1 signal: SE */
#define BOARD_INITPINS_M0A0_CHANNEL                                           18   /*!< ADC1 SE channel: 18 */
#define BOARD_INITPINS_M0A0_PIN_NAME                                   ADC1_SE18   /*!< Pin name */
#define BOARD_INITPINS_M0A0_LABEL                                         "M0A0"   /*!< Label */
#define BOARD_INITPINS_M0A0_NAME                                          "M0A0"   /*!< Identifier name */

/* ADC0_SE23 (number 38), M0A1 */
#define BOARD_INITPINS_M0A1_PERIPHERAL                                      ADC0   /*!< Device name: ADC0 */
#define BOARD_INITPINS_M0A1_SIGNAL                                            SE   /*!< ADC0 signal: SE */
#define BOARD_INITPINS_M0A1_CHANNEL                                           23   /*!< ADC0 SE channel: 23 */
#define BOARD_INITPINS_M0A1_PIN_NAME                                   ADC0_SE23   /*!< Pin name */
#define BOARD_INITPINS_M0A1_LABEL                                         "M0A1"   /*!< Label */
#define BOARD_INITPINS_M0A1_NAME                                          "M0A1"   /*!< Identifier name */

/* ADC1_SE23 (number 39), M6A1 */
#define BOARD_INITPINS_M6A1_PERIPHERAL                                      ADC1   /*!< Device name: ADC1 */
#define BOARD_INITPINS_M6A1_SIGNAL                                            SE   /*!< ADC1 signal: SE */
#define BOARD_INITPINS_M6A1_CHANNEL                                           23   /*!< ADC1 SE channel: 23 */
#define BOARD_INITPINS_M6A1_PIN_NAME                                   ADC1_SE23   /*!< Pin name */
#define BOARD_INITPINS_M6A1_LABEL                                         "M6A1"   /*!< Label */
#define BOARD_INITPINS_M6A1_NAME                                          "M6A1"   /*!< Identifier name */

/* PORTE26 (number 47), SYS_RESET */
#define BOARD_INITPINS_SYS_RESET_GPIO                                      GPIOE   /*!< GPIO device name: GPIOE */
#define BOARD_INITPINS_SYS_RESET_PORT                                      PORTE   /*!< PORT device name: PORTE */
#define BOARD_INITPINS_SYS_RESET_GPIO_PIN                                    26U   /*!< PORTE pin index: 26 */
#define BOARD_INITPINS_SYS_RESET_PIN_NAME                                  PTE26   /*!< Pin name */
#define BOARD_INITPINS_SYS_RESET_LABEL                               "SYS_RESET"   /*!< Label */
#define BOARD_INITPINS_SYS_RESET_NAME                                "SYS_RESET"   /*!< Identifier name */
#define BOARD_INITPINS_SYS_RESET_DIRECTION              kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTE27 (number 48), M5D2 */
#define BOARD_INITPINS_M5D2_GPIO                                           GPIOE   /*!< GPIO device name: GPIOE */
#define BOARD_INITPINS_M5D2_PORT                                           PORTE   /*!< PORT device name: PORTE */
#define BOARD_INITPINS_M5D2_GPIO_PIN                                         27U   /*!< PORTE pin index: 27 */
#define BOARD_INITPINS_M5D2_PIN_NAME                                       PTE27   /*!< Pin name */
#define BOARD_INITPINS_M5D2_LABEL                                         "M5D2"   /*!< Label */
#define BOARD_INITPINS_M5D2_NAME                                          "M5D2"   /*!< Identifier name */
#define BOARD_INITPINS_M5D2_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTE28 (number 49), M5D3 */
#define BOARD_INITPINS_M5D3_GPIO                                           GPIOE   /*!< GPIO device name: GPIOE */
#define BOARD_INITPINS_M5D3_PORT                                           PORTE   /*!< PORT device name: PORTE */
#define BOARD_INITPINS_M5D3_GPIO_PIN                                         28U   /*!< PORTE pin index: 28 */
#define BOARD_INITPINS_M5D3_PIN_NAME                                       PTE28   /*!< Pin name */
#define BOARD_INITPINS_M5D3_LABEL                                         "M5D3"   /*!< Label */
#define BOARD_INITPINS_M5D3_NAME                                          "M5D3"   /*!< Identifier name */
#define BOARD_INITPINS_M5D3_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTA4 (number 54), LED0 */
#define BOARD_INITPINS_LED0_GPIO                                           GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_LED0_PORT                                           PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_LED0_GPIO_PIN                                          4U   /*!< PORTA pin index: 4 */
#define BOARD_INITPINS_LED0_PIN_NAME                                        PTA4   /*!< Pin name */
#define BOARD_INITPINS_LED0_LABEL                                         "LED0"   /*!< Label */
#define BOARD_INITPINS_LED0_NAME                                          "LED0"   /*!< Identifier name */

/* PORTA5 (number 55), EXIO0 */
#define BOARD_INITPINS_EXIO0_GPIO                                          GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_EXIO0_PORT                                          PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_EXIO0_GPIO_PIN                                         5U   /*!< PORTA pin index: 5 */
#define BOARD_INITPINS_EXIO0_PIN_NAME                                       PTA5   /*!< Pin name */
#define BOARD_INITPINS_EXIO0_LABEL                                       "EXIO0"   /*!< Label */
#define BOARD_INITPINS_EXIO0_NAME                                        "EXIO0"   /*!< Identifier name */

/* PORTA7 (number 59), M6A0 */
#define BOARD_INITPINS_M6A0_PERIPHERAL                                      ADC0   /*!< Device name: ADC0 */
#define BOARD_INITPINS_M6A0_SIGNAL                                            SE   /*!< ADC0 signal: SE */
#define BOARD_INITPINS_M6A0_CHANNEL                                           10   /*!< ADC0 SE channel: 10 */
#define BOARD_INITPINS_M6A0_PIN_NAME                                   ADC0_SE10   /*!< Pin name */
#define BOARD_INITPINS_M6A0_LABEL                                         "M6A0"   /*!< Label */
#define BOARD_INITPINS_M6A0_NAME                                          "M6A0"   /*!< Identifier name */

/* PORTA10 (number 62), M4D0 */
#define BOARD_INITPINS_M4D0_GPIO                                           GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_M4D0_PORT                                           PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_M4D0_GPIO_PIN                                         10U   /*!< PORTA pin index: 10 */
#define BOARD_INITPINS_M4D0_PIN_NAME                                       PTA10   /*!< Pin name */
#define BOARD_INITPINS_M4D0_LABEL                                         "M4D0"   /*!< Label */
#define BOARD_INITPINS_M4D0_NAME                                          "M4D0"   /*!< Identifier name */
#define BOARD_INITPINS_M4D0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTA11 (number 63), M4D1 */
#define BOARD_INITPINS_M4D1_GPIO                                           GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_M4D1_PORT                                           PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_M4D1_GPIO_PIN                                         11U   /*!< PORTA pin index: 11 */
#define BOARD_INITPINS_M4D1_PIN_NAME                                       PTA11   /*!< Pin name */
#define BOARD_INITPINS_M4D1_LABEL                                         "M4D1"   /*!< Label */
#define BOARD_INITPINS_M4D1_NAME                                          "M4D1"   /*!< Identifier name */
#define BOARD_INITPINS_M4D1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTA12 (number 64), EXIO1 */
#define BOARD_INITPINS_EXIO1_GPIO                                          GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_EXIO1_PORT                                          PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_EXIO1_GPIO_PIN                                        12U   /*!< PORTA pin index: 12 */
#define BOARD_INITPINS_EXIO1_PIN_NAME                                      PTA12   /*!< Pin name */
#define BOARD_INITPINS_EXIO1_LABEL                                       "EXIO1"   /*!< Label */
#define BOARD_INITPINS_EXIO1_NAME                                        "EXIO1"   /*!< Identifier name */

/* PORTA13 (number 65), EXIO2 */
#define BOARD_INITPINS_EXIO2_GPIO                                          GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_EXIO2_PORT                                          PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_EXIO2_GPIO_PIN                                        13U   /*!< PORTA pin index: 13 */
#define BOARD_INITPINS_EXIO2_PIN_NAME                                      PTA13   /*!< Pin name */
#define BOARD_INITPINS_EXIO2_LABEL                                       "EXIO2"   /*!< Label */
#define BOARD_INITPINS_EXIO2_NAME                                        "EXIO2"   /*!< Identifier name */

/* PORTA19 (number 73), P3V3_FLAG */
#define BOARD_INITPINS_P3V3_FLAG_GPIO                                      GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_P3V3_FLAG_PORT                                      PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_P3V3_FLAG_GPIO_PIN                                    19U   /*!< PORTA pin index: 19 */
#define BOARD_INITPINS_P3V3_FLAG_PIN_NAME                                  PTA19   /*!< Pin name */
#define BOARD_INITPINS_P3V3_FLAG_LABEL                               "P3V3_FLAG"   /*!< Label */
#define BOARD_INITPINS_P3V3_FLAG_NAME                                "P3V3_FLAG"   /*!< Identifier name */

/* PORTA24 (number 75), M4D2 */
#define BOARD_INITPINS_M4D2_GPIO                                           GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_M4D2_PORT                                           PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_M4D2_GPIO_PIN                                         24U   /*!< PORTA pin index: 24 */
#define BOARD_INITPINS_M4D2_PIN_NAME                                       PTA24   /*!< Pin name */
#define BOARD_INITPINS_M4D2_LABEL                                         "M4D2"   /*!< Label */
#define BOARD_INITPINS_M4D2_NAME                                          "M4D2"   /*!< Identifier name */
#define BOARD_INITPINS_M4D2_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTA25 (number 76), M4D3 */
#define BOARD_INITPINS_M4D3_GPIO                                           GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_M4D3_PORT                                           PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_M4D3_GPIO_PIN                                         25U   /*!< PORTA pin index: 25 */
#define BOARD_INITPINS_M4D3_PIN_NAME                                       PTA25   /*!< Pin name */
#define BOARD_INITPINS_M4D3_LABEL                                         "M4D3"   /*!< Label */
#define BOARD_INITPINS_M4D3_NAME                                          "M4D3"   /*!< Identifier name */
#define BOARD_INITPINS_M4D3_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTA26 (number 77), M6D0 */
#define BOARD_INITPINS_M6D0_GPIO                                           GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_M6D0_PORT                                           PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_M6D0_GPIO_PIN                                         26U   /*!< PORTA pin index: 26 */
#define BOARD_INITPINS_M6D0_PIN_NAME                                       PTA26   /*!< Pin name */
#define BOARD_INITPINS_M6D0_LABEL                                         "M6D0"   /*!< Label */
#define BOARD_INITPINS_M6D0_NAME                                          "M6D0"   /*!< Identifier name */
#define BOARD_INITPINS_M6D0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTA27 (number 78), M6D1 */
#define BOARD_INITPINS_M6D1_GPIO                                           GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_M6D1_PORT                                           PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_M6D1_GPIO_PIN                                         27U   /*!< PORTA pin index: 27 */
#define BOARD_INITPINS_M6D1_PIN_NAME                                       PTA27   /*!< Pin name */
#define BOARD_INITPINS_M6D1_LABEL                                         "M6D1"   /*!< Label */
#define BOARD_INITPINS_M6D1_NAME                                          "M6D1"   /*!< Identifier name */
#define BOARD_INITPINS_M6D1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTA28 (number 79), M6D2 */
#define BOARD_INITPINS_M6D2_GPIO                                           GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_M6D2_PORT                                           PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_M6D2_GPIO_PIN                                         28U   /*!< PORTA pin index: 28 */
#define BOARD_INITPINS_M6D2_PIN_NAME                                       PTA28   /*!< Pin name */
#define BOARD_INITPINS_M6D2_LABEL                                         "M6D2"   /*!< Label */
#define BOARD_INITPINS_M6D2_NAME                                          "M6D2"   /*!< Identifier name */
#define BOARD_INITPINS_M6D2_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTA29 (number 80), M6D3 */
#define BOARD_INITPINS_M6D3_GPIO                                           GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_M6D3_PORT                                           PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_M6D3_GPIO_PIN                                         29U   /*!< PORTA pin index: 29 */
#define BOARD_INITPINS_M6D3_PIN_NAME                                       PTA29   /*!< Pin name */
#define BOARD_INITPINS_M6D3_LABEL                                         "M6D3"   /*!< Label */
#define BOARD_INITPINS_M6D3_NAME                                          "M6D3"   /*!< Identifier name */
#define BOARD_INITPINS_M6D3_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTB2 (number 83), M2D3 */
#define BOARD_INITPINS_M2D3_GPIO                                           GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_INITPINS_M2D3_PORT                                           PORTB   /*!< PORT device name: PORTB */
#define BOARD_INITPINS_M2D3_GPIO_PIN                                          2U   /*!< PORTB pin index: 2 */
#define BOARD_INITPINS_M2D3_PIN_NAME                                        PTB2   /*!< Pin name */
#define BOARD_INITPINS_M2D3_LABEL                                         "M2D3"   /*!< Label */
#define BOARD_INITPINS_M2D3_NAME                                          "M2D3"   /*!< Identifier name */
#define BOARD_INITPINS_M2D3_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTB3 (number 84), M2D2 */
#define BOARD_INITPINS_M2D2_GPIO                                           GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_INITPINS_M2D2_PORT                                           PORTB   /*!< PORT device name: PORTB */
#define BOARD_INITPINS_M2D2_GPIO_PIN                                          3U   /*!< PORTB pin index: 3 */
#define BOARD_INITPINS_M2D2_PIN_NAME                                        PTB3   /*!< Pin name */
#define BOARD_INITPINS_M2D2_LABEL                                         "M2D2"   /*!< Label */
#define BOARD_INITPINS_M2D2_NAME                                          "M2D2"   /*!< Identifier name */
#define BOARD_INITPINS_M2D2_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTB4 (number 85), M7A0 */
#define BOARD_INITPINS_M7A0_PERIPHERAL                                      ADC1   /*!< Device name: ADC1 */
#define BOARD_INITPINS_M7A0_SIGNAL                                            SE   /*!< ADC1 signal: SE */
#define BOARD_INITPINS_M7A0_CHANNEL                                           10   /*!< ADC1 SE channel: 10 */
#define BOARD_INITPINS_M7A0_PIN_NAME                                   ADC1_SE10   /*!< Pin name */
#define BOARD_INITPINS_M7A0_LABEL                                         "M7A0"   /*!< Label */
#define BOARD_INITPINS_M7A0_NAME                                          "M7A0"   /*!< Identifier name */

/* PORTB5 (number 86), M4A1 */
#define BOARD_INITPINS_M4A1_PERIPHERAL                                      ADC1   /*!< Device name: ADC1 */
#define BOARD_INITPINS_M4A1_SIGNAL                                            SE   /*!< ADC1 signal: SE */
#define BOARD_INITPINS_M4A1_CHANNEL                                           11   /*!< ADC1 SE channel: 11 */
#define BOARD_INITPINS_M4A1_PIN_NAME                                   ADC1_SE11   /*!< Pin name */
#define BOARD_INITPINS_M4A1_LABEL                                         "M4A1"   /*!< Label */
#define BOARD_INITPINS_M4A1_NAME                                          "M4A1"   /*!< Identifier name */

/* PORTB6 (number 87), M7A1 */
#define BOARD_INITPINS_M7A1_PERIPHERAL                                      ADC1   /*!< Device name: ADC1 */
#define BOARD_INITPINS_M7A1_SIGNAL                                            SE   /*!< ADC1 signal: SE */
#define BOARD_INITPINS_M7A1_CHANNEL                                           12   /*!< ADC1 SE channel: 12 */
#define BOARD_INITPINS_M7A1_PIN_NAME                                   ADC1_SE12   /*!< Pin name */
#define BOARD_INITPINS_M7A1_LABEL                                         "M7A1"   /*!< Label */
#define BOARD_INITPINS_M7A1_NAME                                          "M7A1"   /*!< Identifier name */

/* PORTB7 (number 88), M5A1 */
#define BOARD_INITPINS_M5A1_PERIPHERAL                                      ADC1   /*!< Device name: ADC1 */
#define BOARD_INITPINS_M5A1_SIGNAL                                            SE   /*!< ADC1 signal: SE */
#define BOARD_INITPINS_M5A1_CHANNEL                                           13   /*!< ADC1 SE channel: 13 */
#define BOARD_INITPINS_M5A1_PIN_NAME                                   ADC1_SE13   /*!< Pin name */
#define BOARD_INITPINS_M5A1_LABEL                                         "M5A1"   /*!< Label */
#define BOARD_INITPINS_M5A1_NAME                                          "M5A1"   /*!< Identifier name */

/* PORTB18 (number 97), M2D1 */
#define BOARD_INITPINS_M2D1_GPIO                                           GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_INITPINS_M2D1_PORT                                           PORTB   /*!< PORT device name: PORTB */
#define BOARD_INITPINS_M2D1_GPIO_PIN                                         18U   /*!< PORTB pin index: 18 */
#define BOARD_INITPINS_M2D1_PIN_NAME                                       PTB18   /*!< Pin name */
#define BOARD_INITPINS_M2D1_LABEL                                         "M2D1"   /*!< Label */
#define BOARD_INITPINS_M2D1_NAME                                          "M2D1"   /*!< Identifier name */
#define BOARD_INITPINS_M2D1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTB19 (number 98), M2D0 */
#define BOARD_INITPINS_M2D0_GPIO                                           GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_INITPINS_M2D0_PORT                                           PORTB   /*!< PORT device name: PORTB */
#define BOARD_INITPINS_M2D0_GPIO_PIN                                         19U   /*!< PORTB pin index: 19 */
#define BOARD_INITPINS_M2D0_PIN_NAME                                       PTB19   /*!< Pin name */
#define BOARD_INITPINS_M2D0_LABEL                                         "M2D0"   /*!< Label */
#define BOARD_INITPINS_M2D0_NAME                                          "M2D0"   /*!< Identifier name */
#define BOARD_INITPINS_M2D0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC0 (number 103), SD0 */
#define BOARD_INITPINS_SD0_GPIO                                            GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_SD0_PORT                                            PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_SD0_GPIO_PIN                                           0U   /*!< PORTC pin index: 0 */
#define BOARD_INITPINS_SD0_PIN_NAME                                         PTC0   /*!< Pin name */
#define BOARD_INITPINS_SD0_LABEL                                           "SD0"   /*!< Label */
#define BOARD_INITPINS_SD0_NAME                                            "SD0"   /*!< Identifier name */

/* PORTB23 (number 102), M1D3 */
#define BOARD_INITPINS_M1D3_GPIO                                           GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_INITPINS_M1D3_PORT                                           PORTB   /*!< PORT device name: PORTB */
#define BOARD_INITPINS_M1D3_GPIO_PIN                                         23U   /*!< PORTB pin index: 23 */
#define BOARD_INITPINS_M1D3_PIN_NAME                                       PTB23   /*!< Pin name */
#define BOARD_INITPINS_M1D3_LABEL                                         "M1D3"   /*!< Label */
#define BOARD_INITPINS_M1D3_NAME                                          "M1D3"   /*!< Identifier name */
#define BOARD_INITPINS_M1D3_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTB22 (number 101), M1D2 */
#define BOARD_INITPINS_M1D2_GPIO                                           GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_INITPINS_M1D2_PORT                                           PORTB   /*!< PORT device name: PORTB */
#define BOARD_INITPINS_M1D2_GPIO_PIN                                         22U   /*!< PORTB pin index: 22 */
#define BOARD_INITPINS_M1D2_PIN_NAME                                       PTB22   /*!< Pin name */
#define BOARD_INITPINS_M1D2_LABEL                                         "M1D2"   /*!< Label */
#define BOARD_INITPINS_M1D2_NAME                                          "M1D2"   /*!< Identifier name */
#define BOARD_INITPINS_M1D2_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTB21 (number 100), M1D1 */
#define BOARD_INITPINS_M1D1_GPIO                                           GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_INITPINS_M1D1_PORT                                           PORTB   /*!< PORT device name: PORTB */
#define BOARD_INITPINS_M1D1_GPIO_PIN                                         21U   /*!< PORTB pin index: 21 */
#define BOARD_INITPINS_M1D1_PIN_NAME                                       PTB21   /*!< Pin name */
#define BOARD_INITPINS_M1D1_LABEL                                         "M1D1"   /*!< Label */
#define BOARD_INITPINS_M1D1_NAME                                          "M1D1"   /*!< Identifier name */
#define BOARD_INITPINS_M1D1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTB20 (number 99), M1D0 */
#define BOARD_INITPINS_M1D0_GPIO                                           GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_INITPINS_M1D0_PORT                                           PORTB   /*!< PORT device name: PORTB */
#define BOARD_INITPINS_M1D0_GPIO_PIN                                         20U   /*!< PORTB pin index: 20 */
#define BOARD_INITPINS_M1D0_PIN_NAME                                       PTB20   /*!< Pin name */
#define BOARD_INITPINS_M1D0_LABEL                                         "M1D0"   /*!< Label */
#define BOARD_INITPINS_M1D0_NAME                                          "M1D0"   /*!< Identifier name */
#define BOARD_INITPINS_M1D0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC4 (number 109), M0D0 */
#define BOARD_INITPINS_M0D0_GPIO                                           GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_M0D0_PORT                                           PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_M0D0_GPIO_PIN                                          4U   /*!< PORTC pin index: 4 */
#define BOARD_INITPINS_M0D0_PIN_NAME                                        PTC4   /*!< Pin name */
#define BOARD_INITPINS_M0D0_LABEL                                         "M0D0"   /*!< Label */
#define BOARD_INITPINS_M0D0_NAME                                          "M0D0"   /*!< Identifier name */
#define BOARD_INITPINS_M0D0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC6 (number 111), M0D1 */
#define BOARD_INITPINS_M0D1_GPIO                                           GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_M0D1_PORT                                           PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_M0D1_GPIO_PIN                                          6U   /*!< PORTC pin index: 6 */
#define BOARD_INITPINS_M0D1_PIN_NAME                                        PTC6   /*!< Pin name */
#define BOARD_INITPINS_M0D1_LABEL                                         "M0D1"   /*!< Label */
#define BOARD_INITPINS_M0D1_NAME                                          "M0D1"   /*!< Identifier name */
#define BOARD_INITPINS_M0D1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC7 (number 112), M0D2 */
#define BOARD_INITPINS_M0D2_GPIO                                           GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_M0D2_PORT                                           PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_M0D2_GPIO_PIN                                          7U   /*!< PORTC pin index: 7 */
#define BOARD_INITPINS_M0D2_PIN_NAME                                        PTC7   /*!< Pin name */
#define BOARD_INITPINS_M0D2_LABEL                                         "M0D2"   /*!< Label */
#define BOARD_INITPINS_M0D2_NAME                                          "M0D2"   /*!< Identifier name */
#define BOARD_INITPINS_M0D2_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC12 (number 117), M0D3 */
#define BOARD_INITPINS_M0D3_GPIO                                           GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_M0D3_PORT                                           PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_M0D3_GPIO_PIN                                         12U   /*!< PORTC pin index: 12 */
#define BOARD_INITPINS_M0D3_PIN_NAME                                       PTC12   /*!< Pin name */
#define BOARD_INITPINS_M0D3_LABEL                                         "M0D3"   /*!< Label */
#define BOARD_INITPINS_M0D3_NAME                                          "M0D3"   /*!< Identifier name */
#define BOARD_INITPINS_M0D3_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC13 (number 118), M3D0 */
#define BOARD_INITPINS_M3D0_GPIO                                           GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_M3D0_PORT                                           PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_M3D0_GPIO_PIN                                         13U   /*!< PORTC pin index: 13 */
#define BOARD_INITPINS_M3D0_PIN_NAME                                       PTC13   /*!< Pin name */
#define BOARD_INITPINS_M3D0_LABEL                                         "M3D0"   /*!< Label */
#define BOARD_INITPINS_M3D0_NAME                                          "M3D0"   /*!< Identifier name */
#define BOARD_INITPINS_M3D0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC16 (number 123), M3D1 */
#define BOARD_INITPINS_M3D1_GPIO                                           GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_M3D1_PORT                                           PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_M3D1_GPIO_PIN                                         16U   /*!< PORTC pin index: 16 */
#define BOARD_INITPINS_M3D1_PIN_NAME                                       PTC16   /*!< Pin name */
#define BOARD_INITPINS_M3D1_LABEL                                         "M3D1"   /*!< Label */
#define BOARD_INITPINS_M3D1_NAME                                          "M3D1"   /*!< Identifier name */
#define BOARD_INITPINS_M3D1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC17 (number 124), M3D2 */
#define BOARD_INITPINS_M3D2_GPIO                                           GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_M3D2_PORT                                           PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_M3D2_GPIO_PIN                                         17U   /*!< PORTC pin index: 17 */
#define BOARD_INITPINS_M3D2_PIN_NAME                                       PTC17   /*!< Pin name */
#define BOARD_INITPINS_M3D2_LABEL                                         "M3D2"   /*!< Label */
#define BOARD_INITPINS_M3D2_NAME                                          "M3D2"   /*!< Identifier name */
#define BOARD_INITPINS_M3D2_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC18 (number 125), M3D3 */
#define BOARD_INITPINS_M3D3_GPIO                                           GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_M3D3_PORT                                           PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_M3D3_GPIO_PIN                                         18U   /*!< PORTC pin index: 18 */
#define BOARD_INITPINS_M3D3_PIN_NAME                                       PTC18   /*!< Pin name */
#define BOARD_INITPINS_M3D3_LABEL                                         "M3D3"   /*!< Label */
#define BOARD_INITPINS_M3D3_NAME                                          "M3D3"   /*!< Identifier name */
#define BOARD_INITPINS_M3D3_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTD2 (number 129), SD1 */
#define BOARD_INITPINS_SD1_GPIO                                            GPIOD   /*!< GPIO device name: GPIOD */
#define BOARD_INITPINS_SD1_PORT                                            PORTD   /*!< PORT device name: PORTD */
#define BOARD_INITPINS_SD1_GPIO_PIN                                           2U   /*!< PORTD pin index: 2 */
#define BOARD_INITPINS_SD1_PIN_NAME                                         PTD2   /*!< Pin name */
#define BOARD_INITPINS_SD1_LABEL                                           "SD1"   /*!< Label */
#define BOARD_INITPINS_SD1_NAME                                            "SD1"   /*!< Identifier name */

/* PORTD10 (number 139), M7D0 */
#define BOARD_INITPINS_M7D0_GPIO                                           GPIOD   /*!< GPIO device name: GPIOD */
#define BOARD_INITPINS_M7D0_PORT                                           PORTD   /*!< PORT device name: PORTD */
#define BOARD_INITPINS_M7D0_GPIO_PIN                                         10U   /*!< PORTD pin index: 10 */
#define BOARD_INITPINS_M7D0_PIN_NAME                                       PTD10   /*!< Pin name */
#define BOARD_INITPINS_M7D0_LABEL                                         "M7D0"   /*!< Label */
#define BOARD_INITPINS_M7D0_NAME                                          "M7D0"   /*!< Identifier name */
#define BOARD_INITPINS_M7D0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTD11 (number 140), M7D1 */
#define BOARD_INITPINS_M7D1_GPIO                                           GPIOD   /*!< GPIO device name: GPIOD */
#define BOARD_INITPINS_M7D1_PORT                                           PORTD   /*!< PORT device name: PORTD */
#define BOARD_INITPINS_M7D1_GPIO_PIN                                         11U   /*!< PORTD pin index: 11 */
#define BOARD_INITPINS_M7D1_PIN_NAME                                       PTD11   /*!< Pin name */
#define BOARD_INITPINS_M7D1_LABEL                                         "M7D1"   /*!< Label */
#define BOARD_INITPINS_M7D1_NAME                                          "M7D1"   /*!< Identifier name */
#define BOARD_INITPINS_M7D1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTD12 (number 141), M7D2 */
#define BOARD_INITPINS_M7D2_GPIO                                           GPIOD   /*!< GPIO device name: GPIOD */
#define BOARD_INITPINS_M7D2_PORT                                           PORTD   /*!< PORT device name: PORTD */
#define BOARD_INITPINS_M7D2_GPIO_PIN                                         12U   /*!< PORTD pin index: 12 */
#define BOARD_INITPINS_M7D2_PIN_NAME                                       PTD12   /*!< Pin name */
#define BOARD_INITPINS_M7D2_LABEL                                         "M7D2"   /*!< Label */
#define BOARD_INITPINS_M7D2_NAME                                          "M7D2"   /*!< Identifier name */
#define BOARD_INITPINS_M7D2_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTD13 (number 142), M7D3 */
#define BOARD_INITPINS_M7D3_GPIO                                           GPIOD   /*!< GPIO device name: GPIOD */
#define BOARD_INITPINS_M7D3_PORT                                           PORTD   /*!< PORT device name: PORTD */
#define BOARD_INITPINS_M7D3_GPIO_PIN                                         13U   /*!< PORTD pin index: 13 */
#define BOARD_INITPINS_M7D3_PIN_NAME                                       PTD13   /*!< Pin name */
#define BOARD_INITPINS_M7D3_LABEL                                         "M7D3"   /*!< Label */
#define BOARD_INITPINS_M7D3_NAME                                          "M7D3"   /*!< Identifier name */
#define BOARD_INITPINS_M7D3_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTA18 (number 72), EXIO3 */
#define BOARD_INITPINS_EXIO3_GPIO                                          GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_EXIO3_PORT                                          PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_EXIO3_GPIO_PIN                                        18U   /*!< PORTA pin index: 18 */
#define BOARD_INITPINS_EXIO3_PIN_NAME                                      PTA18   /*!< Pin name */
#define BOARD_INITPINS_EXIO3_LABEL                                       "EXIO3"   /*!< Label */
#define BOARD_INITPINS_EXIO3_NAME                                        "EXIO3"   /*!< Identifier name */

/* PORTE7 (number 10), M5P1 */
#define BOARD_INITPINS_M5P1_GPIO                                           GPIOE   /*!< GPIO device name: GPIOE */
#define BOARD_INITPINS_M5P1_PORT                                           PORTE   /*!< PORT device name: PORTE */
#define BOARD_INITPINS_M5P1_GPIO_PIN                                          7U   /*!< PORTE pin index: 7 */
#define BOARD_INITPINS_M5P1_PIN_NAME                                        PTE7   /*!< Pin name */
#define BOARD_INITPINS_M5P1_LABEL                                         "M5P1"   /*!< Label */
#define BOARD_INITPINS_M5P1_NAME                                          "M5P1"   /*!< Identifier name */
#define BOARD_INITPINS_M5P1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTE8 (number 11), M4P1 */
#define BOARD_INITPINS_M4P1_GPIO                                           GPIOE   /*!< GPIO device name: GPIOE */
#define BOARD_INITPINS_M4P1_PORT                                           PORTE   /*!< PORT device name: PORTE */
#define BOARD_INITPINS_M4P1_GPIO_PIN                                          8U   /*!< PORTE pin index: 8 */
#define BOARD_INITPINS_M4P1_PIN_NAME                                        PTE8   /*!< Pin name */
#define BOARD_INITPINS_M4P1_LABEL                                         "M4P1"   /*!< Label */
#define BOARD_INITPINS_M4P1_NAME                                          "M4P1"   /*!< Identifier name */
#define BOARD_INITPINS_M4P1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTE11 (number 14), M6P1 */
#define BOARD_INITPINS_M6P1_GPIO                                           GPIOE   /*!< GPIO device name: GPIOE */
#define BOARD_INITPINS_M6P1_PORT                                           PORTE   /*!< PORT device name: PORTE */
#define BOARD_INITPINS_M6P1_GPIO_PIN                                         11U   /*!< PORTE pin index: 11 */
#define BOARD_INITPINS_M6P1_PIN_NAME                                       PTE11   /*!< Pin name */
#define BOARD_INITPINS_M6P1_LABEL                                         "M6P1"   /*!< Label */
#define BOARD_INITPINS_M6P1_NAME                                          "M6P1"   /*!< Identifier name */
#define BOARD_INITPINS_M6P1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTE12 (number 15), M7P1 */
#define BOARD_INITPINS_M7P1_GPIO                                           GPIOE   /*!< GPIO device name: GPIOE */
#define BOARD_INITPINS_M7P1_PORT                                           PORTE   /*!< PORT device name: PORTE */
#define BOARD_INITPINS_M7P1_GPIO_PIN                                         12U   /*!< PORTE pin index: 12 */
#define BOARD_INITPINS_M7P1_PIN_NAME                                       PTE12   /*!< Pin name */
#define BOARD_INITPINS_M7P1_LABEL                                         "M7P1"   /*!< Label */
#define BOARD_INITPINS_M7P1_NAME                                          "M7P1"   /*!< Identifier name */
#define BOARD_INITPINS_M7P1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTA6 (number 58), M4P0 */
#define BOARD_INITPINS_M4P0_GPIO                                           GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_M4P0_PORT                                           PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_M4P0_GPIO_PIN                                          6U   /*!< PORTA pin index: 6 */
#define BOARD_INITPINS_M4P0_PIN_NAME                                        PTA6   /*!< Pin name */
#define BOARD_INITPINS_M4P0_LABEL                                         "M4P0"   /*!< Label */
#define BOARD_INITPINS_M4P0_NAME                                          "M4P0"   /*!< Identifier name */
#define BOARD_INITPINS_M4P0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTA8 (number 60), M6P0 */
#define BOARD_INITPINS_M6P0_GPIO                                           GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_M6P0_PORT                                           PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_M6P0_GPIO_PIN                                          8U   /*!< PORTA pin index: 8 */
#define BOARD_INITPINS_M6P0_PIN_NAME                                        PTA8   /*!< Pin name */
#define BOARD_INITPINS_M6P0_LABEL                                         "M6P0"   /*!< Label */
#define BOARD_INITPINS_M6P0_NAME                                          "M6P0"   /*!< Identifier name */
#define BOARD_INITPINS_M6P0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTA9 (number 61), M5P0 */
#define BOARD_INITPINS_M5P0_GPIO                                           GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_INITPINS_M5P0_PORT                                           PORTA   /*!< PORT device name: PORTA */
#define BOARD_INITPINS_M5P0_GPIO_PIN                                          9U   /*!< PORTA pin index: 9 */
#define BOARD_INITPINS_M5P0_PIN_NAME                                        PTA9   /*!< Pin name */
#define BOARD_INITPINS_M5P0_LABEL                                         "M5P0"   /*!< Label */
#define BOARD_INITPINS_M5P0_NAME                                          "M5P0"   /*!< Identifier name */
#define BOARD_INITPINS_M5P0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC1 (number 104), SP0 */
#define BOARD_INITPINS_SP0_GPIO                                            GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_SP0_PORT                                            PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_SP0_GPIO_PIN                                           1U   /*!< PORTC pin index: 1 */
#define BOARD_INITPINS_SP0_PIN_NAME                                         PTC1   /*!< Pin name */
#define BOARD_INITPINS_SP0_LABEL                                           "SP0"   /*!< Label */
#define BOARD_INITPINS_SP0_NAME                                            "SP0"   /*!< Identifier name */

/* PORTC2 (number 105), M1P0 */
#define BOARD_INITPINS_M1P0_GPIO                                           GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_M1P0_PORT                                           PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_M1P0_GPIO_PIN                                          2U   /*!< PORTC pin index: 2 */
#define BOARD_INITPINS_M1P0_PIN_NAME                                        PTC2   /*!< Pin name */
#define BOARD_INITPINS_M1P0_LABEL                                         "M1P0"   /*!< Label */
#define BOARD_INITPINS_M1P0_NAME                                          "M1P0"   /*!< Identifier name */
#define BOARD_INITPINS_M1P0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC8 (number 113), M1P1 */
#define BOARD_INITPINS_M1P1_GPIO                                           GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_M1P1_PORT                                           PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_M1P1_GPIO_PIN                                          8U   /*!< PORTC pin index: 8 */
#define BOARD_INITPINS_M1P1_PIN_NAME                                        PTC8   /*!< Pin name */
#define BOARD_INITPINS_M1P1_LABEL                                         "M1P1"   /*!< Label */
#define BOARD_INITPINS_M1P1_NAME                                          "M1P1"   /*!< Identifier name */
#define BOARD_INITPINS_M1P1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC9 (number 114), M2P1 */
#define BOARD_INITPINS_M2P1_GPIO                                           GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_M2P1_PORT                                           PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_M2P1_GPIO_PIN                                          9U   /*!< PORTC pin index: 9 */
#define BOARD_INITPINS_M2P1_PIN_NAME                                        PTC9   /*!< Pin name */
#define BOARD_INITPINS_M2P1_LABEL                                         "M2P1"   /*!< Label */
#define BOARD_INITPINS_M2P1_NAME                                          "M2P1"   /*!< Identifier name */
#define BOARD_INITPINS_M2P1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC5 (number 110), LED1 */
#define BOARD_INITPINS_LED1_GPIO                                           GPIOC   /*!< GPIO device name: GPIOC */
#define BOARD_INITPINS_LED1_PORT                                           PORTC   /*!< PORT device name: PORTC */
#define BOARD_INITPINS_LED1_GPIO_PIN                                          5U   /*!< PORTC pin index: 5 */
#define BOARD_INITPINS_LED1_PIN_NAME                                        PTC5   /*!< Pin name */
#define BOARD_INITPINS_LED1_LABEL                                         "LED1"   /*!< Label */
#define BOARD_INITPINS_LED1_NAME                                          "LED1"   /*!< Identifier name */

/* PORTD0 (number 127), M0P1 */
#define BOARD_INITPINS_M0P1_GPIO                                           GPIOD   /*!< GPIO device name: GPIOD */
#define BOARD_INITPINS_M0P1_PORT                                           PORTD   /*!< PORT device name: PORTD */
#define BOARD_INITPINS_M0P1_GPIO_PIN                                          0U   /*!< PORTD pin index: 0 */
#define BOARD_INITPINS_M0P1_PIN_NAME                                        PTD0   /*!< Pin name */
#define BOARD_INITPINS_M0P1_LABEL                                         "M0P1"   /*!< Label */
#define BOARD_INITPINS_M0P1_NAME                                          "M0P1"   /*!< Identifier name */

/* PORTD1 (number 128), M3P1 */
#define BOARD_INITPINS_M3P1_GPIO                                           GPIOD   /*!< GPIO device name: GPIOD */
#define BOARD_INITPINS_M3P1_PORT                                           PORTD   /*!< PORT device name: PORTD */
#define BOARD_INITPINS_M3P1_GPIO_PIN                                          1U   /*!< PORTD pin index: 1 */
#define BOARD_INITPINS_M3P1_PIN_NAME                                        PTD1   /*!< Pin name */
#define BOARD_INITPINS_M3P1_LABEL                                         "M3P1"   /*!< Label */
#define BOARD_INITPINS_M3P1_NAME                                          "M3P1"   /*!< Identifier name */
#define BOARD_INITPINS_M3P1_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTD4 (number 131), M3P0 */
#define BOARD_INITPINS_M3P0_GPIO                                           GPIOD   /*!< GPIO device name: GPIOD */
#define BOARD_INITPINS_M3P0_PORT                                           PORTD   /*!< PORT device name: PORTD */
#define BOARD_INITPINS_M3P0_GPIO_PIN                                          4U   /*!< PORTD pin index: 4 */
#define BOARD_INITPINS_M3P0_PIN_NAME                                        PTD4   /*!< Pin name */
#define BOARD_INITPINS_M3P0_LABEL                                         "M3P0"   /*!< Label */
#define BOARD_INITPINS_M3P0_NAME                                          "M3P0"   /*!< Identifier name */
#define BOARD_INITPINS_M3P0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTD5 (number 132), M7P0 */
#define BOARD_INITPINS_M7P0_GPIO                                           GPIOD   /*!< GPIO device name: GPIOD */
#define BOARD_INITPINS_M7P0_PORT                                           PORTD   /*!< PORT device name: PORTD */
#define BOARD_INITPINS_M7P0_GPIO_PIN                                          5U   /*!< PORTD pin index: 5 */
#define BOARD_INITPINS_M7P0_PIN_NAME                                        PTD5   /*!< Pin name */
#define BOARD_INITPINS_M7P0_LABEL                                         "M7P0"   /*!< Label */
#define BOARD_INITPINS_M7P0_NAME                                          "M7P0"   /*!< Identifier name */
#define BOARD_INITPINS_M7P0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTD6 (number 133), M2P0 */
#define BOARD_INITPINS_M2P0_GPIO                                           GPIOD   /*!< GPIO device name: GPIOD */
#define BOARD_INITPINS_M2P0_PORT                                           PORTD   /*!< PORT device name: PORTD */
#define BOARD_INITPINS_M2P0_GPIO_PIN                                          6U   /*!< PORTD pin index: 6 */
#define BOARD_INITPINS_M2P0_PIN_NAME                                        PTD6   /*!< Pin name */
#define BOARD_INITPINS_M2P0_LABEL                                         "M2P0"   /*!< Label */
#define BOARD_INITPINS_M2P0_NAME                                          "M2P0"   /*!< Identifier name */
#define BOARD_INITPINS_M2P0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTD7 (number 136), M0P0 */
#define BOARD_INITPINS_M0P0_GPIO                                           GPIOD   /*!< GPIO device name: GPIOD */
#define BOARD_INITPINS_M0P0_PORT                                           PORTD   /*!< PORT device name: PORTD */
#define BOARD_INITPINS_M0P0_GPIO_PIN                                          7U   /*!< PORTD pin index: 7 */
#define BOARD_INITPINS_M0P0_PIN_NAME                                        PTD7   /*!< Pin name */
#define BOARD_INITPINS_M0P0_LABEL                                         "M0P0"   /*!< Label */
#define BOARD_INITPINS_M0P0_NAME                                          "M0P0"   /*!< Identifier name */
#define BOARD_INITPINS_M0P0_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/*******************************************************************************
 * EOF
 ******************************************************************************/

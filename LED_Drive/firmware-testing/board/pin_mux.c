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

/*
 * TEXT BELOW IS USED AS SETTING FOR THE PINS TOOL *****************************
PinsProfile:
- !!product 'Pins v2.0'
- !!processor 'MK64FN1M0xxx12'
- !!package 'MK64FN1M0VLQ12'
- !!mcu_data 'ksdk2_0'
- !!processor_version '1.0.1'
- pin_labels:
  - {pin_num: '9', pin_signal: PTE6/SPI1_PCS3/UART3_CTS_b/I2S0_MCLK/FTM3_CH1/USB_SOF_OUT, label: SD_SENSE_SW, identifier: SD_SENSE_SW}
  - {pin_num: '10', pin_signal: PTE7/UART3_RTS_b/I2S0_RXD0/FTM3_CH2, label: M5P1, identifier: M5P1;PWM5_1}
  - {pin_num: '11', pin_signal: PTE8/I2S0_RXD1/UART5_TX/I2S0_RX_FS/FTM3_CH3, label: M4P1, identifier: M4P1;PWM4_1}
  - {pin_num: '12', pin_signal: PTE9/I2S0_TXD1/UART5_RX/I2S0_RX_BCLK/FTM3_CH4, label: M5D0, identifier: M5D0;GPIO5_0}
  - {pin_num: '13', pin_signal: PTE10/UART5_CTS_b/I2S0_TXD0/FTM3_CH5, label: M5D1, identifier: M5D1;GPIO5_1}
  - {pin_num: '14', pin_signal: PTE11/UART5_RTS_b/I2S0_TX_FS/FTM3_CH6, label: M6P1, identifier: M6P1;PWM6_1}
  - {pin_num: '15', pin_signal: PTE12/I2S0_TX_BCLK/FTM3_CH7, label: M7P1, identifier: M7P1;PWM7_1}
  - {pin_num: '23', pin_signal: ADC0_DP1, label: SA1, identifier: SA1;ADCS_1}
  - {pin_num: '24', pin_signal: ADC0_DM1, label: SA0, identifier: SA0;ADCS_0}
  - {pin_num: '25', pin_signal: ADC1_DP1, label: M2A0, identifier: M2A0;ADC2_0}
  - {pin_num: '26', pin_signal: ADC1_DM1, label: M2A1, identifier: M2A1;ADC2_1}
  - {pin_num: '27', pin_signal: ADC0_DP0/ADC1_DP3, label: M1A0, identifier: M1A0;ADC1_0}
  - {pin_num: '28', pin_signal: ADC0_DM0/ADC1_DM3, label: M1A1, identifier: M1A1;ADC1_1}
  - {pin_num: '29', pin_signal: ADC1_DP0/ADC0_DP3, label: M3A0, identifier: M3A0;ADC3_0}
  - {pin_num: '30', pin_signal: ADC1_DM0/ADC0_DM3, label: M3A1, identifier: M3A1;ADC3_1}
  - {pin_num: '35', pin_signal: ADC1_SE16/CMP2_IN2/ADC0_SE22, label: M4A0, identifier: M4A0;ADC4_0}
  - {pin_num: '36', pin_signal: ADC0_SE16/CMP1_IN2/ADC0_SE21, label: M5A0, identifier: M5A0;ADC5_0}
  - {pin_num: '37', pin_signal: VREF_OUT/CMP1_IN5/CMP0_IN5/ADC1_SE18, label: M0A0, identifier: M0A0;ADC0_0}
  - {pin_num: '38', pin_signal: DAC0_OUT/CMP1_IN3/ADC0_SE23, label: M0A1, identifier: M0A1;ADC0_1}
  - {pin_num: '39', pin_signal: DAC1_OUT/CMP0_IN4/CMP2_IN3/ADC1_SE23, label: M6A1, identifier: M6A1;ADC6_1}
  - {pin_num: '45', pin_signal: ADC0_SE17/PTE24/UART4_TX/I2C0_SCL/EWM_OUT_b, label: SI2C_SEL0, identifier: SI2C_SEL0}
  - {pin_num: '46', pin_signal: ADC0_SE18/PTE25/UART4_RX/I2C0_SDA/EWM_IN, label: SI2C_SEL1, identifier: SI2C_SEL1}
  - {pin_num: '47', pin_signal: PTE26/ENET_1588_CLKIN/UART4_CTS_b/RTC_CLKOUT/USB_CLKIN, label: SYS_RESET, identifier: SYS_RESET}
  - {pin_num: '48', pin_signal: PTE27/UART4_RTS_b, label: M5D2, identifier: M5D2;GPIO5_2}
  - {pin_num: '49', pin_signal: PTE28, label: M5D3, identifier: M5D3;GPIO5_3}
  - {pin_num: '54', pin_signal: PTA4/LLWU_P3/FTM0_CH1/NMI_b/EZP_CS_b, label: LED0, identifier: LED0}
  - {pin_num: '55', pin_signal: PTA5/USB_CLKIN/FTM0_CH2/RMII0_RXER/MII0_RXER/CMP2_OUT/I2S0_TX_BCLK/JTAG_TRST_b, label: EXIO0, identifier: EXIO0}
  - {pin_num: '58', pin_signal: PTA6/FTM0_CH3/TRACE_CLKOUT, label: M4P0, identifier: M4P0;PWM4_0}
  - {pin_num: '59', pin_signal: ADC0_SE10/PTA7/FTM0_CH4/TRACE_D3, label: M6A0, identifier: M6A0;ADC6_0}
  - {pin_num: '60', pin_signal: ADC0_SE11/PTA8/FTM1_CH0/FTM1_QD_PHA/TRACE_D2, label: M6P0, identifier: M6P0;PWM6_0}
  - {pin_num: '61', pin_signal: PTA9/FTM1_CH1/MII0_RXD3/FTM1_QD_PHB/TRACE_D1, label: M5P0, identifier: M5P0;PWM5_0}
  - {pin_num: '62', pin_signal: PTA10/FTM2_CH0/MII0_RXD2/FTM2_QD_PHA/TRACE_D0, label: M4D0, identifier: M4D0;GPIO4_0}
  - {pin_num: '63', pin_signal: PTA11/FTM2_CH1/MII0_RXCLK/I2C2_SDA/FTM2_QD_PHB, label: M4D1, identifier: M4D1;GPIO4_1}
  - {pin_num: '64', pin_signal: CMP2_IN0/PTA12/CAN0_TX/FTM1_CH0/RMII0_RXD1/MII0_RXD1/I2C2_SCL/I2S0_TXD0/FTM1_QD_PHA, label: EXIO1, identifier: EXIO1}
  - {pin_num: '65', pin_signal: CMP2_IN1/PTA13/LLWU_P4/CAN0_RX/FTM1_CH1/RMII0_RXD0/MII0_RXD0/I2C2_SDA/I2S0_TX_FS/FTM1_QD_PHB, label: EXIO2, identifier: EXIO2}
  - {pin_num: '66', pin_signal: PTA14/SPI0_PCS0/UART0_TX/RMII0_CRS_DV/MII0_RXDV/I2C2_SCL/I2S0_RX_BCLK/I2S0_TXD1, label: EXSPI_CS0, identifier: EXSPI_CS0}
  - {pin_num: '67', pin_signal: PTA15/SPI0_SCK/UART0_RX/RMII0_TXEN/MII0_TXEN/I2S0_RXD0, label: EXSPI_CLK, identifier: EXSPI_CLK}
  - {pin_num: '68', pin_signal: PTA16/SPI0_SOUT/UART0_CTS_b/UART0_COL_b/RMII0_TXD0/MII0_TXD0/I2S0_RX_FS/I2S0_RXD1, label: EXSPI_MOSI, identifier: EXSPI_MOSI}
  - {pin_num: '69', pin_signal: ADC1_SE17/PTA17/SPI0_SIN/UART0_RTS_b/RMII0_TXD1/MII0_TXD1/I2S0_MCLK, label: EXSPI_MISO, identifier: EXSPI_MISO}
  - {pin_num: '72', pin_signal: EXTAL0/PTA18/FTM0_FLT2/FTM_CLKIN0, label: EXIO3, identifier: EXIO3}
  - {pin_num: '73', pin_signal: XTAL0/PTA19/FTM1_FLT0/FTM_CLKIN1/LPTMR0_ALT1, label: P3V3_FLAG, identifier: P3V3_FLAG}
  - {pin_num: '75', pin_signal: PTA24/MII0_TXD2/FB_A29, label: M4D2, identifier: M4D2;GPIO4_2}
  - {pin_num: '76', pin_signal: PTA25/MII0_TXCLK/FB_A28, label: M4D3, identifier: M4D3;GPIO4_3}
  - {pin_num: '77', pin_signal: PTA26/MII0_TXD3/FB_A27, label: M6D0, identifier: M6D0;GPIO6_0}
  - {pin_num: '78', pin_signal: PTA27/MII0_CRS/FB_A26, label: M6D1, identifier: M6D1;GPIO6_1}
  - {pin_num: '79', pin_signal: PTA28/MII0_TXER/FB_A25, label: M6D2, identifier: M6D2;GPIO6_2}
  - {pin_num: '80', pin_signal: PTA29/MII0_COL/FB_A24, label: M6D3, identifier: M6D3;GPIO6_3}
  - {pin_num: '81', pin_signal: ADC0_SE8/ADC1_SE8/PTB0/LLWU_P5/I2C0_SCL/FTM1_CH0/RMII0_MDIO/MII0_MDIO/FTM1_QD_PHA, label: EXI2C_SCL, identifier: EXI2C_SCL}
  - {pin_num: '82', pin_signal: ADC0_SE9/ADC1_SE9/PTB1/I2C0_SDA/FTM1_CH1/RMII0_MDC/MII0_MDC/FTM1_QD_PHB, label: EXI2C_SDA, identifier: EXI2C_SDA}
  - {pin_num: '83', pin_signal: ADC0_SE12/PTB2/I2C0_SCL/UART0_RTS_b/ENET0_1588_TMR0/FTM0_FLT3, label: M2D3, identifier: M2D3;GPIO2_3}
  - {pin_num: '84', pin_signal: ADC0_SE13/PTB3/I2C0_SDA/UART0_CTS_b/UART0_COL_b/ENET0_1588_TMR1/FTM0_FLT0, label: M2D2, identifier: M2D2;GPIO2_2}
  - {pin_num: '85', pin_signal: ADC1_SE10/PTB4/ENET0_1588_TMR2/FTM1_FLT0, label: M7A0, identifier: M7A0;ADC7_0}
  - {pin_num: '86', pin_signal: ADC1_SE11/PTB5/ENET0_1588_TMR3/FTM2_FLT0, label: M4A1, identifier: M4A1;ADC4_1}
  - {pin_num: '87', pin_signal: ADC1_SE12/PTB6/FB_AD23, label: M7A1, identifier: M7A1;ADC7_1}
  - {pin_num: '88', pin_signal: ADC1_SE13/PTB7/FB_AD22, label: M5A1, identifier: M5A1;ADC5_1}
  - {pin_num: '89', pin_signal: PTB8/UART3_RTS_b/FB_AD21, label: SSPI_SEL2, identifier: SSPI_SEL2}
  - {pin_num: '90', pin_signal: PTB9/SPI1_PCS1/UART3_CTS_b/FB_AD20, label: SSPI_SEL1, identifier: SSPI_SEL1}
  - {pin_num: '91', pin_signal: ADC1_SE14/PTB10/SPI1_PCS0/UART3_RX/FB_AD19/FTM0_FLT1, label: SSPI_SEL0, identifier: SSPI_SEL0}
  - {pin_num: '92', pin_signal: ADC1_SE15/PTB11/SPI1_SCK/UART3_TX/FB_AD18/FTM0_FLT2, label: SSPI_SCK, identifier: SSPI_SCK}
  - {pin_num: '95', pin_signal: PTB16/SPI1_SOUT/UART0_RX/FTM_CLKIN0/FB_AD17/EWM_IN, label: SSPI_MOSI, identifier: SSPI_MOSI}
  - {pin_num: '96', pin_signal: PTB17/SPI1_SIN/UART0_TX/FTM_CLKIN1/FB_AD16/EWM_OUT_b, label: SSPI_MISO, identifier: SSPI_MISO}
  - {pin_num: '97', pin_signal: PTB18/CAN0_TX/FTM2_CH0/I2S0_TX_BCLK/FB_AD15/FTM2_QD_PHA, label: M2D1, identifier: M2D1;GPIO2_1}
  - {pin_num: '98', pin_signal: PTB19/CAN0_RX/FTM2_CH1/I2S0_TX_FS/FB_OE_b/FTM2_QD_PHB, label: M2D0, identifier: M2D0;GPIO2_0}
  - {pin_num: '99', pin_signal: PTB20/SPI2_PCS0/FB_AD31/CMP0_OUT, label: M1D0, identifier: M1D0;GPIO1_0}
  - {pin_num: '100', pin_signal: PTB21/SPI2_SCK/FB_AD30/CMP1_OUT, label: M1D1, identifier: M1D1;GPIO1_1}
  - {pin_num: '101', pin_signal: PTB22/SPI2_SOUT/FB_AD29/CMP2_OUT, label: M1D2, identifier: M1D2;GPIO1_2}
  - {pin_num: '102', pin_signal: PTB23/SPI2_SIN/SPI0_PCS5/FB_AD28, label: M1D3, identifier: M1D3;GPIO1_3}
  - {pin_num: '103', pin_signal: ADC0_SE14/PTC0/SPI0_PCS4/PDB0_EXTRG/USB_SOF_OUT/FB_AD14/I2S0_TXD1, label: SD0, identifier: SD0;GPIOS_0}
  - {pin_num: '104', pin_signal: ADC0_SE15/PTC1/LLWU_P6/SPI0_PCS3/UART1_RTS_b/FTM0_CH0/FB_AD13/I2S0_TXD0, label: SP0, identifier: SP0;PWMS_0}
  - {pin_num: '105', pin_signal: ADC0_SE4b/CMP1_IN0/PTC2/SPI0_PCS2/UART1_CTS_b/FTM0_CH1/FB_AD12/I2S0_TX_FS, label: M1P0, identifier: M1P0;PWM1_0}
  - {pin_num: '109', pin_signal: PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/FTM0_CH3/FB_AD11/CMP1_OUT, label: M0D0, identifier: M0D0;GPIO0_0}
  - {pin_num: '110', pin_signal: PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/I2S0_RXD0/FB_AD10/CMP0_OUT/FTM0_CH2, label: LED1, identifier: LED1}
  - {pin_num: '111', pin_signal: CMP0_IN0/PTC6/LLWU_P10/SPI0_SOUT/PDB0_EXTRG/I2S0_RX_BCLK/FB_AD9/I2S0_MCLK, label: M0D1, identifier: M0D1;GPIO0_1}
  - {pin_num: '112', pin_signal: CMP0_IN1/PTC7/SPI0_SIN/USB_SOF_OUT/I2S0_RX_FS/FB_AD8, label: M0D2, identifier: M0D2;GPIO0_2}
  - {pin_num: '113', pin_signal: ADC1_SE4b/CMP0_IN2/PTC8/FTM3_CH4/I2S0_MCLK/FB_AD7, label: M1P1, identifier: M1P1;GPIO1_1}
  - {pin_num: '114', pin_signal: ADC1_SE5b/CMP0_IN3/PTC9/FTM3_CH5/I2S0_RX_BCLK/FB_AD6/FTM2_FLT0, label: M2P1, identifier: M2P1;GPIO2_1}
  - {pin_num: '115', pin_signal: ADC1_SE6b/PTC10/I2C1_SCL/FTM3_CH6/I2S0_RX_FS/FB_AD5, label: SI2C0_SCL, identifier: SI2C0_SCL}
  - {pin_num: '116', pin_signal: ADC1_SE7b/PTC11/LLWU_P11/I2C1_SDA/FTM3_CH7/I2S0_RXD1/FB_RW_b, label: SI2C0_SDA, identifier: SI2C0_SDA}
  - {pin_num: '117', pin_signal: PTC12/UART4_RTS_b/FB_AD27/FTM3_FLT0, label: M0D3, identifier: M0D3;GPIO0_3}
  - {pin_num: '118', pin_signal: PTC13/UART4_CTS_b/FB_AD26, label: M3D0, identifier: M3D0;GPIO3_0}
  - {pin_num: '123', pin_signal: PTC16/UART3_RX/ENET0_1588_TMR0/FB_CS5_b/FB_TSIZ1/FB_BE23_16_BLS15_8_b, label: M3D1, identifier: M3D1;GPIO3_1}
  - {pin_num: '124', pin_signal: PTC17/UART3_TX/ENET0_1588_TMR1/FB_CS4_b/FB_TSIZ0/FB_BE31_24_BLS7_0_b, label: M3D2, identifier: M3D2;GPIO3_2}
  - {pin_num: '125', pin_signal: PTC18/UART3_RTS_b/ENET0_1588_TMR2/FB_TBST_b/FB_CS2_b/FB_BE15_8_BLS23_16_b, label: M3D3, identifier: M3D3;GPIO3_3}
  - {pin_num: '126', pin_signal: PTC19/UART3_CTS_b/ENET0_1588_TMR3/FB_CS3_b/FB_BE7_0_BLS31_24_b/FB_TA_b, label: SSPI_SEL3, identifier: SSPI_SEL3}
  - {pin_num: '127', pin_signal: PTD0/LLWU_P12/SPI0_PCS0/UART2_RTS_b/FTM3_CH0/FB_ALE/FB_CS1_b/FB_TS_b, label: M0P1, identifier: M0P1;PWM0_1}
  - {pin_num: '128', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/UART2_CTS_b/FTM3_CH1/FB_CS0_b, label: M3P1, identifier: M3P1;PWM3_1}
  - {pin_num: '129', pin_signal: PTD2/LLWU_P13/SPI0_SOUT/UART2_RX/FTM3_CH2/FB_AD4/I2C0_SCL, label: SD1, identifier: SD1;GPIOS_1}
  - {pin_num: '130', pin_signal: PTD3/SPI0_SIN/UART2_TX/FTM3_CH3/FB_AD3/I2C0_SDA, label: USB_SENSE, identifier: USB_SENSE}
  - {pin_num: '131', pin_signal: PTD4/LLWU_P14/SPI0_PCS1/UART0_RTS_b/FTM0_CH4/FB_AD2/EWM_IN/SPI1_PCS0, label: M3P0, identifier: M3P0;PWM3_0}
  - {pin_num: '132', pin_signal: ADC0_SE6b/PTD5/SPI0_PCS2/UART0_CTS_b/UART0_COL_b/FTM0_CH5/FB_AD1/EWM_OUT_b/SPI1_SCK, label: M7P0, identifier: M7P0;PWM7_0}
  - {pin_num: '133', pin_signal: ADC0_SE7b/PTD6/LLWU_P15/SPI0_PCS3/UART0_RX/FTM0_CH6/FB_AD0/FTM0_FLT0/SPI1_SOUT, label: M2P0, identifier: M2P0;PWM2_0}
  - {pin_num: '136', pin_signal: PTD7/CMT_IRO/UART0_TX/FTM0_CH7/FTM0_FLT1/SPI1_SIN, label:
, identifier: M0P0;PWM0_0}
  - {pin_num: '137', pin_signal: PTD8/I2C0_SCL/UART5_RX/FB_A16, label: SI2C1_SCL, identifier: SI2C1_SCL}
  - {pin_num: '138', pin_signal: PTD9/I2C0_SDA/UART5_TX/FB_A17, label: SI2C1_SDA, identifier: SI2C1_SDA}
  - {pin_num: '139', pin_signal: PTD10/UART5_RTS_b/FB_A18, label: M7D0, identifier: M7D0;GPIO7_0}
  - {pin_num: '140', pin_signal: PTD11/SPI2_PCS0/UART5_CTS_b/SDHC0_CLKIN/FB_A19, label: M7D1, identifier: M7D1;GPIO7_1}
  - {pin_num: '141', pin_signal: PTD12/SPI2_SCK/FTM3_FLT0/SDHC0_D4/FB_A20, label: M7D2, identifier: M7D2;GPIO7_2}
  - {pin_num: '142', pin_signal: PTD13/SPI2_SOUT/SDHC0_D5/FB_A21, label: M7D3, identifier: M7D3;GPIO7_3}
  - {pin_num: '143', pin_signal: PTD14/SPI2_SIN/SDHC0_D6/FB_A22, label: SI2C_SEL2, identifier: SI2C_SEL2}
  - {pin_num: '144', pin_signal: PTD15/SPI2_PCS1/SDHC0_D7/FB_A23, label: SI2C_SEL3, identifier: SI2C_SEL3}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR THE PINS TOOL ***
 */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"

#define PCR_DSE_HIGH                  0x01u   /*!< Drive Strength Enable: High drive strength is configured on the corresponding pin, if pin is configured as a digital output. */
#define PCR_PE_DISABLED               0x00u   /*!< Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
#define PCR_PS_DOWN                   0x00u   /*!< Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set. */
#define PCR_PS_UP                     0x01u   /*!< Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set. */
#define PIN0_IDX                         0u   /*!< Pin number for pin 0 in a port */
#define PIN1_IDX                         1u   /*!< Pin number for pin 1 in a port */
#define PIN2_IDX                         2u   /*!< Pin number for pin 2 in a port */
#define PIN3_IDX                         3u   /*!< Pin number for pin 3 in a port */
#define PIN4_IDX                         4u   /*!< Pin number for pin 4 in a port */
#define PIN5_IDX                         5u   /*!< Pin number for pin 5 in a port */
#define PIN6_IDX                         6u   /*!< Pin number for pin 6 in a port */
#define PIN7_IDX                         7u   /*!< Pin number for pin 7 in a port */
#define PIN8_IDX                         8u   /*!< Pin number for pin 8 in a port */
#define PIN9_IDX                         9u   /*!< Pin number for pin 9 in a port */
#define PIN10_IDX                       10u   /*!< Pin number for pin 10 in a port */
#define PIN11_IDX                       11u   /*!< Pin number for pin 11 in a port */
#define PIN12_IDX                       12u   /*!< Pin number for pin 12 in a port */
#define PIN13_IDX                       13u   /*!< Pin number for pin 13 in a port */
#define PIN16_IDX                       16u   /*!< Pin number for pin 16 in a port */
#define PIN17_IDX                       17u   /*!< Pin number for pin 17 in a port */
#define PIN18_IDX                       18u   /*!< Pin number for pin 18 in a port */
#define PIN19_IDX                       19u   /*!< Pin number for pin 19 in a port */
#define PIN20_IDX                       20u   /*!< Pin number for pin 20 in a port */
#define PIN21_IDX                       21u   /*!< Pin number for pin 21 in a port */
#define PIN22_IDX                       22u   /*!< Pin number for pin 22 in a port */
#define PIN23_IDX                       23u   /*!< Pin number for pin 23 in a port */
#define PIN24_IDX                       24u   /*!< Pin number for pin 24 in a port */
#define PIN25_IDX                       25u   /*!< Pin number for pin 25 in a port */
#define PIN26_IDX                       26u   /*!< Pin number for pin 26 in a port */
#define PIN27_IDX                       27u   /*!< Pin number for pin 27 in a port */
#define PIN28_IDX                       28u   /*!< Pin number for pin 28 in a port */
#define PIN29_IDX                       29u   /*!< Pin number for pin 29 in a port */

/*
 * TEXT BELOW IS USED AS SETTING FOR THE PINS TOOL *****************************
BOARD_InitPins:
- options: {coreID: singlecore, enableClock: 'true'}
- pin_list:
  - {pin_num: '5', peripheral: SUPPLY, signal: 'VDD, 0', pin_signal: VDD5}
  - {pin_num: '16', peripheral: SUPPLY, signal: 'VDD, 1', pin_signal: VDD16}
  - {pin_num: '43', peripheral: SUPPLY, signal: 'VDD, 2', pin_signal: VDD50}
  - {pin_num: '56', peripheral: SUPPLY, signal: 'VDD, 3', pin_signal: VDD63}
  - {pin_num: '70', peripheral: SUPPLY, signal: 'VDD, 4', pin_signal: VDD80}
  - {pin_num: '94', peripheral: SUPPLY, signal: 'VDD, 5', pin_signal: VDD110}
  - {pin_num: '108', peripheral: SUPPLY, signal: 'VDD, 6', pin_signal: VDD124}
  - {pin_num: '122', peripheral: SUPPLY, signal: 'VDD, 7', pin_signal: VDD140}
  - {pin_num: '135', peripheral: SUPPLY, signal: 'VDD, 8', pin_signal: VDD153}
  - {pin_num: '31', peripheral: SUPPLY, signal: 'VDDA, 0', pin_signal: VDDA}
  - {pin_num: '6', peripheral: SUPPLY, signal: 'VSS, 0', pin_signal: VSS6}
  - {pin_num: '17', peripheral: SUPPLY, signal: 'VSS, 1', pin_signal: VSS17}
  - {pin_num: '18', peripheral: SUPPLY, signal: 'VSS, 2', pin_signal: VSS18}
  - {pin_num: '44', peripheral: SUPPLY, signal: 'VSS, 3', pin_signal: VSS51}
  - {pin_num: '57', peripheral: SUPPLY, signal: 'VSS, 4', pin_signal: VSS64}
  - {pin_num: '71', peripheral: SUPPLY, signal: 'VSS, 5', pin_signal: VSS81}
  - {pin_num: '93', peripheral: SUPPLY, signal: 'VSS, 6', pin_signal: VSS109}
  - {pin_num: '107', peripheral: SUPPLY, signal: 'VSS, 7', pin_signal: VSS123}
  - {pin_num: '121', peripheral: SUPPLY, signal: 'VSS, 8', pin_signal: VSS139}
  - {pin_num: '134', peripheral: SUPPLY, signal: 'VSS, 9', pin_signal: VSS152}
  - {pin_num: '34', peripheral: SUPPLY, signal: 'VSSA, 0', pin_signal: VSSA}
  - {pin_num: '12', peripheral: GPIOE, signal: 'GPIO, 9', pin_signal: PTE9/I2S0_TXD1/UART5_RX/I2S0_RX_BCLK/FTM3_CH4, identifier: M5D0, direction: OUTPUT}
  - {pin_num: '13', peripheral: GPIOE, signal: 'GPIO, 10', pin_signal: PTE10/UART5_CTS_b/I2S0_TXD0/FTM3_CH5, identifier: M5D1, direction: OUTPUT}
  - {pin_num: '23', peripheral: ADC0, signal: 'SE, 1', pin_signal: ADC0_DP1, identifier: SA1}
  - {pin_num: '24', peripheral: ADC0, signal: 'SE, 20', pin_signal: ADC0_DM1, identifier: SA0}
  - {pin_num: '25', peripheral: ADC1, signal: 'SE, 1', pin_signal: ADC1_DP1, identifier: M2A0}
  - {pin_num: '26', peripheral: ADC1, signal: 'SE, 20', pin_signal: ADC1_DM1, identifier: M2A1}
  - {pin_num: '30', peripheral: ADC1, signal: 'SE, 19', pin_signal: ADC1_DM0/ADC0_DM3, identifier: M3A1}
  - {pin_num: '29', peripheral: ADC1, signal: 'SE, 0', pin_signal: ADC1_DP0/ADC0_DP3, identifier: M3A0}
  - {pin_num: '28', peripheral: ADC0, signal: 'SE, 19', pin_signal: ADC0_DM0/ADC1_DM3, identifier: M1A1}
  - {pin_num: '27', peripheral: ADC0, signal: 'SE, 0', pin_signal: ADC0_DP0/ADC1_DP3, identifier: M1A0}
  - {pin_num: '32', peripheral: ADC0, signal: VREFH, pin_signal: VREFH}
  - {pin_num: '32', peripheral: ADC1, signal: VREFH, pin_signal: VREFH}
  - {pin_num: '33', peripheral: ADC0, signal: VREFL, pin_signal: VREFL}
  - {pin_num: '33', peripheral: ADC1, signal: VREFL, pin_signal: VREFL}
  - {pin_num: '35', peripheral: ADC1, signal: 'SE, 16', pin_signal: ADC1_SE16/CMP2_IN2/ADC0_SE22, identifier: M4A0}
  - {pin_num: '36', peripheral: ADC0, signal: 'SE, 16', pin_signal: ADC0_SE16/CMP1_IN2/ADC0_SE21, identifier: M5A0}
  - {pin_num: '37', peripheral: ADC1, signal: 'SE, 18', pin_signal: VREF_OUT/CMP1_IN5/CMP0_IN5/ADC1_SE18, identifier: M0A0}
  - {pin_num: '38', peripheral: ADC0, signal: 'SE, 23', pin_signal: DAC0_OUT/CMP1_IN3/ADC0_SE23, identifier: M0A1}
  - {pin_num: '39', peripheral: ADC1, signal: 'SE, 23', pin_signal: DAC1_OUT/CMP0_IN4/CMP2_IN3/ADC1_SE23, identifier: M6A1}
  - {pin_num: '42', peripheral: RTC, signal: VBAT, pin_signal: VBAT}
  - {pin_num: '47', peripheral: GPIOE, signal: 'GPIO, 26', pin_signal: PTE26/ENET_1588_CLKIN/UART4_CTS_b/RTC_CLKOUT/USB_CLKIN, direction: OUTPUT, pull_select: down}
  - {pin_num: '48', peripheral: GPIOE, signal: 'GPIO, 27', pin_signal: PTE27/UART4_RTS_b, identifier: M5D2, direction: OUTPUT}
  - {pin_num: '49', peripheral: GPIOE, signal: 'GPIO, 28', pin_signal: PTE28, identifier: M5D3, direction: OUTPUT}
  - {pin_num: '50', peripheral: JTAG, signal: JTAG_TCLK_SWD_CLK, pin_signal: PTA0/UART0_CTS_b/UART0_COL_b/FTM0_CH5/JTAG_TCLK/SWD_CLK/EZP_CLK}
  - {pin_num: '51', peripheral: JTAG, signal: TDI, pin_signal: PTA1/UART0_RX/FTM0_CH6/JTAG_TDI/EZP_DI}
  - {pin_num: '52', peripheral: JTAG, signal: TDO, pin_signal: PTA2/UART0_TX/FTM0_CH7/JTAG_TDO/TRACE_SWO/EZP_DO}
  - {pin_num: '53', peripheral: JTAG, signal: JTAG_TMS_SWD_DIO, pin_signal: PTA3/UART0_RTS_b/FTM0_CH0/JTAG_TMS/SWD_DIO}
  - {pin_num: '54', peripheral: GPIOA, signal: 'GPIO, 4', pin_signal: PTA4/LLWU_P3/FTM0_CH1/NMI_b/EZP_CS_b, pull_select: up, pull_enable: disable}
  - {pin_num: '55', peripheral: GPIOA, signal: 'GPIO, 5', pin_signal: PTA5/USB_CLKIN/FTM0_CH2/RMII0_RXER/MII0_RXER/CMP2_OUT/I2S0_TX_BCLK/JTAG_TRST_b}
  - {pin_num: '59', peripheral: ADC0, signal: 'SE, 10', pin_signal: ADC0_SE10/PTA7/FTM0_CH4/TRACE_D3, identifier: M6A0}
  - {pin_num: '62', peripheral: GPIOA, signal: 'GPIO, 10', pin_signal: PTA10/FTM2_CH0/MII0_RXD2/FTM2_QD_PHA/TRACE_D0, identifier: M4D0, direction: OUTPUT}
  - {pin_num: '63', peripheral: GPIOA, signal: 'GPIO, 11', pin_signal: PTA11/FTM2_CH1/MII0_RXCLK/I2C2_SDA/FTM2_QD_PHB, identifier: M4D1, direction: OUTPUT}
  - {pin_num: '64', peripheral: GPIOA, signal: 'GPIO, 12', pin_signal: CMP2_IN0/PTA12/CAN0_TX/FTM1_CH0/RMII0_RXD1/MII0_RXD1/I2C2_SCL/I2S0_TXD0/FTM1_QD_PHA}
  - {pin_num: '65', peripheral: GPIOA, signal: 'GPIO, 13', pin_signal: CMP2_IN1/PTA13/LLWU_P4/CAN0_RX/FTM1_CH1/RMII0_RXD0/MII0_RXD0/I2C2_SDA/I2S0_TX_FS/FTM1_QD_PHB}
  - {pin_num: '74', peripheral: LLWU, signal: RESET, pin_signal: RESET_b}
  - {pin_num: '74', peripheral: RCM, signal: RESET, pin_signal: RESET_b}
  - {pin_num: '73', peripheral: GPIOA, signal: 'GPIO, 19', pin_signal: XTAL0/PTA19/FTM1_FLT0/FTM_CLKIN1/LPTMR0_ALT1}
  - {pin_num: '75', peripheral: GPIOA, signal: 'GPIO, 24', pin_signal: PTA24/MII0_TXD2/FB_A29, identifier: M4D2, direction: OUTPUT}
  - {pin_num: '76', peripheral: GPIOA, signal: 'GPIO, 25', pin_signal: PTA25/MII0_TXCLK/FB_A28, identifier: M4D3, direction: OUTPUT}
  - {pin_num: '77', peripheral: GPIOA, signal: 'GPIO, 26', pin_signal: PTA26/MII0_TXD3/FB_A27, identifier: M6D0, direction: OUTPUT}
  - {pin_num: '78', peripheral: GPIOA, signal: 'GPIO, 27', pin_signal: PTA27/MII0_CRS/FB_A26, identifier: M6D1, direction: OUTPUT}
  - {pin_num: '79', peripheral: GPIOA, signal: 'GPIO, 28', pin_signal: PTA28/MII0_TXER/FB_A25, identifier: M6D2, direction: OUTPUT}
  - {pin_num: '80', peripheral: GPIOA, signal: 'GPIO, 29', pin_signal: PTA29/MII0_COL/FB_A24, identifier: M6D3, direction: OUTPUT}
  - {pin_num: '83', peripheral: GPIOB, signal: 'GPIO, 2', pin_signal: ADC0_SE12/PTB2/I2C0_SCL/UART0_RTS_b/ENET0_1588_TMR0/FTM0_FLT3, identifier: M2D3, direction: OUTPUT}
  - {pin_num: '84', peripheral: GPIOB, signal: 'GPIO, 3', pin_signal: ADC0_SE13/PTB3/I2C0_SDA/UART0_CTS_b/UART0_COL_b/ENET0_1588_TMR1/FTM0_FLT0, identifier: M2D2,
    direction: OUTPUT}
  - {pin_num: '85', peripheral: ADC1, signal: 'SE, 10', pin_signal: ADC1_SE10/PTB4/ENET0_1588_TMR2/FTM1_FLT0, identifier: M7A0}
  - {pin_num: '86', peripheral: ADC1, signal: 'SE, 11', pin_signal: ADC1_SE11/PTB5/ENET0_1588_TMR3/FTM2_FLT0, identifier: M4A1}
  - {pin_num: '87', peripheral: ADC1, signal: 'SE, 12', pin_signal: ADC1_SE12/PTB6/FB_AD23, identifier: M7A1}
  - {pin_num: '88', peripheral: ADC1, signal: 'SE, 13', pin_signal: ADC1_SE13/PTB7/FB_AD22, identifier: M5A1}
  - {pin_num: '97', peripheral: GPIOB, signal: 'GPIO, 18', pin_signal: PTB18/CAN0_TX/FTM2_CH0/I2S0_TX_BCLK/FB_AD15/FTM2_QD_PHA, identifier: M2D1, direction: OUTPUT}
  - {pin_num: '98', peripheral: GPIOB, signal: 'GPIO, 19', pin_signal: PTB19/CAN0_RX/FTM2_CH1/I2S0_TX_FS/FB_OE_b/FTM2_QD_PHB, identifier: M2D0, direction: OUTPUT}
  - {pin_num: '103', peripheral: GPIOC, signal: 'GPIO, 0', pin_signal: ADC0_SE14/PTC0/SPI0_PCS4/PDB0_EXTRG/USB_SOF_OUT/FB_AD14/I2S0_TXD1, identifier: SD0}
  - {pin_num: '102', peripheral: GPIOB, signal: 'GPIO, 23', pin_signal: PTB23/SPI2_SIN/SPI0_PCS5/FB_AD28, identifier: M1D3, direction: OUTPUT}
  - {pin_num: '101', peripheral: GPIOB, signal: 'GPIO, 22', pin_signal: PTB22/SPI2_SOUT/FB_AD29/CMP2_OUT, identifier: M1D2, direction: OUTPUT}
  - {pin_num: '100', peripheral: GPIOB, signal: 'GPIO, 21', pin_signal: PTB21/SPI2_SCK/FB_AD30/CMP1_OUT, identifier: M1D1, direction: OUTPUT}
  - {pin_num: '99', peripheral: GPIOB, signal: 'GPIO, 20', pin_signal: PTB20/SPI2_PCS0/FB_AD31/CMP0_OUT, identifier: M1D0, direction: OUTPUT}
  - {pin_num: '109', peripheral: GPIOC, signal: 'GPIO, 4', pin_signal: PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/FTM0_CH3/FB_AD11/CMP1_OUT, identifier: M0D0, direction: OUTPUT,
    drive_strength: high, pull_select: no_init}
  - {pin_num: '111', peripheral: GPIOC, signal: 'GPIO, 6', pin_signal: CMP0_IN0/PTC6/LLWU_P10/SPI0_SOUT/PDB0_EXTRG/I2S0_RX_BCLK/FB_AD9/I2S0_MCLK, identifier: M0D1,
    direction: OUTPUT, drive_strength: high, pull_select: no_init}
  - {pin_num: '112', peripheral: GPIOC, signal: 'GPIO, 7', pin_signal: CMP0_IN1/PTC7/SPI0_SIN/USB_SOF_OUT/I2S0_RX_FS/FB_AD8, identifier: M0D2, direction: OUTPUT,
    drive_strength: high, pull_select: no_init}
  - {pin_num: '117', peripheral: GPIOC, signal: 'GPIO, 12', pin_signal: PTC12/UART4_RTS_b/FB_AD27/FTM3_FLT0, identifier: M0D3, direction: OUTPUT, drive_strength: high,
    pull_select: no_init}
  - {pin_num: '118', peripheral: GPIOC, signal: 'GPIO, 13', pin_signal: PTC13/UART4_CTS_b/FB_AD26, identifier: M3D0, direction: OUTPUT}
  - {pin_num: '123', peripheral: GPIOC, signal: 'GPIO, 16', pin_signal: PTC16/UART3_RX/ENET0_1588_TMR0/FB_CS5_b/FB_TSIZ1/FB_BE23_16_BLS15_8_b, identifier: M3D1, direction: OUTPUT}
  - {pin_num: '124', peripheral: GPIOC, signal: 'GPIO, 17', pin_signal: PTC17/UART3_TX/ENET0_1588_TMR1/FB_CS4_b/FB_TSIZ0/FB_BE31_24_BLS7_0_b, identifier: M3D2, direction: OUTPUT}
  - {pin_num: '125', peripheral: GPIOC, signal: 'GPIO, 18', pin_signal: PTC18/UART3_RTS_b/ENET0_1588_TMR2/FB_TBST_b/FB_CS2_b/FB_BE15_8_BLS23_16_b, identifier: M3D3,
    direction: OUTPUT}
  - {pin_num: '129', peripheral: GPIOD, signal: 'GPIO, 2', pin_signal: PTD2/LLWU_P13/SPI0_SOUT/UART2_RX/FTM3_CH2/FB_AD4/I2C0_SCL, identifier: SD1}
  - {pin_num: '139', peripheral: GPIOD, signal: 'GPIO, 10', pin_signal: PTD10/UART5_RTS_b/FB_A18, identifier: M7D0, direction: OUTPUT}
  - {pin_num: '140', peripheral: GPIOD, signal: 'GPIO, 11', pin_signal: PTD11/SPI2_PCS0/UART5_CTS_b/SDHC0_CLKIN/FB_A19, identifier: M7D1, direction: OUTPUT}
  - {pin_num: '141', peripheral: GPIOD, signal: 'GPIO, 12', pin_signal: PTD12/SPI2_SCK/FTM3_FLT0/SDHC0_D4/FB_A20, identifier: M7D2, direction: OUTPUT}
  - {pin_num: '142', peripheral: GPIOD, signal: 'GPIO, 13', pin_signal: PTD13/SPI2_SOUT/SDHC0_D5/FB_A21, identifier: M7D3, direction: OUTPUT}
  - {pin_num: '72', peripheral: GPIOA, signal: 'GPIO, 18', pin_signal: EXTAL0/PTA18/FTM0_FLT2/FTM_CLKIN0}
  - {pin_num: '10', peripheral: GPIOE, signal: 'GPIO, 7', pin_signal: PTE7/UART3_RTS_b/I2S0_RXD0/FTM3_CH2, identifier: M5P1, direction: OUTPUT}
  - {pin_num: '11', peripheral: GPIOE, signal: 'GPIO, 8', pin_signal: PTE8/I2S0_RXD1/UART5_TX/I2S0_RX_FS/FTM3_CH3, identifier: M4P1, direction: OUTPUT}
  - {pin_num: '14', peripheral: GPIOE, signal: 'GPIO, 11', pin_signal: PTE11/UART5_RTS_b/I2S0_TX_FS/FTM3_CH6, identifier: M6P1, direction: OUTPUT}
  - {pin_num: '15', peripheral: GPIOE, signal: 'GPIO, 12', pin_signal: PTE12/I2S0_TX_BCLK/FTM3_CH7, identifier: M7P1, direction: OUTPUT}
  - {pin_num: '58', peripheral: GPIOA, signal: 'GPIO, 6', pin_signal: PTA6/FTM0_CH3/TRACE_CLKOUT, identifier: M4P0, direction: OUTPUT}
  - {pin_num: '60', peripheral: GPIOA, signal: 'GPIO, 8', pin_signal: ADC0_SE11/PTA8/FTM1_CH0/FTM1_QD_PHA/TRACE_D2, identifier: M6P0, direction: OUTPUT}
  - {pin_num: '61', peripheral: GPIOA, signal: 'GPIO, 9', pin_signal: PTA9/FTM1_CH1/MII0_RXD3/FTM1_QD_PHB/TRACE_D1, identifier: M5P0, direction: OUTPUT}
  - {pin_num: '104', peripheral: GPIOC, signal: 'GPIO, 1', pin_signal: ADC0_SE15/PTC1/LLWU_P6/SPI0_PCS3/UART1_RTS_b/FTM0_CH0/FB_AD13/I2S0_TXD0, identifier: SP0}
  - {pin_num: '105', peripheral: GPIOC, signal: 'GPIO, 2', pin_signal: ADC0_SE4b/CMP1_IN0/PTC2/SPI0_PCS2/UART1_CTS_b/FTM0_CH1/FB_AD12/I2S0_TX_FS, identifier: M1P0,
    direction: OUTPUT}
  - {pin_num: '113', peripheral: GPIOC, signal: 'GPIO, 8', pin_signal: ADC1_SE4b/CMP0_IN2/PTC8/FTM3_CH4/I2S0_MCLK/FB_AD7, identifier: M1P1, direction: OUTPUT}
  - {pin_num: '114', peripheral: GPIOC, signal: 'GPIO, 9', pin_signal: ADC1_SE5b/CMP0_IN3/PTC9/FTM3_CH5/I2S0_RX_BCLK/FB_AD6/FTM2_FLT0, identifier: M2P1, direction: OUTPUT}
  - {pin_num: '110', peripheral: GPIOC, signal: 'GPIO, 5', pin_signal: PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/I2S0_RXD0/FB_AD10/CMP0_OUT/FTM0_CH2, drive_strength: high}
  - {pin_num: '127', peripheral: GPIOD, signal: 'GPIO, 0', pin_signal: PTD0/LLWU_P12/SPI0_PCS0/UART2_RTS_b/FTM3_CH0/FB_ALE/FB_CS1_b/FB_TS_b, identifier: M0P1, drive_strength: high,
    pull_select: no_init}
  - {pin_num: '128', peripheral: GPIOD, signal: 'GPIO, 1', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/UART2_CTS_b/FTM3_CH1/FB_CS0_b, identifier: M3P1, direction: OUTPUT}
  - {pin_num: '131', peripheral: GPIOD, signal: 'GPIO, 4', pin_signal: PTD4/LLWU_P14/SPI0_PCS1/UART0_RTS_b/FTM0_CH4/FB_AD2/EWM_IN/SPI1_PCS0, identifier: M3P0, direction: OUTPUT}
  - {pin_num: '132', peripheral: GPIOD, signal: 'GPIO, 5', pin_signal: ADC0_SE6b/PTD5/SPI0_PCS2/UART0_CTS_b/UART0_COL_b/FTM0_CH5/FB_AD1/EWM_OUT_b/SPI1_SCK, identifier: M7P0,
    direction: OUTPUT}
  - {pin_num: '133', peripheral: GPIOD, signal: 'GPIO, 6', pin_signal: ADC0_SE7b/PTD6/LLWU_P15/SPI0_PCS3/UART0_RX/FTM0_CH6/FB_AD0/FTM0_FLT0/SPI1_SOUT, identifier: M2P0,
    direction: OUTPUT}
  - {pin_num: '136', peripheral: GPIOD, signal: 'GPIO, 7', pin_signal: PTD7/CMT_IRO/UART0_TX/FTM0_CH7/FTM0_FLT1/SPI1_SIN, identifier: M0P0, direction: OUTPUT, drive_strength: high,
    pull_select: no_init}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR THE PINS TOOL ***
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_PortA);                           /* Port A Clock Gate Control: Clock enabled */
  CLOCK_EnableClock(kCLOCK_PortB);                           /* Port B Clock Gate Control: Clock enabled */
  CLOCK_EnableClock(kCLOCK_PortC);                           /* Port C Clock Gate Control: Clock enabled */
  CLOCK_EnableClock(kCLOCK_PortD);                           /* Port D Clock Gate Control: Clock enabled */
  CLOCK_EnableClock(kCLOCK_PortE);                           /* Port E Clock Gate Control: Clock enabled */

  PORT_SetPinMux(PORTA, PIN0_IDX, kPORT_MuxAlt7);            /* PORTA0 (pin 50) is configured as JTAG_TCLK */
  PORT_SetPinMux(PORTA, PIN1_IDX, kPORT_MuxAlt7);            /* PORTA1 (pin 51) is configured as JTAG_TDI */
  PORT_SetPinMux(PORTA, PIN10_IDX, kPORT_MuxAsGpio);         /* PORTA10 (pin 62) is configured as PTA10 */
  PORT_SetPinMux(PORTA, PIN11_IDX, kPORT_MuxAsGpio);         /* PORTA11 (pin 63) is configured as PTA11 */
  PORT_SetPinMux(PORTA, PIN12_IDX, kPORT_MuxAsGpio);         /* PORTA12 (pin 64) is configured as PTA12 */
  PORT_SetPinMux(PORTA, PIN13_IDX, kPORT_MuxAsGpio);         /* PORTA13 (pin 65) is configured as PTA13 */
  PORT_SetPinMux(PORTA, PIN18_IDX, kPORT_MuxAsGpio);         /* PORTA18 (pin 72) is configured as PTA18 */
  PORT_SetPinMux(PORTA, PIN19_IDX, kPORT_MuxAsGpio);         /* PORTA19 (pin 73) is configured as PTA19 */
  PORT_SetPinMux(PORTA, PIN2_IDX, kPORT_MuxAlt7);            /* PORTA2 (pin 52) is configured as JTAG_TDO */
  PORT_SetPinMux(PORTA, PIN24_IDX, kPORT_MuxAsGpio);         /* PORTA24 (pin 75) is configured as PTA24 */
  PORT_SetPinMux(PORTA, PIN25_IDX, kPORT_MuxAsGpio);         /* PORTA25 (pin 76) is configured as PTA25 */
  PORT_SetPinMux(PORTA, PIN26_IDX, kPORT_MuxAsGpio);         /* PORTA26 (pin 77) is configured as PTA26 */
  PORT_SetPinMux(PORTA, PIN27_IDX, kPORT_MuxAsGpio);         /* PORTA27 (pin 78) is configured as PTA27 */
  PORT_SetPinMux(PORTA, PIN28_IDX, kPORT_MuxAsGpio);         /* PORTA28 (pin 79) is configured as PTA28 */
  PORT_SetPinMux(PORTA, PIN29_IDX, kPORT_MuxAsGpio);         /* PORTA29 (pin 80) is configured as PTA29 */
  PORT_SetPinMux(PORTA, PIN3_IDX, kPORT_MuxAlt7);            /* PORTA3 (pin 53) is configured as JTAG_TMS */
  PORT_SetPinMux(PORTA, PIN4_IDX, kPORT_MuxAsGpio);          /* PORTA4 (pin 54) is configured as PTA4 */
  PORTA->PCR[4] = ((PORTA->PCR[4] &
    (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK))) /* Mask bits to zero which are setting */
      | PORT_PCR_PS(PCR_PS_UP)                               /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE field is set. */
      | PORT_PCR_PE(PCR_PE_DISABLED)                         /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
    );
  PORT_SetPinMux(PORTA, PIN5_IDX, kPORT_MuxAsGpio);          /* PORTA5 (pin 55) is configured as PTA5 */
  PORT_SetPinMux(PORTA, PIN6_IDX, kPORT_MuxAsGpio);          /* PORTA6 (pin 58) is configured as PTA6 */
  PORT_SetPinMux(PORTA, PIN7_IDX, kPORT_PinDisabledOrAnalog); /* PORTA7 (pin 59) is configured as ADC0_SE10 */
  PORT_SetPinMux(PORTA, PIN8_IDX, kPORT_MuxAsGpio);          /* PORTA8 (pin 60) is configured as PTA8 */
  PORT_SetPinMux(PORTA, PIN9_IDX, kPORT_MuxAsGpio);          /* PORTA9 (pin 61) is configured as PTA9 */
  PORT_SetPinMux(PORTB, PIN18_IDX, kPORT_MuxAsGpio);         /* PORTB18 (pin 97) is configured as PTB18 */
  PORT_SetPinMux(PORTB, PIN19_IDX, kPORT_MuxAsGpio);         /* PORTB19 (pin 98) is configured as PTB19 */
  PORT_SetPinMux(PORTB, PIN2_IDX, kPORT_MuxAsGpio);          /* PORTB2 (pin 83) is configured as PTB2 */
  PORT_SetPinMux(PORTB, PIN20_IDX, kPORT_MuxAsGpio);         /* PORTB20 (pin 99) is configured as PTB20 */
  PORT_SetPinMux(PORTB, PIN21_IDX, kPORT_MuxAsGpio);         /* PORTB21 (pin 100) is configured as PTB21 */
  PORT_SetPinMux(PORTB, PIN22_IDX, kPORT_MuxAsGpio);         /* PORTB22 (pin 101) is configured as PTB22 */
  PORT_SetPinMux(PORTB, PIN23_IDX, kPORT_MuxAsGpio);         /* PORTB23 (pin 102) is configured as PTB23 */
  PORT_SetPinMux(PORTB, PIN3_IDX, kPORT_MuxAsGpio);          /* PORTB3 (pin 84) is configured as PTB3 */
  PORT_SetPinMux(PORTB, PIN4_IDX, kPORT_PinDisabledOrAnalog); /* PORTB4 (pin 85) is configured as ADC1_SE10 */
  PORT_SetPinMux(PORTB, PIN5_IDX, kPORT_PinDisabledOrAnalog); /* PORTB5 (pin 86) is configured as ADC1_SE11 */
  PORT_SetPinMux(PORTB, PIN6_IDX, kPORT_PinDisabledOrAnalog); /* PORTB6 (pin 87) is configured as ADC1_SE12 */
  PORT_SetPinMux(PORTB, PIN7_IDX, kPORT_PinDisabledOrAnalog); /* PORTB7 (pin 88) is configured as ADC1_SE13 */
  PORT_SetPinMux(PORTC, PIN0_IDX, kPORT_MuxAsGpio);          /* PORTC0 (pin 103) is configured as PTC0 */
  PORT_SetPinMux(PORTC, PIN1_IDX, kPORT_MuxAsGpio);          /* PORTC1 (pin 104) is configured as PTC1 */
  PORT_SetPinMux(PORTC, PIN12_IDX, kPORT_MuxAsGpio);         /* PORTC12 (pin 117) is configured as PTC12 */
  PORTC->PCR[12] = ((PORTC->PCR[12] &
    (~(PORT_PCR_DSE_MASK | PORT_PCR_ISF_MASK)))              /* Mask bits to zero which are setting */
      | PORT_PCR_DSE(PCR_DSE_HIGH)                           /* Drive Strength Enable: High drive strength is configured on the corresponding pin, if pin is configured as a digital output. */
    );
  PORT_SetPinMux(PORTC, PIN13_IDX, kPORT_MuxAsGpio);         /* PORTC13 (pin 118) is configured as PTC13 */
  PORT_SetPinMux(PORTC, PIN16_IDX, kPORT_MuxAsGpio);         /* PORTC16 (pin 123) is configured as PTC16 */
  PORT_SetPinMux(PORTC, PIN17_IDX, kPORT_MuxAsGpio);         /* PORTC17 (pin 124) is configured as PTC17 */
  PORT_SetPinMux(PORTC, PIN18_IDX, kPORT_MuxAsGpio);         /* PORTC18 (pin 125) is configured as PTC18 */
  PORT_SetPinMux(PORTC, PIN2_IDX, kPORT_MuxAsGpio);          /* PORTC2 (pin 105) is configured as PTC2 */
  PORT_SetPinMux(PORTC, PIN4_IDX, kPORT_MuxAsGpio);          /* PORTC4 (pin 109) is configured as PTC4 */
  PORTC->PCR[4] = ((PORTC->PCR[4] &
    (~(PORT_PCR_DSE_MASK | PORT_PCR_ISF_MASK)))              /* Mask bits to zero which are setting */
      | PORT_PCR_DSE(PCR_DSE_HIGH)                           /* Drive Strength Enable: High drive strength is configured on the corresponding pin, if pin is configured as a digital output. */
    );
  PORT_SetPinMux(PORTC, PIN5_IDX, kPORT_MuxAsGpio);          /* PORTC5 (pin 110) is configured as PTC5 */
  PORTC->PCR[5] = ((PORTC->PCR[5] &
    (~(PORT_PCR_DSE_MASK | PORT_PCR_ISF_MASK)))              /* Mask bits to zero which are setting */
      | PORT_PCR_DSE(PCR_DSE_HIGH)                           /* Drive Strength Enable: High drive strength is configured on the corresponding pin, if pin is configured as a digital output. */
    );
  PORT_SetPinMux(PORTC, PIN6_IDX, kPORT_MuxAsGpio);          /* PORTC6 (pin 111) is configured as PTC6 */
  PORTC->PCR[6] = ((PORTC->PCR[6] &
    (~(PORT_PCR_DSE_MASK | PORT_PCR_ISF_MASK)))              /* Mask bits to zero which are setting */
      | PORT_PCR_DSE(PCR_DSE_HIGH)                           /* Drive Strength Enable: High drive strength is configured on the corresponding pin, if pin is configured as a digital output. */
    );
  PORT_SetPinMux(PORTC, PIN7_IDX, kPORT_MuxAsGpio);          /* PORTC7 (pin 112) is configured as PTC7 */
  PORTC->PCR[7] = ((PORTC->PCR[7] &
    (~(PORT_PCR_DSE_MASK | PORT_PCR_ISF_MASK)))              /* Mask bits to zero which are setting */
      | PORT_PCR_DSE(PCR_DSE_HIGH)                           /* Drive Strength Enable: High drive strength is configured on the corresponding pin, if pin is configured as a digital output. */
    );
  PORT_SetPinMux(PORTC, PIN8_IDX, kPORT_MuxAsGpio);          /* PORTC8 (pin 113) is configured as PTC8 */
  PORT_SetPinMux(PORTC, PIN9_IDX, kPORT_MuxAsGpio);          /* PORTC9 (pin 114) is configured as PTC9 */
  PORT_SetPinMux(PORTD, PIN0_IDX, kPORT_MuxAsGpio);          /* PORTD0 (pin 127) is configured as PTD0 */
  PORTD->PCR[0] = ((PORTD->PCR[0] &
    (~(PORT_PCR_DSE_MASK | PORT_PCR_ISF_MASK)))              /* Mask bits to zero which are setting */
      | PORT_PCR_DSE(PCR_DSE_HIGH)                           /* Drive Strength Enable: High drive strength is configured on the corresponding pin, if pin is configured as a digital output. */
    );
  PORT_SetPinMux(PORTD, PIN1_IDX, kPORT_MuxAsGpio);          /* PORTD1 (pin 128) is configured as PTD1 */
  PORT_SetPinMux(PORTD, PIN10_IDX, kPORT_MuxAsGpio);         /* PORTD10 (pin 139) is configured as PTD10 */
  PORT_SetPinMux(PORTD, PIN11_IDX, kPORT_MuxAsGpio);         /* PORTD11 (pin 140) is configured as PTD11 */
  PORT_SetPinMux(PORTD, PIN12_IDX, kPORT_MuxAsGpio);         /* PORTD12 (pin 141) is configured as PTD12 */
  PORT_SetPinMux(PORTD, PIN13_IDX, kPORT_MuxAsGpio);         /* PORTD13 (pin 142) is configured as PTD13 */
  PORT_SetPinMux(PORTD, PIN2_IDX, kPORT_MuxAsGpio);          /* PORTD2 (pin 129) is configured as PTD2 */
  PORT_SetPinMux(PORTD, PIN4_IDX, kPORT_MuxAsGpio);          /* PORTD4 (pin 131) is configured as PTD4 */
  PORT_SetPinMux(PORTD, PIN5_IDX, kPORT_MuxAsGpio);          /* PORTD5 (pin 132) is configured as PTD5 */
  PORT_SetPinMux(PORTD, PIN6_IDX, kPORT_MuxAsGpio);          /* PORTD6 (pin 133) is configured as PTD6 */
  PORT_SetPinMux(PORTD, PIN7_IDX, kPORT_MuxAsGpio);          /* PORTD7 (pin 136) is configured as PTD7 */
  PORTD->PCR[7] = ((PORTD->PCR[7] &
    (~(PORT_PCR_DSE_MASK | PORT_PCR_ISF_MASK)))              /* Mask bits to zero which are setting */
      | PORT_PCR_DSE(PCR_DSE_HIGH)                           /* Drive Strength Enable: High drive strength is configured on the corresponding pin, if pin is configured as a digital output. */
    );
  PORT_SetPinMux(PORTE, PIN10_IDX, kPORT_MuxAsGpio);         /* PORTE10 (pin 13) is configured as PTE10 */
  PORT_SetPinMux(PORTE, PIN11_IDX, kPORT_MuxAsGpio);         /* PORTE11 (pin 14) is configured as PTE11 */
  PORT_SetPinMux(PORTE, PIN12_IDX, kPORT_MuxAsGpio);         /* PORTE12 (pin 15) is configured as PTE12 */
  PORT_SetPinMux(PORTE, PIN26_IDX, kPORT_MuxAsGpio);         /* PORTE26 (pin 47) is configured as PTE26 */
  PORTE->PCR[26] = ((PORTE->PCR[26] &
    (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))               /* Mask bits to zero which are setting */
      | PORT_PCR_PS(PCR_PS_DOWN)                             /* Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the corresponding PE field is set. */
    );
  PORT_SetPinMux(PORTE, PIN27_IDX, kPORT_MuxAsGpio);         /* PORTE27 (pin 48) is configured as PTE27 */
  PORT_SetPinMux(PORTE, PIN28_IDX, kPORT_MuxAsGpio);         /* PORTE28 (pin 49) is configured as PTE28 */
  PORT_SetPinMux(PORTE, PIN7_IDX, kPORT_MuxAsGpio);          /* PORTE7 (pin 10) is configured as PTE7 */
  PORT_SetPinMux(PORTE, PIN8_IDX, kPORT_MuxAsGpio);          /* PORTE8 (pin 11) is configured as PTE8 */
  PORT_SetPinMux(PORTE, PIN9_IDX, kPORT_MuxAsGpio);          /* PORTE9 (pin 12) is configured as PTE9 */
}

/*******************************************************************************
 * EOF
 ******************************************************************************/

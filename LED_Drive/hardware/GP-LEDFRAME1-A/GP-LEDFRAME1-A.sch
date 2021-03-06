EESchema Schematic File Version 2
LIBS:atomo
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:GP-LEDFRAME1-A-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "GP-LEDFRAME1-A"
Date "2017-02-06"
Rev "A"
Comp "Hummingbird Innovations Limited"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text Notes 1600 2100 0    60   ~ 0
SENSE0
Text Notes 1600 2750 0    60   ~ 0
DRIVE0
Wire Wire Line
	2650 2400 1850 2400
Wire Wire Line
	2650 2500 1850 2500
Wire Wire Line
	1850 2600 2650 2600
Wire Wire Line
	2650 2300 1850 2300
Wire Wire Line
	1850 1550 2650 1550
Wire Wire Line
	1850 1750 2650 1750
Wire Wire Line
	1850 1650 2650 1650
Text Notes 900  1150 0    118  ~ 24
Connectors
Text Label 2650 2600 2    60   ~ 0
DRIVE0_A
Text Label 2650 2300 2    60   ~ 0
DRIVE_VIN
Text Label 2650 2500 2    60   ~ 0
DRIVE0_B
Text Label 2650 2400 2    60   ~ 0
DRIVE0_C
Text Label 2650 1550 2    60   ~ 0
ADC0
Text Label 2650 1750 2    60   ~ 0
GND
Text Label 2650 1650 2    60   ~ 0
P3V3
$Comp
L CONN_01X04 J1
U 1 1 5814C964
P 1650 2450
F 0 "J1" H 1650 2700 50  0000 C CNN
F 1 "PH1X4RAFL" V 1750 2450 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Angled_1x04" H 1650 2450 50  0001 C CNN
F 3 "" H 1650 2450 50  0001 C CNN
F 4 "Molex, LLC" H -850 -150 50  0001 C CNN "MFR"
F 5 "1718570004" H -850 -150 50  0001 C CNN "MPN"
F 6 "Digikey" H -850 -150 50  0001 C CNN "SPR"
F 7 "WM10159-ND" H -850 -150 50  0001 C CNN "SPN"
F 8 "" H -850 -150 50  0001 C CNN "SPURL"
	1    1650 2450
	-1   0    0    -1  
$EndComp
$Comp
L GND #PWR01
U 1 1 589808CE
P 2750 1750
F 0 "#PWR01" H 2750 1500 50  0001 C CNN
F 1 "GND" H 2750 1600 50  0000 C CNN
F 2 "" H 2750 1750 50  0000 C CNN
F 3 "" H 2750 1750 50  0000 C CNN
	1    2750 1750
	1    0    0    -1  
$EndComp
$Comp
L 3mm_Mounting_Hole H1
U 1 1 589829EC
P 1400 7000
F 0 "H1" H 1250 7100 60  0000 C CNN
F 1 "3mm_Mounting_Hole" H 1400 6850 60  0000 C CNN
F 2 "proj_footprints:NPTH_3mm_ID" H 1300 7000 60  0001 C CNN
F 3 "" H 1300 7000 60  0001 C CNN
	1    1400 7000
	1    0    0    -1  
$EndComp
$Comp
L 3mm_Mounting_Hole H2
U 1 1 58982A2B
P 2350 7000
F 0 "H2" H 2200 7100 60  0000 C CNN
F 1 "3mm_Mounting_Hole" H 2350 6850 60  0000 C CNN
F 2 "proj_footprints:NPTH_3mm_ID" H 2250 7000 60  0001 C CNN
F 3 "" H 2250 7000 60  0001 C CNN
	1    2350 7000
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P1
U 1 1 58982AFE
P 4700 1200
F 0 "P1" H 4700 1450 50  0000 C CNN
F 1 "1X4_LED_PADS" V 4800 1200 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 4700 1200 50  0001 C CNN
F 3 "" H 4700 1200 50  0000 C CNN
	1    4700 1200
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P2
U 1 1 58982C98
P 4700 1850
F 0 "P2" H 4700 2100 50  0000 C CNN
F 1 "1X4_LED_PADS" V 4800 1850 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 4700 1850 50  0001 C CNN
F 3 "" H 4700 1850 50  0000 C CNN
	1    4700 1850
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P3
U 1 1 58982CD8
P 4700 2500
F 0 "P3" H 4700 2750 50  0000 C CNN
F 1 "1X4_LED_PADS" V 4800 2500 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 4700 2500 50  0001 C CNN
F 3 "" H 4700 2500 50  0000 C CNN
	1    4700 2500
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P4
U 1 1 58982D15
P 4700 3150
F 0 "P4" H 4700 3400 50  0000 C CNN
F 1 "1X4_LED_PADS" V 4800 3150 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 4700 3150 50  0001 C CNN
F 3 "" H 4700 3150 50  0000 C CNN
	1    4700 3150
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P5
U 1 1 58982D6D
P 4700 3800
F 0 "P5" H 4700 4050 50  0000 C CNN
F 1 "1X4_LED_PADS" V 4800 3800 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 4700 3800 50  0001 C CNN
F 3 "" H 4700 3800 50  0000 C CNN
	1    4700 3800
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P6
U 1 1 58982DB0
P 4700 4450
F 0 "P6" H 4700 4700 50  0000 C CNN
F 1 "1X4_LED_PADS" V 4800 4450 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 4700 4450 50  0001 C CNN
F 3 "" H 4700 4450 50  0000 C CNN
	1    4700 4450
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P7
U 1 1 58982DFA
P 4700 5050
F 0 "P7" H 4700 5300 50  0000 C CNN
F 1 "1X4_LED_PADS" V 4800 5050 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 4700 5050 50  0001 C CNN
F 3 "" H 4700 5050 50  0000 C CNN
	1    4700 5050
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P8
U 1 1 58982E41
P 4700 5700
F 0 "P8" H 4700 5950 50  0000 C CNN
F 1 "1X4_LED_PADS" V 4800 5700 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 4700 5700 50  0001 C CNN
F 3 "" H 4700 5700 50  0000 C CNN
	1    4700 5700
	1    0    0    -1  
$EndComp
Wire Wire Line
	2650 1750 2650 1700
Wire Wire Line
	2650 1700 2750 1700
Wire Wire Line
	2750 1700 2750 1750
$Comp
L CONN_01X04 P9
U 1 1 58983209
P 4700 6350
F 0 "P9" H 4700 6600 50  0000 C CNN
F 1 "1X4_LED_PADS" V 4800 6350 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 4700 6350 50  0001 C CNN
F 3 "" H 4700 6350 50  0000 C CNN
	1    4700 6350
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P10
U 1 1 5898320F
P 4700 7000
F 0 "P10" H 4700 7250 50  0000 C CNN
F 1 "1X4_LED_PADS" V 4800 7000 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 4700 7000 50  0001 C CNN
F 3 "" H 4700 7000 50  0000 C CNN
	1    4700 7000
	1    0    0    -1  
$EndComp
Wire Wire Line
	3700 1150 4500 1150
Wire Wire Line
	3700 1250 4500 1250
Wire Wire Line
	4500 1350 3700 1350
Wire Wire Line
	3700 1050 4500 1050
Text Label 3700 1350 0    60   ~ 0
DRIVE0_A
Text Label 3700 1050 0    60   ~ 0
DRIVE_VIN
Text Label 3700 1250 0    60   ~ 0
DRIVE0_B
Text Label 3700 1150 0    60   ~ 0
DRIVE0_C
Wire Wire Line
	3700 1800 4500 1800
Wire Wire Line
	3700 1900 4500 1900
Wire Wire Line
	4500 2000 3700 2000
Wire Wire Line
	3700 1700 4500 1700
Text Label 3700 2000 0    60   ~ 0
DRIVE0_A
Text Label 3700 1700 0    60   ~ 0
DRIVE_VIN
Text Label 3700 1900 0    60   ~ 0
DRIVE0_B
Text Label 3700 1800 0    60   ~ 0
DRIVE0_C
Wire Wire Line
	3700 2450 4500 2450
Wire Wire Line
	3700 2550 4500 2550
Wire Wire Line
	4500 2650 3700 2650
Wire Wire Line
	3700 2350 4500 2350
Text Label 3700 2650 0    60   ~ 0
DRIVE0_A
Text Label 3700 2350 0    60   ~ 0
DRIVE_VIN
Text Label 3700 2550 0    60   ~ 0
DRIVE0_B
Text Label 3700 2450 0    60   ~ 0
DRIVE0_C
Wire Wire Line
	3700 3100 4500 3100
Wire Wire Line
	3700 3200 4500 3200
Wire Wire Line
	4500 3300 3700 3300
Wire Wire Line
	3700 3000 4500 3000
Text Label 3700 3300 0    60   ~ 0
DRIVE0_A
Text Label 3700 3000 0    60   ~ 0
DRIVE_VIN
Text Label 3700 3200 0    60   ~ 0
DRIVE0_B
Text Label 3700 3100 0    60   ~ 0
DRIVE0_C
Wire Wire Line
	3700 3750 4500 3750
Wire Wire Line
	3700 3850 4500 3850
Wire Wire Line
	4500 3950 3700 3950
Wire Wire Line
	3700 3650 4500 3650
Text Label 3700 3950 0    60   ~ 0
DRIVE0_A
Text Label 3700 3650 0    60   ~ 0
DRIVE_VIN
Text Label 3700 3850 0    60   ~ 0
DRIVE0_B
Text Label 3700 3750 0    60   ~ 0
DRIVE0_C
Wire Wire Line
	3700 4400 4500 4400
Wire Wire Line
	3700 4500 4500 4500
Wire Wire Line
	4500 4600 3700 4600
Wire Wire Line
	3700 4300 4500 4300
Text Label 3700 4600 0    60   ~ 0
DRIVE0_A
Text Label 3700 4300 0    60   ~ 0
DRIVE_VIN
Text Label 3700 4500 0    60   ~ 0
DRIVE0_B
Text Label 3700 4400 0    60   ~ 0
DRIVE0_C
Wire Wire Line
	3700 5000 4500 5000
Wire Wire Line
	3700 5100 4500 5100
Wire Wire Line
	4500 5200 3700 5200
Wire Wire Line
	3700 4900 4500 4900
Text Label 3700 5200 0    60   ~ 0
DRIVE0_A
Text Label 3700 4900 0    60   ~ 0
DRIVE_VIN
Text Label 3700 5100 0    60   ~ 0
DRIVE0_B
Text Label 3700 5000 0    60   ~ 0
DRIVE0_C
Wire Wire Line
	3700 5650 4500 5650
Wire Wire Line
	3700 5750 4500 5750
Wire Wire Line
	4500 5850 3700 5850
Wire Wire Line
	3700 5550 4500 5550
Text Label 3700 5850 0    60   ~ 0
DRIVE0_A
Text Label 3700 5550 0    60   ~ 0
DRIVE_VIN
Text Label 3700 5750 0    60   ~ 0
DRIVE0_B
Text Label 3700 5650 0    60   ~ 0
DRIVE0_C
Wire Wire Line
	3700 6300 4500 6300
Wire Wire Line
	3700 6400 4500 6400
Wire Wire Line
	4500 6500 3700 6500
Wire Wire Line
	3700 6200 4500 6200
Text Label 3700 6500 0    60   ~ 0
DRIVE0_A
Text Label 3700 6200 0    60   ~ 0
DRIVE_VIN
Text Label 3700 6400 0    60   ~ 0
DRIVE0_B
Text Label 3700 6300 0    60   ~ 0
DRIVE0_C
Wire Wire Line
	3700 6950 4500 6950
Wire Wire Line
	3700 7050 4500 7050
Wire Wire Line
	4500 7150 3700 7150
Wire Wire Line
	3700 6850 4500 6850
Text Label 3700 7150 0    60   ~ 0
DRIVE0_A
Text Label 3700 6850 0    60   ~ 0
DRIVE_VIN
Text Label 3700 7050 0    60   ~ 0
DRIVE0_B
Text Label 3700 6950 0    60   ~ 0
DRIVE0_C
$Comp
L CONN_01X04 P11
U 1 1 58983907
P 6050 1200
F 0 "P11" H 6050 1450 50  0000 C CNN
F 1 "1X4_LED_PADS" V 6150 1200 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 6050 1200 50  0001 C CNN
F 3 "" H 6050 1200 50  0000 C CNN
	1    6050 1200
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P12
U 1 1 5898390D
P 6050 1850
F 0 "P12" H 6050 2100 50  0000 C CNN
F 1 "1X4_LED_PADS" V 6150 1850 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 6050 1850 50  0001 C CNN
F 3 "" H 6050 1850 50  0000 C CNN
	1    6050 1850
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P13
U 1 1 58983913
P 6050 2500
F 0 "P13" H 6050 2750 50  0000 C CNN
F 1 "1X4_LED_PADS" V 6150 2500 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 6050 2500 50  0001 C CNN
F 3 "" H 6050 2500 50  0000 C CNN
	1    6050 2500
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P14
U 1 1 58983919
P 6050 3150
F 0 "P14" H 6050 3400 50  0000 C CNN
F 1 "1X4_LED_PADS" V 6150 3150 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 6050 3150 50  0001 C CNN
F 3 "" H 6050 3150 50  0000 C CNN
	1    6050 3150
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P15
U 1 1 5898391F
P 6050 3800
F 0 "P15" H 6050 4050 50  0000 C CNN
F 1 "1X4_LED_PADS" V 6150 3800 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 6050 3800 50  0001 C CNN
F 3 "" H 6050 3800 50  0000 C CNN
	1    6050 3800
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P16
U 1 1 58983925
P 6050 4450
F 0 "P16" H 6050 4700 50  0000 C CNN
F 1 "1X4_LED_PADS" V 6150 4450 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 6050 4450 50  0001 C CNN
F 3 "" H 6050 4450 50  0000 C CNN
	1    6050 4450
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P17
U 1 1 5898392B
P 6050 5050
F 0 "P17" H 6050 5300 50  0000 C CNN
F 1 "1X4_LED_PADS" V 6150 5050 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 6050 5050 50  0001 C CNN
F 3 "" H 6050 5050 50  0000 C CNN
	1    6050 5050
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P18
U 1 1 58983931
P 6050 5700
F 0 "P18" H 6050 5950 50  0000 C CNN
F 1 "1X4_LED_PADS" V 6150 5700 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 6050 5700 50  0001 C CNN
F 3 "" H 6050 5700 50  0000 C CNN
	1    6050 5700
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P19
U 1 1 58983937
P 6050 6350
F 0 "P19" H 6050 6600 50  0000 C CNN
F 1 "1X4_LED_PADS" V 6150 6350 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 6050 6350 50  0001 C CNN
F 3 "" H 6050 6350 50  0000 C CNN
	1    6050 6350
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P20
U 1 1 5898393D
P 6050 7000
F 0 "P20" H 6050 7250 50  0000 C CNN
F 1 "1X4_LED_PADS" V 6150 7000 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 6050 7000 50  0001 C CNN
F 3 "" H 6050 7000 50  0000 C CNN
	1    6050 7000
	1    0    0    -1  
$EndComp
Wire Wire Line
	5650 1350 5650 7150
Wire Wire Line
	5650 7150 5850 7150
Wire Wire Line
	5550 7050 5850 7050
Wire Wire Line
	5550 1250 5550 7050
Wire Wire Line
	5550 1250 5850 1250
Wire Wire Line
	5850 1350 5650 1350
Wire Wire Line
	5850 1150 5450 1150
Wire Wire Line
	5450 1150 5450 6950
Wire Wire Line
	5450 6950 5850 6950
Wire Wire Line
	5350 6850 5850 6850
Wire Wire Line
	5350 1050 5350 6850
Wire Wire Line
	5350 1050 5850 1050
Wire Wire Line
	5850 2350 5350 2350
Connection ~ 5350 2350
Wire Wire Line
	5850 2450 5450 2450
Connection ~ 5450 2450
Wire Wire Line
	5850 2550 5550 2550
Connection ~ 5550 2550
Wire Wire Line
	5850 2650 5650 2650
Connection ~ 5650 2650
Wire Wire Line
	5850 1700 5350 1700
Connection ~ 5350 1700
Wire Wire Line
	5850 1800 5450 1800
Connection ~ 5450 1800
Wire Wire Line
	5850 1900 5550 1900
Connection ~ 5550 1900
Wire Wire Line
	5850 2000 5650 2000
Connection ~ 5650 2000
Wire Wire Line
	5850 3650 5350 3650
Connection ~ 5350 3650
Wire Wire Line
	5850 3750 5450 3750
Connection ~ 5450 3750
Wire Wire Line
	5850 3850 5550 3850
Connection ~ 5550 3850
Wire Wire Line
	5850 3950 5650 3950
Connection ~ 5650 3950
Wire Wire Line
	5850 3000 5350 3000
Connection ~ 5350 3000
Wire Wire Line
	5850 3100 5450 3100
Connection ~ 5450 3100
Wire Wire Line
	5850 3200 5550 3200
Connection ~ 5550 3200
Wire Wire Line
	5850 3300 5650 3300
Connection ~ 5650 3300
Wire Wire Line
	5850 4900 5350 4900
Connection ~ 5350 4900
Wire Wire Line
	5850 5000 5450 5000
Connection ~ 5450 5000
Wire Wire Line
	5850 5100 5550 5100
Connection ~ 5550 5100
Wire Wire Line
	5850 5200 5650 5200
Connection ~ 5650 5200
Wire Wire Line
	5850 4300 5350 4300
Connection ~ 5350 4300
Wire Wire Line
	5850 4400 5450 4400
Connection ~ 5450 4400
Wire Wire Line
	5850 4500 5550 4500
Connection ~ 5550 4500
Wire Wire Line
	5850 4600 5650 4600
Connection ~ 5650 4600
Wire Wire Line
	5850 6200 5350 6200
Connection ~ 5350 6200
Wire Wire Line
	5850 6300 5450 6300
Connection ~ 5450 6300
Wire Wire Line
	5850 6400 5550 6400
Connection ~ 5550 6400
Wire Wire Line
	5850 6500 5650 6500
Connection ~ 5650 6500
Wire Wire Line
	5850 5550 5350 5550
Connection ~ 5350 5550
Wire Wire Line
	5850 5650 5450 5650
Connection ~ 5450 5650
Wire Wire Line
	5850 5750 5550 5750
Connection ~ 5550 5750
Wire Wire Line
	5850 5850 5650 5850
Connection ~ 5650 5850
$Comp
L AT42QT1011 U1
U 1 1 58985510
P 8750 2150
F 0 "U1" H 8500 2450 60  0000 C CNN
F 1 "AT42QT1011" H 9100 2450 60  0000 C CNN
F 2 "proj_footprints:SOT-23-6" H 8750 2150 60  0001 C CNN
F 3 "" H 8750 2150 60  0001 C CNN
	1    8750 2150
	1    0    0    -1  
$EndComp
$Comp
L C_Small C2
U 1 1 589855C8
P 9550 2300
F 0 "C2" H 9560 2370 50  0000 L CNN
F 1 "Cs" H 9560 2220 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805" H 9550 2300 50  0001 C CNN
F 3 "" H 9550 2300 50  0000 C CNN
	1    9550 2300
	0    1    1    0   
$EndComp
$Comp
L C_Small C3
U 1 1 58985623
P 10100 2500
F 0 "C3" H 10110 2570 50  0000 L CNN
F 1 "Cx" H 10110 2420 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805" H 10100 2500 50  0001 C CNN
F 3 "" H 10100 2500 50  0000 C CNN
	1    10100 2500
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P21
U 1 1 589856F7
P 10400 2150
F 0 "P21" H 10400 2300 50  0000 C CNN
F 1 "CONN_01X02" V 10500 2150 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02" H 10400 2150 50  0001 C CNN
F 3 "" H 10400 2150 50  0000 C CNN
	1    10400 2150
	1    0    0    -1  
$EndComp
$Comp
L R R1
U 1 1 589858F8
P 9900 2150
F 0 "R1" V 9980 2150 50  0000 C CNN
F 1 "R" V 9900 2150 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" V 9830 2150 50  0001 C CNN
F 3 "" H 9900 2150 50  0000 C CNN
	1    9900 2150
	0    1    1    0   
$EndComp
$Comp
L C_Small C1
U 1 1 589859A5
P 8950 1500
F 0 "C1" H 8960 1570 50  0000 L CNN
F 1 "0.1UF" H 8960 1420 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805" H 8950 1500 50  0001 C CNN
F 3 "" H 8950 1500 50  0000 C CNN
	1    8950 1500
	0    -1   -1   0   
$EndComp
Wire Wire Line
	8250 1500 8850 1500
Wire Wire Line
	8750 1500 8750 1700
Text Label 8500 2950 0    60   ~ 0
GND
Text Label 8250 1500 0    60   ~ 0
P3V3
Wire Wire Line
	8500 2950 9350 2950
Connection ~ 8750 1500
Wire Wire Line
	9050 1500 9650 1500
Text Label 9650 1500 2    60   ~ 0
VSS_CAP_1
Text Label 9350 2950 2    60   ~ 0
VSS_CAP_1
Connection ~ 8750 2950
Wire Wire Line
	10200 2100 10100 2100
Wire Wire Line
	10100 2100 10100 2400
Wire Wire Line
	10100 2150 10050 2150
Wire Wire Line
	10100 2200 10200 2200
Connection ~ 10100 2150
Wire Wire Line
	9250 2150 9750 2150
Wire Wire Line
	9250 2300 9450 2300
Wire Wire Line
	9650 2300 9650 2150
Connection ~ 9650 2150
Connection ~ 10100 2200
Wire Wire Line
	10100 2600 10100 2700
$Comp
L GND #PWR02
U 1 1 58986FCF
P 10100 2700
F 0 "#PWR02" H 10100 2450 50  0001 C CNN
F 1 "GND" H 10100 2550 50  0000 C CNN
F 2 "" H 10100 2700 50  0000 C CNN
F 3 "" H 10100 2700 50  0000 C CNN
	1    10100 2700
	1    0    0    -1  
$EndComp
Wire Wire Line
	9250 2450 9250 2750
Wire Wire Line
	9250 2750 9600 2750
Text Label 9600 2750 2    60   ~ 0
P3V3
$Comp
L CONN_01X03 J2
U 1 1 58987911
P 1650 1650
F 0 "J2" H 1650 1850 50  0000 C CNN
F 1 "PH1X3RAFL" V 1750 1650 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Angled_1x03" H 1650 1650 50  0001 C CNN
F 3 "" H 1650 1650 50  0000 C CNN
	1    1650 1650
	-1   0    0    -1  
$EndComp
Wire Wire Line
	8250 2150 7450 2150
Text Label 7450 2150 0    60   ~ 0
ADC0
$Comp
L 3mm_Mounting_Hole H3
U 1 1 589949FD
P 2300 6500
F 0 "H3" H 2150 6600 60  0000 C CNN
F 1 "8mm Slot" H 2300 6350 60  0000 C CNN
F 2 "proj_footprints:8mm_slot" H 2200 6500 60  0001 C CNN
F 3 "" H 2200 6500 60  0001 C CNN
	1    2300 6500
	1    0    0    -1  
$EndComp
$EndSCHEMATC

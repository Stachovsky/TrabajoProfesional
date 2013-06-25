EESchema Schematic File Version 2  date Fri 12 Oct 2012 10:58:12 AM ART
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
LIBS:special
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
LIBS:ConectorBaseBoardLcdGrafic-cache
EELAYER 25  0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date "12 oct 2012"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L CONN_3 K1
U 1 1 507814C4
P 3900 4250
F 0 "K1" V 3850 4250 50  0000 C CNN
F 1 "CONN_3" V 3950 4250 40  0000 C CNN
	1    3900 4250
	-1   0    0    1   
$EndComp
$Comp
L CONN_20 P1
U 1 1 507815A6
P 5600 3300
F 0 "P1" V 5550 3300 60  0000 C CNN
F 1 "CONN_20" V 5650 3300 60  0000 C CNN
	1    5600 3300
	0    -1   -1   0   
$EndComp
$Comp
L CONN_25 P2
U 1 1 50781998
P 5850 5000
F 0 "P2" V 5800 5000 60  0000 C CNN
F 1 "CONN_25" V 5900 5000 60  0000 C CNN
	1    5850 5000
	0    1    1    0   
$EndComp
$Comp
L R R1
U 1 1 507819B2
P 7150 3900
F 0 "R1" V 7230 3900 50  0000 C CNN
F 1 "R" V 7150 3900 50  0000 C CNN
	1    7150 3900
	1    0    0    -1  
$EndComp
$Comp
L R R2
U 1 1 507819BF
P 7300 3900
F 0 "R2" V 7380 3900 50  0000 C CNN
F 1 "R" V 7300 3900 50  0000 C CNN
	1    7300 3900
	1    0    0    -1  
$EndComp
Text Label 7050 4650 1    60   ~ 0
Vdd
Text Label 6350 3950 1    60   ~ 0
Vee
$Comp
L GND #PWR01
U 1 1 50782512
P 4650 3750
F 0 "#PWR01" H 4650 3750 30  0001 C CNN
F 1 "GND" H 4650 3680 30  0001 C CNN
	1    4650 3750
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR02
U 1 1 507825E9
P 4250 4500
F 0 "#PWR02" H 4250 4500 30  0001 C CNN
F 1 "GND" H 4250 4430 30  0001 C CNN
	1    4250 4500
	1    0    0    -1  
$EndComp
Text Label 6450 3950 1    60   ~ 0
Vdd
NoConn ~ 4650 4650
NoConn ~ 4750 4650
NoConn ~ 4850 4650
NoConn ~ 6350 4650
NoConn ~ 6450 4650
NoConn ~ 6550 4650
NoConn ~ 6650 4650
NoConn ~ 6750 4650
NoConn ~ 6850 4650
Text Label 4250 4000 1    60   ~ 0
Vee
Text Label 4750 4050 1    60   ~ 0
Vdd
$Comp
L GND #PWR03
U 1 1 50782717
P 7150 4300
F 0 "#PWR03" H 7150 4300 30  0001 C CNN
F 1 "GND" H 7150 4230 30  0001 C CNN
	1    7150 4300
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR04
U 1 1 50782486
P 6950 4400
F 0 "#PWR04" H 6950 4400 30  0001 C CNN
F 1 "GND" H 6950 4330 30  0001 C CNN
	1    6950 4400
	-1   0    0    1   
$EndComp
Wire Wire Line
	4950 3650 4950 4650
Wire Wire Line
	5050 3650 5050 4650
Wire Wire Line
	5150 3650 5150 4650
Wire Wire Line
	5250 3650 5250 4650
Wire Wire Line
	5350 3650 5350 4650
Wire Wire Line
	5450 3650 5450 4650
Wire Wire Line
	5550 3650 5550 4650
Wire Wire Line
	5650 3650 5650 4650
Wire Wire Line
	5750 3650 5750 4650
Wire Wire Line
	5850 3650 5850 4650
Wire Wire Line
	5950 3650 5950 4650
Wire Wire Line
	6050 3650 6050 4650
Wire Wire Line
	6150 3650 6150 4650
Wire Wire Line
	6250 3650 6250 4650
Wire Wire Line
	7050 4650 7050 4450
Wire Wire Line
	4750 3650 4750 4100
Wire Wire Line
	4250 4250 4850 4250
Wire Wire Line
	4850 4250 4850 3650
Wire Wire Line
	4250 3800 4250 4150
Wire Wire Line
	4250 4500 4250 4350
Wire Wire Line
	6550 3650 7300 3650
Connection ~ 7150 3650
Connection ~ 7150 3650
Wire Wire Line
	7300 4150 7150 4150
Wire Wire Line
	6450 3650 6450 4000
Wire Wire Line
	6350 3650 6350 4000
Wire Wire Line
	7150 4150 7150 4300
Wire Wire Line
	6950 4400 6950 4650
Wire Wire Line
	4650 3750 4650 3650
$EndSCHEMATC

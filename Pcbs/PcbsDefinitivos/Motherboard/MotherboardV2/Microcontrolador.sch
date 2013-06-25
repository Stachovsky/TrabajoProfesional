EESchema Schematic File Version 2  date Fri 18 Jan 2013 02:55:42 PM ART
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
LIBS:nxp_armmcu
LIBS:Motherboard-cache
EELAYER 25  0
EELAYER END
$Descr A3 16535 11693
encoding utf-8
Sheet 2 2
Title ""
Date "18 jan 2013"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L LPC1769FBD100 U?
U 1 1 50F950D9
P 8200 4900
F 0 "U?" H 7200 7400 60  0000 C CNN
F 1 "LPC1769FBD100" H 9050 2300 60  0000 C CNN
F 2 "LQFP100" H 8200 4900 60  0000 C CNN
	1    8200 4900
	1    0    0    -1  
$EndComp
Text Label 6150 5900 0    60   ~ 0
JTAG_TRST
Text Label 6150 5600 0    60   ~ 0
JTAG_TDI
Text Label 9500 4850 0    60   ~ 0
JTAG_TMS_SWDIO
Text Label 6150 5500 0    60   ~ 0
JTAG_TCLK_SWCLK
Text Label 6200 4500 0    60   ~ 0
JTAG_TDO_SWO
Wire Wire Line
	7000 5600 6000 5600
Wire Wire Line
	7000 5900 6000 5900
Wire Wire Line
	9400 4850 10350 4850
Wire Wire Line
	7000 5500 6000 5500
Wire Wire Line
	7000 3250 6000 3250
Wire Wire Line
	7000 4500 6000 4500
Text Label 6200 3250 0    60   ~ 0
JTAG_RESET
$EndSCHEMATC

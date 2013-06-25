#include "fonts.h"			// for FAST_FONT_INDEX

// courBO24 = "Courier Bold Oblique"

const unsigned char font_courBO24[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xDF,0x00,
0xF8,0x00,
0x2D,0x01,
0x70,0x01,
0xA5,0x01,
0xD5,0x01,
0xE2,0x01,
0x0D,0x02,
0x38,0x02,
0x59,0x02,
0x8E,0x02,
0x99,0x02,
0xAA,0x02,
0xB1,0x02,
0x03,0x03,
0x33,0x03,
0x5F,0x03,
0x97,0x03,
0xCF,0x03,
0x01,0x04,
0x36,0x04,
0x69,0x04,
0x96,0x04,
0xC9,0x04,
0xFB,0x04,
0x0C,0x05,
0x33,0x05,
0x6E,0x05,
0x98,0x05,
0xD3,0x05,
0xFD,0x05,
0x2D,0x06,
0x6E,0x06,
0xA9,0x06,
0xE4,0x06,
0x1F,0x07,
0x60,0x07,
0xA1,0x07,
0xDC,0x07,
0x20,0x08,
0x55,0x08,
0x97,0x08,
0xDC,0x08,
0x1A,0x09,
0x65,0x09,
0xAA,0x09,
0xE2,0x09,
0x1D,0x0A,
0x67,0x0A,
0xA2,0x0A,
0xDD,0x0A,
0x16,0x0B,
0x51,0x0B,
0x93,0x0B,
0xD8,0x0B,
0x20,0x0C,
0x5C,0x0C,
0x94,0x0C,
0xCB,0x0C,
0xEE,0x0C,
0x21,0x0D,
0x42,0x0D,
0x59,0x0D,
0x63,0x0D,
0x85,0x0D,
0xC0,0x0D,
0xE6,0x0D,
0x21,0x0E,
0x45,0x0E,
0x84,0x0E,
0xBF,0x0E,
0xFA,0x0E,
0x2C,0x0F,
0x6E,0x0F,
0xA6,0x0F,
0xD8,0x0F,
0x06,0x10,
0x2E,0x10,
0x50,0x10,
0x91,0x10,
0xD0,0x10,
0xF8,0x10,
0x1C,0x11,
0x4C,0x11,
0x72,0x11,
0x9A,0x11,
0xC4,0x11,
0xEE,0x11,
0x35,0x12,
0x59,0x12,
0x88,0x12,
0xAB,0x12,
0xDA,0x12,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x14,0x4F,
0x00,

// exclam (33): w=8, h=21
0xC7,0x00,0xC9,
0x00,0x00,0x00,0xFE,0xFF,0xFF,0x7F,0x0E,
0x00,0x00,0x00,0x7F,0x1F,0x03,0x00,0x00,
0x1C,0x1E,0x1E,0x1E,0x0C,0x00,0x00,0x00,

// quotedbl (34): w=11, h=10
0xAA,0x01,0xC6,
0xFF,0xFF,0x7F,0x0F,0x00,0x00,0x00,0xFF,0xFF,0x7F,
0x0F,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,
0x00,

// numbersign (35): w=17, h=24
0x50,0x1A,
0x00,0x00,0x80,0xC0,0xC0,0xC0,0xF8,0xFF,0xFF,0xC7,
0xC0,0xC0,0xFC,0xFF,0xFF,0xC7,0xC0,
0xC0,0xE0,0xE1,0xE1,0xFD,0xFF,0xFF,0xE3,0xE1,0xE1,
0xFD,0xFF,0xFF,0xE3,0x61,0x01,0x00,
0x00,0xF0,0xFE,0x7F,0x1F,0x01,0x00,0xF8,0xFE,0x7F,
0x0F,0x01,0x00,0x00,0x00,0x00,0x00,

// dollar (36): w=16, h=25
0xEF,0x00,0x85,
0x00,0x00,0x00,0xF0,0xF8,0xFC,0x9C,0x0E,0x0E,0x0F,
0x0F,0x0F,0x7E,0x7C,0x7C,0x1C,
0xC0,0xE0,0xE0,0x01,0x03,0x07,0x07,0x07,0x0F,0x0E,
0x9E,0xFC,0xFC,0xF8,0x00,0x00,
0x0F,0x0F,0x07,0x0F,0xFE,0xFE,0xFE,0x0E,0x0F,0x07,
0x07,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// percent (37): w=17, h=21
0x50,0x1A,
0x00,0x00,0x78,0xFC,0xCE,0x87,0x83,0x83,0x83,0xC7,
0xFE,0x7C,0x00,0x00,0x80,0x80,0xC0,
0x20,0x30,0x30,0x18,0x19,0x99,0xCD,0xED,0x65,0x34,
0x36,0x36,0x73,0xE3,0xC1,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x1C,0x18,0x18,
0x18,0x18,0x0C,0x0F,0x03,0x00,0x00,

// ampersand (38): w=15, h=18
0xCE,0x03,0x86,
0x00,0x00,0x00,0x00,0xF8,0xFC,0xFE,0x8E,0x07,0x07,
0x0F,0x0F,0x07,0x02,0x00,
0xF0,0xFC,0xFE,0x8E,0x87,0x83,0x8F,0xDF,0xFE,0xF8,
0xF0,0xBC,0x9E,0x0E,0x0E,
0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x03,0x03,
0x03,0x03,0x01,0x00,0x00,

// quotesingle (39): w=5, h=9
0xA4,0x01,0xF9,
0xFC,0xFF,0x7F,0x0F,0x03,
0x01,0x01,0x00,0x00,0x00,

// parenleft (40): w=10, h=26
0xE9,0x00,0xE5,
0x00,0x00,0x80,0xC0,0xE0,0xF8,0x7C,0x3E,0x0F,0x07,
0xF0,0xFE,0xFF,0xFF,0x0F,0x01,0x00,0x00,0x00,0x00,
0x0F,0x7F,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// parenright (41): w=10, h=26
0xE9,0x00,0x6D,
0x00,0x00,0x00,0x00,0x00,0x06,0x3F,0xFF,0xFE,0xF8,
0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x3F,
0x00,0xC0,0xE0,0xF0,0x7C,0x3F,0x1F,0x07,0x01,0x00,
0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// asterisk (42): w=15, h=14
0xAE,0x00,0xA4,
0x40,0x70,0x70,0x70,0x70,0xE0,0xF0,0xFF,0xFF,0xFF,
0xE0,0x70,0x70,0x70,0x30,
0x00,0x18,0x3C,0x1E,0x0F,0x07,0x03,0x01,0x07,0x1F,
0x3F,0x3C,0x10,0x00,0x00,

// plus (43): w=17, h=19
0x50,0x5A,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFE,0xFF,
0x7F,0x07,0x00,0x00,0x00,0x00,0x00,
0x06,0x07,0x07,0x07,0x07,0x07,0xFF,0xFF,0xFF,0x0F,
0x07,0x07,0x07,0x07,0x07,0x07,0x03,
0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// comma (44): w=8, h=8
0x87,0x11,0x8D,
0xC0,0xE0,0x78,0x3E,0x1F,0x0F,0x03,0x01,

// hyphen (45): w=14, h=3
0x8D,0x0A,0x87,
0x06,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,0x03,

// period (46): w=4, h=4
0x83,0x11,0xCD,
0x0E,0x0F,0x0F,0x07,

// slash (47): w=20, h=25
0x73,0x12,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xE0,0xF0,0x7C,0x3E,0x0F,0x07,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0xF8,0x7C,
0x1F,0x0F,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xC0,0xF0,0xF8,0x3E,0x1F,0x07,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=15, h=21
0xCE,0x00,0x95,
0x00,0xC0,0xF0,0xF8,0x7C,0x1E,0x0E,0x07,0x07,0x07,
0x0F,0x3F,0xFE,0xFC,0xE0,
0xFE,0xFF,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0x80,
0xE0,0xFE,0xFF,0x3F,0x01,
0x03,0x0F,0x0F,0x1E,0x1C,0x1C,0x1C,0x1E,0x0E,0x07,
0x07,0x01,0x00,0x00,0x00,

// one (49): w=14, h=21
0x4D,0x1D,
0x00,0x00,0x00,0x1C,0x1C,0x1C,0x0E,0x0E,0xFE,0xFE,
0xFF,0x1F,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0x3F,
0x03,0x00,0x00,0x00,
0x18,0x1C,0x1C,0x1C,0x1C,0x1F,0x1F,0x1F,0x1F,0x1C,
0x1C,0x1C,0x1C,0x0C,

// two (50): w=18, h=21
0x51,0x14,
0x00,0x00,0x00,0x00,0x30,0x78,0x3C,0x1E,0x0E,0x0F,
0x07,0x07,0x07,0x07,0x8F,0xFE,0xFE,0xF8,
0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0xE0,0xF0,0x78,
0x38,0x3C,0x1E,0x0F,0x07,0x03,0x01,0x00,
0x1C,0x1E,0x1F,0x1F,0x1F,0x1D,0x1D,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x0C,0x00,0x00,0x00,

// three (51): w=18, h=21
0x51,0x14,
0x00,0x00,0x00,0x00,0x00,0x1C,0x1E,0x0E,0x0F,0x07,
0x07,0x07,0x87,0x87,0xEF,0xFE,0xFC,0x38,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,
0x07,0x0F,0x0F,0xFF,0xFD,0xF8,0x00,0x00,
0x0C,0x0E,0x1E,0x1E,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1E,0x0E,0x0F,0x07,0x03,0x01,0x00,0x00,

// four (52): w=16, h=21
0x4F,0x16,
0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF8,0x7C,
0x1E,0xCF,0xFF,0xFF,0x3F,0x03,
0xE0,0xF0,0xF8,0xFC,0xEF,0xEF,0xE3,0xE1,0xE0,0xE0,
0xFE,0xFF,0xFF,0xE3,0x60,0x00,
0x00,0x00,0x00,0x00,0x00,0x18,0x1C,0x1C,0x1C,0x1F,
0x1F,0x1F,0x1C,0x1C,0x0C,0x00,

// five (53): w=17, h=21
0x50,0x1A,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x9F,0x87,0x87,
0x87,0x87,0x07,0x07,0x07,0x07,0x03,
0x00,0x00,0x00,0x06,0x07,0x07,0x07,0x03,0x03,0x03,
0x03,0x07,0xEF,0xFF,0xFE,0x38,0x00,
0x06,0x0F,0x0F,0x1E,0x1C,0x1C,0x1C,0x1C,0x1C,0x1E,
0x0E,0x0F,0x07,0x03,0x01,0x00,0x00,

// six (54): w=16, h=21
0xCF,0x00,0x85,
0x00,0x80,0xE0,0xF0,0xF8,0x3C,0x1C,0x0E,0x0E,0x06,
0x07,0x07,0x07,0x07,0x07,0x03,
0xFE,0xFF,0xFF,0x3F,0x1C,0x0E,0x07,0x07,0x07,0x0F,
0xFE,0xFE,0xFC,0x00,0x00,0x00,
0x03,0x0F,0x0F,0x1E,0x1C,0x1C,0x1C,0x1C,0x0E,0x0F,
0x07,0x03,0x01,0x00,0x00,0x00,

// seven (55): w=14, h=21
0xCD,0x00,0x96,
0x1C,0x1F,0x0F,0x07,0x07,0x07,0x07,0x07,0x87,0xE7,
0xFF,0xFF,0x3F,0x0F,
0x00,0x00,0x00,0x00,0xC0,0xF0,0xF8,0x7E,0x1F,0x07,
0x01,0x00,0x00,0x00,
0x00,0x08,0x1C,0x1F,0x0F,0x07,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// eight (56): w=16, h=21
0xCF,0x00,0x85,
0x00,0x00,0x00,0xE0,0xF8,0xFC,0x3E,0x0E,0x07,0x07,
0x07,0x07,0x8F,0xFE,0xFE,0x78,
0xE0,0xF0,0xF8,0x39,0x1F,0x0F,0x0F,0x0E,0x0E,0x0E,
0x1F,0xFF,0xFB,0xF1,0x01,0x00,
0x03,0x0F,0x0F,0x1E,0x1C,0x1C,0x1C,0x1C,0x1C,0x0E,
0x0F,0x07,0x07,0x01,0x00,0x00,

// nine (57): w=16, h=21
0x4F,0x1B,
0x00,0x00,0x00,0xE0,0xF0,0xFC,0x3C,0x0E,0x0F,0x07,
0x07,0x07,0x0F,0xFE,0xFE,0xF8,
0x00,0x00,0x00,0x07,0x1F,0x1F,0x3C,0x38,0x38,0x38,
0x98,0xCC,0xFF,0xFF,0x7F,0x0F,
0x18,0x1C,0x1C,0x1C,0x1C,0x1C,0x1E,0x0E,0x0E,0x07,
0x07,0x03,0x01,0x00,0x00,0x00,

// colon (58): w=7, h=15
0xA6,0x06,0xCA,
0x00,0x00,0x0E,0x0F,0x0F,0x0F,0x07,
0x70,0x78,0x78,0x78,0x38,0x00,0x00,

// semicolon (59): w=12, h=20
0xCB,0x06,0x6B,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x0F,0x0F,
0x0F,0x07,
0x00,0x00,0x80,0xC0,0xF0,0xF8,0x78,0x38,0x18,0x08,
0x00,0x00,
0x04,0x0E,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// less (60): w=19, h=19
0x52,0x58,
0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0xE0,0xE0,0x70,
0x70,0x38,0x38,0x1C,0x1C,0x0E,0x0E,0x07,0x03,
0x02,0x07,0x07,0x0F,0x1F,0x1F,0x3D,0x79,0x70,0xF0,
0xE0,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x03,0x07,0x03,0x00,0x00,0x00,0x00,

// equal (61): w=20, h=9
0x33,0xF2,
0x80,0xC0,0xC6,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,
0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0x07,0x03,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// greater (62): w=19, h=19
0x52,0x53,
0x00,0x00,0x00,0x00,0x06,0x0F,0x1E,0x1C,0x3C,0x78,
0x70,0xF0,0xE0,0xC0,0xC0,0x80,0x00,0x00,0x00,
0x00,0x00,0x80,0x80,0xC0,0xC0,0xE0,0xE0,0x70,0x70,
0x38,0x3C,0x1D,0x1F,0x0F,0x0F,0x07,0x07,0x02,
0x06,0x07,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=13, h=20
0xCC,0x01,0xB5,
0x38,0x3C,0x1E,0x0E,0x07,0x07,0x07,0x07,0x07,0x8F,
0xFE,0xFC,0xF8,
0x00,0x00,0x30,0x3C,0x3E,0x1E,0x06,0x07,0x07,0x03,
0x03,0x01,0x00,
0x0E,0x0F,0x0F,0x0F,0x06,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// at (64): w=15, h=23
0xCE,0x00,0x86,
0x00,0x00,0xC0,0xE0,0x78,0x1C,0x0E,0x06,0x07,0x03,
0x83,0x83,0x87,0xFE,0xFC,
0x80,0xFE,0x3F,0x03,0x00,0x00,0x3C,0x7E,0xE7,0xC3,
0xC3,0xE1,0xFF,0xFF,0x03,
0x03,0x1F,0x3C,0x30,0x60,0x60,0x60,0x60,0x60,0x30,
0x30,0x30,0x00,0x00,0x00,

// A (65): w=21, h=20
0x54,0x22,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x87,0xC7,
0xF7,0xFF,0x3F,0x0F,0x7F,0xFF,0xFF,0xC0,0x00,0x00,
0x00,
0x00,0x00,0x00,0x00,0xC0,0xF0,0xF8,0x7E,0x7F,0x77,
0x73,0x70,0x70,0x70,0x70,0x7F,0xFF,0xFF,0xF0,0x00,
0x00,
0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,0x06,0x00,
0x00,0x00,0x00,0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,
0x06,

// B (66): w=19, h=20
0x52,0x29,
0x00,0x00,0x00,0x06,0x07,0xFF,0xFF,0xFF,0x0F,0x07,
0x07,0x07,0x07,0x07,0x07,0x8F,0xFF,0xFE,0xFC,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,0x0F,0x9F,0xFD,0xFD,0xF8,
0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,0x0E,0x0E,
0x0E,0x0E,0x0E,0x0E,0x0F,0x07,0x07,0x03,0x01,

// C (67): w=19, h=20
0x52,0x38,
0x00,0xC0,0xE0,0xF8,0x7C,0x1C,0x1E,0x0E,0x0F,0x07,
0x07,0x07,0x07,0x07,0x0E,0x7E,0x7E,0x3F,0x0F,
0xFF,0xFF,0xFF,0x81,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,
0x00,0x03,0x03,0x07,0x07,0x0E,0x0E,0x0E,0x0E,0x0E,
0x0E,0x0F,0x07,0x07,0x03,0x01,0x00,0x00,0x00,

// D (68): w=19, h=20
0x52,0x2E,
0x00,0x00,0x00,0x06,0x07,0xFF,0xFF,0xFF,0x0F,0x07,
0x07,0x07,0x07,0x07,0x0F,0x1E,0xFE,0xFC,0xF8,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x01,0x00,0x00,
0x00,0x00,0x00,0x80,0xC0,0xF0,0xFF,0x7F,0x0F,
0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,0x0E,0x0E,
0x0E,0x0E,0x07,0x07,0x03,0x01,0x00,0x00,0x00,

// E (69): w=21, h=20
0x54,0x2C,
0x00,0x00,0x00,0x06,0x07,0xFF,0xFF,0xFF,0x0F,0x07,
0x07,0x07,0xC7,0xC7,0xC7,0x07,0x07,0x7F,0x7F,0x3F,
0x03,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x07,0x07,0x07,
0x07,0x3F,0x3F,0x3F,0x01,0xC0,0xE0,0xE0,0x20,0x00,
0x00,
0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,0x0E,0x0E,
0x0E,0x0E,0x0E,0x0E,0x0E,0x0F,0x0F,0x03,0x00,0x00,
0x00,

// F (70): w=21, h=20
0x54,0x2C,
0x00,0x00,0x00,0x06,0x07,0xFF,0xFF,0xFF,0x0F,0x07,
0x07,0x07,0xC7,0xC7,0xC7,0x07,0x07,0x7F,0x7F,0x3F,
0x03,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x07,0x07,0x07,
0x07,0x3F,0x3F,0x3F,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,
0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,0x0E,0x0E,
0x0E,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// G (71): w=19, h=20
0x52,0x38,
0x80,0xE0,0xF0,0xF8,0x3C,0x1C,0x0E,0x0E,0x07,0x07,
0x07,0x07,0x07,0x07,0x0E,0x7E,0x7E,0x3F,0x03,
0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x30,0x38,
0x38,0x38,0x38,0xF8,0xF8,0xF8,0x38,0x18,0x00,
0x00,0x03,0x07,0x07,0x0F,0x0E,0x0E,0x0E,0x0E,0x0E,
0x0E,0x0F,0x07,0x07,0x07,0x03,0x00,0x00,0x00,

// H (72): w=22, h=20
0x55,0x26,
0x00,0x00,0x00,0x06,0x07,0xFF,0xFF,0xFF,0x0F,0x07,
0x07,0x03,0x00,0x00,0x06,0x07,0xFF,0xFF,0xFF,0x0F,
0x07,0x03,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,0xF7,0xFF,0xFF,0x1F,0x01,0x00,
0x00,0x00,
0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x06,0x00,0x00,
0x0C,0x0E,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x06,0x00,
0x00,0x00,

// I (73): w=17, h=20
0x50,0x3A,
0x00,0x00,0x00,0x06,0x07,0x07,0x07,0x07,0xFF,0xFF,
0xFF,0x0F,0x07,0x07,0x07,0x07,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x0C,0x0E,0x0E,0x0E,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,
0x0E,0x0E,0x0E,0x06,0x00,0x00,0x00,

// J (74): w=21, h=20
0xD4,0x01,0x71,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x07,
0x07,0x07,0x07,0xFF,0xFF,0xFF,0x0F,0x07,0x07,0x07,
0x03,
0xF0,0xF8,0xF8,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xF0,0xFF,0xFF,0x1F,0x01,0x00,0x00,0x00,0x00,
0x00,
0x07,0x07,0x0F,0x0F,0x0E,0x0E,0x0E,0x0E,0x0F,0x07,
0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// K (75): w=22, h=20
0xD5,0x01,0x52,
0x00,0x00,0x00,0x06,0x07,0xFF,0xFF,0xFF,0x0F,0x87,
0x87,0xC3,0xC0,0xE0,0x76,0x7F,0x3F,0x1F,0x0F,0x07,
0x07,0x03,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x0F,0x07,0x07,
0x0F,0x1F,0x7E,0xFC,0xF0,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,
0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,0x06,0x00,
0x00,0x00,0x00,0x0F,0x0F,0x0F,0x0E,0x0E,0x06,0x00,
0x00,0x00,

// L (76): w=20, h=20
0x53,0x2D,
0x00,0x00,0x00,0x00,0x06,0x07,0x07,0xFF,0xFF,0xFF,
0x0F,0x07,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xF0,0xF0,0x10,
0x0C,0x0E,0x0E,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,
0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0F,0x0F,0x03,0x00,

// M (77): w=24, h=20
0xD7,0x01,0x32,
0x00,0x00,0x00,0x06,0x07,0xFF,0xFF,0x7F,0xFF,0xFF,
0xF8,0x00,0x00,0x00,0xC0,0xF0,0x7C,0xBF,0xFF,0xFF,
0xFF,0x07,0x07,0x03,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x00,0x03,0xFF,
0xFF,0xFF,0x3C,0x1F,0x07,0x03,0xF0,0xFF,0xFF,0x1F,
0x01,0x00,0x00,0x00,
0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,0x06,0x00,
0x00,0x00,0x0C,0x0E,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,
0x06,0x00,0x00,0x00,

// N (78): w=22, h=20
0xD5,0x01,0x52,
0x00,0x00,0x00,0x06,0x07,0xFF,0xFF,0xFF,0x7F,0xFE,
0xF0,0xC0,0x00,0x00,0x06,0x07,0xFF,0xFF,0xFF,0x0F,
0x07,0x03,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x01,0x00,0x03,
0x1F,0xFF,0xFE,0xF0,0xC0,0xFF,0xFF,0x1F,0x01,0x00,
0x00,0x00,
0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,0x06,0x00,
0x00,0x00,0x03,0x0F,0x0F,0x0F,0x03,0x00,0x00,0x00,
0x00,0x00,

// O (79): w=18, h=20
0x51,0x34,
0x00,0xC0,0xE0,0xF0,0x7C,0x3C,0x1E,0x0E,0x07,0x07,
0x07,0x07,0x07,0x0F,0x1E,0xFE,0xFC,0xF0,
0x7E,0xFF,0xFF,0xC1,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xE0,0xF8,0xFF,0x3F,0x0F,
0x00,0x01,0x03,0x07,0x07,0x0F,0x0E,0x0E,0x0E,0x0E,
0x07,0x07,0x03,0x03,0x01,0x00,0x00,0x00,

// P (80): w=19, h=20
0x52,0x33,
0x00,0x00,0x00,0x06,0x07,0xFF,0xFF,0xFF,0x0F,0x07,
0x07,0x07,0x07,0x07,0x07,0x8F,0xFE,0xFC,0xF8,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x1D,0x1C,0x1C,
0x1C,0x0C,0x0E,0x0E,0x0E,0x07,0x03,0x01,0x00,
0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,0x0E,0x0E,
0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=18, h=25
0x71,0x34,
0x00,0xC0,0xE0,0xF0,0x78,0x3C,0x1E,0x0E,0x0F,0x07,
0x07,0x07,0x07,0x0F,0x1E,0xFC,0xF8,0xE0,
0x7E,0xFF,0xFF,0xC3,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0x80,0xE0,0xF8,0x7F,0x3F,0x0F,
0x00,0xE1,0xE3,0xF7,0xFF,0x7E,0x7E,0x6E,0xEE,0xEF,
0xC7,0xC7,0xE3,0xF1,0xF1,0x70,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// R (82): w=19, h=20
0x52,0x2E,
0x00,0x00,0x00,0x06,0x07,0xFF,0xFF,0xFF,0x0F,0x07,
0x07,0x07,0x07,0x07,0x07,0x8F,0xFE,0xFE,0xF8,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x0F,0x0E,0x0E,
0x0E,0x1E,0x7E,0xFF,0xF7,0xC3,0x03,0x01,0x00,
0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,0x06,0x00,
0x00,0x00,0x00,0x01,0x07,0x0F,0x0F,0x0E,0x0E,

// S (83): w=19, h=20
0x52,0x33,
0x00,0x00,0x00,0x00,0xF8,0xFC,0xFE,0x8E,0x07,0x07,
0x07,0x07,0x07,0x07,0x0E,0x7E,0x7C,0x3E,0x0E,
0x00,0xC0,0xC0,0xC0,0x01,0x03,0x07,0x07,0x07,0x0F,
0x0E,0x0E,0x1E,0x1C,0xFC,0xF8,0xF0,0x00,0x00,
0x0E,0x0F,0x07,0x07,0x07,0x0F,0x0E,0x0E,0x0E,0x0E,
0x0E,0x0E,0x0E,0x07,0x07,0x03,0x00,0x00,0x00,

// T (84): w=18, h=20
0xD1,0x01,0x83,
0xC0,0xFC,0xFF,0x3F,0x07,0x07,0x07,0xFF,0xFF,0xFF,
0x0F,0x07,0x07,0xC7,0xFF,0xFF,0x3F,0x03,
0x01,0x01,0x01,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x01,
0x00,0x00,0x00,0x01,0x01,0x01,0x00,0x00,
0x0C,0x0E,0x0E,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,
0x0E,0x06,0x00,0x00,0x00,0x00,0x00,0x00,

// U (85): w=19, h=20
0x52,0x38,
0x06,0x07,0xFF,0xFF,0xFF,0x0F,0x07,0x07,0x03,0x00,
0x00,0x06,0x07,0xFF,0xFF,0xFF,0x0F,0x07,0x03,
0x70,0xFF,0xFF,0x9F,0x01,0x00,0x00,0x00,0x00,0x00,
0x80,0xF0,0xFF,0xFF,0x1F,0x01,0x00,0x00,0x00,
0x00,0x03,0x07,0x07,0x0F,0x0E,0x0E,0x0E,0x0F,0x07,
0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// V (86): w=21, h=20
0xD4,0x01,0x71,
0x06,0x07,0x3F,0xFF,0xFF,0xC7,0x07,0x03,0x00,0x00,
0x00,0x00,0x86,0xC7,0xF7,0xFF,0x3F,0x1F,0x07,0x07,
0x03,
0x00,0x00,0x00,0x0F,0xFF,0xFF,0xF8,0x80,0xC0,0xF0,
0xF8,0x3E,0x1F,0x07,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,
0x00,0x00,0x00,0x00,0x01,0x0F,0x0F,0x0F,0x07,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// W (87): w=22, h=20
0xD5,0x01,0x70,
0x06,0x07,0xFF,0xFF,0xFF,0x07,0x07,0x07,0xC3,0xF0,
0xF0,0xF0,0x00,0x00,0x06,0xC7,0xFF,0xFF,0x7F,0x0F,
0x07,0x03,
0x00,0xE0,0xFF,0xFF,0xFF,0xF0,0x7C,0x1F,0x07,0x03,
0x7F,0xFF,0xFF,0xE0,0xFC,0xFF,0x1F,0x03,0x00,0x00,
0x00,0x00,
0x00,0x0F,0x0F,0x0F,0x07,0x01,0x00,0x00,0x00,0x00,
0x00,0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// X (88): w=23, h=20
0xD6,0x01,0x42,
0x00,0x00,0x00,0x00,0x06,0x07,0x0F,0x3F,0xFF,0xFF,
0xE3,0xC0,0x80,0xC0,0xE0,0xF6,0x7F,0x3F,0x1F,0x0F,
0x07,0x07,0x03,
0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,0x78,0x3D,
0x1F,0x1F,0x3F,0xFF,0xF9,0xE0,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,
0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0F,0x06,0x00,0x00,
0x00,0x0C,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x06,0x00,
0x00,0x00,0x00,

// Y (89): w=19, h=20
0xD2,0x01,0x82,
0x06,0x07,0x0F,0x3F,0xFF,0xFF,0xE3,0x80,0x00,0x80,
0xE0,0xF6,0x7F,0x3F,0x1F,0x0F,0x07,0x07,0x03,
0x00,0x00,0x00,0x00,0x00,0xC7,0xFF,0xFF,0x3E,0x07,
0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0C,0x0E,0x0E,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,
0x0E,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=18, h=20
0x51,0x34,
0x00,0x00,0x00,0x40,0x78,0x7F,0x3F,0x0F,0x07,0x07,
0x87,0xC7,0xE7,0xF7,0x7F,0x3F,0x1F,0x0F,
0x00,0x00,0x80,0xC0,0xE0,0xF0,0x78,0x3C,0x1E,0x0F,
0x07,0x03,0x01,0xC0,0xE0,0xE0,0x20,0x00,
0x08,0x0F,0x0F,0x0F,0x0F,0x0E,0x0E,0x0E,0x0E,0x0E,
0x0E,0x0E,0x0F,0x0F,0x0F,0x03,0x00,0x00,

// bracketleft (91): w=13, h=26
0xEC,0x00,0xB5,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x07,0x07,
0x07,0x07,0x03,
0x00,0x00,0xE0,0xFE,0xFF,0x3F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,
0x80,0xFC,0xFF,0xFF,0x87,0x80,0x80,0x80,0x00,0x00,
0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x00,
0x00,0x00,0x00,

// backslash (92): w=8, h=25
0xE7,0x00,0xC9,
0x0F,0xFF,0xFF,0xF8,0x80,0x00,0x00,0x00,
0x00,0x00,0x0F,0xFF,0xFF,0xF8,0x80,0x00,
0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xF8,
0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x00,

// bracketright (93): w=12, h=26
0xEB,0x00,0x6B,
0x00,0x00,0x00,0x00,0x00,0x06,0x07,0x07,0xF7,0xFF,
0xFF,0x1F,
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0x3F,
0x03,0x00,
0x00,0x80,0x80,0x80,0x80,0xFC,0xFF,0xFF,0x07,0x00,
0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,
0x00,0x00,

// asciicircum (94): w=15, h=10
0xAE,0x00,0x95,
0x00,0x80,0xC0,0xE0,0xF0,0x78,0x3C,0x1E,0x0F,0x3F,
0xFC,0xF8,0xE0,0x80,0x00,
0x07,0x07,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x07,0x07,0x07,0x01,

// underscore (95): w=20, h=3
0x93,0x19,0x45,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,

// grave (96): w=7, h=5
0x86,0x00,0xBB,
0x01,0x03,0x03,0x07,0x0E,0x1C,0x18,

// a (97): w=16, h=15
0x2F,0xDB,
0x00,0x00,0x00,0x8C,0x8E,0xCE,0xCE,0xC7,0xC7,0xC7,
0xC7,0xC7,0xFE,0xFE,0xFC,0x00,
0x3C,0x7E,0x7F,0x77,0x63,0x71,0x71,0x71,0x71,0x39,
0x19,0x7F,0x7F,0x7F,0x70,0x30,

// b (98): w=19, h=21
0x52,0x0E,
0x00,0x00,0x00,0x06,0x07,0xF7,0xFF,0xFF,0x1F,0x83,
0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x80,0x00,
0x00,0x00,0x00,0xE0,0xFE,0xFF,0xFF,0x07,0x03,0x03,
0x01,0x01,0x01,0x01,0x01,0xC3,0xFF,0xFF,0xFE,
0x18,0x1C,0x1E,0x1F,0x1F,0x07,0x0E,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x0E,0x0F,0x07,0x03,0x01,0x00,

// c (99): w=18, h=15
0x31,0xD9,
0xC0,0xF0,0xF8,0x7C,0x1C,0x0E,0x0E,0x07,0x07,0x07,
0x07,0x07,0x07,0x0F,0x7E,0x7E,0x3F,0x0F,
0x0F,0x1F,0x3F,0x3C,0x78,0x70,0x70,0x70,0x70,0x70,
0x70,0x70,0x78,0x38,0x38,0x1C,0x0C,0x00,

// d (100): w=19, h=21
0x52,0x18,
0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0xC0,0xC0,
0xC0,0x80,0x86,0x07,0xF7,0xFF,0xFF,0x1F,0x03,
0xF0,0xFC,0xFE,0x0F,0x07,0x03,0x03,0x01,0x01,0x01,
0x01,0x03,0xEF,0xFE,0xFF,0x3F,0x03,0x00,0x00,
0x03,0x07,0x0F,0x0F,0x1E,0x1C,0x1C,0x1C,0x1C,0x0E,
0x0E,0x1F,0x1F,0x1F,0x1D,0x1C,0x0C,0x00,0x00,

// e (101): w=17, h=15
0x30,0xDA,
0xE0,0xF0,0xF8,0xFC,0xDE,0xCE,0xC7,0xC7,0xC7,0xC7,
0xC7,0xC7,0xCE,0xFE,0xFC,0xF8,0xE0,
0x0F,0x1F,0x3F,0x39,0x79,0x71,0x71,0x71,0x71,0x71,
0x71,0x79,0x39,0x39,0x39,0x19,0x00,

// f (102): w=20, h=21
0xD3,0x00,0x81,
0x00,0x00,0x00,0x80,0xC0,0xC0,0xC0,0xF0,0xFC,0xFE,
0xCE,0xC7,0xC7,0xC7,0xC7,0xC7,0x07,0x07,0x07,0x03,
0x00,0x00,0x00,0x01,0x01,0xE1,0xFF,0xFF,0x3F,0x03,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x18,0x1C,0x1C,0x1C,0x1C,0x1F,0x1F,0x1F,0x1C,0x1C,
0x1C,0x1C,0x1C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,

// g (103): w=19, h=22
0x52,0xD8,
0xE0,0xF8,0xFC,0x3E,0x0E,0x0F,0x07,0x07,0x07,0x07,
0x07,0x0E,0xFE,0xFC,0xFE,0xFF,0x0F,0x07,0x03,
0x0F,0x1F,0x3F,0x38,0x78,0x70,0x70,0x70,0x70,0x38,
0x18,0xFE,0xFF,0xFF,0x1F,0x00,0x00,0x00,0x00,
0x30,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x3C,0x1C,
0x1F,0x0F,0x07,0x01,0x00,0x00,0x00,0x00,0x00,

// h (104): w=19, h=21
0x52,0x0E,
0x00,0x00,0x00,0x06,0x07,0xF7,0xFF,0xFF,0x1F,0x83,
0x80,0xC0,0xC0,0xC0,0xC0,0x80,0x80,0x00,0x00,
0x00,0x00,0x00,0xE0,0xFE,0xFF,0x3F,0x07,0x03,0x01,
0x01,0x01,0x01,0x01,0xE3,0xFF,0xFF,0x3F,0x00,
0x18,0x1C,0x1C,0x1F,0x1F,0x1F,0x1C,0x0C,0x00,0x00,
0x00,0x18,0x1C,0x1C,0x1F,0x1F,0x1F,0x1C,0x0C,

// i (105): w=16, h=21
0x4F,0x16,
0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0xC0,0xCC,0xCF,
0xCF,0xCF,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0xE1,0xFF,0xFF,
0x3F,0x03,0x00,0x00,0x00,0x00,
0x18,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1F,0x1F,0x1F,
0x1C,0x1C,0x1C,0x1C,0x1C,0x0C,

// j (106): w=16, h=28
0x6F,0x11,
0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,
0xC0,0xCE,0xCF,0xCF,0xCF,0xC3,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0xE1,0xFF,0xFF,0x3F,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,
0xFC,0xFF,0x7F,0x07,0x00,0x00,
0x0C,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x07,0x07,
0x03,0x01,0x00,0x00,0x00,0x00,

// k (107): w=18, h=21
0x51,0x14,
0x00,0x00,0x00,0x06,0x07,0xF7,0xFF,0xFF,0x1F,0x03,
0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,
0x00,0x00,0x00,0xE0,0xFE,0xFF,0x7F,0x7B,0xF8,0xFC,
0xCE,0x8F,0x07,0x03,0x01,0x01,0x01,0x00,
0x1C,0x1C,0x1C,0x1F,0x1F,0x0F,0x00,0x00,0x00,0x19,
0x1F,0x1F,0x1F,0x1E,0x1C,0x1C,0x0C,0x00,

// l (108): w=16, h=21
0x4F,0x16,
0x00,0x00,0x00,0x00,0x00,0x06,0x07,0x07,0x07,0xF7,
0xFF,0xFF,0x1F,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,
0x3F,0x03,0x00,0x00,0x00,0x00,
0x18,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1F,0x1F,0x1F,
0x1C,0x1C,0x1C,0x1C,0x1C,0x0C,

// m (109): w=22, h=15
0x35,0xC6,
0x00,0x00,0x06,0x87,0xFF,0xFF,0xFF,0x1C,0x0E,0x06,
0x87,0xFF,0xFF,0xFE,0x1E,0x0E,0x07,0x87,0xFF,0xFE,
0xFE,0x0C,
0x60,0x70,0x70,0x7F,0x7F,0x7F,0x30,0x00,0x00,0x70,
0x7F,0x7F,0x7F,0x30,0x00,0x00,0x70,0x7F,0x7F,0x7F,
0x30,0x00,

// n (110): w=19, h=15
0x32,0xCE,
0x00,0x00,0x06,0x87,0xFF,0xFF,0xFF,0x1C,0x0C,0x06,
0x07,0x07,0x07,0x07,0x8F,0xFE,0xFE,0xFC,0x00,
0x60,0x70,0x70,0x7F,0x7F,0x7F,0x70,0x30,0x00,0x00,
0x00,0x60,0x70,0x70,0x7F,0x7F,0x7F,0x70,0x30,

// o (111): w=16, h=15
0x2F,0xDB,
0x80,0xE0,0xF8,0xFC,0x1E,0x0E,0x06,0x07,0x07,0x07,
0x07,0x07,0x0E,0xBE,0xFC,0xF8,
0x00,0x0F,0x1F,0x3E,0x38,0x70,0x70,0x70,0x70,0x70,
0x38,0x38,0x1E,0x1F,0x07,0x01,

// p (112): w=21, h=22
0x54,0xC2,
0x00,0x00,0x00,0x00,0x06,0x87,0xF7,0xFF,0xFF,0x3F,
0x1C,0x0E,0x0E,0x07,0x07,0x07,0x07,0x0E,0xFE,0xFC,
0xF8,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x3F,0x38,
0x78,0x70,0x70,0x70,0x70,0x38,0x3C,0x1F,0x0F,0x07,
0x03,
0x30,0x38,0x38,0x3E,0x3F,0x3F,0x3B,0x38,0x38,0x18,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// q (113): w=20, h=22
0xD3,0x06,0x72,
0xE0,0xF0,0xF8,0x3C,0x1E,0x0E,0x07,0x07,0x07,0x07,
0x07,0x0E,0x8E,0xFC,0xFF,0xFF,0x07,0x07,0x07,0x03,
0x0F,0x1F,0x3F,0x38,0x78,0x70,0x70,0x70,0x70,0x38,
0x18,0xFC,0xFF,0xFF,0x1F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x38,0x38,0x38,
0x3E,0x3F,0x3F,0x3B,0x38,0x18,0x00,0x00,0x00,0x00,

// r (114): w=19, h=15
0x32,0xD3,
0x00,0x00,0x00,0x06,0x07,0x87,0xFF,0xFF,0xFF,0x3B,
0x1C,0x0E,0x06,0x07,0x07,0x07,0x0F,0x0F,0x06,
0x60,0x70,0x70,0x70,0x70,0x7F,0x7F,0x7F,0x70,0x70,
0x70,0x70,0x70,0x30,0x00,0x00,0x00,0x00,0x00,

// s (115): w=17, h=15
0x30,0xDA,
0x00,0x00,0x00,0x78,0xFC,0xFE,0xEE,0xC7,0xC7,0xC7,
0xC7,0xC7,0x8F,0x9E,0x1E,0x0F,0x03,
0x70,0x7C,0x3E,0x3E,0x78,0x70,0x70,0x71,0x71,0x71,
0x71,0x3B,0x3F,0x1F,0x0F,0x00,0x00,

// t (116): w=15, h=20
0xCE,0x01,0x86,
0xC0,0xE0,0xE0,0xE0,0xF8,0xFE,0xFF,0xEF,0xE3,0xE0,
0xE0,0xE0,0xE0,0x60,0x00,
0x00,0x00,0xF0,0xFF,0xFF,0x1F,0x01,0x00,0x00,0x00,
0x00,0x00,0x80,0x80,0x00,
0x00,0x00,0x03,0x07,0x0F,0x0F,0x0E,0x0E,0x0E,0x0E,
0x07,0x07,0x07,0x03,0x01,

// u (117): w=18, h=15
0x31,0xD9,
0x06,0x87,0xFF,0xFF,0xFF,0x0F,0x03,0x00,0x00,0x00,
0x06,0x07,0x87,0xF7,0xFF,0xFF,0x0F,0x03,
0x00,0x3F,0x7F,0x7F,0x78,0x70,0x70,0x70,0x70,0x38,
0x38,0x1C,0x7F,0x7F,0x7F,0x70,0x30,0x00,

// v (118): w=19, h=15
0x32,0xD8,
0x06,0x07,0x1F,0xFF,0xFF,0xE7,0x07,0x03,0x00,0x00,
0x80,0xE6,0xF7,0x7F,0x3F,0x0F,0x07,0x07,0x03,
0x00,0x00,0x00,0x01,0x1F,0x7F,0x7E,0x78,0x3C,0x1F,
0x0F,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// w (119): w=20, h=15
0x33,0xD2,
0x06,0x07,0xFF,0xFF,0xFF,0x07,0x87,0xC3,0xF0,0xF8,
0xF8,0xC0,0x00,0x86,0xF7,0xFF,0x3F,0x0F,0x07,0x03,
0x00,0x00,0x7F,0x7F,0x7F,0x3E,0x0F,0x03,0x01,0x0F,
0x7F,0x7F,0x7C,0x1F,0x07,0x00,0x00,0x00,0x00,0x00,

// x (120): w=20, h=15
0x33,0xCD,
0x00,0x00,0x06,0x07,0x07,0x0F,0x1F,0x3F,0xF7,0xE3,
0xC0,0xE0,0x70,0x3E,0x1F,0x0F,0x0F,0x07,0x07,0x03,
0x60,0x70,0x70,0x78,0x7C,0x7C,0x7E,0x37,0x03,0x01,
0x61,0x73,0x77,0x7E,0x7C,0x78,0x70,0x30,0x00,0x00,

// y (121): w=23, h=22
0x56,0xC0,
0x00,0x00,0x00,0x00,0x06,0x07,0x3F,0xFF,0xFF,0xC7,
0x03,0x00,0x00,0x00,0x80,0xE6,0xF7,0x7F,0x3F,0x1F,
0x0F,0x07,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xBF,0xFF,
0xFE,0xF8,0x3C,0x1F,0x0F,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,
0x30,0x38,0x38,0x38,0x38,0x38,0x3C,0x3E,0x3F,0x3B,
0x39,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// z (122): w=17, h=15
0x30,0xDA,
0x00,0x38,0x3E,0x3F,0x0F,0x07,0x87,0xC7,0xE7,0xE7,
0x77,0x7F,0x3F,0x1F,0x0F,0x07,0x03,
0x70,0x78,0x7C,0x7C,0x7E,0x7F,0x77,0x73,0x71,0x70,
0x70,0x70,0x7C,0x7E,0x1E,0x06,0x00,

// braceleft (123): w=11, h=26
0xEA,0x00,0xB7,
0x00,0x00,0x00,0x00,0xF0,0xFC,0xFE,0x1E,0x07,0x07,
0x03,
0x60,0x70,0xF8,0xFE,0xFF,0x0F,0x03,0x00,0x00,0x00,
0x00,
0x00,0xFC,0xFF,0xFF,0x87,0x80,0x00,0x00,0x00,0x00,
0x00,
0x00,0x01,0x03,0x03,0x03,0x01,0x00,0x00,0x00,0x00,
0x00,

// bar (124): w=8, h=26
0xE7,0x00,0xBA,
0x00,0x00,0x00,0x00,0xF0,0xFE,0xFF,0x1F,
0x00,0x00,0xE0,0xFE,0xFF,0x3F,0x03,0x00,
0x80,0xFC,0xFF,0xFF,0x07,0x00,0x00,0x00,
0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// braceright (125): w=11, h=26
0xEA,0x00,0x8A,
0x00,0x00,0x00,0x00,0x00,0x06,0x07,0xFF,0xFE,0xFE,
0x10,
0x00,0x00,0x00,0x00,0x00,0x80,0xDE,0xFF,0xFF,0x73,
0x30,
0x00,0x80,0x80,0xC0,0xFC,0xFF,0x7F,0x07,0x00,0x00,
0x00,
0x03,0x03,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,

// asciitilde (126): w=16, h=7
0x8F,0x08,0x85,
0x38,0x3C,0x1E,0x0E,0x0F,0x07,0x0E,0x1E,0x3C,0x38,
0x70,0x78,0x38,0x3C,0x1E,0x0E

};
// 4655 bytes
// 4845 bytes with FAST_FONT_INDEX
#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_luBS18[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xD5,0x00,
0xE2,0x00,
0x14,0x01,
0x3D,0x01,
0x81,0x01,
0xB9,0x01,
0xC5,0x01,
0xDF,0x01,
0xF9,0x01,
0x0F,0x02,
0x2F,0x02,
0x3C,0x02,
0x44,0x02,
0x4C,0x02,
0x7B,0x02,
0xAA,0x02,
0xC5,0x02,
0xEE,0x02,
0x17,0x03,
0x49,0x03,
0x6F,0x03,
0x9E,0x03,
0xC7,0x03,
0xF6,0x03,
0x25,0x04,
0x31,0x04,
0x42,0x04,
0x60,0x04,
0x7F,0x04,
0x9D,0x04,
0xC3,0x04,
0xFE,0x04,
0x39,0x05,
0x65,0x05,
0x9A,0x05,
0xCF,0x05,
0xF8,0x05,
0x21,0x06,
0x53,0x06,
0x85,0x06,
0x96,0x06,
0xB6,0x06,
0xE8,0x06,
0x11,0x07,
0x4C,0x07,
0x7B,0x07,
0xB9,0x07,
0xE5,0x07,
0x2D,0x08,
0x5F,0x08,
0x88,0x08,
0xC3,0x08,
0xF2,0x08,
0x2A,0x09,
0x71,0x09,
0xA3,0x09,
0xD8,0x09,
0x04,0x0A,
0x18,0x0A,
0x47,0x0A,
0x5B,0x0A,
0x79,0x0A,
0x87,0x0A,
0x90,0x0A,
0xAE,0x0A,
0xDA,0x0A,
0xF4,0x0A,
0x20,0x0B,
0x3C,0x0B,
0x62,0x0B,
0x8E,0x0B,
0xB7,0x0B,
0xC8,0x0B,
0xE9,0x0B,
0x15,0x0C,
0x26,0x0C,
0x52,0x0C,
0x6E,0x0C,
0x8E,0x0C,
0xBA,0x0C,
0xE6,0x0C,
0xFC,0x0C,
0x16,0x0D,
0x33,0x0D,
0x4F,0x0D,
0x6F,0x0D,
0x9B,0x0D,
0xB7,0x0D,
0xE6,0x0D,
0x02,0x0E,
0x19,0x0E,
0x24,0x0E,
0x3B,0x0E,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x12,0x4D,
0x00,

// exclam (33): w=5, h=18
0x44,0x36,
0xFF,0xFF,0xFF,0xFF,0xFF,
0x80,0x9F,0x9F,0x9F,0x80,
0x03,0x03,0x03,0x03,0x03,

// quotedbl (34): w=11, h=8
0x0A,0x0F,
0x0F,0xFF,0xFF,0xFF,0x03,0x00,0x0F,0xFF,0xFF,0xFF,
0x0F,

// numbersign (35): w=16, h=18
0x4F,0x2E,
0x00,0x40,0x60,0x60,0x60,0xF0,0xFF,0x6F,0x61,0x60,
0xE0,0xFC,0x7F,0x63,0x60,0x60,
0x18,0x18,0x18,0xF8,0xFF,0x1F,0x18,0x18,0xD8,0xFC,
0x3F,0x1B,0x18,0x18,0x08,0x00,
0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x02,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,

// dollar (36): w=13, h=22
0x4C,0x16,
0x00,0xF8,0xFC,0xFE,0xFE,0xCF,0xFF,0xFF,0x0E,0x0E,
0x0E,0x1E,0x00,
0x80,0x00,0x01,0x03,0x07,0xFF,0xFF,0x1F,0x3E,0xFE,
0xFC,0xF8,0xF0,
0x03,0x07,0x07,0x07,0x07,0xFF,0xFF,0xFF,0x07,0x07,
0x03,0x03,0x00,

// percent (37): w=22, h=18
0x55,0x28,
0x7C,0xFE,0xFF,0xC7,0xC7,0xC7,0xFF,0xFE,0x7C,0x00,
0x80,0xC0,0xE0,0xF0,0x7C,0x3E,0x1F,0x07,0x03,0x01,
0x00,0x00,
0x00,0x00,0x01,0x01,0x81,0xE1,0xF1,0xF8,0x7C,0x1E,
0x0F,0x07,0x03,0xF8,0xFC,0xFE,0x8E,0x8E,0x8E,0xFE,
0xFC,0xF8,
0x00,0x00,0x02,0x03,0x03,0x03,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x03,0x03,0x03,
0x01,0x00,

// ampersand (38): w=18, h=18
0x51,0x2F,
0x00,0x00,0x00,0x3C,0xFE,0xFE,0xFF,0xFF,0xE7,0xE7,
0x7F,0x7E,0x3E,0x3C,0x80,0x80,0x80,0x80,
0x7C,0xFE,0xFF,0xFF,0xFF,0xC3,0x83,0x8F,0xBF,0xFF,
0xFF,0xFE,0xF8,0xF8,0xFF,0x3F,0x0F,0x03,
0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,
0x01,0x01,0x03,0x03,0x03,0x03,0x02,0x00,

// quotesingle (39): w=5, h=9
0x24,0x0F,
0x1F,0xFF,0xFF,0xFF,0x1F,
0x00,0x01,0x01,0x01,0x00,

// parenleft (40): w=8, h=24
0x47,0x0F,
0x00,0xC0,0xF0,0xF8,0xFC,0xFE,0x1E,0x0F,
0x7E,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x03,0x0F,0x1F,0x3F,0x7F,0x78,0xF0,

// parenright (41): w=8, h=24
0x47,0x0F,
0x0F,0x1E,0xFE,0xFC,0xF8,0xF0,0xC0,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x7E,
0xF0,0x78,0x7F,0x3F,0x1F,0x0F,0x03,0x00,

// asterisk (42): w=10, h=9
0x29,0x2F,
0x18,0x5E,0xDC,0xE9,0x47,0x47,0xF9,0xDC,0x9E,0x18,
0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,

// plus (43): w=15, h=15
0x2E,0x8F,
0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xFF,0xC0,
0xC0,0xC0,0xC0,0xC0,0xC0,
0x01,0x01,0x01,0x01,0x01,0x01,0x7F,0x7F,0x7F,0x01,
0x01,0x01,0x01,0x01,0x01,

// comma (44): w=5, h=9
0xA4,0x0E,0x67,
0x9F,0xDF,0xFF,0xFF,0x3F,
0x01,0x01,0x00,0x00,0x00,

// hyphen (45): w=5, h=3
0x84,0x0A,0x56,
0x07,0x07,0x07,0x07,0x07,

// period (46): w=5, h=5
0x84,0x0E,0x67,
0x1F,0x1F,0x1F,0x1F,0x1F,

// slash (47): w=15, h=23
0x4E,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,
0xFC,0x7F,0x1F,0x07,0x01,
0x00,0x00,0x00,0x00,0xC0,0xF0,0xFC,0x7F,0x1F,0x07,
0x01,0x00,0x00,0x00,0x00,
0x40,0x70,0x7C,0x7F,0x1F,0x07,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// zero (48): w=15, h=18
0x4E,0x2F,
0xC0,0xF8,0xFC,0xFE,0xFE,0x1F,0x07,0x07,0x07,0x1F,
0xFE,0xFE,0xFC,0xF8,0xC0,
0x0F,0x7F,0xFF,0xFF,0xFF,0xE0,0x80,0x80,0x80,0xE0,
0xFF,0xFF,0xFF,0x7F,0x0F,
0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,
0x01,0x01,0x00,0x00,0x00,

// one (49): w=8, h=18
0xC7,0x01,0x8A,
0x07,0x07,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,

// two (50): w=13, h=18
0x4C,0x36,
0x0E,0x0E,0x07,0x07,0x07,0x07,0x07,0x8F,0xFF,0xFE,
0xFE,0xFC,0x78,
0xC0,0xE0,0xF0,0xF0,0xF8,0xBC,0x9E,0x8F,0x8F,0x87,
0x83,0x81,0x80,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,

// three (51): w=13, h=18
0x4C,0x36,
0x0E,0x06,0x87,0x87,0x87,0x87,0xCF,0xFF,0xFF,0xFE,
0x7E,0x3C,0x00,
0xC0,0xC0,0x83,0x83,0x83,0x83,0x87,0xC7,0xFE,0xFE,
0xFE,0xFC,0x78,
0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,
0x01,0x00,0x00,

// four (52): w=16, h=18
0x4F,0x29,
0x00,0x00,0x80,0xC0,0xE0,0xF0,0x78,0x3C,0x1E,0xFF,
0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x1E,0x1F,0x1F,0x1F,0x1D,0x1C,0x1C,0x1C,0x1C,0xFF,
0xFF,0xFF,0xFF,0xFF,0x1C,0x1C,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
0x03,0x03,0x03,0x03,0x00,0x00,

// five (53): w=12, h=18
0x4B,0x3C,
0xFF,0xFF,0xFF,0xC7,0xC7,0xC7,0xC7,0x87,0x87,0x07,
0x07,0x07,
0xC1,0x81,0x81,0x81,0x81,0x83,0xC7,0xFF,0xFF,0xFF,
0xFF,0x7C,
0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x01,
0x00,0x00,

// six (54): w=15, h=18
0x4E,0x2F,
0xC0,0xF0,0xFC,0xFC,0xFE,0x3E,0x8F,0x8F,0x87,0x87,
0x87,0x87,0x07,0x0E,0x00,
0x1F,0x7F,0xFF,0xFF,0xFF,0xC7,0x83,0x83,0x83,0xC7,
0xFF,0xFF,0xFF,0xFE,0x3C,
0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,
0x03,0x01,0x01,0x00,0x00,

// seven (55): w=13, h=18
0x4C,0x3B,
0x07,0x07,0x07,0x07,0x07,0x07,0xC7,0xE7,0xF7,0xFF,
0x7F,0x3F,0x0F,
0x00,0x80,0xF0,0xF8,0xFE,0xFF,0x3F,0x07,0x03,0x00,
0x00,0x00,0x00,
0x00,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// eight (56): w=15, h=18
0x4E,0x2F,
0x00,0x38,0xFC,0xFE,0xFF,0xEF,0xC7,0xC7,0x87,0xCF,
0xFF,0xFE,0x7E,0x3C,0x00,
0x70,0xFC,0xFE,0xFE,0xFF,0xC7,0x83,0x83,0x87,0x87,
0xCF,0xFF,0xFE,0xFC,0x78,
0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x01,0x01,0x00,0x00,

// nine (57): w=15, h=18
0x4E,0x2F,
0xF0,0xFC,0xFE,0xFE,0xFF,0x8F,0x07,0x07,0x07,0x8F,
0xFE,0xFE,0xFC,0xF8,0xE0,
0x00,0xC1,0x83,0x87,0x87,0x87,0x87,0x87,0xC7,0xF3,
0xFF,0xFF,0xFF,0x3F,0x0F,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,
0x01,0x00,0x00,0x00,0x00,

// colon (58): w=5, h=13
0x24,0xD6,
0x1F,0x1F,0x1F,0x1F,0x1F,
0x1F,0x1F,0x1F,0x1F,0x1F,

// semicolon (59): w=5, h=17
0x44,0xD6,
0x1F,0x1F,0x1F,0x1F,0x1F,
0x9F,0xDF,0xFF,0xFF,0x3F,
0x01,0x01,0x00,0x00,0x00,

// less (60): w=14, h=15
0x2D,0x95,
0x80,0x80,0xC0,0xE0,0xE0,0xF0,0x70,0x78,0x38,0x3C,
0x1C,0x1E,0x0E,0x0F,
0x00,0x00,0x01,0x03,0x03,0x07,0x07,0x0F,0x0E,0x1E,
0x1C,0x3C,0x38,0x78,

// equal (61): w=14, h=9
0xAD,0x08,0x66,
0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,
0xC7,0xC7,0xC7,0xC7,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,

// greater (62): w=14, h=15
0x2D,0x95,
0x0F,0x0E,0x1E,0x1C,0x3C,0x38,0x78,0x70,0xF0,0xE0,
0xE0,0xC0,0x80,0x80,
0x78,0x38,0x3C,0x1C,0x1E,0x0E,0x0F,0x07,0x07,0x03,
0x03,0x01,0x00,0x00,

// question (63): w=12, h=18
0x4B,0x2F,
0x0E,0x07,0x07,0x07,0x07,0x07,0x8F,0xFF,0xFF,0xFE,
0x7E,0x3C,
0x00,0x00,0x00,0x98,0x9C,0x9F,0x9F,0x9F,0x03,0x00,
0x00,0x00,
0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x00,0x00,
0x00,0x00,

// at (64): w=19, h=18
0x52,0x39,
0x00,0xC0,0xF0,0x38,0x1C,0x0C,0x86,0xC6,0xE3,0x63,
0x63,0x63,0xE3,0xE3,0x06,0x0E,0x1C,0xF8,0xF0,
0x1F,0x7F,0xE0,0x80,0x9E,0x3F,0x3F,0x39,0x18,0x0C,
0x86,0x3E,0x3F,0x30,0x30,0x18,0x1C,0x0F,0x03,
0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// A (65): w=19, h=18
0x52,0x28,
0x00,0x00,0x00,0x00,0xC0,0xF0,0xFE,0x7F,0x1F,0x7F,
0xFF,0xFF,0xFE,0xF8,0xC0,0x00,0x00,0x00,0x00,
0x00,0xC0,0xF0,0xFE,0x7F,0x1F,0x1D,0x1C,0x1C,0x1C,
0x1D,0x1F,0x3F,0xFF,0xFF,0xFF,0xF8,0xE0,0x00,
0x02,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,

// B (66): w=14, h=18
0x4D,0x35,
0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0x87,0xC7,0xFF,0xFF,
0xFF,0x7E,0x3C,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0x83,0x83,0x87,0xFE,
0xFE,0xFE,0xFC,0xF8,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x01,0x01,0x00,

// C (67): w=17, h=18
0x50,0x2E,
0xC0,0xF0,0xF8,0xFC,0xFE,0x3E,0x1F,0x0F,0x07,0x07,
0x07,0x07,0x07,0x07,0x07,0x0F,0x0E,
0x0F,0x3F,0x7F,0xFF,0xFF,0xF0,0xE0,0xC0,0xC0,0x80,
0x80,0x80,0x80,0x80,0x80,0xC0,0xC0,
0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x01,0x01,

// D (68): w=17, h=18
0x50,0x35,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x07,0x0F,
0x0F,0x3F,0xFE,0xFE,0xFC,0xF8,0xE0,
0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,
0xC0,0xE0,0xFF,0xFF,0xFF,0x7F,0x0F,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x01,0x01,0x00,0x00,0x00,

// E (69): w=13, h=18
0x4C,0x35,
0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0x87,0x87,0x87,0x87,
0x87,0x07,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0x83,0x83,0x83,0x83,
0x83,0x80,0x80,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,

// F (70): w=13, h=18
0x4C,0x34,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x07,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x07,0x07,
0x07,0x07,0x00,
0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// G (71): w=16, h=18
0x4F,0x30,
0xC0,0xF0,0xF8,0xFC,0xFE,0x3E,0x1F,0x0F,0x07,0x07,
0x07,0x07,0x07,0x07,0x0F,0x0F,
0x0F,0x3F,0xFF,0xFF,0xFF,0xF0,0xC0,0xC0,0x80,0x80,
0x80,0xFE,0xFE,0xFE,0xFE,0xFE,
0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x01,

// H (72): w=16, h=18
0x4F,0x36,
0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,
0x80,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x03,
0x03,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x03,0x03,0x03,0x03,0x03,

// I (73): w=5, h=18
0x44,0x36,
0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x03,0x03,

// J (74): w=10, h=22
0x49,0x2B,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0x1C,0x38,0x38,0x38,0x3C,0x3F,0x3F,0x1F,0x1F,0x07,

// K (75): w=16, h=18
0x4F,0x35,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xC0,0xE0,0xF0,0xFC,
0x3E,0x1F,0x07,0x03,0x01,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x0F,0x3F,0x7F,0xFF,
0xFE,0xF8,0xF0,0xC0,0x80,0x00,
0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x01,
0x03,0x03,0x03,0x03,0x03,0x02,

// L (76): w=13, h=18
0x4C,0x35,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,

// M (77): w=19, h=18
0x52,0x36,
0xFF,0xFF,0xFF,0x3F,0xFF,0xFF,0xFC,0xE0,0x00,0x00,
0x00,0xE0,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0x01,0x0F,0x7F,0xFF,0xFF,0xF8,
0xFF,0x3F,0x07,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,

// N (78): w=15, h=18
0x4E,0x37,
0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xF8,0xE0,0xC0,0x00,
0x00,0x00,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0x01,0x03,0x0F,0x1F,0x7F,0xFF,
0xFE,0xFC,0xFF,0xFF,0xFF,
0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x03,0x03,0x03,0x03,

// O (79): w=20, h=18
0x53,0x2E,
0xC0,0xF0,0xF8,0xFC,0xFE,0x3E,0x1F,0x0F,0x07,0x07,
0x07,0x07,0x0F,0x1F,0x3E,0xFE,0xFC,0xF8,0xF0,0xC0,
0x0F,0x3F,0x7F,0xFF,0xFF,0xF0,0xE0,0xC0,0x80,0x80,
0x80,0x80,0xC0,0xE0,0xF0,0xFF,0xFF,0x7F,0x3F,0x0F,
0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,

// P (80): w=14, h=18
0x4D,0x34,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x8F,0xFF,
0xFF,0xFF,0xFE,0x7C,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x07,0x07,
0x03,0x03,0x01,0x00,
0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// Q (81): w=23, h=22
0xD6,0x01,0x52,
0xC0,0xF0,0xF8,0xFC,0xFE,0x3E,0x1F,0x0F,0x07,0x07,
0x07,0x07,0x0F,0x1F,0x3E,0xFE,0xFC,0xF8,0xF0,0xC0,
0x00,0x00,0x00,
0x0F,0x3F,0x7F,0xFF,0xFF,0xF0,0xE0,0xC0,0x80,0x80,
0x80,0x80,0xC0,0xE0,0xF0,0xFF,0xFF,0x7F,0x3F,0x0F,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,
0x03,0x03,0x07,0x0F,0x0F,0x1F,0x1C,0x1C,0x3C,0x3C,
0x1C,0x0C,0x04,

// R (82): w=16, h=18
0x4F,0x34,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x8F,0xFF,
0xFF,0xFE,0xFE,0x7C,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x1F,0x7F,0xFF,
0xFF,0xF9,0xF0,0xC0,0x80,0x00,
0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x01,
0x03,0x03,0x03,0x03,0x03,0x02,

// S (83): w=13, h=18
0x4C,0x2F,
0x78,0xFE,0xFE,0xFF,0xFF,0xE7,0xC7,0xC7,0x87,0x07,
0x0F,0x0F,0x00,
0xC0,0xC1,0x81,0x83,0x87,0x87,0x8F,0xCF,0xFF,0xFF,
0xFF,0xFE,0x7C,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,
0x01,0x00,0x00,

// T (84): w=19, h=18
0x52,0x27,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0xFF,0xFF,0xFF,
0xFF,0xFF,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// U (85): w=15, h=18
0x4E,0x37,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,
0x3F,0xFF,0xFF,0xFF,0xFF,0xC0,0x80,0x80,0x80,0xC0,
0xFF,0xFF,0xFF,0xFF,0x3F,
0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x01,0x01,0x00,0x00,

// V (86): w=18, h=18
0x51,0x28,
0x03,0x0F,0x7F,0xFF,0xFF,0xFE,0xF8,0xC0,0x00,0x00,
0x00,0x00,0xC0,0xF0,0xFE,0x7F,0x0F,0x01,
0x00,0x00,0x00,0x03,0x0F,0x7F,0xFF,0xFF,0xFE,0xF8,
0xF0,0xFE,0x7F,0x0F,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,

// W (87): w=23, h=18
0x56,0x28,
0x07,0x7F,0xFF,0xFF,0xFF,0xF8,0x80,0x00,0x80,0xF8,
0xFF,0xFF,0xFF,0xFF,0xFC,0x80,0x00,0x00,0xC0,0xFC,
0xFF,0x3F,0x03,
0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,
0x0F,0x00,0x0F,0xFF,0xFF,0xFF,0xF8,0xFC,0xFF,0x3F,
0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x00,
0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x00,
0x00,0x00,0x00,

// X (88): w=16, h=18
0x4F,0x2E,
0x01,0x07,0x0F,0x3F,0xFF,0xFF,0xFE,0xF8,0xE0,0xF0,
0xF8,0x7E,0x1F,0x0F,0x03,0x01,
0x00,0x00,0xC0,0xF0,0xF8,0x7F,0x1F,0x1F,0x7F,0xFF,
0xFF,0xFC,0xF0,0xE0,0x80,0x00,
0x02,0x03,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x02,

// Y (89): w=17, h=18
0x50,0x2E,
0x01,0x07,0x1F,0x7F,0xFF,0xFF,0xFC,0xF8,0xE0,0x80,
0xE0,0xF0,0xFC,0x3F,0x0F,0x07,0x01,
0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,
0xFF,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=14, h=18
0x4D,0x30,
0x07,0x07,0x07,0x07,0x07,0x87,0xE7,0xF7,0xFF,0xFF,
0xFF,0x7F,0x3F,0x0F,
0xC0,0xF0,0xF8,0xFC,0xFF,0xFF,0xBF,0x9F,0x87,0x83,
0x80,0x80,0x80,0x80,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,

// bracketleft (91): w=6, h=23
0x45,0x16,
0xFF,0xFF,0xFF,0xFF,0x07,0x07,
0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x7F,0x7F,0x7F,0x7F,0x70,0x70,

// backslash (92): w=15, h=23
0x4E,0x08,
0x01,0x07,0x1F,0x7F,0xFC,0xF0,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x07,0x1F,0x7F,0xFC,0xF0,
0xC0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,
0x1F,0x7F,0x7C,0x70,0x40,

// bracketright (93): w=6, h=23
0x45,0x16,
0x07,0x07,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0x70,0x70,0x7F,0x7F,0x7F,0x7F,

// asciicircum (94): w=14, h=15
0x2D,0x35,
0x00,0x00,0x00,0x80,0xE0,0xF8,0xFE,0xFF,0xF8,0xE0,
0x80,0x00,0x00,0x00,
0x40,0x78,0x7E,0x3F,0x0F,0x03,0x00,0x00,0x03,0x0F,
0x3F,0x7E,0x78,0x40,

// underscore (95): w=11, h=3
0x8A,0x13,0x56,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,

// grave (96): w=6, h=3
0x85,0x00,0x9B,
0x01,0x01,0x03,0x07,0x06,0x04,

// a (97): w=14, h=13
0x2D,0xCF,
0x80,0xCE,0xC6,0xE7,0xE7,0xE7,0xE7,0xEF,0xFF,0xFF,
0xFE,0xFE,0xFC,0x00,
0x07,0x0F,0x1F,0x1F,0x1F,0x1C,0x1C,0x0C,0x0F,0x1F,
0x1F,0x1F,0x1F,0x1C,

// b (98): w=14, h=19
0x4D,0x15,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x80,0xC0,0xC0,0xC0,
0xC0,0x80,0x80,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0x01,0x01,0x83,0xFF,
0xFF,0xFF,0xFF,0x7E,
0x07,0x07,0x07,0x07,0x03,0x03,0x07,0x07,0x07,0x07,
0x07,0x03,0x01,0x00,

// c (99): w=12, h=13
0x2B,0xCF,
0xF0,0xFC,0xFE,0xFE,0xFF,0x1F,0x0F,0x07,0x07,0x07,
0x07,0x0E,
0x01,0x07,0x0F,0x0F,0x1F,0x1F,0x1E,0x1C,0x1C,0x1C,
0x1C,0x1E,

// d (100): w=14, h=19
0x4D,0x10,
0x00,0x00,0x80,0xC0,0xC0,0xC0,0xC0,0x80,0x80,0xFF,
0xFF,0xFF,0xFF,0xFF,
0xFE,0xFF,0xFF,0xFF,0xFF,0x83,0x01,0x01,0x83,0xFF,
0xFF,0xFF,0xFF,0xFF,
0x00,0x03,0x03,0x07,0x07,0x07,0x07,0x03,0x01,0x07,
0x07,0x07,0x07,0x07,

// e (101): w=13, h=13
0x2C,0xCF,
0xF0,0xFC,0xFE,0xFE,0xFF,0xE7,0xE7,0xE7,0xFF,0xFF,
0xFE,0xFC,0xF0,
0x01,0x07,0x0F,0x0F,0x1F,0x1E,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x0E,

// f (102): w=12, h=19
0x4B,0x08,
0xC0,0xC0,0xF8,0xFE,0xFE,0xFF,0xFF,0xC7,0xC7,0xC7,
0xC7,0x07,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x01,
0x01,0x00,
0x00,0x00,0x07,0x07,0x07,0x07,0x07,0x00,0x00,0x00,
0x00,0x00,

// g (103): w=14, h=18
0x4D,0xD0,
0xF0,0xFC,0xFE,0xFF,0xFF,0x0F,0x07,0x07,0x0E,0xFE,
0xFF,0xFF,0xFF,0xFF,
0x03,0x8F,0xCF,0x9F,0x9F,0x9E,0x9C,0x8C,0xC6,0xFF,
0xFF,0xFF,0xFF,0x7F,
0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x01,0x01,0x00,0x00,

// h (104): w=13, h=19
0x4C,0x16,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x80,0xC0,0xC0,0xC0,
0xC0,0x80,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x03,0x03,0xFF,0xFF,
0xFF,0xFF,0xFF,
0x07,0x07,0x07,0x07,0x07,0x00,0x00,0x00,0x07,0x07,
0x07,0x07,0x07,

// i (105): w=5, h=19
0x44,0x16,
0xC7,0xC7,0xC7,0xC7,0xC7,
0xFF,0xFF,0xFF,0xFF,0xFF,
0x07,0x07,0x07,0x07,0x07,

// j (106): w=10, h=24
0xC9,0x00,0x26,
0x00,0x00,0x00,0x00,0x00,0xC7,0xC7,0xC7,0xC7,0xC7,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0xE0,0xE0,0xE0,0xE0,0xE0,0xFF,0xFF,0x7F,0x7F,0x3F,

// k (107): w=14, h=19
0x4D,0x15,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x80,0xC0,
0xC0,0xC0,0x40,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0x30,0xFC,0xFE,0xFF,0xFF,
0xE1,0xC0,0x00,0x00,
0x07,0x07,0x07,0x07,0x07,0x00,0x00,0x01,0x07,0x07,
0x07,0x07,0x07,0x04,

// l (108): w=5, h=19
0x44,0x16,
0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,
0x07,0x07,0x07,0x07,0x07,

// m (109): w=21, h=13
0x34,0xD6,
0xFF,0xFF,0xFF,0xFF,0xFD,0x1E,0x0F,0x0F,0xFF,0xFF,
0xFF,0xFE,0xFC,0x1C,0x0E,0x0F,0xFF,0xFF,0xFF,0xFF,
0xFE,
0x1F,0x1F,0x1F,0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F,
0x1F,0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F,0x1F,0x1F,
0x1F,

// n (110): w=13, h=13
0x2C,0xD6,
0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0x0E,0x0F,0xFF,0xFF,
0xFF,0xFE,0xFC,
0x1F,0x1F,0x1F,0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F,
0x1F,0x1F,0x1F,

// o (111): w=15, h=13
0x2E,0xCF,
0xF0,0xFC,0xFE,0xFE,0xFF,0x0F,0x07,0x07,0x07,0x0F,
0xFF,0xFE,0xFE,0xFC,0xF0,
0x01,0x07,0x0F,0x0F,0x1F,0x1E,0x1C,0x1C,0x1C,0x1E,
0x1F,0x0F,0x0F,0x07,0x01,

// p (112): w=14, h=18
0x4D,0xD5,
0xFF,0xFF,0xFF,0xFF,0xFF,0x0C,0x06,0x07,0x0F,0xFF,
0xFF,0xFE,0xFE,0xF8,
0xFF,0xFF,0xFF,0xFF,0xFF,0x0E,0x0C,0x1C,0x1E,0x1F,
0x1F,0x0F,0x07,0x03,
0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// q (113): w=14, h=18
0x4D,0xD0,
0xF0,0xFC,0xFE,0xFF,0xFF,0x0F,0x07,0x07,0x0E,0xFE,
0xFF,0xFF,0xFF,0xFF,
0x03,0x0F,0x0F,0x1F,0x1F,0x1E,0x1C,0x0C,0x06,0xFF,
0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
0x03,0x03,0x03,0x03,

// r (114): w=10, h=13
0x29,0xD4,
0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0x0E,0x0F,0x0F,0x0F,
0x1F,0x1F,0x1F,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,

// s (115): w=12, h=13
0x2B,0xD6,
0x3C,0x3E,0x7F,0x7F,0xFF,0xE7,0xE7,0xE7,0xC7,0xC7,
0x8E,0x80,
0x0E,0x1E,0x1C,0x1C,0x1C,0x1C,0x1C,0x1F,0x1F,0x0F,
0x0F,0x07,

// t (116): w=9, h=17
0x48,0x4F,
0x70,0xFE,0xFE,0xFF,0xFF,0xFF,0x70,0x70,0x70,
0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,0xC0,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,

// u (117): w=13, h=13
0x2C,0xD6,
0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xFF,0xFF,
0xFF,0xFF,0xFF,
0x07,0x0F,0x1F,0x1F,0x1F,0x1C,0x0C,0x06,0x1F,0x1F,
0x1F,0x1F,0x1F,

// v (118): w=15, h=13
0x2E,0xCF,
0x03,0x0F,0x7F,0xFF,0xFF,0xFE,0xF8,0xC0,0x00,0xC0,
0xF8,0xFE,0x7F,0x0F,0x01,
0x00,0x00,0x00,0x01,0x0F,0x1F,0x1F,0x1F,0x1F,0x1F,
0x0F,0x01,0x00,0x00,0x00,

// w (119): w=21, h=13
0x34,0xCE,
0x01,0x1F,0xFF,0xFF,0xFE,0xE0,0x00,0xE0,0xFE,0xFF,
0x1F,0xFF,0xFF,0xFE,0xE0,0x00,0xE0,0xFE,0xFF,0x1F,
0x01,
0x00,0x00,0x01,0x1F,0x1F,0x1F,0x1F,0x1F,0x0F,0x00,
0x00,0x01,0x1F,0x1F,0x1F,0x1F,0x1F,0x0F,0x00,0x00,
0x00,

// x (120): w=13, h=13
0x2C,0xCE,
0x01,0x03,0x0F,0x3F,0xFF,0xFF,0xFC,0xF8,0xFE,0x9F,
0x0F,0x03,0x01,
0x10,0x18,0x1E,0x1F,0x0F,0x03,0x07,0x0F,0x1F,0x1F,
0x1E,0x1C,0x10,

// y (121): w=15, h=18
0x4E,0xCE,
0x03,0x0F,0x7F,0xFF,0xFF,0xFE,0xF8,0xC0,0x80,0xE0,
0xFC,0x7F,0x1F,0x07,0x01,
0x00,0x00,0x00,0x01,0xCF,0xFF,0xFF,0xFF,0x3F,0x0F,
0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x02,0x03,0x03,0x03,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// z (122): w=13, h=13
0x2C,0xCF,
0x07,0x07,0x87,0xC7,0xE7,0xF7,0xFF,0xFF,0xFF,0x7F,
0x3F,0x1F,0x0F,
0x1E,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1D,0x1C,0x1C,
0x1C,0x1C,0x1C,

// braceleft (123): w=7, h=23
0x46,0x10,
0x00,0xFC,0xFE,0xFF,0xFF,0xFF,0x07,
0x1C,0xFF,0xFF,0xF7,0xF7,0xC1,0x00,
0x00,0x1F,0x3F,0x7F,0x7F,0x7F,0x70,

// bar (124): w=3, h=23
0x42,0x16,
0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,
0x7F,0x7F,0x7F,

// braceright (125): w=7, h=23
0x46,0x10,
0x07,0xFF,0xFF,0xFF,0xFE,0xFC,0x00,
0x00,0xC1,0xF7,0xF7,0xFF,0xFF,0x1C,
0x70,0x7F,0x7F,0x7F,0x3F,0x1F,0x00,

// asciitilde (126): w=14, h=6
0x8D,0x09,0x66,
0x3C,0x3E,0x3F,0x07,0x07,0x0F,0x0E,0x1C,0x3C,0x38,
0x38,0x3F,0x1F,0x0F

};
// 3470 bytes
// 3660 bytes with FAST_FONT_INDEX

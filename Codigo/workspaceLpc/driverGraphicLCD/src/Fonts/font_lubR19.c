#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_lubR19[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xCF,0x00,
0xD8,0x00,
0x0A,0x01,
0x30,0x01,
0x65,0x01,
0x9D,0x01,
0xA2,0x01,
0xB6,0x01,
0xCA,0x01,
0xE0,0x01,
0x02,0x02,
0x0B,0x02,
0x14,0x02,
0x1A,0x02,
0x43,0x02,
0x6C,0x02,
0x8C,0x02,
0xAF,0x02,
0xD2,0x02,
0x01,0x03,
0x21,0x03,
0x4A,0x03,
0x70,0x03,
0x99,0x03,
0xC2,0x03,
0xCA,0x03,
0xD5,0x03,
0xF7,0x03,
0x09,0x04,
0x2B,0x04,
0x4B,0x04,
0x89,0x04,
0xC4,0x04,
0xED,0x04,
0x1C,0x05,
0x54,0x05,
0x80,0x05,
0xA6,0x05,
0xDB,0x05,
0x13,0x06,
0x2A,0x06,
0x4A,0x06,
0x82,0x06,
0xAB,0x06,
0xEC,0x06,
0x24,0x07,
0x5C,0x07,
0x85,0x07,
0xCA,0x07,
0xFC,0x07,
0x1F,0x08,
0x54,0x08,
0x8C,0x08,
0xC4,0x08,
0x0E,0x09,
0x43,0x09,
0x7B,0x09,
0xA4,0x09,
0xB8,0x09,
0xE1,0x09,
0xF5,0x09,
0x15,0x0A,
0x22,0x0A,
0x2B,0x0A,
0x45,0x0A,
0x71,0x0A,
0x89,0x0A,
0xB5,0x0A,
0xCD,0x0A,
0xED,0x0A,
0x16,0x0B,
0x45,0x0B,
0x5C,0x0B,
0x73,0x0B,
0xA2,0x0B,
0xB9,0x0B,
0xE9,0x0B,
0x09,0x0C,
0x25,0x0C,
0x51,0x0C,
0x7D,0x0C,
0x93,0x0C,
0xA9,0x0C,
0xC6,0x0C,
0xE6,0x0C,
0x04,0x0D,
0x30,0x0D,
0x50,0x0D,
0x7C,0x0D,
0x96,0x0D,
0xAD,0x0D,
0xB5,0x0D,
0xCC,0x0D,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x12,0x4C,
0x00,

// exclam (33): w=3, h=19
0x42,0x16,
0xFF,0xFF,0xFF,
0x01,0x3F,0x01,
0x07,0x07,0x07,

// quotedbl (34): w=7, h=6
0x06,0x15,
0x07,0x3F,0x07,0x00,0x07,0x3F,0x07,

// numbersign (35): w=16, h=19
0x4F,0x08,
0x00,0x60,0x60,0x60,0x60,0xE0,0xFE,0x7F,0x61,0x60,
0xF0,0xFE,0x7F,0x61,0x60,0x60,
0x18,0x18,0x18,0xF8,0xFE,0x3F,0x19,0x18,0xF8,0xFE,
0x3F,0x19,0x18,0x18,0x18,0x00,
0x00,0x00,0x06,0x07,0x03,0x00,0x00,0x06,0x07,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,

// dollar (36): w=12, h=21
0x4B,0x16,
0x00,0x7C,0xFE,0xFE,0xC3,0x81,0xFF,0x01,0x01,0x03,
0x0F,0x0E,
0x80,0x80,0x00,0x01,0x03,0x03,0xFF,0x0F,0x1E,0xFC,
0xFC,0xF8,
0x03,0x07,0x06,0x04,0x04,0x04,0x3F,0x04,0x06,0x03,
0x01,0x00,

// percent (37): w=17, h=19
0x50,0x09,
0x7C,0xFE,0x83,0x01,0x01,0x83,0xFE,0x7C,0x00,0x80,
0xE0,0x70,0x38,0x1C,0x0F,0x03,0x01,
0x00,0x00,0x81,0xC1,0xE1,0x71,0x3C,0x0E,0x07,0xFB,
0xFD,0x06,0x02,0x02,0x06,0xFC,0xF8,
0x04,0x06,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x01,
0x03,0x06,0x04,0x04,0x06,0x03,0x01,

// ampersand (38): w=18, h=19
0x51,0x08,
0x00,0x00,0x00,0x00,0x3C,0x7E,0xFF,0xC3,0x01,0xC3,
0x7F,0x3E,0x1C,0x00,0x00,0x00,0x00,0x00,
0xF8,0xFC,0xFE,0xC2,0x01,0x01,0x07,0x0F,0x1F,0x7E,
0xF8,0xF0,0xC0,0xC2,0x3E,0x1E,0x02,0x02,
0x00,0x01,0x03,0x03,0x07,0x07,0x06,0x06,0x06,0x02,
0x03,0x01,0x03,0x07,0x07,0x06,0x06,0x04,

// quotesingle (39): w=3, h=6
0x02,0x15,
0x07,0x3F,0x07,

// parenleft (40): w=6, h=23
0x45,0x0F,
0x00,0xE0,0xF8,0x3C,0x06,0x01,
0x7F,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x03,0x0F,0x1E,0x30,0x40,

// parenright (41): w=6, h=23
0x45,0x0F,
0x01,0x06,0x3C,0xF8,0xE0,0x00,
0x00,0x00,0x00,0xFF,0xFF,0x7F,
0x40,0x30,0x1E,0x0F,0x03,0x00,

// asterisk (42): w=10, h=9
0x29,0x0F,
0x08,0x8C,0x98,0xD0,0x6F,0x2F,0xF0,0x88,0x08,0x0C,
0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x00,

// plus (43): w=16, h=16
0x2F,0x68,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,

// comma (44): w=3, h=9
0xA2,0x0F,0x67,
0x0F,0xFF,0x7F,
0x01,0x01,0x00,

// hyphen (45): w=6, h=2
0x85,0x0A,0x56,
0x03,0x03,0x03,0x03,0x03,0x03,

// period (46): w=3, h=3
0x82,0x10,0x67,
0x07,0x07,0x07,

// slash (47): w=13, h=23
0x4C,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF8,
0x3E,0x0F,0x03,
0x00,0x00,0x00,0x80,0xE0,0xF8,0x3E,0x0F,0x03,0x00,
0x00,0x00,0x00,
0x60,0x78,0x3E,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// zero (48): w=13, h=19
0x4C,0x10,
0xE0,0xF8,0xFC,0x0E,0x03,0x01,0x01,0x01,0x03,0x0E,
0xFC,0xF8,0xE0,
0x3F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x80,
0xFF,0xFF,0x3F,
0x00,0x00,0x01,0x03,0x06,0x04,0x04,0x04,0x06,0x03,
0x01,0x00,0x00,

// one (49): w=10, h=19
0x49,0x1D,
0x01,0x01,0x01,0x03,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x04,0x04,0x04,0x06,0x07,0x07,0x07,0x04,0x04,0x04,

// two (50): w=11, h=19
0x4A,0x17,
0x1E,0x1E,0x03,0x01,0x01,0x01,0x01,0x07,0xFE,0xFE,
0x78,
0x00,0xC0,0x60,0x10,0x08,0x04,0x06,0x03,0x01,0x00,
0x00,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x07,

// three (51): w=11, h=19
0x4A,0x17,
0x0E,0x0F,0x03,0x01,0x01,0x01,0x81,0x83,0xFE,0x7E,
0x3C,
0x80,0x80,0x01,0x01,0x01,0x01,0x03,0x06,0xFC,0xFC,
0xF8,
0x07,0x07,0x06,0x04,0x04,0x04,0x06,0x07,0x03,0x01,
0x00,

// four (52): w=15, h=19
0x4E,0x09,
0x00,0x00,0x00,0x00,0x80,0x40,0x30,0x18,0x04,0xFE,
0xFF,0xFF,0x00,0x00,0x00,
0x30,0x38,0x36,0x33,0x31,0x30,0x30,0x30,0x30,0xFF,
0xFF,0xFF,0x30,0x30,0x30,
0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x06,0x07,
0x07,0x07,0x06,0x04,0x04,

// five (53): w=10, h=19
0x49,0x1D,
0xFF,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
0x81,0x81,0x01,0x01,0x03,0x03,0x06,0xFE,0xFC,0xF8,
0x07,0x07,0x06,0x04,0x04,0x06,0x03,0x03,0x01,0x00,

// six (54): w=13, h=19
0x4C,0x10,
0xC0,0xF8,0xFC,0x1E,0x02,0x81,0x81,0x81,0x81,0x83,
0x0F,0x0E,0x00,
0x3F,0xFF,0xFF,0x82,0x01,0x00,0x00,0x00,0x00,0x03,
0xFF,0xFE,0x7C,
0x00,0x00,0x01,0x03,0x06,0x04,0x04,0x04,0x06,0x03,
0x03,0x01,0x00,

// seven (55): w=12, h=19
0x4B,0x1B,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x87,0x67,0x37,
0x0F,0x07,
0x00,0x00,0xC0,0xF0,0xF8,0x1E,0x07,0x01,0x00,0x00,
0x00,0x00,
0x00,0x06,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// eight (56): w=13, h=19
0x4C,0x10,
0x00,0x78,0xFE,0xFE,0xC3,0x81,0x81,0x01,0x01,0x83,
0x7E,0x7E,0x3C,
0xF0,0xF8,0xFC,0x06,0x03,0x03,0x07,0x07,0x0F,0x1E,
0xFC,0xFC,0xF0,
0x00,0x01,0x03,0x07,0x06,0x04,0x04,0x04,0x06,0x03,
0x03,0x01,0x00,

// nine (57): w=13, h=19
0x4C,0x10,
0xF0,0xFC,0xFE,0x06,0x03,0x01,0x01,0x01,0x03,0x0E,
0xFC,0xF8,0xE0,
0x01,0x83,0x87,0x0E,0x08,0x08,0x08,0x08,0x04,0xC2,
0xFF,0xFF,0x1F,
0x00,0x03,0x07,0x06,0x04,0x04,0x04,0x04,0x02,0x03,
0x01,0x00,0x00,

// colon (58): w=3, h=14
0x22,0xB6,
0x07,0x07,0x07,
0x38,0x38,0x38,

// semicolon (59): w=3, h=19
0x42,0xB6,
0x07,0x07,0x07,
0x30,0xF0,0xF0,
0x04,0x07,0x03,

// less (60): w=16, h=16
0x2F,0x6D,
0x80,0x80,0x80,0xC0,0xC0,0xE0,0x60,0x30,0x30,0x18,
0x18,0x0C,0x0C,0x06,0x07,0x03,
0x00,0x01,0x01,0x03,0x03,0x07,0x06,0x0C,0x0C,0x18,
0x18,0x30,0x30,0x60,0xE0,0xC0,

// equal (61): w=15, h=7
0x8E,0x08,0x46,
0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,
0x63,0x63,0x63,0x63,0x63,

// greater (62): w=16, h=16
0x2F,0x68,
0x03,0x07,0x06,0x0C,0x0C,0x18,0x18,0x30,0x30,0x60,
0xE0,0xC0,0xC0,0x80,0x80,0x00,
0xC0,0xE0,0x60,0x30,0x30,0x18,0x18,0x0C,0x0C,0x06,
0x07,0x03,0x03,0x01,0x01,0x01,

// question (63): w=10, h=19
0x49,0x0F,
0x1E,0x1F,0x03,0x01,0x01,0x01,0x83,0xFE,0x7E,0x3C,
0x00,0x00,0x00,0x38,0x3C,0x3E,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,

// at (64): w=20, h=19
0x53,0x10,
0x00,0xC0,0x20,0x10,0x08,0x04,0x82,0xC2,0x62,0x31,
0x31,0x31,0x31,0xE1,0x21,0x02,0x06,0x0C,0x18,0xE0,
0x3F,0xC0,0x80,0x00,0x00,0x3E,0x7F,0x61,0x60,0x30,
0x18,0x0C,0x3E,0x73,0x40,0x40,0x20,0x30,0x1C,0x07,
0x00,0x00,0x01,0x03,0x02,0x06,0x04,0x04,0x04,0x04,
0x04,0x04,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// A (65): w=19, h=19
0x52,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x30,0x0E,0x3F,
0xFE,0xF8,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xE0,0x18,0x16,0x11,0x10,0x10,0x10,
0x11,0x17,0x3F,0xFF,0xF8,0xE0,0x80,0x00,0x00,
0x04,0x06,0x07,0x04,0x04,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x04,0x04,0x07,0x07,0x07,0x06,0x04,

// B (66): w=13, h=19
0x4C,0x10,
0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x83,0xFF,
0xFE,0x3C,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0x02,0x02,0x07,0x07,0x0E,
0xFC,0xF8,0xF0,
0x04,0x04,0x07,0x07,0x07,0x04,0x04,0x04,0x06,0x07,
0x07,0x03,0x01,

// C (67): w=15, h=19
0x4E,0x10,
0xC0,0xF0,0xFC,0x1C,0x06,0x02,0x03,0x01,0x01,0x01,
0x01,0x03,0x03,0x1E,0x1E,
0x1F,0x7F,0xFF,0xF0,0xC0,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x03,0x03,0x07,0x06,0x06,0x06,
0x06,0x06,0x06,0x02,0x03,

// D (68): w=18, h=19
0x51,0x0F,
0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,
0x01,0x03,0x03,0x06,0x1E,0xFC,0xF8,0xC0,
0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xC0,0xFF,0x7F,0x1F,
0x04,0x04,0x07,0x07,0x07,0x06,0x04,0x04,0x04,0x04,
0x04,0x06,0x02,0x03,0x01,0x00,0x00,0x00,

// E (69): w=14, h=19
0x4D,0x09,
0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,
0x81,0x07,0x07,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0x02,0x02,0x02,0x02,0x02,
0x0F,0x00,0x00,0x00,
0x04,0x04,0x07,0x07,0x07,0x04,0x04,0x04,0x04,0x04,
0x04,0x06,0x07,0x07,

// F (70): w=12, h=19
0x4B,0x0F,
0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x01,0x81,
0x07,0x07,
0x00,0x00,0xFF,0xFF,0xFF,0x02,0x02,0x02,0x02,0x0F,
0x00,0x00,
0x04,0x04,0x07,0x07,0x07,0x04,0x04,0x00,0x00,0x00,
0x00,0x00,

// G (71): w=17, h=19
0x50,0x14,
0xC0,0xF0,0xFC,0x3C,0x06,0x02,0x03,0x01,0x01,0x01,
0x01,0x03,0x03,0x1E,0x1E,0x00,0x00,
0x1F,0x7F,0xFF,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,
0x08,0x08,0xF8,0xF8,0xF8,0x08,0x08,
0x00,0x00,0x00,0x01,0x03,0x02,0x06,0x04,0x04,0x04,
0x04,0x04,0x07,0x07,0x03,0x00,0x00,

// H (72): w=18, h=19
0x51,0x0F,
0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,
0x00,0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,
0x00,0x00,0xFF,0xFF,0xFF,0x02,0x02,0x02,0x02,0x02,
0x02,0x02,0x02,0xFF,0xFF,0xFF,0x00,0x00,
0x04,0x04,0x07,0x07,0x07,0x04,0x04,0x00,0x00,0x00,
0x00,0x04,0x04,0x07,0x07,0x07,0x04,0x04,

// I (73): w=7, h=19
0x46,0x0E,
0x01,0x01,0xFF,0xFF,0xFF,0x03,0x01,
0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,
0x04,0x04,0x07,0x07,0x07,0x04,0x04,

// J (74): w=10, h=23
0x49,0x09,
0x00,0x00,0x00,0x01,0x01,0xFF,0xFF,0xFF,0x03,0x01,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,
0x78,0x78,0x40,0x40,0x60,0x3F,0x3F,0x0F,0x00,0x00,

// K (75): w=18, h=19
0x51,0x08,
0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,0x80,0x40,0x20,
0x10,0x09,0x07,0x03,0x03,0x01,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0x02,0x0F,0x1F,0x3E,0x7C,
0xF8,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,
0x04,0x04,0x07,0x07,0x07,0x04,0x04,0x00,0x00,0x00,
0x04,0x05,0x07,0x07,0x07,0x06,0x04,0x04,

// L (76): w=13, h=19
0x4C,0x0E,
0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0x80,
0x04,0x04,0x07,0x07,0x07,0x04,0x04,0x04,0x04,0x04,
0x06,0x07,0x07,

// M (77): w=21, h=19
0x54,0x0E,
0x01,0x01,0xFF,0xFF,0x1F,0x7F,0xFC,0xE0,0x80,0x00,
0x00,0x00,0x00,0x80,0x70,0x0C,0xFF,0xFF,0xFF,0x01,
0x01,
0x00,0x00,0xFF,0xFF,0x00,0x00,0x03,0x1F,0x7F,0xFE,
0xF0,0x70,0x0E,0x03,0x00,0x00,0xFF,0xFF,0xFF,0x00,
0x00,
0x04,0x04,0x07,0x07,0x04,0x04,0x00,0x00,0x00,0x01,
0x01,0x00,0x00,0x00,0x04,0x04,0x07,0x07,0x07,0x04,
0x04,

// N (78): w=18, h=19
0x51,0x0F,
0x01,0x01,0xFF,0xFF,0x1F,0x3E,0xF8,0xF0,0xE0,0x80,
0x00,0x00,0x00,0x01,0x01,0xFF,0x01,0x01,
0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x01,0x03,0x0F,
0x1F,0x3E,0xF8,0xF0,0xE0,0xFF,0x00,0x00,
0x04,0x04,0x07,0x07,0x04,0x04,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x07,0x07,0x00,0x00,

// O (79): w=18, h=19
0x51,0x0F,
0xC0,0xF0,0xFC,0x3C,0x06,0x02,0x03,0x01,0x01,0x01,
0x01,0x03,0x02,0x06,0x3C,0xFC,0xF0,0xC0,
0x1F,0x7F,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xE0,0xFF,0x7F,0x1F,
0x00,0x00,0x00,0x01,0x03,0x02,0x06,0x04,0x04,0x04,
0x04,0x06,0x02,0x03,0x01,0x01,0x00,0x00,

// P (80): w=13, h=19
0x4C,0x0F,
0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x01,0x03,
0xFE,0xFE,0xF8,
0x00,0x00,0xFF,0xFF,0xFF,0x04,0x04,0x04,0x06,0x07,
0x03,0x01,0x00,
0x04,0x04,0x07,0x07,0x07,0x06,0x04,0x04,0x00,0x00,
0x00,0x00,0x00,

// Q (81): w=22, h=23
0xD5,0x00,0x52,
0xC0,0xF0,0xFC,0x3C,0x06,0x02,0x03,0x01,0x01,0x01,
0x01,0x03,0x02,0x06,0x3C,0xFC,0xF0,0xC0,0x00,0x00,
0x00,0x00,
0x1F,0x7F,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xE0,0xFF,0x7F,0x1F,0x00,0x00,
0x00,0x00,
0x00,0x00,0x00,0x01,0x03,0x02,0x06,0x04,0x04,0x04,
0x04,0x06,0x0E,0x1B,0x13,0x31,0x30,0x70,0x60,0x60,
0x20,0x20,

// R (82): w=16, h=19
0x4F,0x0F,
0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x01,0x03,
0xFE,0xFE,0x78,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0x04,0x04,0x0C,0x3E,0xFF,
0xF1,0xE0,0x80,0x00,0x00,0x00,
0x04,0x04,0x07,0x07,0x07,0x04,0x04,0x00,0x00,0x00,
0x03,0x07,0x07,0x07,0x06,0x04,

// S (83): w=11, h=19
0x4A,0x15,
0x78,0xFE,0xFE,0xC3,0x81,0x81,0x01,0x03,0x0F,0x0E,
0x00,
0xC0,0xC0,0x01,0x03,0x03,0x07,0x0F,0x1E,0xFE,0xFC,
0xF0,
0x03,0x07,0x06,0x04,0x04,0x04,0x04,0x06,0x03,0x01,
0x00,

// T (84): w=17, h=19
0x50,0x08,
0x07,0x07,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0xFF,
0x01,0x01,0x01,0x01,0x01,0x07,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x04,0x04,0x06,0x07,0x07,0x07,
0x06,0x04,0x04,0x00,0x00,0x00,0x00,

// U (85): w=18, h=19
0x51,0x09,
0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0xFF,0xFF,0x01,0x01,
0x00,0x00,0x7F,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0x7F,0x00,0x00,
0x00,0x00,0x00,0x01,0x03,0x03,0x06,0x04,0x04,0x04,
0x04,0x04,0x02,0x03,0x01,0x00,0x00,0x00,

// V (86): w=18, h=19
0x51,0x08,
0x01,0x03,0x0F,0x3F,0xFF,0xF1,0xC1,0x00,0x00,0x00,
0x00,0x00,0x00,0xC1,0x71,0x0F,0x03,0x01,
0x00,0x00,0x00,0x00,0x01,0x07,0x3F,0xFF,0xF8,0xE0,
0xC0,0x30,0x0E,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// W (87): w=24, h=19
0x57,0x08,
0x01,0x03,0x1F,0xFF,0xFF,0xE1,0x01,0x00,0x00,0x00,
0xE0,0x1E,0xFF,0xFE,0xE0,0x00,0x00,0x00,0x00,0x81,
0x79,0x07,0x01,0x01,
0x00,0x00,0x00,0x01,0x1F,0xFF,0xFE,0xE0,0x78,0x0F,
0x00,0x00,0x00,0x0F,0x7F,0xFF,0xF8,0xC0,0x3C,0x03,
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,

// X (88): w=17, h=19
0x50,0x08,
0x01,0x01,0x03,0x0F,0x3F,0x7F,0xF9,0xE1,0xC0,0x00,
0xC0,0x20,0x19,0x0D,0x03,0x01,0x01,
0x00,0x00,0x00,0x80,0x60,0x30,0x09,0x07,0x0F,0x1F,
0x7E,0xF8,0xE0,0xC0,0x00,0x00,0x00,
0x04,0x06,0x07,0x05,0x04,0x00,0x00,0x00,0x00,0x00,
0x04,0x05,0x07,0x07,0x07,0x06,0x04,

// Y (89): w=18, h=19
0x51,0x08,
0x01,0x03,0x07,0x1F,0x7F,0xF9,0xF1,0xC0,0x80,0x00,
0x00,0x80,0x60,0x11,0x0D,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFE,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x07,0x07,0x07,
0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=13, h=19
0x4C,0x15,
0x0F,0x0F,0x03,0x01,0x01,0x01,0xC1,0xF1,0xFD,0x7F,
0x1F,0x07,0x03,
0x00,0x80,0xE0,0xF0,0xFC,0x3F,0x0F,0x03,0x01,0x00,
0x00,0x00,0x00,
0x06,0x07,0x07,0x05,0x04,0x04,0x04,0x04,0x04,0x04,
0x04,0x07,0x07,

// bracketleft (91): w=6, h=23
0x45,0x14,
0xFF,0xFF,0xFF,0x01,0x01,0x01,
0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x7F,0x7F,0x7F,0x40,0x40,0x40,

// backslash (92): w=13, h=23
0x4C,0x08,
0x03,0x0F,0x3E,0xF8,0xE0,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x0F,0x3E,0xF8,0xE0,0x80,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,
0x3E,0x78,0x60,

// bracketright (93): w=6, h=23
0x45,0x0F,
0x01,0x01,0x01,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0xFF,0xFF,0xFF,
0x40,0x40,0x40,0x7F,0x7F,0x7F,

// asciicircum (94): w=15, h=16
0x2E,0x09,
0x00,0x00,0x00,0x00,0xC0,0xF0,0x3C,0x0F,0x3C,0xF0,
0xC0,0x00,0x00,0x00,0x00,
0xC0,0xF0,0x7C,0x1F,0x07,0x00,0x00,0x00,0x00,0x00,
0x07,0x1F,0x7C,0xF0,0xC0,

// underscore (95): w=10, h=2
0x89,0x13,0x66,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// grave (96): w=6, h=4
0x85,0x00,0x8B,
0x01,0x01,0x03,0x06,0x0C,0x08,

// a (97): w=12, h=14
0x2B,0xAF,
0x00,0xC6,0xC7,0x63,0x61,0x21,0x23,0xFF,0xFE,0xFC,
0x00,0x00,
0x0F,0x1F,0x3F,0x38,0x30,0x30,0x18,0x0F,0x1F,0x3F,
0x20,0x30,

// b (98): w=14, h=19
0x4D,0x0A,
0x01,0x01,0xFF,0xFF,0xFF,0x80,0xC0,0x60,0x60,0x60,
0xE0,0xC0,0xC0,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x01,0xFF,0xFF,0x7F,
0x00,0x00,0x07,0x07,0x03,0x01,0x02,0x06,0x06,0x06,
0x07,0x03,0x01,0x00,

// c (99): w=11, h=14
0x2A,0xAF,
0xF0,0xFC,0xFE,0x0E,0x03,0x01,0x01,0x01,0x03,0x0F,
0x0E,
0x03,0x0F,0x1F,0x1E,0x38,0x30,0x30,0x30,0x30,0x30,
0x18,

// d (100): w=14, h=19
0x4D,0x15,
0x00,0x80,0xC0,0xE0,0x60,0x60,0x60,0x41,0x81,0xFF,
0xFF,0xFF,0x00,0x00,
0xFE,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0xFF,0x00,0x00,
0x00,0x03,0x03,0x07,0x06,0x06,0x02,0x03,0x01,0x07,
0x07,0x07,0x06,0x04,

// e (101): w=11, h=14
0x2A,0xB0,
0xF0,0xFC,0xFE,0x26,0x21,0x21,0x21,0x23,0x3E,0x3E,
0x38,
0x03,0x0F,0x1F,0x1E,0x38,0x30,0x30,0x30,0x30,0x10,
0x18,

// f (102): w=10, h=19
0x49,0x0D,
0x20,0x20,0xFE,0xFF,0xFF,0x20,0x20,0x20,0x07,0x07,
0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x0C,0x0C,0x0F,0x0F,0x0F,0x0C,0x0C,0x00,0x00,0x00,

// g (103): w=13, h=19
0x4C,0xAF,
0x00,0x7C,0xFE,0xFF,0x03,0x01,0x01,0x03,0xFF,0xFD,
0x79,0x01,0x01,
0x80,0xDC,0xDC,0x3F,0x33,0x32,0x32,0x33,0x33,0xF1,
0xF0,0xE0,0x00,
0x01,0x03,0x07,0x06,0x04,0x04,0x04,0x04,0x06,0x03,
0x03,0x01,0x00,

// h (104): w=15, h=19
0x4E,0x0E,
0x01,0x01,0xFF,0xFF,0xFF,0x80,0xC0,0x40,0x60,0x60,
0xE0,0xC0,0x80,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0x00,0x00,
0x04,0x04,0x07,0x07,0x07,0x04,0x04,0x00,0x04,0x04,
0x07,0x07,0x07,0x04,0x04,

// i (105): w=7, h=19
0x46,0x0E,
0x20,0x20,0xE7,0xE7,0xE7,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,
0x04,0x04,0x07,0x07,0x07,0x04,0x04,

// j (106): w=7, h=24
0x46,0x0A,
0x00,0x00,0x00,0x20,0xE7,0xE7,0xE7,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0xF0,0xF0,0x80,0x80,0xFF,0x7F,0x3F,

// k (107): w=15, h=19
0x4E,0x0E,
0x01,0x01,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xA0,
0xE0,0x60,0x20,0x20,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0x08,0x3C,0x7E,0xF3,0xE1,
0xC0,0x80,0x00,0x00,0x00,
0x04,0x04,0x07,0x07,0x07,0x04,0x04,0x00,0x00,0x01,
0x07,0x07,0x07,0x06,0x04,

// l (108): w=7, h=19
0x46,0x0E,
0x01,0x01,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,
0x04,0x04,0x07,0x07,0x07,0x04,0x04,

// m (109): w=23, h=14
0x36,0xAF,
0x01,0x03,0xFF,0xFF,0xFF,0x0C,0x06,0x03,0x03,0x07,
0xFF,0xFF,0xFC,0x0C,0x06,0x03,0x03,0x07,0xFF,0xFE,
0xFC,0x00,0x00,
0x20,0x20,0x3F,0x3F,0x3F,0x20,0x20,0x00,0x20,0x20,
0x3F,0x3F,0x3F,0x20,0x20,0x00,0x20,0x20,0x3F,0x3F,
0x3F,0x20,0x20,

// n (110): w=15, h=14
0x2E,0xAE,
0x01,0x03,0xFF,0xFF,0xFF,0x04,0x06,0x02,0x03,0x03,
0xFF,0xFE,0xFC,0x00,0x00,
0x20,0x20,0x3F,0x3F,0x3F,0x20,0x20,0x00,0x20,0x20,
0x3F,0x3F,0x3F,0x20,0x20,

// o (111): w=13, h=14
0x2C,0xB0,
0xF0,0xFC,0xFE,0x0E,0x03,0x01,0x01,0x01,0x03,0x0E,
0xFE,0xFC,0xF0,
0x03,0x0F,0x1F,0x1C,0x30,0x20,0x20,0x20,0x30,0x1C,
0x1F,0x0F,0x03,

// p (112): w=14, h=19
0x4D,0xB0,
0x01,0x03,0xFF,0xFF,0xFF,0x04,0x06,0x02,0x03,0x03,
0x0F,0xFE,0xFE,0xF8,
0x00,0x00,0xFF,0xFF,0xFF,0x08,0x10,0x30,0x30,0x30,
0x38,0x1F,0x0F,0x03,
0x04,0x04,0x07,0x07,0x07,0x04,0x04,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// q (113): w=14, h=19
0x4D,0xB4,
0xF0,0xFC,0xFE,0x07,0x03,0x03,0x03,0x02,0x04,0xFF,
0xFF,0xFF,0x00,0x00,
0x07,0x1F,0x1F,0x3C,0x30,0x30,0x10,0x18,0x08,0xFF,
0xFF,0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x07,
0x07,0x07,0x04,0x04,

// r (114): w=10, h=14
0x29,0xAE,
0x01,0x01,0xFF,0xFF,0xFF,0x04,0x02,0x03,0x0F,0x0F,
0x20,0x20,0x3F,0x3F,0x3F,0x30,0x20,0x20,0x00,0x00,

// s (115): w=10, h=14
0x29,0xB5,
0x3C,0x7E,0xFF,0xF3,0xE1,0xC1,0xC3,0xCF,0x8E,0x00,
0x1E,0x1E,0x30,0x20,0x20,0x21,0x31,0x3F,0x1F,0x0F,

// t (116): w=9, h=18
0x48,0x2E,
0x10,0x10,0xFE,0xFF,0xFF,0x10,0x10,0x10,0x10,
0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x03,0x03,0x02,0x02,0x02,

// u (117): w=15, h=14
0x2E,0xA9,
0x01,0x01,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x01,0x01,
0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x0F,0x1F,0x3F,0x30,0x30,0x10,0x18,0x08,
0x3F,0x3F,0x3F,0x30,0x20,

// v (118): w=14, h=14
0x2D,0xA8,
0x01,0x07,0x1F,0xFF,0xFD,0xE1,0x80,0x00,0x00,0x80,
0x71,0x1D,0x07,0x01,
0x00,0x00,0x00,0x00,0x03,0x0F,0x3F,0x3E,0x06,0x01,
0x00,0x00,0x00,0x00,

// w (119): w=21, h=14
0x34,0xA8,
0x01,0x07,0x3F,0xFF,0xF9,0xC1,0x00,0x00,0xE0,0x38,
0x1F,0x7F,0xFC,0xF0,0x80,0x00,0x01,0xE1,0x1D,0x07,
0x01,
0x00,0x00,0x00,0x01,0x0F,0x3F,0x1E,0x07,0x00,0x00,
0x00,0x00,0x03,0x0F,0x3F,0x1E,0x07,0x00,0x00,0x00,
0x00,

// x (120): w=15, h=14
0x2E,0xA7,
0x01,0x03,0x07,0x0F,0x3F,0x7D,0xF8,0xE0,0xC0,0xB0,
0x19,0x0F,0x03,0x01,0x01,
0x20,0x30,0x38,0x2C,0x26,0x01,0x00,0x01,0x07,0x2F,
0x3F,0x3C,0x38,0x30,0x20,

// y (121): w=14, h=19
0x4D,0xA8,
0x01,0x07,0x1F,0x7F,0xFD,0xF1,0x80,0x00,0x00,0x80,
0x61,0x1D,0x07,0x01,
0x00,0x00,0x00,0x00,0x03,0x8F,0xFF,0x3E,0x0E,0x03,
0x00,0x00,0x00,0x00,
0x00,0x00,0x04,0x06,0x07,0x07,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// z (122): w=12, h=14
0x2B,0xB5,
0x07,0x07,0x01,0x01,0xC1,0xE1,0xF9,0x7D,0x3F,0x0F,
0x07,0x01,
0x30,0x38,0x3E,0x3F,0x2F,0x23,0x21,0x20,0x20,0x20,
0x38,0x38,

// braceleft (123): w=7, h=23
0x46,0x0F,
0x00,0x00,0x3C,0xFE,0xE3,0x01,0x01,
0x08,0x08,0x14,0xF7,0xE3,0x00,0x00,
0x00,0x00,0x1F,0x3F,0x63,0x40,0x40,

// bar (124): w=2, h=23
0x41,0x16,
0xFF,0xFF,
0xFF,0xFF,
0x7F,0x7F,

// braceright (125): w=7, h=23
0x46,0x0F,
0x01,0x01,0xE3,0xFE,0x7C,0x00,0x00,
0x00,0x00,0xE3,0xF7,0x14,0x08,0x08,
0x40,0x40,0x63,0x3F,0x1E,0x00,0x00,

// asciitilde (126): w=15, h=6
0x8E,0x08,0x46,
0x38,0x06,0x03,0x03,0x03,0x06,0x0E,0x0C,0x18,0x38,
0x30,0x30,0x30,0x18,0x0E

};
// 3360 bytes
// 3550 bytes with FAST_FONT_INDEX
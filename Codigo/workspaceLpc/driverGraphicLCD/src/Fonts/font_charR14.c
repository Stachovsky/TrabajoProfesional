#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_charR14[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xCA,0x00,
0xD1,0x00,
0xEB,0x00,
0xFF,0x00,
0x1D,0x01,
0x39,0x01,
0x3D,0x01,
0x4B,0x01,
0x59,0x01,
0x63,0x01,
0x7B,0x01,
0x80,0x01,
0x87,0x01,
0x8C,0x01,
0xA2,0x01,
0xB6,0x01,
0xC4,0x01,
0xD8,0x01,
0xEC,0x01,
0x02,0x02,
0x18,0x02,
0x2C,0x02,
0x40,0x02,
0x54,0x02,
0x68,0x02,
0x6E,0x02,
0x76,0x02,
0x8E,0x02,
0x9B,0x02,
0xB3,0x02,
0xC3,0x02,
0xE3,0x02,
0xFF,0x02,
0x15,0x03,
0x2B,0x03,
0x43,0x03,
0x57,0x03,
0x69,0x03,
0x81,0x03,
0x9B,0x03,
0xA5,0x03,
0xB7,0x03,
0xCF,0x03,
0xE3,0x03,
0x03,0x04,
0x1D,0x04,
0x37,0x04,
0x4B,0x04,
0x71,0x04,
0x8B,0x04,
0x9F,0x04,
0xB9,0x04,
0xD1,0x04,
0xED,0x04,
0x13,0x05,
0x2D,0x05,
0x47,0x05,
0x5B,0x05,
0x67,0x05,
0x7D,0x05,
0x89,0x05,
0x97,0x05,
0xA4,0x05,
0xA8,0x05,
0xBC,0x05,
0xD0,0x05,
0xE0,0x05,
0xF4,0x05,
0x06,0x06,
0x14,0x06,
0x28,0x06,
0x3C,0x06,
0x46,0x06,
0x57,0x06,
0x6B,0x06,
0x75,0x06,
0x93,0x06,
0xA7,0x06,
0xB9,0x06,
0xCD,0x06,
0xE1,0x06,
0xEF,0x06,
0xFD,0x06,
0x09,0x07,
0x1D,0x07,
0x33,0x07,
0x53,0x07,
0x69,0x07,
0x7F,0x07,
0x8F,0x07,
0x9F,0x07,
0xA5,0x07,
0xB5,0x07,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x0C,0x49,
0x00,

// exclam (33): w=2, h=13
0x21,0x1C,
0xFF,0xFF,
0x19,0x1B,

// quotedbl (34): w=5, h=6
0x04,0x0F,
0x0F,0x3F,0x00,0x0F,0x3F,

// numbersign (35): w=12, h=14
0x2B,0x0F,
0x00,0x10,0x10,0x90,0x70,0x1E,0x11,0x90,0x70,0x1E,
0x11,0x10,
0x01,0x21,0x1D,0x03,0x01,0x21,0x1D,0x03,0x01,0x01,
0x01,0x00,

// dollar (36): w=9, h=15
0x28,0x0F,
0x1C,0x3E,0x62,0x61,0xFF,0xC1,0xC1,0x87,0x00,
0x1E,0x10,0x10,0x10,0xFF,0x10,0x08,0x0F,0x07,

// percent (37): w=14, h=13
0x2D,0x0F,
0x7C,0x83,0x81,0x83,0x7E,0x00,0xC0,0x60,0x18,0xCC,
0x23,0x20,0x20,0xC0,
0x00,0x00,0x00,0x18,0x04,0x03,0x00,0x00,0x00,0x07,
0x18,0x10,0x18,0x0F,

// ampersand (38): w=13, h=13
0x2C,0x0E,
0x00,0x8C,0xDE,0x73,0x61,0xE1,0xB3,0x1E,0x0C,0x40,
0xC0,0x40,0x40,
0x07,0x0F,0x1C,0x18,0x10,0x10,0x11,0x0B,0x0E,0x0C,
0x1B,0x10,0x10,

// quoteright (39): w=2, h=5
0x01,0x0F,
0x13,0x0F,

// parenleft (40): w=6, h=16
0x25,0x14,
0xE0,0xF8,0x0C,0x02,0x01,0x01,
0x07,0x1F,0x30,0x40,0x80,0x80,

// parenright (41): w=6, h=16
0x25,0x0A,
0x01,0x01,0x02,0x0C,0xF8,0xE0,
0x80,0x80,0x40,0x30,0x1F,0x07,

// asterisk (42): w=8, h=7
0x07,0x0F,
0x04,0x0C,0x68,0x1E,0x1F,0x68,0x4C,0x04,

// plus (43): w=11, h=11
0x2A,0x5C,
0x20,0x20,0x20,0x20,0x20,0xFF,0x20,0x20,0x20,0x20,
0x20,
0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,
0x00,

// comma (44): w=2, h=6
0x81,0x0B,0x57,
0x33,0x0F,

// hyphen (45): w=4, h=1
0x83,0x08,0x56,
0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x81,0x0B,0x66,
0x03,0x03,

// slash (47): w=10, h=15
0x29,0x02,
0x00,0x00,0x00,0x00,0x80,0xC0,0x30,0x0C,0x07,0x01,
0x40,0x70,0x18,0x06,0x01,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=9, h=13
0x28,0x0F,
0xF0,0xFC,0x06,0x01,0x01,0x01,0x06,0xFC,0xF8,
0x01,0x07,0x0C,0x10,0x10,0x10,0x0C,0x07,0x03,

// one (49): w=6, h=13
0x25,0x17,
0x02,0x02,0x01,0xFF,0xFF,0x00,
0x00,0x10,0x10,0x1F,0x1F,0x10,

// two (50): w=9, h=13
0x28,0x0F,
0x0C,0x0E,0x01,0x01,0x01,0x81,0xC3,0x7E,0x3C,
0x10,0x18,0x14,0x16,0x13,0x11,0x10,0x10,0x1C,

// three (51): w=9, h=13
0x28,0x0F,
0x04,0x0E,0x01,0x41,0x41,0x63,0xBF,0x9E,0x00,
0x0C,0x1C,0x10,0x10,0x10,0x10,0x08,0x0F,0x07,

// four (52): w=10, h=14
0x29,0x0E,
0x80,0xC0,0x60,0x10,0x0C,0x06,0xFF,0xFF,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x3F,0x3F,0x01,0x01,

// five (53): w=10, h=13
0x29,0x09,
0x00,0x3F,0x3F,0x21,0x21,0x21,0x61,0x61,0xC1,0x80,
0x08,0x0C,0x18,0x10,0x10,0x10,0x18,0x0C,0x0F,0x03,

// six (54): w=9, h=13
0x28,0x0F,
0xE0,0xF8,0x4C,0x26,0x22,0x21,0x61,0xC0,0x80,
0x03,0x07,0x08,0x10,0x10,0x10,0x08,0x0F,0x03,

// seven (55): w=9, h=14
0x28,0x0F,
0x07,0x01,0x01,0x01,0x81,0xE1,0x39,0x0F,0x03,
0x00,0x20,0x38,0x06,0x01,0x00,0x00,0x00,0x00,

// eight (56): w=9, h=13
0x28,0x0F,
0x00,0x9C,0xBE,0x61,0x41,0x41,0xF3,0x9E,0x00,
0x07,0x0F,0x08,0x10,0x10,0x10,0x18,0x0F,0x07,

// nine (57): w=9, h=14
0x28,0x0F,
0x78,0xFE,0x82,0x01,0x01,0x01,0x82,0xFE,0xF8,
0x00,0x20,0x21,0x11,0x19,0x0D,0x07,0x01,0x00,

// colon (58): w=2, h=9
0x21,0x96,
0x83,0x83,
0x01,0x01,

// semicolon (59): w=3, h=13
0x22,0x90,
0x00,0x83,0x83,
0x10,0x19,0x07,

// less (60): w=11, h=10
0x2A,0x77,
0x30,0x30,0x78,0x48,0x48,0x84,0x84,0x86,0x02,0x02,
0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x02,

// equal (61): w=11, h=5
0x0A,0xBC,
0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,
0x11,

// greater (62): w=11, h=10
0x2A,0x7C,
0x01,0x02,0x02,0x86,0x84,0x84,0x48,0x48,0x78,0x30,
0x30,
0x02,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// question (63): w=7, h=13
0x26,0x0F,
0x06,0x07,0x01,0x81,0x43,0x3E,0x1C,
0x00,0x00,0x1B,0x18,0x00,0x00,0x00,

// at (64): w=15, h=16
0x2E,0x15,
0xC0,0x38,0x08,0x04,0x82,0xC2,0x61,0x31,0x11,0x11,
0xE1,0x32,0x02,0x0C,0xF0,
0x0F,0x18,0x30,0x60,0x47,0xCF,0x88,0x88,0x84,0x8E,
0x8F,0x48,0x44,0x02,0x01,

// A (65): w=13, h=13
0x2C,0x08,
0x00,0x00,0x00,0xC0,0xB0,0x8E,0x87,0x9E,0xF0,0xC0,
0x00,0x00,0x00,
0x10,0x18,0x1E,0x11,0x00,0x00,0x00,0x00,0x10,0x17,
0x1E,0x18,0x10,

// B (66): w=10, h=13
0x29,0x0F,
0x01,0xFF,0xFF,0x41,0x41,0x41,0x63,0xFE,0x9E,0x00,
0x10,0x1F,0x1F,0x10,0x10,0x10,0x10,0x08,0x0F,0x07,

// C (67): w=10, h=13
0x29,0x0F,
0xF0,0xFC,0x0E,0x02,0x01,0x01,0x01,0x01,0x03,0x0E,
0x01,0x07,0x0E,0x08,0x18,0x10,0x10,0x10,0x10,0x0E,

// D (68): w=11, h=13
0x2A,0x0F,
0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x02,0x0E,0xFC,
0xF0,
0x10,0x1F,0x1F,0x10,0x10,0x10,0x18,0x08,0x0E,0x07,
0x01,

// E (69): w=9, h=13
0x28,0x0F,
0x01,0xFF,0xFF,0x41,0x41,0x41,0xF1,0x07,0x00,
0x10,0x1F,0x1F,0x10,0x10,0x10,0x11,0x10,0x1C,

// F (70): w=8, h=13
0x27,0x0F,
0x01,0xFF,0xFF,0x41,0x41,0x41,0xF1,0x07,
0x10,0x1F,0x1F,0x10,0x00,0x00,0x01,0x00,

// G (71): w=11, h=13
0x2A,0x0F,
0xF0,0xFC,0x0E,0x02,0x01,0x01,0x01,0x81,0x87,0x8F,
0x80,
0x01,0x07,0x0E,0x08,0x10,0x10,0x10,0x10,0x1F,0x0F,
0x00,

// H (72): w=12, h=13
0x2B,0x0F,
0x01,0xFF,0xFF,0x41,0x40,0x40,0x40,0x40,0x41,0xFF,
0xFF,0x01,
0x10,0x1F,0x1F,0x10,0x00,0x00,0x00,0x00,0x10,0x1F,
0x1F,0x10,

// I (73): w=4, h=13
0x23,0x0F,
0x01,0xFF,0xFF,0x01,
0x10,0x1F,0x1F,0x10,

// J (74): w=8, h=13
0x27,0x09,
0x00,0x00,0x00,0x01,0x01,0xFF,0xFF,0x01,
0x1E,0x10,0x10,0x10,0x18,0x0F,0x07,0x00,

// K (75): w=11, h=13
0x2A,0x0E,
0x01,0xFF,0xFF,0x41,0xE0,0xD0,0x09,0x05,0x03,0x01,
0x01,
0x10,0x1F,0x1F,0x10,0x00,0x01,0x07,0x0E,0x1C,0x10,
0x10,

// L (76): w=9, h=13
0x28,0x0E,
0x01,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,
0x10,0x1F,0x1F,0x10,0x10,0x10,0x10,0x10,0x1E,

// M (77): w=15, h=13
0x2E,0x0F,
0x01,0xFF,0x07,0x1F,0xF8,0xC0,0x00,0x00,0x80,0xE0,
0x1C,0x03,0xFF,0xFF,0x01,
0x10,0x1F,0x10,0x10,0x00,0x03,0x1F,0x1C,0x03,0x00,
0x00,0x10,0x1F,0x1F,0x10,

// N (78): w=12, h=13
0x2B,0x0F,
0x01,0xFF,0x07,0x0E,0x38,0x70,0xE0,0x80,0x01,0x01,
0xFF,0x01,
0x10,0x1F,0x10,0x10,0x00,0x00,0x00,0x03,0x07,0x1C,
0x1F,0x00,

// O (79): w=12, h=13
0x2B,0x0F,
0xF0,0xFC,0x0E,0x02,0x01,0x01,0x01,0x01,0x02,0x0E,
0xFC,0xF0,
0x01,0x07,0x0E,0x08,0x10,0x10,0x10,0x10,0x08,0x0E,
0x07,0x01,

// P (80): w=9, h=13
0x28,0x0F,
0x01,0xFF,0xFF,0x81,0x81,0x81,0x43,0x7E,0x3C,
0x10,0x1F,0x1F,0x10,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=12, h=17
0x4B,0x0F,
0xF0,0xFC,0x0E,0x02,0x01,0x01,0x01,0x01,0x02,0x0E,
0xFC,0xF0,
0x01,0x07,0x0E,0x08,0x10,0x70,0xF0,0x90,0x18,0x0E,
0x07,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x01,0x00,

// R (82): w=12, h=13
0x2B,0x0E,
0x01,0xFF,0xFF,0x41,0x41,0x41,0xC3,0xA3,0xBE,0x1C,
0x00,0x00,
0x10,0x1F,0x1F,0x10,0x00,0x00,0x00,0x01,0x0F,0x1C,
0x10,0x10,

// S (83): w=9, h=13
0x28,0x0F,
0x1C,0x3E,0x73,0x61,0x41,0xC1,0xC1,0x87,0x00,
0x1E,0x18,0x10,0x10,0x10,0x10,0x08,0x0F,0x07,

// T (84): w=12, h=13
0x2B,0x08,
0x07,0x01,0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,
0x01,0x07,
0x00,0x00,0x00,0x10,0x10,0x1F,0x1F,0x10,0x10,0x00,
0x00,0x00,

// U (85): w=11, h=13
0x2A,0x0F,
0x01,0xFF,0xFF,0x01,0x00,0x00,0x00,0x01,0xFF,0xFF,
0x01,
0x00,0x07,0x0F,0x18,0x10,0x10,0x10,0x08,0x0F,0x07,
0x00,

// V (86): w=13, h=13
0x2C,0x07,
0x01,0x03,0x0F,0x7D,0xE1,0x80,0x00,0x00,0xC0,0x71,
0x0F,0x03,0x01,
0x00,0x00,0x00,0x00,0x01,0x0F,0x1C,0x0E,0x01,0x00,
0x00,0x00,0x00,

// W (87): w=18, h=13
0x31,0x08,
0x01,0x03,0x1F,0xFD,0xC1,0x00,0x00,0xF0,0x0F,0x0F,
0xFC,0xC0,0x00,0x81,0xF1,0x1F,0x01,0x01,
0x00,0x00,0x00,0x00,0x07,0x1E,0x07,0x00,0x00,0x00,
0x00,0x07,0x1C,0x07,0x00,0x00,0x00,0x00,

// X (88): w=12, h=13
0x2B,0x08,
0x01,0x01,0x03,0x0F,0x9D,0xF0,0xE0,0x90,0x0D,0x07,
0x01,0x01,
0x10,0x18,0x1C,0x12,0x01,0x00,0x00,0x13,0x1F,0x1C,
0x10,0x10,

// Y (89): w=12, h=13
0x2B,0x07,
0x01,0x03,0x07,0x1D,0x70,0xE0,0xC0,0x60,0x19,0x05,
0x03,0x01,
0x00,0x00,0x00,0x10,0x10,0x1F,0x1F,0x10,0x10,0x00,
0x00,0x00,

// Z (90): w=9, h=13
0x28,0x0F,
0x07,0x03,0x01,0x81,0xE1,0x39,0x1D,0x07,0x03,
0x18,0x1C,0x17,0x13,0x10,0x10,0x10,0x10,0x1E,

// bracketleft (91): w=5, h=16
0x24,0x15,
0xFF,0xFF,0x01,0x01,0x01,
0xFF,0xFF,0x80,0x80,0x80,

// backslash (92): w=10, h=15
0x29,0x08,
0x01,0x03,0x0C,0x30,0x60,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x06,0x18,0x70,0x40,

// bracketright (93): w=5, h=16
0x24,0x10,
0x01,0x01,0x01,0xFF,0xFF,
0x80,0x80,0x80,0xFF,0xFF,

// asciicircum (94): w=11, h=5
0x8A,0x00,0x89,
0x10,0x08,0x0C,0x06,0x03,0x01,0x03,0x06,0x0C,0x08,
0x10,

// underscore (95): w=10, h=1
0x89,0x11,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// quoteleft (96): w=2, h=5
0x01,0x0F,
0x1E,0x19,

// a (97): w=9, h=9
0x28,0x8E,
0xE0,0xE2,0x13,0x11,0x89,0xFF,0xFE,0x00,0x00,
0x00,0x01,0x01,0x01,0x00,0x01,0x01,0x01,0x01,

// b (98): w=9, h=13
0x28,0x0F,
0x01,0xFF,0xFF,0x10,0x10,0x10,0x30,0xE0,0xC0,
0x00,0x1F,0x1F,0x10,0x10,0x10,0x08,0x07,0x03,

// c (99): w=7, h=9
0x26,0x8F,
0x78,0xFC,0x82,0x01,0x01,0x07,0x86,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,

// d (100): w=9, h=13
0x28,0x0F,
0x80,0xC0,0x20,0x10,0x10,0x11,0xFF,0xFF,0x00,
0x07,0x0F,0x18,0x10,0x10,0x08,0x1F,0x1F,0x10,

// e (101): w=8, h=9
0x27,0x8F,
0x3C,0xFE,0x8A,0x09,0x09,0x09,0x0E,0x8C,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,

// f (102): w=6, h=13
0x25,0x0D,
0x10,0xFC,0xFE,0x11,0x11,0x03,
0x10,0x1F,0x1F,0x10,0x00,0x00,

// g (103): w=9, h=14
0x28,0x8E,
0x0C,0x1E,0xF3,0x21,0x21,0x33,0x1E,0x0E,0x02,
0x1E,0x3A,0x21,0x21,0x21,0x21,0x13,0x1E,0x0E,

// h (104): w=9, h=13
0x28,0x0F,
0x01,0xFF,0xFF,0x10,0x10,0x10,0xF0,0xE0,0x00,
0x10,0x1F,0x1F,0x10,0x00,0x10,0x1F,0x1F,0x10,

// i (105): w=4, h=13
0x23,0x0E,
0x10,0xF3,0xF3,0x00,
0x10,0x1F,0x1F,0x10,

// j (106): w=5, h=18
0x44,0x04,
0x00,0x00,0x10,0xF3,0xF3,
0x00,0x00,0x00,0xFF,0x7F,
0x03,0x03,0x02,0x01,0x00,

// k (107): w=9, h=13
0x28,0x0E,
0x01,0xFF,0xFF,0x00,0x80,0x50,0x30,0x10,0x00,
0x10,0x1F,0x1F,0x11,0x03,0x06,0x1C,0x18,0x10,

// l (108): w=4, h=13
0x23,0x0E,
0x01,0xFF,0xFF,0x00,
0x10,0x1F,0x1F,0x10,

// m (109): w=14, h=9
0x2D,0x8F,
0x01,0xFF,0xFF,0x01,0x01,0x01,0xFF,0xFE,0x01,0x01,
0x01,0xFF,0xFE,0x00,
0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,0x01,0x00,
0x01,0x01,0x01,0x01,

// n (110): w=9, h=9
0x28,0x8F,
0x01,0xFF,0xFF,0x01,0x01,0x01,0xFF,0xFF,0x00,
0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,0x01,

// o (111): w=8, h=9
0x27,0x8F,
0x38,0xFE,0x82,0x01,0x01,0x82,0xFE,0x38,
0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,

// p (112): w=9, h=14
0x28,0x8F,
0x01,0xFF,0xFF,0x01,0x01,0x01,0x83,0x7F,0x3C,
0x20,0x3F,0x3F,0x21,0x01,0x01,0x00,0x00,0x00,

// q (113): w=9, h=14
0x28,0x8E,
0x78,0xFC,0x82,0x01,0x01,0x01,0xFF,0xFF,0x00,
0x00,0x00,0x01,0x01,0x01,0x21,0x3F,0x3F,0x20,

// r (114): w=6, h=9
0x25,0x8E,
0x01,0xFF,0xFF,0x02,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,

// s (115): w=6, h=9
0x25,0x8F,
0xCC,0x0E,0x19,0x31,0xF7,0x67,
0x01,0x01,0x01,0x01,0x00,0x00,

// t (116): w=5, h=11
0x24,0x4E,
0x04,0xFE,0xFF,0x04,0x04,
0x00,0x03,0x07,0x04,0x04,

// u (117): w=9, h=9
0x28,0x8F,
0x01,0xFF,0xFF,0x00,0x00,0x01,0xFF,0xFF,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// v (118): w=10, h=9
0x29,0x88,
0x01,0x03,0x1F,0xF1,0xC0,0xC0,0x31,0x0D,0x03,0x01,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,

// w (119): w=15, h=9
0x2E,0x88,
0x01,0x03,0x1F,0xF9,0xC0,0xE0,0x1C,0x07,0x1F,0xF8,
0x80,0xE1,0x1D,0x03,0x01,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x00,

// x (120): w=10, h=9
0x29,0x88,
0x01,0x81,0xC7,0x6F,0x19,0x38,0xE5,0xC3,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,

// y (121): w=10, h=14
0x29,0x88,
0x01,0x03,0x1F,0x79,0xC0,0x80,0x60,0x1D,0x03,0x01,
0x00,0x30,0x20,0x10,0x0F,0x03,0x00,0x00,0x00,0x00,

// z (122): w=7, h=9
0x26,0x8F,
0x87,0xC1,0x71,0x19,0x0D,0x07,0xC1,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// braceleft (123): w=7, h=16
0x26,0x0F,
0x80,0x80,0x40,0x7E,0x03,0x01,0x01,
0x00,0x00,0x01,0x7F,0xC0,0x80,0x80,

// bar (124): w=1, h=18
0xC0,0x00,0x99,
0xFF,
0xFF,
0x07,

// braceright (125): w=7, h=16
0x26,0x0F,
0x01,0x01,0x03,0x7E,0x40,0x80,0x80,
0x80,0x80,0xC0,0x7F,0x01,0x00,0x00,

// c0126 (126): w=11, h=2
0x8A,0x01,0x89,
0x02,0x02,0x01,0x01,0x01,0x03,0x02,0x02,0x02,0x01,
0x01

};
// 1797 bytes
// 1987 bytes with FAST_FONT_INDEX

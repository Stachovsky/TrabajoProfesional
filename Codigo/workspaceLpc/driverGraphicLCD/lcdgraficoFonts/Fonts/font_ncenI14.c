#include "fonts.h"			// for FAST_FONT_INDEX

// ncenI14 = "New Century Schoolbook Italic"

const unsigned char font_ncenI14[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xCE,0x00,
0xD5,0x00,
0xEB,0x00,
0xFF,0x00,
0x1F,0x01,
0x3D,0x01,
0x40,0x01,
0x4E,0x01,
0x5C,0x01,
0x6E,0x01,
0x82,0x01,
0x88,0x01,
0x8F,0x01,
0x94,0x01,
0xA0,0x01,
0xB4,0x01,
0xC6,0x01,
0xDA,0x01,
0xEE,0x01,
0x02,0x02,
0x16,0x02,
0x2A,0x02,
0x3E,0x02,
0x52,0x02,
0x66,0x02,
0x6E,0x02,
0x78,0x02,
0x8E,0x02,
0x9A,0x02,
0xB0,0x02,
0xC0,0x02,
0xDE,0x02,
0xF8,0x02,
0x12,0x03,
0x2C,0x03,
0x48,0x03,
0x62,0x03,
0x7A,0x03,
0x96,0x03,
0xB4,0x03,
0xC2,0x03,
0xD8,0x03,
0xF4,0x03,
0x0C,0x04,
0x30,0x04,
0x4E,0x04,
0x6A,0x04,
0x84,0x04,
0xAD,0x04,
0xC9,0x04,
0xE1,0x04,
0xFB,0x04,
0x17,0x05,
0x31,0x05,
0x55,0x05,
0x73,0x05,
0x8F,0x05,
0xA9,0x05,
0xB9,0x05,
0xC9,0x05,
0xD9,0x05,
0xE2,0x05,
0xEE,0x05,
0xF4,0x05,
0x0A,0x06,
0x1E,0x06,
0x30,0x06,
0x46,0x06,
0x58,0x06,
0x76,0x06,
0x8E,0x06,
0xA4,0x06,
0xAE,0x06,
0xC6,0x06,
0xDA,0x06,
0xE4,0x06,
0x06,0x07,
0x1C,0x07,
0x30,0x07,
0x48,0x07,
0x5C,0x07,
0x6C,0x07,
0x7E,0x07,
0x8E,0x07,
0xA4,0x07,
0xB6,0x07,
0xD2,0x07,
0xEA,0x07,
0x03,0x08,
0x17,0x08,
0x27,0x08,
0x2E,0x08,
0x3E,0x08,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x0D,0x49,
0x00,

// exclam (33): w=4, h=14
0x23,0x15,
0x00,0xE0,0x7F,0x0F,
0x30,0x33,0x00,0x00,

// quotedbl (34): w=5, h=5
0x04,0x14,
0x18,0x07,0x00,0x18,0x07,

// numbersign (35): w=10, h=13
0x29,0x2E,
0x00,0x10,0x10,0xF0,0x1F,0x10,0xF0,0x1F,0x10,0x10,
0x01,0x01,0x1F,0x01,0x01,0x1F,0x01,0x01,0x01,0x00,

// dollar (36): w=9, h=15
0x28,0x0E,
0x00,0x3C,0x72,0x61,0xF9,0xC7,0xC1,0x87,0x06,
0x0E,0x16,0xF0,0x1C,0x13,0x10,0x09,0x07,0x00,

// percent (37): w=15, h=14
0x2E,0x0E,
0x70,0xFC,0x8E,0x83,0x41,0x31,0x0E,0xC2,0x32,0x0D,
0x83,0xC0,0x40,0x40,0x80,
0x00,0x00,0x00,0x00,0x30,0x0C,0x03,0x00,0x1C,0x3F,
0x23,0x20,0x10,0x0C,0x03,

// ampersand (38): w=14, h=14
0x2D,0x0E,
0x00,0x80,0xC0,0x5C,0x7E,0xE1,0xA1,0x11,0x1F,0x0E,
0x40,0xC0,0xC0,0x40,
0x0F,0x1F,0x30,0x20,0x20,0x21,0x27,0x1E,0x38,0x28,
0x26,0x21,0x10,0x00,

// quotesingle (39): w=1, h=5
0x00,0x15,
0x1F,

// parenleft (40): w=6, h=16
0x25,0x13,
0xC0,0xF0,0x38,0x0C,0x02,0x01,
0x0F,0x3F,0x70,0x80,0x00,0x00,

// parenright (41): w=6, h=16
0x25,0x09,
0x00,0x00,0x01,0x0E,0xFC,0xF0,
0x80,0x40,0x30,0x1C,0x0F,0x03,

// asterisk (42): w=8, h=9
0x27,0x0E,
0x30,0x36,0x96,0xF8,0x3F,0xD3,0xD8,0x18,
0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,

// plus (43): w=9, h=9
0x28,0x8E,
0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,

// comma (44): w=3, h=5
0x82,0x0C,0x47,
0x10,0x0B,0x07,

// hyphen (45): w=4, h=2
0x83,0x08,0x56,
0x03,0x03,0x03,0x03,

// period (46): w=2, h=2
0x81,0x0C,0x57,
0x03,0x03,

// slash (47): w=5, h=15
0x24,0x17,
0x00,0x00,0xC0,0x38,0x07,
0x70,0x0E,0x01,0x00,0x00,

// zero (48): w=9, h=14
0x28,0x0E,
0xC0,0xF8,0x3C,0x02,0x01,0x01,0x03,0xFE,0xFC,
0x0F,0x1F,0x30,0x20,0x20,0x10,0x0F,0x07,0x00,

// one (49): w=8, h=14
0x27,0x0F,
0x00,0x00,0x04,0x04,0xE4,0xFE,0x1F,0x00,
0x20,0x20,0x20,0x3E,0x3F,0x21,0x20,0x20,

// two (50): w=9, h=14
0x28,0x0E,
0x00,0x0C,0x0E,0x02,0x01,0x81,0xE1,0x7E,0x1E,
0x30,0x38,0x3C,0x36,0x33,0x31,0x30,0x30,0x0C,

// three (51): w=9, h=14
0x28,0x0E,
0x00,0x00,0x0C,0x4E,0x41,0xC1,0xA1,0x9F,0x0E,
0x18,0x38,0x20,0x20,0x20,0x18,0x0F,0x07,0x00,

// four (52): w=9, h=14
0x28,0x09,
0x00,0x80,0x40,0x20,0x18,0x04,0xE2,0xFF,0x1F,
0x06,0x05,0x04,0x24,0x24,0x3E,0x3F,0x25,0x24,

// five (53): w=9, h=14
0x28,0x0E,
0x00,0x00,0x70,0x2F,0x23,0x23,0xE3,0xC3,0x01,
0x18,0x38,0x20,0x20,0x20,0x18,0x0F,0x07,0x00,

// six (54): w=9, h=14
0x28,0x0E,
0xC0,0xF8,0xBC,0x42,0x21,0x21,0x21,0xC7,0x86,
0x0F,0x1F,0x30,0x20,0x20,0x10,0x1C,0x0F,0x03,

// seven (55): w=9, h=14
0x28,0x0E,
0x0C,0x03,0x03,0x03,0x83,0xE3,0x3B,0x0F,0x03,
0x00,0x00,0x38,0x3E,0x03,0x00,0x00,0x00,0x00,

// eight (56): w=9, h=14
0x28,0x09,
0x00,0x00,0x9C,0x7E,0x63,0x41,0xC1,0xA3,0x1E,
0x0E,0x1F,0x21,0x20,0x20,0x20,0x18,0x1F,0x07,

// nine (57): w=9, h=14
0x28,0x0E,
0x70,0xFC,0x0E,0x02,0x01,0x81,0x43,0xFE,0xFC,
0x18,0x38,0x21,0x21,0x21,0x10,0x0F,0x07,0x00,

// colon (58): w=3, h=9
0x22,0xAF,
0x80,0x83,0x03,
0x01,0x01,0x00,

// semicolon (59): w=4, h=12
0x23,0xA9,
0x00,0x80,0x83,0x03,
0x08,0x05,0x03,0x00,

// less (60): w=10, h=9
0x29,0x89,
0x10,0x10,0x28,0x28,0x44,0x44,0x82,0x82,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// equal (61): w=10, h=4
0x09,0xCE,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=10, h=9
0x29,0x8E,
0x01,0x01,0x82,0x82,0x44,0x44,0x28,0x28,0x10,0x10,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=7, h=14
0x26,0x14,
0x80,0xC6,0x41,0x21,0x31,0x1F,0x0E,
0x31,0x32,0x02,0x01,0x00,0x00,0x00,

// at (64): w=14, h=14
0x2D,0x0E,
0xE0,0x18,0x04,0xC2,0xF2,0x31,0x09,0x09,0x91,0xF9,
0x7A,0x02,0x8C,0x70,
0x03,0x0C,0x10,0x13,0x27,0x24,0x24,0x22,0x27,0x27,
0x14,0x02,0x01,0x00,

// A (65): w=12, h=14
0x2B,0x09,
0x00,0x00,0x00,0x80,0x60,0x18,0x06,0x1F,0xFC,0xE0,
0x00,0x00,
0x20,0x38,0x26,0x01,0x01,0x01,0x01,0x01,0x21,0x3F,
0x3E,0x20,

// B (66): w=12, h=14
0x2B,0x0E,
0x00,0x00,0xE1,0xFF,0x5F,0x41,0x41,0x41,0xC1,0xA1,
0x3E,0x1E,
0x20,0x3E,0x3F,0x21,0x20,0x20,0x20,0x20,0x10,0x1F,
0x07,0x00,

// C (67): w=12, h=14
0x2B,0x0E,
0xE0,0xF8,0x1C,0x06,0x02,0x01,0x01,0x01,0x01,0x01,
0x1E,0x03,
0x07,0x1F,0x18,0x20,0x20,0x20,0x20,0x20,0x10,0x18,
0x06,0x00,

// D (68): w=13, h=14
0x2C,0x0F,
0x00,0x00,0xE1,0xFF,0x1F,0x01,0x01,0x01,0x01,0x01,
0x03,0xFE,0xFC,
0x20,0x3E,0x3F,0x21,0x20,0x20,0x20,0x20,0x10,0x18,
0x0F,0x07,0x00,

// E (69): w=12, h=14
0x2B,0x0E,
0x00,0x00,0xE1,0xFF,0x5F,0x41,0xC1,0xC1,0x31,0x01,
0x03,0x0F,
0x20,0x3E,0x3F,0x21,0x20,0x20,0x20,0x23,0x20,0x30,
0x38,0x04,

// F (70): w=11, h=14
0x2A,0x0E,
0x00,0x00,0xE1,0xFF,0x5F,0x41,0xC1,0xC1,0x31,0x03,
0x0F,
0x20,0x3E,0x3F,0x21,0x00,0x00,0x00,0x03,0x00,0x00,
0x00,

// G (71): w=13, h=14
0x2C,0x0E,
0xE0,0xF8,0x1C,0x06,0x02,0x01,0x01,0x01,0x81,0x81,
0x82,0x9E,0x83,
0x07,0x1F,0x18,0x20,0x20,0x20,0x20,0x20,0x10,0x1C,
0x3F,0x03,0x00,

// H (72): w=14, h=14
0x2D,0x0E,
0x00,0x00,0xE1,0xFF,0x5F,0x41,0x40,0x40,0x40,0x40,
0xE1,0xFF,0x1F,0x01,
0x20,0x3E,0x3F,0x21,0x00,0x00,0x00,0x00,0x20,0x3E,
0x3F,0x21,0x00,0x00,

// I (73): w=6, h=14
0x25,0x15,
0x00,0x00,0xE1,0xFF,0x1F,0x01,
0x20,0x3E,0x3F,0x21,0x00,0x00,

// J (74): w=10, h=14
0x29,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFF,0x0F,0x01,
0x1C,0x2C,0x20,0x20,0x10,0x1F,0x07,0x00,0x00,0x00,

// K (75): w=13, h=14
0x2C,0x0E,
0x00,0x00,0xE1,0xFF,0x9F,0x41,0xE0,0xD0,0x08,0x04,
0x03,0x01,0x01,
0x20,0x3E,0x3F,0x21,0x00,0x00,0x00,0x03,0x2F,0x3C,
0x30,0x20,0x20,

// L (76): w=11, h=14
0x2A,0x0E,
0x00,0x00,0xE1,0xFF,0x1F,0x01,0x00,0x00,0x00,0x00,
0x00,
0x20,0x3E,0x3F,0x21,0x20,0x20,0x20,0x20,0x30,0x38,
0x06,

// M (77): w=17, h=14
0x30,0x0E,
0x00,0x00,0xE1,0x1F,0x1F,0xFF,0xE0,0x00,0x00,0x00,
0xC0,0x30,0x0C,0xE3,0xFF,0x1F,0x01,
0x20,0x3E,0x21,0x00,0x00,0x03,0x3F,0x3C,0x0C,0x03,
0x00,0x20,0x3E,0x3F,0x21,0x00,0x00,

// N (78): w=14, h=14
0x2D,0x0E,
0x00,0x00,0xE1,0x3F,0x03,0x0F,0x3C,0xF0,0xC0,0x00,
0x00,0xE1,0x3F,0x01,
0x20,0x3E,0x23,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,
0x3E,0x03,0x00,0x00,

// O (79): w=13, h=14
0x2C,0x0E,
0xE0,0xF8,0x1C,0x06,0x02,0x01,0x01,0x01,0x01,0x01,
0x06,0xFE,0xF8,
0x07,0x1F,0x18,0x20,0x20,0x20,0x20,0x20,0x10,0x18,
0x0E,0x07,0x01,

// P (80): w=12, h=14
0x2B,0x0E,
0x00,0x00,0xE1,0xFF,0x5F,0x41,0x41,0x41,0x41,0x21,
0x3E,0x1E,
0x20,0x3E,0x3F,0x21,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// Q (81): w=13, h=17
0x4C,0x0E,
0xE0,0xF8,0x1C,0x06,0x02,0x01,0x01,0x01,0x01,0x01,
0x06,0xFE,0xF8,
0x07,0x1F,0x18,0x24,0x22,0x22,0x2E,0xFC,0xF0,0x98,
0x8E,0x47,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x00,0x00,0x00,

// R (82): w=13, h=14
0x2C,0x0E,
0x00,0x00,0xE1,0xFF,0x5F,0x41,0x41,0xC1,0xC1,0x21,
0x3E,0x1E,0x00,
0x20,0x3E,0x3F,0x21,0x00,0x00,0x00,0x00,0x1F,0x3F,
0x20,0x20,0x10,

// S (83): w=11, h=14
0x2A,0x0E,
0x00,0x00,0x78,0x76,0xE2,0xC1,0xC1,0xC1,0x81,0x8E,
0x03,
0x30,0x1C,0x10,0x20,0x20,0x20,0x20,0x11,0x1B,0x07,
0x00,

// T (84): w=12, h=14
0x2B,0x0D,
0x0F,0x03,0x01,0x01,0xE1,0xFF,0x1F,0x01,0x01,0x01,
0x03,0x0F,
0x00,0x00,0x20,0x3E,0x3F,0x21,0x00,0x00,0x00,0x00,
0x00,0x00,

// U (85): w=13, h=14
0x2C,0x14,
0x00,0xF1,0xFF,0x0F,0x01,0x00,0x00,0x00,0x00,0x00,
0xF1,0x0F,0x01,
0x0F,0x1F,0x30,0x20,0x20,0x20,0x20,0x20,0x10,0x0E,
0x01,0x00,0x00,

// V (86): w=12, h=14
0x2B,0x0D,
0x01,0x1F,0xFF,0xE1,0x00,0x00,0x00,0xC0,0x30,0x0D,
0x03,0x01,
0x00,0x00,0x01,0x3F,0x3E,0x0C,0x03,0x00,0x00,0x00,
0x00,0x00,

// W (87): w=17, h=14
0x30,0x0D,
0x01,0x1F,0xFF,0xE1,0x00,0x00,0xC0,0x39,0x1F,0xFF,
0xE1,0x00,0x00,0xC0,0x39,0x07,0x01,
0x00,0x00,0x01,0x3F,0x3C,0x0E,0x01,0x00,0x00,0x01,
0x3F,0x3C,0x0E,0x01,0x00,0x00,0x00,

// X (88): w=14, h=14
0x2D,0x07,
0x00,0x00,0x00,0x01,0x07,0x1F,0xF9,0xE0,0xA0,0x10,
0x09,0x07,0x03,0x01,
0x20,0x30,0x38,0x24,0x02,0x01,0x00,0x01,0x27,0x3E,
0x38,0x20,0x00,0x00,

// Y (89): w=13, h=14
0x2C,0x13,
0x01,0x03,0x0F,0x3D,0xF0,0xC0,0x40,0x20,0x10,0x09,
0x07,0x03,0x01,
0x00,0x00,0x20,0x3E,0x3F,0x21,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// Z (90): w=12, h=14
0x2B,0x0E,
0x00,0x0C,0x07,0x03,0x81,0xC1,0xE1,0x79,0x1D,0x0F,
0x07,0x03,
0x30,0x38,0x3C,0x2E,0x27,0x21,0x20,0x20,0x30,0x38,
0x0C,0x00,

// bracketleft (91): w=7, h=16
0x26,0x0D,
0x00,0x00,0xF0,0xFF,0x0F,0x01,0x01,
0xF0,0xFF,0x8F,0x80,0x00,0x00,0x00,

// backslash (92): w=7, h=14
0x26,0x15,
0x03,0x0C,0x30,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x0C,0x30,

// bracketright (93): w=7, h=16
0x26,0x09,
0x00,0x00,0x00,0x01,0xF1,0xFF,0x0F,
0x80,0x80,0xF0,0xFF,0x0F,0x00,0x00,

// asciicircum (94): w=7, h=8
0x06,0x0E,
0xC0,0x30,0x0C,0x03,0x0C,0x30,0xC0,

// underscore (95): w=9, h=1
0x88,0x10,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=4, h=3
0x03,0x2E,
0x01,0x03,0x02,0x04,

// a (97): w=10, h=9
0x29,0xAE,
0x78,0xFE,0x86,0x01,0x01,0x81,0xF2,0xFF,0x0F,0x80,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x00,

// b (98): w=9, h=14
0x28,0x0F,
0x00,0xF1,0xFF,0x4F,0x20,0x20,0x60,0xC0,0x80,
0x0F,0x1F,0x30,0x20,0x20,0x20,0x18,0x1F,0x07,

// c (99): w=8, h=9
0x27,0xAE,
0x78,0xFE,0x86,0x01,0x01,0x01,0x87,0x46,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// d (100): w=10, h=14
0x29,0x0E,
0x00,0xC0,0xC0,0x20,0x20,0x20,0x40,0xF1,0xFF,0x0F,
0x0F,0x1F,0x30,0x20,0x20,0x10,0x1E,0x3F,0x21,0x10,

// e (101): w=8, h=9
0x27,0xAE,
0x78,0xFE,0xA6,0x21,0x11,0x19,0x8F,0x46,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// f (102): w=9, h=18
0xC8,0x00,0x51,
0x20,0x20,0xE0,0xF8,0x3E,0x22,0x21,0x07,0x06,
0xC0,0xFE,0x3F,0x01,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// g (103): w=11, h=15
0x2A,0x61,
0x00,0x00,0x70,0xF8,0x88,0x84,0x84,0x44,0x7E,0x39,
0x01,
0x30,0x78,0x47,0x45,0x44,0x44,0x64,0x3C,0x18,0x00,
0x00,

// h (104): w=10, h=14
0x29,0x0E,
0x00,0xE1,0xFF,0x9F,0x40,0x20,0x20,0xE0,0xC0,0x00,
0x3C,0x3F,0x03,0x00,0x00,0x00,0x1C,0x3F,0x23,0x10,

// i (105): w=4, h=13
0x23,0x2E,
0x10,0xF0,0xF3,0x03,
0x1E,0x1F,0x11,0x08,

// j (106): w=7, h=17
0xC6,0x01,0x25,
0x00,0x00,0x00,0x10,0xF0,0xF3,0x03,
0x80,0x80,0x00,0xFC,0x7F,0x03,0x00,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// k (107): w=9, h=14
0x28,0x0F,
0x00,0xE1,0xFF,0x9F,0x40,0x20,0x20,0xE0,0xC0,
0x3C,0x3F,0x03,0x00,0x02,0x1E,0x3D,0x21,0x10,

// l (108): w=4, h=14
0x23,0x0E,
0x00,0xE1,0xFF,0x1F,
0x3E,0x3F,0x21,0x10,

// m (109): w=16, h=9
0x2F,0xAE,
0xE1,0xFF,0x1F,0x04,0x02,0x01,0xE1,0xFF,0x1E,0x04,
0x02,0x01,0xE1,0xFF,0x1E,0x80,
0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x00,

// n (110): w=10, h=9
0x29,0xAE,
0xE1,0xFF,0x1F,0x04,0x02,0x01,0xE1,0xFF,0x1E,0x80,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,

// o (111): w=9, h=9
0x28,0xAF,
0x78,0xFE,0x86,0x01,0x01,0x01,0xC3,0xFE,0x3C,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// p (112): w=11, h=13
0x2A,0xA3,
0x00,0x00,0xF1,0xFF,0x8F,0x02,0x01,0x01,0xC3,0xFE,
0x3C,
0x10,0x1F,0x1F,0x10,0x00,0x01,0x01,0x01,0x00,0x00,
0x00,

// q (113): w=9, h=13
0x28,0xAF,
0x78,0xFE,0x86,0x01,0x01,0x81,0xF2,0xFE,0x0F,
0x00,0x00,0x01,0x01,0x11,0x1E,0x1F,0x11,0x00,

// r (114): w=7, h=9
0x26,0xAD,
0xE1,0xFF,0x1F,0x02,0x01,0x03,0x03,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// s (115): w=8, h=9
0x27,0xA8,
0xC0,0xCC,0x1E,0x19,0x31,0xF1,0x67,0x06,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// t (116): w=7, h=12
0x26,0x47,
0x08,0x88,0xF8,0x7F,0x0F,0x08,0x08,
0x00,0x0F,0x0F,0x08,0x04,0x00,0x00,

// u (117): w=10, h=9
0x29,0xAE,
0xF1,0xFF,0x0F,0x00,0x80,0x40,0xF0,0xFF,0x0F,0x80,
0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x00,

// v (118): w=8, h=9
0x27,0xAF,
0xF1,0xFF,0x0F,0x00,0x00,0x81,0x63,0x1F,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// w (119): w=13, h=9
0x2C,0xAF,
0xF1,0xFF,0x0F,0x00,0x80,0x70,0xFF,0x0F,0x00,0x00,
0x81,0x63,0x1F,
0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,
0x00,0x00,0x00,

// x (120): w=11, h=9
0x2A,0xA8,
0x80,0x80,0x82,0x43,0x2F,0x7C,0xE8,0x84,0x82,0x03,
0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,
0x00,

// y (121): w=11, h=13
0xAA,0x05,0x25,
0x00,0x00,0x02,0x03,0x0F,0x3C,0xF0,0xC0,0x31,0x0F,
0x03,
0x0C,0x1C,0x10,0x10,0x08,0x06,0x01,0x00,0x00,0x00,
0x00,

// z (122): w=9, h=9
0x28,0xA8,
0x00,0x82,0xC1,0xE1,0xB3,0x1B,0x0E,0x86,0x03,
0x01,0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// braceleft (123): w=7, h=16
0x26,0x0C,
0x80,0x80,0x70,0x3E,0x0F,0x01,0x01,
0x78,0xFF,0x87,0x80,0x00,0x00,0x00,

// bar (124): w=2, h=14
0xA1,0x00,0x99,
0xFF,0xFF,
0x3F,0x3F,

// braceright (125): w=7, h=16
0x26,0x04,
0x00,0x00,0x00,0x01,0x71,0xFF,0x8E,
0x80,0x80,0xF0,0x7E,0x0F,0x00,0x00,

// asciitilde (126): w=8, h=2
0x07,0xEE,
0x02,0x01,0x01,0x01,0x02,0x02,0x02,0x01

};
// 1930 bytes
// 2120 bytes with FAST_FONT_INDEX
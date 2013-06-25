#include "fonts.h"			// for FAST_FONT_INDEX

// ncenBI08 = "New Century Schoolbook Bold Italic"

const unsigned char font_ncenBI08[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC3,0x00,
0xC8,0x00,
0xCD,0x00,
0xD6,0x00,
0xE2,0x00,
0xEE,0x00,
0xF9,0x00,
0xFC,0x00,
0x06,0x01,
0x10,0x01,
0x17,0x01,
0x1E,0x01,
0x22,0x01,
0x27,0x01,
0x2B,0x01,
0x31,0x01,
0x38,0x01,
0x3E,0x01,
0x45,0x01,
0x4C,0x01,
0x53,0x01,
0x5B,0x01,
0x62,0x01,
0x69,0x01,
0x70,0x01,
0x77,0x01,
0x7C,0x01,
0x81,0x01,
0x89,0x01,
0x90,0x01,
0x98,0x01,
0x9F,0x01,
0xB5,0x01,
0xBF,0x01,
0xC8,0x01,
0xD1,0x01,
0xDB,0x01,
0xE4,0x01,
0xED,0x01,
0xF6,0x01,
0x01,0x02,
0x08,0x02,
0x10,0x02,
0x1B,0x02,
0x23,0x02,
0x30,0x02,
0x3A,0x02,
0x43,0x02,
0x4D,0x02,
0x5D,0x02,
0x67,0x02,
0x6F,0x02,
0x77,0x02,
0x81,0x02,
0x8B,0x02,
0x98,0x02,
0xA2,0x02,
0xAB,0x02,
0xB4,0x02,
0xC0,0x02,
0xC6,0x02,
0xD2,0x02,
0xD9,0x02,
0xE2,0x02,
0xE7,0x02,
0xEF,0x02,
0xF7,0x02,
0xFE,0x02,
0x07,0x03,
0x0E,0x03,
0x1C,0x03,
0x24,0x03,
0x2C,0x03,
0x31,0x03,
0x39,0x03,
0x42,0x03,
0x48,0x03,
0x53,0x03,
0x5B,0x03,
0x62,0x03,
0x6A,0x03,
0x72,0x03,
0x79,0x03,
0x7F,0x03,
0x85,0x03,
0x8D,0x03,
0x94,0x03,
0x9F,0x03,
0xA7,0x03,
0xAF,0x03,
0xB6,0x03,
0xC2,0x03,
0xC5,0x03,
0xD1,0x03,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x00,0xEA,
0x00,

// exclam (33): w=3, h=8
0x02,0x0A,
0xC0,0xDF,0x07,

// quotedbl (34): w=3, h=3
0x02,0x10,
0x07,0x00,0x07,

// numbersign (35): w=7, h=7
0x06,0x29,
0x10,0x74,0x1C,0x77,0x1C,0x17,0x04,

// dollar (36): w=5, h=9
0x24,0x09,
0x80,0xEC,0x9A,0x7F,0x31,
0x00,0x03,0x00,0x00,0x00,

// percent (37): w=10, h=8
0x09,0x09,
0x1C,0x1E,0x09,0xC7,0x32,0x0E,0xE3,0xF0,0x48,0x38,

// ampersand (38): w=9, h=8
0x08,0x09,
0x60,0xF0,0x8E,0x9F,0x79,0xE6,0xA8,0x98,0x48,

// quotesingle (39): w=1, h=3
0x00,0x10,
0x07,

// parenleft (40): w=4, h=10
0x23,0x08,
0xF8,0xFC,0x06,0x01,
0x00,0x01,0x02,0x00,

// parenright (41): w=4, h=10
0x23,0x03,
0x00,0x81,0xFE,0x7C,
0x02,0x01,0x00,0x00,

// asterisk (42): w=5, h=5
0x04,0x09,
0x0A,0x04,0x1F,0x04,0x0A,

// plus (43): w=5, h=5
0x04,0x49,
0x04,0x04,0x1F,0x04,0x04,

// comma (44): w=2, h=4
0x01,0xC9,
0x0B,0x07,

// hyphen (45): w=3, h=1
0x02,0x89,
0x01,0x01,0x01,

// period (46): w=2, h=2
0x01,0xC9,
0x03,0x03,

// slash (47): w=4, h=8
0x03,0x09,
0xC0,0x30,0x0C,0x03,

// zero (48): w=5, h=8
0x04,0x09,
0x78,0x86,0xE1,0x7F,0x1E,

// one (49): w=4, h=8
0x03,0x0A,
0x80,0xF2,0xFF,0x8F,

// two (50): w=5, h=8
0x04,0x09,
0xC0,0xE3,0xD1,0xCF,0x66,

// three (51): w=5, h=8
0x04,0x09,
0xC0,0x82,0xC9,0x7F,0x36,

// four (52): w=5, h=8
0x04,0x09,
0x30,0xAC,0xF2,0xFF,0xAF,

// five (53): w=6, h=8
0x05,0x08,
0xC0,0x8C,0xCB,0x7B,0x33,0x01,

// six (54): w=5, h=8
0x04,0x09,
0x78,0xFE,0x8B,0xC9,0x73,

// seven (55): w=5, h=8
0x04,0x09,
0x07,0xC3,0xF3,0x0F,0x03,

// eight (56): w=5, h=8
0x04,0x09,
0x70,0x8E,0x9D,0x79,0x36,

// nine (57): w=5, h=8
0x04,0x09,
0xCE,0x93,0xD1,0x7F,0x1E,

// colon (58): w=3, h=5
0x02,0x69,
0x18,0x1B,0x03,

// semicolon (59): w=3, h=7
0x02,0x69,
0x58,0x3B,0x03,

// less (60): w=6, h=5
0x05,0x49,
0x04,0x04,0x0A,0x0A,0x11,0x11,

// equal (61): w=5, h=3
0x04,0x69,
0x05,0x05,0x05,0x05,0x05,

// greater (62): w=6, h=5
0x05,0x49,
0x11,0x11,0x0A,0x0A,0x04,0x04,

// question (63): w=5, h=8
0x04,0x09,
0xC2,0xD1,0x09,0x0F,0x06,

// at (64): w=10, h=9
0x29,0x09,
0x78,0x86,0x31,0x39,0x24,0x14,0x3C,0xAC,0x91,0x0E,
0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,

// A (65): w=8, h=8
0x07,0x03,
0xC0,0xB0,0x2C,0x27,0xBF,0xFC,0xE0,0x80,

// B (66): w=7, h=8
0x06,0x09,
0x80,0xF1,0xFF,0x8F,0x89,0xFF,0x76,

// C (67): w=7, h=8
0x06,0x08,
0x78,0xFE,0x87,0x81,0x81,0x41,0x03,

// D (68): w=8, h=8
0x07,0x09,
0x80,0xF1,0xFF,0x8F,0x81,0xE1,0x7F,0x1E,

// E (69): w=7, h=8
0x06,0x09,
0x80,0xF1,0xFF,0x8F,0x89,0xDD,0x03,

// F (70): w=7, h=8
0x06,0x08,
0x80,0xF1,0xFF,0x8F,0x09,0x1D,0x03,

// G (71): w=7, h=8
0x06,0x09,
0x78,0xFE,0x87,0x81,0x51,0xF1,0x33,

// H (72): w=9, h=8
0x08,0x09,
0x80,0xF1,0xFF,0x0F,0x89,0xF8,0xFF,0x87,0x01,

// I (73): w=5, h=8
0x04,0x09,
0x80,0xF1,0xFF,0x8F,0x01,

// J (74): w=6, h=8
0x05,0x09,
0xE0,0x80,0xF1,0x7F,0x0F,0x01,

// K (75): w=9, h=8
0x08,0x09,
0x80,0xF1,0xFF,0x9F,0x11,0x38,0xF5,0xC3,0x81,

// L (76): w=6, h=8
0x05,0x09,
0x80,0xF1,0xFF,0x8F,0x81,0xC0,

// M (77): w=11, h=8
0x0A,0x08,
0xF1,0x9F,0x07,0xFF,0xF8,0x30,0x8C,0xF3,0xFF,0x8F,
0x01,

// N (78): w=8, h=8
0x07,0x08,
0xF1,0x9F,0x07,0x1E,0x78,0xF1,0x1F,0x01,

// O (79): w=7, h=8
0x06,0x09,
0x78,0xFE,0x87,0x81,0xE1,0x7F,0x1E,

// P (80): w=8, h=8
0x07,0x08,
0x80,0xF1,0xFF,0x9F,0x11,0x11,0x0F,0x0E,

// Q (81): w=7, h=10
0x26,0x09,
0x78,0xFE,0xA7,0xC1,0xE1,0x7F,0x1E,
0x00,0x00,0x00,0x01,0x03,0x02,0x01,

// R (82): w=8, h=8
0x07,0x09,
0x80,0xF1,0xFF,0x8F,0x19,0xF9,0xEF,0x86,

// S (83): w=6, h=8
0x05,0x09,
0xC0,0x8E,0x9B,0xD9,0x71,0x03,

// T (84): w=6, h=8
0x05,0x09,
0x87,0xF1,0xFF,0x8F,0x01,0x07,

// U (85): w=8, h=8
0x07,0x08,
0x71,0xFF,0x8F,0x81,0x80,0x71,0x0F,0x01,

// V (86): w=8, h=8
0x07,0x08,
0x01,0x1F,0xFF,0xE1,0x30,0x0D,0x03,0x01,

// W (87): w=11, h=8
0x0A,0x08,
0x01,0x1F,0xFF,0xE1,0x18,0x1F,0xFF,0xE0,0x19,0x07,
0x01,

// X (88): w=8, h=8
0x07,0x08,
0xC1,0xA3,0x17,0xBD,0xE8,0xC5,0x83,0x01,

// Y (89): w=7, h=8
0x06,0x08,
0x81,0xCF,0xFF,0xB1,0x08,0x05,0x03,

// Z (90): w=7, h=8
0x06,0x09,
0xC0,0xE7,0xB1,0x99,0x8D,0xE7,0x03,

// bracketleft (91): w=5, h=9
0x24,0x08,
0xC0,0xF8,0x3F,0x07,0x01,
0x01,0x01,0x01,0x00,0x00,

// backslash (92): w=4, h=8
0x03,0x09,
0x03,0x0C,0x30,0xC0,

// bracketright (93): w=5, h=9
0x24,0x03,
0x00,0xC0,0xF9,0x3F,0x07,
0x01,0x01,0x01,0x00,0x00,

// asciicircum (94): w=5, h=6
0x04,0x09,
0x30,0x0C,0x07,0x0C,0x30,

// underscore (95): w=6, h=1
0x85,0x09,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=3, h=2
0x02,0x09,
0x01,0x03,0x02,

// a (97): w=6, h=5
0x05,0x69,
0x0C,0x1E,0x11,0x0D,0x1F,0x13,

// b (98): w=6, h=8
0x05,0x09,
0x70,0xFD,0x8F,0xCB,0x78,0x30,

// c (99): w=5, h=5
0x04,0x69,
0x0C,0x1E,0x11,0x11,0x0B,

// d (100): w=7, h=8
0x06,0x08,
0x70,0xF0,0x88,0x68,0xFD,0x9F,0x03,

// e (101): w=5, h=5
0x04,0x69,
0x0C,0x1E,0x15,0x15,0x0B,

// f (102): w=6, h=10
0x25,0x07,
0x88,0xF8,0x7E,0x0F,0x09,0x01,
0x03,0x03,0x00,0x00,0x00,0x00,

// g (103): w=6, h=8
0x05,0x48,
0xCC,0xBE,0xAA,0xEA,0x67,0x01,

// h (104): w=6, h=8
0x05,0x09,
0xC0,0xFD,0x3F,0xCB,0xF8,0xB0,

// i (105): w=3, h=8
0x02,0x09,
0xE8,0xFB,0x9B,

// j (106): w=3, h=10
0x22,0x09,
0xC8,0xFB,0x3B,
0x03,0x01,0x00,

// k (107): w=7, h=8
0x06,0x08,
0xE0,0xFD,0x3F,0x73,0xE8,0x98,0x40,

// l (108): w=4, h=8
0x03,0x08,
0xE0,0xFD,0x9F,0x03,

// m (109): w=9, h=5
0x08,0x69,
0x19,0x1F,0x06,0x19,0x1F,0x06,0x19,0x1F,0x16,

// n (110): w=6, h=5
0x05,0x69,
0x19,0x1F,0x06,0x19,0x1F,0x16,

// o (111): w=5, h=5
0x04,0x69,
0x0C,0x1E,0x11,0x0F,0x06,

// p (112): w=6, h=7
0x05,0x69,
0x79,0x7F,0x56,0x11,0x0F,0x06,

// q (113): w=6, h=7
0x05,0x69,
0x0E,0x1E,0x51,0x79,0x7E,0x47,

// r (114): w=5, h=5
0x04,0x68,
0x19,0x1F,0x06,0x01,0x03,

// s (115): w=4, h=5
0x03,0x68,
0x16,0x1F,0x0D,0x01,

// t (116): w=4, h=7
0x03,0x28,
0x74,0x7F,0x4F,0x04,

// u (117): w=6, h=5
0x05,0x69,
0x0D,0x1F,0x13,0x0C,0x1F,0x13,

// v (118): w=5, h=5
0x04,0x69,
0x0D,0x1F,0x13,0x08,0x07,

// w (119): w=9, h=5
0x08,0x69,
0x0D,0x1F,0x13,0x08,0x07,0x1F,0x10,0x09,0x07,

// x (120): w=6, h=5
0x05,0x69,
0x12,0x09,0x0F,0x1E,0x13,0x09,

// y (121): w=6, h=7
0x05,0x69,
0x61,0x47,0x3F,0x10,0x0D,0x03,

// z (122): w=5, h=5
0x04,0x68,
0x1B,0x1D,0x17,0x1B,0x01,

// braceleft (123): w=5, h=9
0x24,0x08,
0x10,0xF8,0xEE,0x07,0x01,
0x00,0x00,0x01,0x01,0x00,

// bar (124): w=1, h=8
0x00,0x17,
0xFF,

// braceright (125): w=5, h=9
0x24,0x03,
0x00,0xC1,0xEF,0x3E,0x10,
0x01,0x01,0x00,0x00,0x00,

// asciitilde (126): w=6, h=2
0x05,0x69,
0x02,0x01,0x01,0x02,0x02,0x01

};
// 795 bytes
// 985 bytes with FAST_FONT_INDEX
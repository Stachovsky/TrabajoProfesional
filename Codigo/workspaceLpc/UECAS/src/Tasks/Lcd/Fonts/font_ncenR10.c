#include "fonts.h"			// for FAST_FONT_INDEX

// ncenR10 = "New Century Schoolbook Roman"

const unsigned char font_ncenR10[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xC8,0x00,
0xCD,0x00,
0xDF,0x00,
0xED,0x00,
0x05,0x01,
0x1D,0x01,
0x20,0x01,
0x2A,0x01,
0x34,0x01,
0x3B,0x01,
0x44,0x01,
0x49,0x01,
0x4F,0x01,
0x53,0x01,
0x5D,0x01,
0x6B,0x01,
0x77,0x01,
0x85,0x01,
0x93,0x01,
0xA3,0x01,
0xB1,0x01,
0xBF,0x01,
0xCD,0x01,
0xDB,0x01,
0xE9,0x01,
0xEC,0x01,
0xF2,0x01,
0xFC,0x01,
0x05,0x02,
0x0F,0x02,
0x1B,0x02,
0x35,0x02,
0x4D,0x02,
0x61,0x02,
0x75,0x02,
0x8B,0x02,
0x9F,0x02,
0xB3,0x02,
0xC9,0x02,
0xE1,0x02,
0xED,0x02,
0xFD,0x02,
0x15,0x03,
0x29,0x03,
0x49,0x03,
0x63,0x03,
0x79,0x03,
0x8D,0x03,
0xA5,0x03,
0xBD,0x03,
0xCD,0x03,
0xE1,0x03,
0xFB,0x03,
0x13,0x04,
0x37,0x04,
0x51,0x04,
0x69,0x04,
0x7B,0x04,
0x83,0x04,
0x91,0x04,
0x99,0x04,
0xA0,0x04,
0xAA,0x04,
0xAF,0x04,
0xB8,0x04,
0xC8,0x04,
0xD0,0x04,
0xE0,0x04,
0xE8,0x04,
0xF4,0x04,
0x04,0x05,
0x16,0x05,
0x1E,0x05,
0x26,0x05,
0x38,0x05,
0x40,0x05,
0x4F,0x05,
0x59,0x05,
0x61,0x05,
0x71,0x05,
0x81,0x05,
0x89,0x05,
0x90,0x05,
0x9C,0x05,
0xA6,0x05,
0xAF,0x05,
0xBC,0x05,
0xC5,0x05,
0xD5,0x05,
0xDD,0x05,
0xE5,0x05,
0xEA,0x05,
0xF2,0x05,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x0A,0x48,
0x00,

// exclam (33): w=1, h=11
0x20,0x0F,
0xFF,
0x06,

// quotedbl (34): w=3, h=4
0x02,0x0F,
0x0F,0x00,0x0F,

// numbersign (35): w=8, h=11
0x27,0x08,
0x80,0x88,0xF8,0x8F,0x88,0xF8,0x8F,0x08,
0x00,0x07,0x00,0x00,0x07,0x00,0x00,0x00,

// dollar (36): w=6, h=13
0x25,0x0F,
0x1E,0x31,0x3F,0xE1,0x65,0xC6,
0x03,0x05,0x04,0x3F,0x04,0x03,

// percent (37): w=11, h=11
0x2A,0x09,
0x1C,0x22,0x21,0x11,0xCE,0x32,0x8D,0x43,0x20,0x20,
0xC0,
0x00,0x00,0x04,0x03,0x00,0x00,0x03,0x04,0x04,0x02,
0x01,

// ampersand (38): w=11, h=11
0x2A,0x0F,
0x80,0x40,0x2E,0x3B,0x71,0xC9,0x86,0xA0,0x60,0x20,
0x20,
0x03,0x06,0x04,0x04,0x04,0x02,0x01,0x03,0x06,0x06,
0x01,

// quotesingle (39): w=1, h=4
0x00,0x0F,
0x0F,

// parenleft (40): w=4, h=13
0x23,0x09,
0xF0,0x0C,0x02,0x01,
0x01,0x06,0x08,0x10,

// parenright (41): w=4, h=13
0x23,0x0F,
0x01,0x02,0x0C,0xF0,
0x10,0x08,0x06,0x01,

// asterisk (42): w=5, h=5
0x04,0x0F,
0x0A,0x04,0x1F,0x04,0x0A,

// plus (43): w=7, h=7
0x06,0x8F,
0x08,0x08,0x08,0x7F,0x08,0x08,0x08,

// comma (44): w=2, h=4
0x81,0x09,0x47,
0x09,0x07,

// hyphen (45): w=4, h=1
0x03,0xE9,
0x01,0x01,0x01,0x01,

// period (46): w=1, h=2
0x80,0x09,0x57,
0x03,

// slash (47): w=4, h=11
0x23,0x08,
0x00,0xC0,0x38,0x07,
0x06,0x01,0x00,0x00,

// zero (48): w=6, h=11
0x25,0x0F,
0xFE,0x03,0x01,0x01,0x03,0xFE,
0x03,0x06,0x04,0x04,0x06,0x03,

// one (49): w=5, h=11
0x24,0x10,
0x02,0x02,0xFF,0x00,0x00,
0x04,0x04,0x07,0x04,0x04,

// two (50): w=6, h=11
0x25,0x0F,
0x06,0x05,0x81,0x41,0x23,0x1E,
0x06,0x05,0x04,0x04,0x04,0x07,

// three (51): w=6, h=11
0x25,0x0F,
0x06,0x05,0x21,0x21,0x73,0xCE,
0x03,0x05,0x04,0x04,0x06,0x03,

// four (52): w=7, h=11
0x26,0x09,
0xC0,0xB0,0x88,0x86,0x83,0xFF,0x80,
0x00,0x00,0x00,0x00,0x04,0x07,0x04,

// five (53): w=6, h=11
0x25,0x0F,
0x3F,0x11,0x09,0x09,0x19,0xF1,
0x03,0x05,0x04,0x04,0x06,0x03,

// six (54): w=6, h=11
0x25,0x0F,
0xFC,0x22,0x11,0x11,0x35,0xE6,
0x03,0x06,0x04,0x04,0x06,0x03,

// seven (55): w=6, h=11
0x25,0x0F,
0x07,0x01,0x81,0x71,0x0D,0x03,
0x00,0x00,0x07,0x00,0x00,0x00,

// eight (56): w=6, h=11
0x25,0x0F,
0xCE,0x3B,0x31,0x21,0x73,0xCE,
0x03,0x06,0x04,0x04,0x06,0x03,

// nine (57): w=6, h=11
0x25,0x0F,
0x3E,0x63,0x41,0x41,0x23,0xFE,
0x03,0x05,0x04,0x04,0x02,0x01,

// colon (58): w=1, h=7
0x00,0x90,
0x63,

// semicolon (59): w=2, h=9
0x21,0x8A,
0x20,0xE3,
0x01,0x00,

// less (60): w=8, h=7
0x07,0x8F,
0x08,0x08,0x14,0x14,0x22,0x22,0x41,0x41,

// equal (61): w=7, h=4
0x06,0xAF,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=8, h=7
0x07,0x8F,
0x41,0x41,0x22,0x22,0x14,0x14,0x08,0x08,

// question (63): w=5, h=11
0x24,0x09,
0x06,0x01,0xE1,0x13,0x0E,
0x00,0x00,0x06,0x00,0x00,

// at (64): w=12, h=11
0x2B,0x09,
0xF8,0x04,0x02,0xF1,0x09,0x05,0x85,0xE9,0x1D,0x01,
0x81,0xFE,
0x01,0x02,0x04,0x04,0x05,0x05,0x04,0x05,0x05,0x05,
0x04,0x02,

// A (65): w=11, h=11
0x2A,0x02,
0x00,0x00,0x80,0xE0,0x9C,0x83,0x9C,0xE0,0x80,0x00,
0x00,
0x04,0x04,0x07,0x04,0x04,0x00,0x04,0x04,0x07,0x04,
0x04,

// B (66): w=9, h=11
0x28,0x09,
0x01,0x01,0xFF,0x21,0x21,0x21,0x33,0x6E,0xC0,
0x04,0x04,0x07,0x04,0x04,0x04,0x04,0x06,0x03,

// C (67): w=9, h=11
0x28,0x0F,
0xF8,0x8E,0x02,0x01,0x01,0x01,0x01,0x02,0x8F,
0x00,0x03,0x02,0x04,0x04,0x04,0x04,0x02,0x01,

// D (68): w=10, h=11
0x29,0x09,
0x01,0x01,0xFF,0x01,0x01,0x01,0x01,0x01,0x06,0xFC,
0x04,0x04,0x07,0x04,0x04,0x04,0x04,0x04,0x03,0x01,

// E (69): w=9, h=11
0x28,0x09,
0x01,0x01,0xFF,0x21,0x21,0xF9,0x01,0x01,0x07,
0x04,0x04,0x07,0x04,0x04,0x04,0x04,0x04,0x07,

// F (70): w=9, h=11
0x28,0x09,
0x01,0x01,0xFF,0x21,0x21,0xF9,0x01,0x01,0x07,
0x04,0x04,0x07,0x04,0x04,0x00,0x00,0x00,0x00,

// G (71): w=10, h=11
0x29,0x09,
0xF8,0x8E,0x02,0x01,0x01,0x41,0x41,0x42,0xCF,0x40,
0x00,0x03,0x02,0x04,0x04,0x04,0x04,0x02,0x07,0x00,

// H (72): w=11, h=11
0x2A,0x09,
0x01,0x01,0xFF,0x21,0x21,0x20,0x21,0x21,0xFF,0x01,
0x01,
0x04,0x04,0x07,0x04,0x04,0x00,0x04,0x04,0x07,0x04,
0x04,

// I (73): w=5, h=11
0x24,0x09,
0x01,0x01,0xFF,0x01,0x01,
0x04,0x04,0x07,0x04,0x04,

// J (74): w=7, h=11
0x26,0x08,
0x80,0x80,0x01,0x01,0xFF,0x01,0x01,
0x03,0x04,0x04,0x04,0x03,0x00,0x00,

// K (75): w=11, h=11
0x2A,0x08,
0x01,0x01,0xFF,0x61,0x31,0xC8,0x85,0x03,0x01,0x01,
0x00,
0x04,0x04,0x07,0x04,0x04,0x00,0x05,0x07,0x06,0x04,
0x04,

// L (76): w=9, h=11
0x28,0x09,
0x01,0x01,0xFF,0x01,0x01,0x00,0x00,0x00,0x00,
0x04,0x04,0x07,0x04,0x04,0x04,0x04,0x04,0x07,

// M (77): w=15, h=11
0x2E,0x09,
0x01,0x01,0xFF,0x03,0x1C,0x70,0xC0,0x00,0xC0,0x30,
0x0C,0x03,0xFF,0x01,0x01,
0x04,0x04,0x07,0x04,0x04,0x00,0x01,0x07,0x01,0x00,
0x04,0x04,0x07,0x04,0x04,

// N (78): w=12, h=11
0x2B,0x09,
0x01,0x01,0xFF,0x06,0x1C,0x30,0x60,0xC1,0x01,0xFF,
0x01,0x01,
0x04,0x04,0x07,0x04,0x04,0x00,0x00,0x01,0x03,0x07,
0x00,0x00,

// O (79): w=10, h=11
0x29,0x09,
0xF8,0x8E,0x02,0x01,0x01,0x01,0x01,0x02,0x8E,0xF8,
0x00,0x03,0x02,0x04,0x04,0x04,0x04,0x02,0x03,0x00,

// P (80): w=9, h=11
0x28,0x09,
0x01,0x01,0xFF,0x21,0x21,0x21,0x21,0x13,0x0E,
0x04,0x04,0x07,0x04,0x04,0x00,0x00,0x00,0x00,

// Q (81): w=11, h=13
0x2A,0x08,
0xF8,0x8E,0x02,0x81,0x81,0x81,0x01,0x02,0x8E,0xF8,
0x00,
0x00,0x03,0x03,0x04,0x04,0x04,0x07,0x0E,0x13,0x10,
0x08,

// R (82): w=11, h=11
0x2A,0x08,
0x01,0x01,0xFF,0x21,0x21,0x21,0x61,0xD3,0x0E,0x00,
0x00,
0x04,0x04,0x07,0x04,0x04,0x00,0x00,0x03,0x06,0x04,
0x03,

// S (83): w=7, h=11
0x26,0x09,
0x9E,0x13,0x31,0x21,0x61,0x42,0xCF,
0x07,0x02,0x04,0x04,0x04,0x06,0x03,

// T (84): w=9, h=11
0x28,0x09,
0x07,0x01,0x01,0x01,0xFF,0x01,0x01,0x01,0x07,
0x00,0x00,0x04,0x04,0x07,0x04,0x04,0x00,0x00,

// U (85): w=12, h=11
0x2B,0x09,
0x01,0x01,0xFF,0x01,0x01,0x00,0x00,0x01,0x01,0xFF,
0x01,0x01,
0x00,0x00,0x03,0x06,0x04,0x04,0x04,0x04,0x02,0x01,
0x00,0x00,

// V (86): w=11, h=11
0x2A,0x02,
0x01,0x01,0x07,0x3D,0xE1,0x00,0xC1,0x39,0x07,0x01,
0x01,
0x00,0x00,0x00,0x00,0x01,0x06,0x01,0x00,0x00,0x00,
0x00,

// W (87): w=17, h=11
0x30,0x02,
0x01,0x01,0x07,0x3D,0xE1,0x00,0xC1,0x79,0x0F,0x3D,
0xE1,0x00,0xC1,0x31,0x0F,0x03,0x01,
0x00,0x00,0x00,0x00,0x01,0x07,0x03,0x00,0x00,0x00,
0x01,0x07,0x01,0x00,0x00,0x00,0x00,

// X (88): w=12, h=11
0x2B,0x09,
0x01,0x01,0x03,0x07,0xCD,0x39,0x60,0xD9,0x05,0x03,
0x01,0x01,
0x04,0x04,0x06,0x05,0x04,0x00,0x04,0x05,0x07,0x06,
0x04,0x04,

// Y (89): w=11, h=11
0x2A,0x02,
0x01,0x03,0x07,0x1D,0x31,0xC0,0x31,0x0D,0x03,0x01,
0x01,
0x00,0x00,0x00,0x04,0x04,0x07,0x04,0x04,0x00,0x00,
0x00,

// Z (90): w=8, h=11
0x27,0x09,
0x07,0x01,0xC1,0x61,0x39,0x0D,0x07,0x03,
0x06,0x07,0x05,0x04,0x04,0x04,0x04,0x07,

// bracketleft (91): w=3, h=13
0x22,0x09,
0xFF,0x01,0x01,
0x1F,0x10,0x10,

// backslash (92): w=6, h=11
0x25,0x0F,
0x03,0x0C,0x30,0xC0,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x04,

// bracketright (93): w=3, h=13
0x22,0x09,
0x01,0x01,0xFF,
0x10,0x10,0x1F,

// asciicircum (94): w=5, h=6
0x04,0x0F,
0x30,0x0C,0x03,0x0C,0x30,

// underscore (95): w=7, h=1
0x86,0x0C,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=3, h=3
0x02,0x0F,
0x01,0x02,0x04,

// a (97): w=7, h=7
0x06,0x89,
0x30,0x52,0x49,0x49,0x2B,0x7E,0x40,

// b (98): w=7, h=11
0x26,0x03,
0x01,0xFF,0x20,0x10,0x10,0x30,0xE0,
0x00,0x07,0x02,0x04,0x04,0x06,0x03,

// c (99): w=6, h=7
0x05,0x89,
0x3E,0x63,0x41,0x41,0x43,0x22,

// d (100): w=7, h=11
0x26,0x09,
0xE0,0x30,0x10,0x10,0x21,0xFF,0x00,
0x03,0x06,0x04,0x04,0x02,0x07,0x04,

// e (101): w=6, h=7
0x05,0x89,
0x3E,0x6B,0x49,0x49,0x4B,0x2E,

// f (102): w=5, h=11
0x24,0x08,
0x10,0xFE,0x11,0x11,0x03,
0x04,0x07,0x04,0x00,0x00,

// g (103): w=7, h=10
0x26,0x89,
0xAE,0xDB,0x51,0x51,0x5A,0xCF,0x81,
0x01,0x02,0x02,0x02,0x02,0x02,0x01,

// h (104): w=8, h=11
0x27,0x09,
0x01,0xFF,0x20,0x10,0x10,0x30,0xE0,0x00,
0x04,0x07,0x04,0x00,0x00,0x04,0x07,0x04,

// i (105): w=3, h=10
0x22,0x29,
0x08,0xFB,0x00,
0x02,0x03,0x02,

// j (106): w=3, h=13
0x22,0x24,
0x00,0x08,0xFB,
0x18,0x10,0x0F,

// k (107): w=8, h=11
0x27,0x09,
0x01,0xFF,0x80,0xD0,0xB0,0x10,0x10,0x00,
0x04,0x07,0x04,0x00,0x05,0x07,0x06,0x04,

// l (108): w=3, h=11
0x22,0x09,
0x01,0xFF,0x00,
0x04,0x07,0x04,

// m (109): w=13, h=7
0x0C,0x89,
0x41,0x7F,0x42,0x01,0x01,0x43,0x7E,0x42,0x01,0x01,
0x43,0x7E,0x40,

// n (110): w=8, h=7
0x07,0x89,
0x41,0x7F,0x42,0x01,0x01,0x43,0x7E,0x40,

// o (111): w=6, h=7
0x05,0x89,
0x3E,0x63,0x41,0x41,0x63,0x3E,

// p (112): w=7, h=10
0x26,0x89,
0x01,0xFF,0x22,0x41,0x41,0x63,0x3E,
0x02,0x03,0x02,0x00,0x00,0x00,0x00,

// q (113): w=7, h=10
0x26,0x88,
0x3E,0x63,0x41,0x41,0x22,0xFF,0x00,
0x00,0x00,0x00,0x00,0x02,0x03,0x02,

// r (114): w=6, h=7
0x05,0x89,
0x41,0x7F,0x42,0x01,0x01,0x03,

// s (115): w=5, h=7
0x04,0x89,
0x66,0x4D,0x49,0x59,0x33,

// t (116): w=5, h=9
0x24,0x48,
0x04,0xFF,0x04,0x04,0x80,
0x00,0x00,0x01,0x01,0x00,

// u (117): w=8, h=7
0x07,0x89,
0x01,0x3F,0x61,0x40,0x40,0x21,0x7F,0x41,

// v (118): w=7, h=7
0x06,0x89,
0x01,0x07,0x19,0x60,0x19,0x07,0x01,

// w (119): w=11, h=7
0x0A,0x89,
0x01,0x07,0x19,0x60,0x19,0x07,0x19,0x60,0x19,0x07,
0x01,

// x (120): w=7, h=7
0x06,0x89,
0x41,0x63,0x56,0x1C,0x35,0x63,0x41,

// y (121): w=7, h=10
0x26,0x89,
0x01,0x07,0x99,0x60,0x19,0x07,0x01,
0x03,0x02,0x01,0x00,0x00,0x00,0x00,

// z (122): w=6, h=7
0x05,0x89,
0x67,0x71,0x59,0x4D,0x47,0x73,

// braceleft (123): w=3, h=13
0x22,0x09,
0x40,0xBE,0x01,
0x00,0x0F,0x10,

// bar (124): w=1, h=11
0xA0,0x00,0x89,
0xFF,
0x07,

// braceright (125): w=3, h=13
0x22,0x0F,
0x01,0xBE,0x40,
0x10,0x0F,0x00,

// asciitilde (126): w=7, h=2
0x06,0xCF,
0x02,0x01,0x01,0x01,0x02,0x02,0x01

};
// 1341 bytes
// 1531 bytes with FAST_FONT_INDEX

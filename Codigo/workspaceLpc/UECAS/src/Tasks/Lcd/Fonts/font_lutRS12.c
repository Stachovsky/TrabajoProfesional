#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_lutRS12[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xC9,0x00,
0xD0,0x00,
0xE4,0x00,
0xF4,0x00,
0x0A,0x01,
0x22,0x01,
0x28,0x01,
0x34,0x01,
0x40,0x01,
0x4A,0x01,
0x5E,0x01,
0x63,0x01,
0x6E,0x01,
0x73,0x01,
0x87,0x01,
0x99,0x01,
0xA9,0x01,
0xB7,0x01,
0xC5,0x01,
0xD7,0x01,
0xE5,0x01,
0xF7,0x01,
0x07,0x02,
0x19,0x02,
0x2B,0x02,
0x32,0x02,
0x39,0x02,
0x4D,0x02,
0x58,0x02,
0x6C,0x02,
0x7C,0x02,
0x90,0x02,
0xA6,0x02,
0xB8,0x02,
0xCC,0x02,
0xE0,0x02,
0xF0,0x02,
0x00,0x03,
0x14,0x03,
0x26,0x03,
0x36,0x03,
0x42,0x03,
0x56,0x03,
0x66,0x03,
0x7A,0x03,
0x8C,0x03,
0xA0,0x03,
0xB2,0x03,
0xC8,0x03,
0xD8,0x03,
0xEA,0x03,
0xFE,0x03,
0x10,0x04,
0x26,0x04,
0x3C,0x04,
0x52,0x04,
0x66,0x04,
0x7A,0x04,
0x87,0x04,
0x9B,0x04,
0xA8,0x04,
0xBC,0x04,
0xC9,0x04,
0xCF,0x04,
0xE1,0x04,
0xF3,0x04,
0x03,0x05,
0x15,0x05,
0x27,0x05,
0x39,0x05,
0x4B,0x05,
0x5B,0x05,
0x66,0x05,
0x72,0x05,
0x82,0x05,
0x8D,0x05,
0xA1,0x05,
0xB1,0x05,
0xC5,0x05,
0xD7,0x05,
0xE9,0x05,
0xF7,0x05,
0x07,0x06,
0x17,0x06,
0x27,0x06,
0x3B,0x06,
0x51,0x06,
0x65,0x06,
0x79,0x06,
0x8B,0x06,
0x99,0x06,
0x9E,0x06,
0xAE,0x06,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x80,0x0B,0x4E,
0x00,

// exclam (33): w=1, h=12
0xA0,0x00,0x99,
0xFF,
0x09,

// quotedbl (34): w=5, h=4
0x04,0x1C,
0x0F,0x00,0x00,0x00,0x0F,

// numbersign (35): w=9, h=12
0x28,0x0E,
0x40,0x48,0xE8,0x5E,0x4B,0xE8,0x5E,0x4B,0x08,
0x00,0x0E,0x01,0x00,0x0E,0x03,0x00,0x00,0x00,

// dollar (36): w=7, h=13
0x26,0x15,
0x1E,0x13,0x31,0xFF,0x41,0xC1,0x83,
0x0C,0x08,0x08,0x3F,0x08,0x0C,0x07,

// percent (37): w=10, h=12
0x29,0x08,
0x1E,0x33,0x21,0xB3,0x5E,0x30,0x98,0x84,0x83,0x01,
0x08,0x0C,0x02,0x01,0x00,0x07,0x08,0x08,0x08,0x07,

// ampersand (38): w=11, h=12
0x2A,0x07,
0xC0,0x40,0x2E,0x31,0x51,0x91,0x09,0x0E,0x00,0x00,
0xC0,
0x03,0x04,0x08,0x08,0x08,0x08,0x09,0x06,0x0E,0x0F,
0x09,

// quotesingle (39): w=3, h=4
0x82,0x00,0x88,
0x03,0x0F,0x03,

// parenleft (40): w=5, h=14
0x24,0x1C,
0xF0,0x0C,0x06,0x03,0x01,
0x03,0x0C,0x10,0x30,0x20,

// parenright (41): w=5, h=14
0x24,0x17,
0x01,0x03,0x06,0x0C,0xF0,
0x20,0x30,0x10,0x0C,0x03,

// asterisk (42): w=8, h=7
0x07,0x0F,
0x04,0x2C,0x78,0x27,0x17,0x78,0x2C,0x04,

// plus (43): w=9, h=9
0x28,0x6E,
0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,

// comma (44): w=2, h=6
0x81,0x09,0x89,
0x27,0x1F,

// hyphen (45): w=9, h=1
0x08,0xEE,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x81,0x0A,0x89,
0x03,0x03,

// slash (47): w=9, h=14
0x28,0x0E,
0x00,0x00,0x00,0x00,0xC0,0x30,0x0C,0x07,0x01,
0x20,0x38,0x0C,0x03,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=8, h=12
0x27,0x0F,
0xFC,0x02,0x01,0x01,0x01,0x03,0x06,0xF8,
0x03,0x04,0x08,0x08,0x08,0x08,0x04,0x03,

// one (49): w=7, h=12
0x26,0x15,
0x02,0x02,0x02,0xFF,0x00,0x00,0x00,
0x08,0x08,0x08,0x0F,0x08,0x08,0x08,

// two (50): w=6, h=12
0x25,0x16,
0x02,0x01,0x81,0xC1,0x63,0x1E,
0x0C,0x0F,0x09,0x08,0x08,0x08,

// three (51): w=6, h=12
0x25,0x16,
0x03,0x21,0x21,0x21,0x53,0xCE,
0x0C,0x08,0x08,0x08,0x04,0x03,

// four (52): w=8, h=12
0x27,0x0F,
0x80,0x40,0x30,0x0C,0x06,0xFF,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x0F,0x01,0x01,

// five (53): w=6, h=12
0x25,0x16,
0x1F,0x11,0x11,0x31,0x21,0xC1,
0x0C,0x08,0x08,0x08,0x04,0x03,

// six (54): w=8, h=12
0x27,0x0F,
0xF8,0x24,0x12,0x11,0x11,0x11,0x23,0xC0,
0x03,0x04,0x08,0x08,0x08,0x08,0x04,0x03,

// seven (55): w=7, h=12
0x26,0x15,
0x01,0x01,0x81,0xE1,0x39,0x0F,0x03,
0x00,0x0C,0x03,0x00,0x00,0x00,0x00,

// eight (56): w=8, h=12
0x27,0x0F,
0x80,0x5E,0x33,0x31,0x21,0x61,0xD3,0x8E,
0x03,0x04,0x08,0x08,0x08,0x08,0x04,0x03,

// nine (57): w=8, h=12
0x27,0x0F,
0x3C,0x42,0x81,0x81,0x81,0x81,0x42,0xFC,
0x00,0x0C,0x08,0x08,0x08,0x04,0x02,0x01,

// colon (58): w=2, h=9
0xA1,0x03,0x89,
0x83,0x83,
0x01,0x01,

// semicolon (59): w=2, h=12
0xA1,0x03,0x89,
0x83,0x83,
0x09,0x07,

// less (60): w=9, h=9
0x28,0x6E,
0x10,0x10,0x38,0x28,0x6C,0x44,0xC6,0x82,0x83,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,

// equal (61): w=9, h=5
0x08,0xAE,
0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,

// greater (62): w=9, h=9
0x28,0x6E,
0x83,0x82,0xC6,0x44,0x6C,0x28,0x38,0x10,0x10,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=7, h=12
0x26,0x15,
0x07,0x01,0x01,0xC1,0x21,0x13,0x0E,
0x00,0x00,0x00,0x09,0x00,0x00,0x00,

// at (64): w=9, h=12
0x28,0x0E,
0xF8,0x04,0x02,0xF1,0x09,0x05,0xC5,0xFE,0x00,
0x01,0x06,0x04,0x09,0x0A,0x0B,0x0D,0x03,0x02,

// A (65): w=10, h=12
0x29,0x08,
0x00,0x00,0xC0,0x38,0x07,0x07,0x38,0xC0,0x00,0x00,
0x08,0x07,0x01,0x01,0x01,0x01,0x01,0x01,0x0E,0x08,

// B (66): w=8, h=12
0x27,0x0F,
0xFF,0x21,0x21,0x21,0x21,0x71,0xD3,0x9E,
0x0F,0x08,0x08,0x08,0x08,0x08,0x0C,0x07,

// C (67): w=9, h=12
0x28,0x0E,
0xF8,0x0C,0x02,0x01,0x01,0x01,0x01,0x01,0x03,
0x01,0x03,0x04,0x0C,0x08,0x08,0x08,0x08,0x0C,

// D (68): w=9, h=12
0x28,0x0E,
0xFF,0x01,0x01,0x01,0x01,0x01,0x03,0x06,0xFC,
0x0F,0x08,0x08,0x08,0x08,0x08,0x04,0x06,0x01,

// E (69): w=7, h=12
0x26,0x15,
0xFF,0x21,0x21,0x21,0x21,0x21,0x01,
0x0F,0x08,0x08,0x08,0x08,0x08,0x08,

// F (70): w=7, h=12
0x26,0x15,
0xFF,0x41,0x41,0x41,0x41,0x41,0x01,
0x0F,0x00,0x00,0x00,0x00,0x00,0x00,

// G (71): w=9, h=12
0x28,0x09,
0xF8,0x04,0x02,0x01,0x01,0x01,0x01,0x01,0x83,
0x01,0x03,0x04,0x0C,0x08,0x08,0x08,0x08,0x0F,

// H (72): w=8, h=12
0x27,0x0F,
0xFF,0x20,0x20,0x20,0x20,0x20,0x20,0xFF,
0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,

// I (73): w=7, h=12
0x26,0x15,
0x01,0x01,0x01,0xFF,0x01,0x01,0x01,
0x08,0x08,0x08,0x0F,0x08,0x08,0x08,

// J (74): w=5, h=12
0x24,0x17,
0x00,0x01,0x01,0x01,0xFF,
0x0C,0x08,0x08,0x08,0x07,

// K (75): w=9, h=12
0x28,0x0E,
0xFF,0x40,0x60,0x98,0x0C,0x06,0x03,0x01,0x00,
0x0F,0x00,0x00,0x00,0x01,0x02,0x04,0x08,0x08,

// L (76): w=7, h=12
0x26,0x15,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0x08,0x08,0x08,0x08,0x08,0x08,

// M (77): w=9, h=12
0x28,0x0E,
0xFF,0x07,0x3C,0xC0,0x00,0xC0,0x3C,0x07,0xFF,
0x0F,0x00,0x00,0x03,0x04,0x03,0x00,0x00,0x0F,

// N (78): w=8, h=12
0x27,0x0F,
0xFF,0x06,0x0C,0x30,0xC0,0x00,0x00,0xFF,
0x0F,0x00,0x00,0x00,0x00,0x01,0x06,0x0F,

// O (79): w=9, h=12
0x28,0x0E,
0xF8,0x06,0x03,0x01,0x01,0x01,0x03,0x06,0xF8,
0x01,0x06,0x0C,0x08,0x08,0x08,0x0C,0x06,0x01,

// P (80): w=8, h=12
0x27,0x14,
0xFF,0x41,0x41,0x41,0x41,0x41,0x23,0x1E,
0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=10, h=15
0x29,0x08,
0xF8,0x06,0x03,0x01,0x01,0x01,0x02,0x06,0xF8,0x00,
0x01,0x06,0x04,0x08,0x08,0x08,0x1C,0x2E,0x63,0x20,

// R (82): w=7, h=12
0x26,0x15,
0xFF,0x41,0x41,0x41,0xE1,0x23,0x1E,
0x0F,0x00,0x00,0x00,0x01,0x03,0x0C,

// S (83): w=8, h=12
0x27,0x0F,
0x0E,0x12,0x21,0x21,0x21,0x41,0xC1,0x83,
0x04,0x08,0x08,0x08,0x08,0x08,0x04,0x03,

// T (84): w=9, h=12
0x28,0x0E,
0x01,0x01,0x01,0x01,0xFF,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,

// U (85): w=8, h=12
0x27,0x0F,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0x07,0x0C,0x08,0x08,0x08,0x08,0x04,0x03,

// V (86): w=10, h=12
0x29,0x08,
0x01,0x07,0x38,0xC0,0x00,0x00,0xC0,0x70,0x0E,0x01,
0x00,0x00,0x00,0x01,0x0E,0x0E,0x01,0x00,0x00,0x00,

// W (87): w=10, h=12
0x29,0x08,
0x3F,0xF0,0x00,0xF8,0x0E,0xF8,0x00,0x80,0xFC,0x07,
0x00,0x0F,0x02,0x01,0x00,0x00,0x03,0x0F,0x01,0x00,

// X (88): w=10, h=12
0x29,0x08,
0x00,0x01,0x06,0x88,0x70,0x70,0x98,0x06,0x03,0x01,
0x08,0x0C,0x02,0x01,0x00,0x00,0x01,0x06,0x0C,0x08,

// Y (89): w=9, h=12
0x28,0x0E,
0x01,0x03,0x0C,0x30,0xC0,0x30,0x0C,0x03,0x01,
0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,

// Z (90): w=9, h=12
0x28,0x0E,
0x01,0x01,0x01,0x81,0x61,0x11,0x0D,0x07,0x01,
0x08,0x0E,0x0B,0x08,0x08,0x08,0x08,0x08,0x08,

// bracketleft (91): w=5, h=14
0xA4,0x00,0x86,
0xFF,0x01,0x01,0x01,0x01,
0x3F,0x20,0x20,0x20,0x20,

// backslash (92): w=9, h=14
0x28,0x0E,
0x01,0x07,0x0C,0x30,0xC0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x0C,0x38,0x20,

// bracketright (93): w=5, h=14
0xA4,0x00,0x59,
0x01,0x01,0x01,0x01,0xFF,
0x20,0x20,0x20,0x20,0x3F,

// asciicircum (94): w=9, h=10
0x28,0x0E,
0x00,0x80,0x60,0x18,0x07,0x18,0x60,0x80,0x00,
0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x02,

// underscore (95): w=10, h=1
0x89,0x0C,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=4, h=2
0x03,0x1D,
0x01,0x01,0x03,0x02,

// a (97): w=8, h=9
0x27,0x6F,
0xE0,0x23,0x11,0x11,0x11,0x91,0xFE,0x00,
0x00,0x01,0x01,0x01,0x01,0x00,0x01,0x01,

// b (98): w=8, h=12
0x27,0x0F,
0xFF,0x10,0x18,0x08,0x08,0x08,0x10,0xE0,
0x0F,0x04,0x08,0x08,0x08,0x08,0x06,0x03,

// c (99): w=7, h=9
0x26,0x75,
0x7C,0xC2,0x01,0x01,0x01,0x01,0x83,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,

// d (100): w=8, h=12
0x27,0x0F,
0xE0,0x30,0x08,0x08,0x08,0x08,0x10,0xFF,
0x03,0x04,0x08,0x08,0x08,0x0C,0x04,0x0F,

// e (101): w=8, h=9
0x27,0x6F,
0x7C,0x92,0x11,0x11,0x11,0x11,0x13,0x9C,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,

// f (102): w=8, h=12
0x27,0x14,
0x10,0x10,0xFE,0x11,0x11,0x11,0x11,0x11,
0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,

// g (103): w=8, h=12
0x27,0x6F,
0x7C,0x82,0x01,0x01,0x01,0x81,0x82,0xFF,
0x00,0x0C,0x09,0x09,0x09,0x09,0x08,0x07,

// h (104): w=7, h=12
0x26,0x15,
0xFF,0x10,0x08,0x08,0x08,0x08,0xF0,
0x0F,0x00,0x00,0x00,0x00,0x00,0x0F,

// i (105): w=4, h=12
0xA3,0x00,0x69,
0x08,0x08,0x08,0xF9,
0x00,0x00,0x00,0x0F,

// j (106): w=5, h=15
0x24,0x17,
0x00,0x08,0x08,0x08,0xF9,
0x60,0x40,0x40,0x40,0x3F,

// k (107): w=7, h=12
0x26,0x15,
0xFF,0x80,0xC0,0x30,0x18,0x08,0x00,
0x0F,0x00,0x01,0x03,0x06,0x08,0x08,

// l (108): w=4, h=12
0xA3,0x00,0x69,
0x01,0x01,0x01,0xFF,
0x00,0x00,0x00,0x0F,

// m (109): w=9, h=9
0x28,0x6E,
0xFF,0x02,0x01,0x01,0xFE,0x02,0x01,0x01,0xFF,
0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,

// n (110): w=7, h=9
0x26,0x75,
0xFF,0x02,0x01,0x01,0x01,0x01,0xFE,
0x01,0x00,0x00,0x00,0x00,0x00,0x01,

// o (111): w=9, h=9
0x28,0x6E,
0x7C,0xC6,0x83,0x01,0x01,0x01,0x83,0xC6,0x7C,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// p (112): w=8, h=12
0x27,0x6F,
0xFF,0x82,0x03,0x01,0x01,0x01,0xC2,0x7C,
0x0F,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// q (113): w=8, h=12
0x27,0x6F,
0x7C,0x86,0x01,0x01,0x01,0x81,0x82,0xFF,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x0F,

// r (114): w=6, h=9
0x25,0x7B,
0xFF,0x02,0x01,0x01,0x01,0x03,
0x01,0x00,0x00,0x00,0x00,0x00,

// s (115): w=7, h=9
0x26,0x75,
0x8E,0x09,0x19,0x11,0x11,0xA1,0xE1,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,

// t (116): w=7, h=11
0x26,0x35,
0x04,0x04,0xFF,0x04,0x04,0x04,0x04,
0x00,0x00,0x03,0x04,0x04,0x04,0x04,

// u (117): w=7, h=9
0x26,0x75,
0xFF,0x00,0x00,0x00,0x00,0x80,0xFF,
0x00,0x01,0x01,0x01,0x01,0x00,0x01,

// v (118): w=9, h=9
0x28,0x6E,
0x01,0x07,0x18,0xE0,0x00,0xE0,0x38,0x06,0x01,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,

// w (119): w=10, h=9
0x29,0x68,
0x07,0xF8,0x80,0x78,0x06,0x0E,0xF0,0x80,0x7C,0x03,
0x00,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x00,0x00,

// x (120): w=9, h=9
0x28,0x6E,
0x01,0x81,0xC6,0x2C,0x10,0x6C,0xC6,0x01,0x00,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// y (121): w=9, h=12
0x28,0x6E,
0x01,0x07,0x18,0x60,0x80,0x60,0x18,0x06,0x01,
0x08,0x08,0x08,0x06,0x03,0x00,0x00,0x00,0x00,

// z (122): w=8, h=9
0x27,0x6F,
0x01,0xC1,0x61,0x31,0x19,0x05,0x03,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// braceleft (123): w=6, h=14
0x25,0x16,
0x80,0x80,0xFE,0x01,0x01,0x01,
0x00,0x00,0x1F,0x20,0x20,0x20,

// bar (124): w=1, h=14
0xA0,0x00,0x99,
0xFF,
0x3F,

// braceright (125): w=7, h=14
0x26,0x10,
0x01,0x01,0x01,0x7E,0x80,0x80,0x80,
0x20,0x20,0x20,0x1F,0x00,0x00,0x00,

// asciitilde (126): w=9, h=3
0x08,0xCE,
0x06,0x01,0x01,0x01,0x02,0x04,0x04,0x04,0x03

};
// 1531 bytes
// 1721 bytes with FAST_FONT_INDEX
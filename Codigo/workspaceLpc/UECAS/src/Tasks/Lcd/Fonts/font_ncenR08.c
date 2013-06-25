#include "fonts.h"			// for FAST_FONT_INDEX

// ncenR08 = "New Century Schoolbook Roman"

const unsigned char font_ncenR08[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC3,0x00,
0xC6,0x00,
0xCB,0x00,
0xD4,0x00,
0xDE,0x00,
0xE8,0x00,
0xF3,0x00,
0xF6,0x00,
0xFE,0x00,
0x06,0x01,
0x0D,0x01,
0x14,0x01,
0x18,0x01,
0x1D,0x01,
0x20,0x01,
0x28,0x01,
0x2E,0x01,
0x33,0x01,
0x39,0x01,
0x3F,0x01,
0x46,0x01,
0x4C,0x01,
0x52,0x01,
0x58,0x01,
0x5E,0x01,
0x64,0x01,
0x67,0x01,
0x6B,0x01,
0x73,0x01,
0x7A,0x01,
0x82,0x01,
0x88,0x01,
0x9A,0x01,
0xA3,0x01,
0xAB,0x01,
0xB3,0x01,
0xBC,0x01,
0xC4,0x01,
0xCC,0x01,
0xD5,0x01,
0xDF,0x01,
0xE4,0x01,
0xEA,0x01,
0xF3,0x01,
0xFB,0x01,
0x06,0x02,
0x10,0x02,
0x19,0x02,
0x21,0x02,
0x31,0x02,
0x3A,0x02,
0x41,0x02,
0x4A,0x02,
0x53,0x02,
0x5C,0x02,
0x69,0x02,
0x71,0x02,
0x7A,0x02,
0x81,0x02,
0x87,0x02,
0x8D,0x02,
0x93,0x02,
0x9A,0x02,
0xA3,0x02,
0xA7,0x02,
0xAE,0x02,
0xB5,0x02,
0xBB,0x02,
0xC2,0x02,
0xC8,0x02,
0xCE,0x02,
0xD5,0x02,
0xDD,0x02,
0xE2,0x02,
0xE8,0x02,
0xF0,0x02,
0xF5,0x02,
0x00,0x03,
0x08,0x03,
0x0E,0x03,
0x14,0x03,
0x1B,0x03,
0x21,0x03,
0x27,0x03,
0x2C,0x03,
0x33,0x03,
0x3B,0x03,
0x45,0x03,
0x4C,0x03,
0x54,0x03,
0x5A,0x03,
0x62,0x03,
0x65,0x03,
0x6D,0x03,
#endif // FAST_FONT_INDEX

// space (32): w=1, h=1
0x00,0xEA,
0x00,

// exclam (33): w=1, h=8
0x00,0x10,
0xDF,

// quotedbl (34): w=3, h=3
0x02,0x10,
0x07,0x00,0x07,

// numbersign (35): w=7, h=8
0x06,0x09,
0x20,0xE4,0x3C,0xE7,0x3C,0x27,0x04,

// dollar (36): w=4, h=9
0x23,0x09,
0x86,0xF9,0x8F,0x71,
0x00,0x03,0x00,0x00,

// percent (37): w=8, h=8
0x07,0x09,
0x06,0x09,0xC9,0x36,0x6C,0x93,0x90,0x60,

// ampersand (38): w=9, h=8
0x08,0x09,
0x60,0x96,0x89,0x95,0x62,0x58,0x88,0x80,0x40,

// quotesingle (39): w=1, h=3
0x00,0x10,
0x07,

// parenleft (40): w=3, h=9
0x22,0x09,
0x38,0xC6,0x01,
0x00,0x00,0x01,

// parenright (41): w=3, h=9
0x22,0x09,
0x01,0xC6,0x38,
0x01,0x00,0x00,

// asterisk (42): w=5, h=5
0x04,0x09,
0x0A,0x04,0x1F,0x04,0x0A,

// plus (43): w=5, h=5
0x04,0x69,
0x04,0x04,0x1F,0x04,0x04,

// comma (44): w=2, h=3
0x01,0xE9,
0x04,0x03,

// hyphen (45): w=3, h=1
0x02,0xA9,
0x01,0x01,0x01,

// period (46): w=1, h=2
0x00,0xD0,
0x03,

// slash (47): w=3, h=9
0x22,0x09,
0xC0,0x38,0x07,
0x01,0x00,0x00,

// zero (48): w=4, h=8
0x03,0x09,
0x7E,0x81,0x81,0x7E,

// one (49): w=3, h=8
0x02,0x0F,
0x82,0xFF,0x80,

// two (50): w=4, h=8
0x03,0x09,
0xC6,0xA1,0x91,0xCE,

// three (51): w=4, h=8
0x03,0x09,
0x62,0x89,0x89,0x76,

// four (52): w=5, h=8
0x04,0x08,
0x30,0x2C,0xA2,0xFF,0xA0,

// five (53): w=4, h=8
0x03,0x09,
0x4F,0x89,0x89,0x71,

// six (54): w=4, h=8
0x03,0x09,
0x7E,0x89,0x89,0x73,

// seven (55): w=4, h=8
0x03,0x09,
0x03,0xE1,0x1D,0x03,

// eight (56): w=4, h=8
0x03,0x09,
0x76,0x89,0x89,0x76,

// nine (57): w=4, h=8
0x03,0x09,
0xCE,0x91,0x91,0x7E,

// colon (58): w=1, h=5
0x00,0x70,
0x1B,

// semicolon (59): w=2, h=6
0x01,0x6A,
0x20,0x1B,

// less (60): w=6, h=5
0x05,0x69,
0x04,0x04,0x0A,0x0A,0x11,0x11,

// equal (61): w=5, h=3
0x04,0x89,
0x05,0x05,0x05,0x05,0x05,

// greater (62): w=6, h=5
0x05,0x69,
0x11,0x11,0x0A,0x0A,0x04,0x04,

// question (63): w=4, h=8
0x03,0x09,
0x02,0xD1,0x09,0x06,

// at (64): w=8, h=9
0x27,0x09,
0x7E,0x81,0x38,0x24,0x14,0x3C,0x21,0x1E,
0x00,0x00,0x03,0x03,0x03,0x03,0x00,0x00,

// A (65): w=7, h=8
0x06,0x09,
0x80,0xF0,0xAC,0x23,0xAC,0xF0,0x80,

// B (66): w=6, h=8
0x05,0x09,
0x81,0xFF,0x89,0x89,0x89,0x76,

// C (67): w=6, h=8
0x05,0x09,
0x3C,0x42,0x81,0x81,0x81,0x43,

// D (68): w=7, h=8
0x06,0x09,
0x81,0xFF,0x81,0x81,0x81,0x42,0x3C,

// E (69): w=6, h=8
0x05,0x09,
0x81,0xFF,0x89,0x9D,0x81,0xE7,

// F (70): w=6, h=8
0x05,0x09,
0x81,0xFF,0x89,0x1D,0x01,0x07,

// G (71): w=7, h=8
0x06,0x09,
0x3C,0x42,0x81,0x81,0x91,0x73,0x10,

// H (72): w=8, h=8
0x07,0x09,
0x81,0xFF,0x89,0x08,0x08,0x89,0xFF,0x81,

// I (73): w=3, h=8
0x02,0x09,
0x81,0xFF,0x81,

// J (74): w=4, h=8
0x03,0x09,
0xE0,0x81,0x7F,0x01,

// K (75): w=7, h=8
0x06,0x09,
0x81,0xFF,0x91,0x18,0xA4,0xC3,0x81,

// L (76): w=6, h=8
0x05,0x09,
0x81,0xFF,0x81,0x80,0x80,0xE0,

// M (77): w=9, h=8
0x08,0x09,
0x81,0xFF,0x86,0x38,0xC0,0x38,0x86,0xFF,0x81,

// N (78): w=8, h=8
0x07,0x09,
0x81,0xFF,0x83,0x0C,0x30,0xC1,0xFF,0x01,

// O (79): w=7, h=8
0x06,0x09,
0x3C,0x42,0x81,0x81,0x81,0x42,0x3C,

// P (80): w=6, h=8
0x05,0x09,
0x81,0xFF,0x91,0x11,0x11,0x0E,

// Q (81): w=7, h=9
0x26,0x09,
0x3C,0x42,0xA1,0xA1,0xC1,0x42,0x3C,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// R (82): w=7, h=8
0x06,0x09,
0x81,0xFF,0x11,0x11,0x19,0xE6,0x80,

// S (83): w=5, h=8
0x04,0x09,
0xCE,0x89,0x89,0x91,0x73,

// T (84): w=7, h=8
0x06,0x09,
0x07,0x01,0x81,0xFF,0x81,0x01,0x07,

// U (85): w=7, h=8
0x06,0x09,
0x01,0x7F,0x81,0x80,0x81,0x7F,0x01,

// V (86): w=7, h=8
0x06,0x09,
0x01,0x0F,0x31,0xC0,0x31,0x0F,0x01,

// W (87): w=11, h=8
0x0A,0x09,
0x01,0x07,0x39,0xC0,0x39,0x07,0x39,0xC0,0x39,0x07,
0x01,

// X (88): w=6, h=8
0x05,0x09,
0x81,0xE7,0x18,0x18,0xE7,0x81,

// Y (89): w=7, h=8
0x06,0x09,
0x01,0x03,0x8C,0xF0,0x8C,0x03,0x01,

// Z (90): w=5, h=8
0x04,0x09,
0xC7,0xA1,0x99,0x85,0xE3,

// bracketleft (91): w=2, h=9
0x21,0x09,
0xFF,0x01,
0x01,0x01,

// backslash (92): w=4, h=8
0x03,0x09,
0x03,0x0C,0x30,0xC0,

// bracketright (93): w=2, h=9
0x21,0x09,
0x01,0xFF,
0x01,0x01,

// asciicircum (94): w=5, h=6
0x04,0x09,
0x30,0x0C,0x03,0x0C,0x30,

// underscore (95): w=6, h=1
0x85,0x09,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=2, h=2
0x01,0x09,
0x01,0x02,

// a (97): w=5, h=5
0x04,0x69,
0x1A,0x15,0x15,0x1E,0x10,

// b (98): w=5, h=8
0x04,0x03,
0x01,0xFF,0x88,0x88,0x70,

// c (99): w=4, h=5
0x03,0x69,
0x0E,0x11,0x11,0x0B,

// d (100): w=5, h=8
0x04,0x09,
0x70,0x88,0x89,0xFF,0x80,

// e (101): w=4, h=5
0x03,0x69,
0x0E,0x15,0x15,0x16,

// f (102): w=4, h=8
0x03,0x08,
0x88,0xFE,0x89,0x03,

// g (103): w=5, h=7
0x04,0x69,
0x26,0x59,0x55,0x53,0x31,

// h (104): w=6, h=8
0x05,0x03,
0x81,0xFF,0x88,0x08,0xF0,0x80,

// i (105): w=3, h=7
0x02,0x29,
0x44,0x7D,0x40,

// j (106): w=2, h=9
0x21,0x2A,
0x04,0xFD,
0x01,0x00,

// k (107): w=6, h=8
0x05,0x09,
0x81,0xFF,0xA0,0x38,0xC8,0x80,

// l (108): w=3, h=8
0x02,0x09,
0x81,0xFF,0x80,

// m (109): w=9, h=5
0x08,0x69,
0x11,0x1E,0x11,0x01,0x1E,0x11,0x01,0x1E,0x10,

// n (110): w=6, h=5
0x05,0x69,
0x11,0x1E,0x11,0x01,0x1E,0x10,

// o (111): w=4, h=5
0x03,0x69,
0x0E,0x11,0x11,0x0E,

// p (112): w=4, h=7
0x03,0x69,
0x7E,0x51,0x11,0x0E,

// q (113): w=5, h=7
0x04,0x69,
0x0E,0x11,0x51,0x7E,0x41,

// r (114): w=4, h=5
0x03,0x69,
0x11,0x1F,0x12,0x01,

// s (115): w=4, h=5
0x03,0x69,
0x12,0x15,0x15,0x09,

// t (116): w=3, h=7
0x02,0x28,
0x3F,0x44,0x40,

// u (117): w=5, h=5
0x04,0x69,
0x0F,0x10,0x10,0x0F,0x10,

// v (118): w=6, h=5
0x05,0x68,
0x03,0x0D,0x10,0x0D,0x03,0x01,

// w (119): w=8, h=5
0x07,0x68,
0x07,0x18,0x06,0x01,0x06,0x18,0x07,0x01,

// x (120): w=5, h=5
0x04,0x69,
0x11,0x1B,0x04,0x1B,0x11,

// y (121): w=6, h=7
0x05,0x68,
0x43,0x4D,0x30,0x0D,0x03,0x01,

// z (122): w=4, h=5
0x03,0x69,
0x19,0x15,0x13,0x11,

// braceleft (123): w=3, h=9
0x22,0x09,
0x10,0xEE,0x01,
0x00,0x00,0x01,

// bar (124): w=1, h=8
0x00,0x17,
0xFF,

// braceright (125): w=3, h=9
0x22,0x09,
0x01,0xEE,0x10,
0x01,0x00,0x00,

// asciitilde (126): w=6, h=2
0x05,0x89,
0x02,0x01,0x01,0x02,0x02,0x01

};
// 695 bytes
// 885 bytes with FAST_FONT_INDEX
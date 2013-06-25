#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_clR7x14[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xC9,0x00,
0xCE,0x00,
0xDC,0x00,
0xE8,0x00,
0xEF,0x00,
0xFD,0x00,
0x02,0x01,
0x0A,0x01,
0x12,0x01,
0x1B,0x01,
0x22,0x01,
0x28,0x01,
0x30,0x01,
0x35,0x01,
0x43,0x01,
0x4F,0x01,
0x55,0x01,
0x61,0x01,
0x6D,0x01,
0x79,0x01,
0x85,0x01,
0x91,0x01,
0x9D,0x01,
0xA9,0x01,
0xB5,0x01,
0xB9,0x01,
0xC1,0x01,
0xC9,0x01,
0xD1,0x01,
0xD9,0x01,
0xE7,0x01,
0xF0,0x01,
0x00,0x02,
0x0E,0x02,
0x1C,0x02,
0x2A,0x02,
0x38,0x02,
0x46,0x02,
0x54,0x02,
0x62,0x02,
0x6E,0x02,
0x7C,0x02,
0x8A,0x02,
0x98,0x02,
0xA6,0x02,
0xB4,0x02,
0xC2,0x02,
0xD0,0x02,
0xDE,0x02,
0xEC,0x02,
0xFA,0x02,
0x0A,0x03,
0x18,0x03,
0x28,0x03,
0x36,0x03,
0x42,0x03,
0x4E,0x03,
0x5A,0x03,
0x62,0x03,
0x70,0x03,
0x78,0x03,
0x7F,0x03,
0x88,0x03,
0x8D,0x03,
0x95,0x03,
0xA3,0x03,
0xAA,0x03,
0xB8,0x03,
0xC0,0x03,
0xCE,0x03,
0xDC,0x03,
0xEA,0x03,
0xF6,0x03,
0x02,0x04,
0x10,0x04,
0x1C,0x04,
0x23,0x04,
0x2B,0x04,
0x33,0x04,
0x41,0x04,
0x4F,0x04,
0x56,0x04,
0x5E,0x04,
0x6C,0x04,
0x74,0x04,
0x7D,0x04,
0x84,0x04,
0x8B,0x04,
0x99,0x04,
0xA0,0x04,
0xA8,0x04,
0xAC,0x04,
0xB4,0x04,
#endif // FAST_FONT_INDEX

// C040 (32): w=1, h=1
0x80,0x0C,0xA5,
0x00,

// ! (33): w=1, h=10
0xA0,0x00,0x87,
0x7F,
0x03,

// " (34): w=3, h=3
0x02,0x36,
0x07,0x00,0x07,

// # (35): w=6, h=11
0x25,0x0E,
0x88,0xFF,0x88,0x88,0xFF,0x88,
0x00,0x07,0x00,0x00,0x07,0x00,

// $ (36): w=5, h=10
0x24,0x2F,
0x8C,0x12,0xFF,0x22,0xC4,
0x00,0x01,0x03,0x01,0x00,

// % (37): w=5, h=7
0x04,0x4F,
0x23,0x13,0x08,0x64,0x62,

// & (38): w=6, h=9
0x25,0x2E,
0xE6,0x19,0x11,0x21,0xC0,0x20,
0x00,0x01,0x01,0x01,0x00,0x01,

// ' (39): w=3, h=3
0x02,0x36,
0x04,0x03,0x01,

// ( (40): w=3, h=11
0x22,0x16,
0xF8,0x06,0x01,
0x00,0x03,0x04,

// ) (41): w=3, h=11
0x22,0x16,
0x01,0x06,0xF8,
0x04,0x03,0x00,

// * (42): w=7, h=7
0x06,0x48,
0x04,0x44,0x28,0x1F,0x28,0x44,0x04,

// + (43): w=5, h=5
0x04,0x6F,
0x04,0x04,0x1F,0x04,0x04,

// , (44): w=3, h=4
0x82,0x08,0x58,
0x08,0x07,0x03,

// - (45): w=6, h=1
0x05,0xAE,
0x01,0x01,0x01,0x01,0x01,0x01,

// . (46): w=2, h=2
0x81,0x08,0x68,
0x03,0x03,

// / (47): w=6, h=11
0x25,0x0E,
0x00,0x80,0x60,0x18,0x06,0x01,
0x0E,0x01,0x00,0x00,0x00,0x00,

// 0 (48): w=5, h=10
0x24,0x0F,
0xFE,0x01,0x01,0x01,0xFE,
0x01,0x02,0x02,0x02,0x01,

// 1 (49): w=2, h=10
0x21,0x17,
0x02,0xFF,
0x00,0x03,

// 2 (50): w=5, h=10
0x24,0x0F,
0x82,0x41,0x21,0x11,0x0E,
0x03,0x02,0x02,0x02,0x02,

// 3 (51): w=5, h=10
0x24,0x0F,
0x02,0x01,0x11,0x11,0xEE,
0x01,0x02,0x02,0x02,0x01,

// 4 (52): w=5, h=10
0x24,0x0F,
0xC0,0xB0,0x8C,0xFF,0x80,
0x00,0x00,0x02,0x03,0x02,

// 5 (53): w=5, h=10
0x24,0x0F,
0x1F,0x11,0x11,0x11,0xE1,
0x01,0x02,0x02,0x02,0x01,

// 6 (54): w=5, h=10
0x24,0x0F,
0xFC,0x12,0x11,0x11,0xE0,
0x01,0x02,0x02,0x02,0x01,

// 7 (55): w=5, h=10
0x24,0x0F,
0x03,0x01,0x81,0x71,0x0F,
0x00,0x00,0x03,0x00,0x00,

// 8 (56): w=5, h=10
0x24,0x0F,
0xEE,0x11,0x11,0x11,0xEE,
0x01,0x02,0x02,0x02,0x01,

// 9 (57): w=5, h=10
0x24,0x0F,
0x1E,0x21,0x21,0x21,0xFE,
0x00,0x02,0x02,0x01,0x00,

// : (58): w=2, h=7
0x01,0x77,
0x63,0x63,

// ; (59): w=3, h=9
0x22,0x71,
0x00,0xE3,0x63,
0x01,0x00,0x00,

// < (60): w=6, h=5
0x05,0x6E,
0x04,0x04,0x0A,0x0A,0x11,0x11,

// = (61): w=6, h=4
0x05,0x8E,
0x09,0x09,0x09,0x09,0x09,0x09,

// > (62): w=6, h=5
0x05,0x6E,
0x11,0x11,0x0A,0x0A,0x04,0x04,

// ? (63): w=6, h=10
0x25,0x0E,
0x02,0x01,0x01,0x61,0x11,0x0E,
0x00,0x00,0x00,0x03,0x00,0x00,

// @ (64): w=7, h=8
0x06,0x48,
0x3C,0x42,0x99,0xA5,0x99,0xA2,0x1C,

// A (65): w=7, h=9
0x26,0x28,
0x00,0xE0,0x3C,0x27,0x3C,0xE0,0x00,
0x01,0x01,0x00,0x00,0x00,0x01,0x01,

// B (66): w=6, h=9
0x25,0x2E,
0xFF,0x11,0x11,0x11,0x11,0xEE,
0x01,0x01,0x01,0x01,0x01,0x00,

// C (67): w=6, h=9
0x25,0x2E,
0x7C,0x82,0x01,0x01,0x01,0x82,
0x00,0x00,0x01,0x01,0x01,0x00,

// D (68): w=6, h=9
0x25,0x2E,
0xFF,0x01,0x01,0x01,0x82,0x7C,
0x01,0x01,0x01,0x01,0x00,0x00,

// E (69): w=6, h=9
0x25,0x2E,
0xFF,0x11,0x11,0x11,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,

// F (70): w=6, h=9
0x25,0x2E,
0xFF,0x11,0x11,0x11,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,

// G (71): w=6, h=9
0x25,0x2E,
0x7C,0x82,0x01,0x21,0x21,0xE2,
0x00,0x00,0x01,0x01,0x01,0x01,

// H (72): w=6, h=9
0x25,0x2E,
0xFF,0x10,0x10,0x10,0x10,0xFF,
0x01,0x00,0x00,0x00,0x00,0x01,

// I (73): w=5, h=9
0x24,0x2F,
0x01,0x01,0xFF,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,

// J (74): w=6, h=9
0x25,0x2E,
0xC0,0x00,0x00,0x01,0x01,0xFF,
0x00,0x01,0x01,0x01,0x01,0x00,

// K (75): w=6, h=9
0x25,0x2E,
0xFF,0x10,0x28,0x44,0x82,0x01,
0x01,0x00,0x00,0x00,0x00,0x01,

// L (76): w=6, h=9
0x25,0x2E,
0xFF,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,

// M (77): w=6, h=9
0x25,0x2E,
0xFF,0x0C,0x30,0x30,0x0C,0xFF,
0x01,0x00,0x00,0x00,0x00,0x01,

// N (78): w=6, h=9
0x25,0x2E,
0xFF,0x03,0x0C,0x30,0xC0,0xFF,
0x01,0x00,0x00,0x00,0x00,0x01,

// O (79): w=6, h=9
0x25,0x2E,
0x7C,0x82,0x01,0x01,0x82,0x7C,
0x00,0x00,0x01,0x01,0x00,0x00,

// P (80): w=6, h=9
0x25,0x2E,
0xFF,0x11,0x11,0x11,0x11,0x0E,
0x01,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=6, h=11
0x25,0x2E,
0x7C,0x82,0x01,0x01,0x82,0x7C,
0x00,0x02,0x01,0x03,0x04,0x02,

// R (82): w=6, h=9
0x25,0x2E,
0xFF,0x11,0x31,0x51,0x91,0x0E,
0x01,0x00,0x00,0x00,0x00,0x01,

// S (83): w=6, h=9
0x25,0x2E,
0x8E,0x11,0x11,0x11,0x11,0xE2,
0x00,0x01,0x01,0x01,0x01,0x00,

// T (84): w=7, h=9
0x26,0x28,
0x01,0x01,0x01,0xFF,0x01,0x01,0x01,
0x00,0x00,0x00,0x01,0x00,0x00,0x00,

// U (85): w=6, h=9
0x25,0x2E,
0xFF,0x00,0x00,0x00,0x00,0xFF,
0x00,0x01,0x01,0x01,0x01,0x00,

// V (86): w=7, h=9
0x26,0x28,
0x01,0x07,0x38,0xC0,0x38,0x07,0x01,
0x00,0x00,0x00,0x01,0x00,0x00,0x00,

// W (87): w=6, h=9
0x25,0x2E,
0xFF,0x60,0x18,0x18,0x60,0xFF,
0x01,0x00,0x00,0x00,0x00,0x01,

// X (88): w=5, h=9
0x24,0x2F,
0x83,0x6C,0x10,0x6C,0x83,
0x01,0x00,0x00,0x00,0x01,

// Y (89): w=5, h=9
0x24,0x2F,
0x03,0x0C,0xF0,0x0C,0x03,
0x00,0x00,0x01,0x00,0x00,

// Z (90): w=5, h=9
0x24,0x2F,
0x81,0x61,0x11,0x0D,0x03,
0x01,0x01,0x01,0x01,0x01,

// [ (91): w=3, h=11
0x22,0x16,
0xFF,0x01,0x01,
0x07,0x04,0x04,

// \ (92): w=6, h=11
0x25,0x0E,
0x01,0x06,0x18,0x60,0x80,0x00,
0x00,0x00,0x00,0x00,0x01,0x0E,

// ] (93): w=3, h=11
0x22,0x16,
0x01,0x01,0xFF,
0x04,0x04,0x07,

// ^ (94): w=5, h=3
0x04,0x0F,
0x04,0x02,0x01,0x02,0x04,

// _ (95): w=6, h=1
0x85,0x0B,0x55,
0x01,0x01,0x01,0x01,0x01,0x01,

// ` (96): w=3, h=3
0x02,0x36,
0x01,0x03,0x04,

// a (97): w=6, h=7
0x05,0x6E,
0x3E,0x41,0x41,0x41,0x21,0x7F,

// b (98): w=6, h=10
0x25,0x0E,
0xFF,0x08,0x08,0x08,0x08,0xF0,
0x03,0x02,0x02,0x02,0x02,0x01,

// c (99): w=5, h=7
0x04,0x6F,
0x3E,0x41,0x41,0x41,0x41,

// d (100): w=6, h=10
0x25,0x0E,
0xF0,0x08,0x08,0x08,0x08,0xFF,
0x01,0x02,0x02,0x02,0x02,0x03,

// e (101): w=6, h=7
0x05,0x6E,
0x3E,0x49,0x49,0x49,0x49,0x0E,

// f (102): w=6, h=10
0x25,0x0E,
0x08,0xFE,0x09,0x09,0x01,0x01,
0x00,0x03,0x00,0x00,0x00,0x00,

// g (103): w=6, h=10
0x25,0x6E,
0x3E,0x41,0x41,0x41,0x41,0xFF,
0x00,0x02,0x02,0x02,0x02,0x01,

// h (104): w=6, h=10
0x25,0x0E,
0xFF,0x08,0x08,0x08,0x08,0xF0,
0x03,0x00,0x00,0x00,0x00,0x03,

// i (105): w=5, h=10
0x24,0x0F,
0x08,0x08,0xFB,0x00,0x00,
0x02,0x02,0x03,0x02,0x02,

// j (106): w=5, h=13
0x24,0x0F,
0x00,0x08,0x08,0x08,0xFB,
0x10,0x10,0x10,0x10,0x0F,

// k (107): w=6, h=10
0x25,0x0E,
0xFF,0x40,0x40,0xA0,0x10,0x08,
0x03,0x00,0x00,0x00,0x01,0x02,

// l (108): w=5, h=10
0x24,0x0F,
0x01,0x01,0xFF,0x00,0x00,
0x02,0x02,0x03,0x02,0x02,

// m (109): w=5, h=7
0x04,0x6F,
0x7F,0x01,0x1E,0x01,0x7E,

// n (110): w=6, h=7
0x05,0x6E,
0x7F,0x02,0x01,0x01,0x01,0x7E,

// o (111): w=6, h=7
0x05,0x6E,
0x3E,0x41,0x41,0x41,0x41,0x3E,

// p (112): w=6, h=10
0x25,0x6E,
0xFF,0x41,0x41,0x41,0x41,0x3E,
0x03,0x00,0x00,0x00,0x00,0x00,

// q (113): w=6, h=10
0x25,0x6E,
0x3E,0x41,0x41,0x41,0x41,0xFF,
0x00,0x00,0x00,0x00,0x00,0x03,

// r (114): w=5, h=7
0x04,0x6F,
0x7F,0x02,0x01,0x01,0x01,

// s (115): w=6, h=7
0x05,0x6E,
0x46,0x49,0x49,0x49,0x49,0x31,

// t (116): w=6, h=10
0x25,0x0E,
0x08,0x08,0xFF,0x08,0x08,0x08,
0x00,0x00,0x01,0x02,0x02,0x02,

// u (117): w=6, h=7
0x05,0x6E,
0x3F,0x40,0x40,0x40,0x20,0x7F,

// v (118): w=7, h=7
0x06,0x68,
0x01,0x07,0x18,0x60,0x18,0x07,0x01,

// w (119): w=5, h=7
0x04,0x6F,
0x3F,0x40,0x3C,0x40,0x3F,

// x (120): w=5, h=7
0x04,0x6F,
0x63,0x14,0x08,0x14,0x63,

// y (121): w=6, h=10
0x25,0x6E,
0x3F,0x40,0x40,0x40,0x40,0xFF,
0x00,0x02,0x02,0x02,0x02,0x01,

// z (122): w=5, h=7
0x04,0x6F,
0x61,0x51,0x49,0x45,0x43,

// { (123): w=3, h=11
0x22,0x16,
0x20,0xDE,0x01,
0x00,0x03,0x04,

// | (124): w=1, h=11
0x20,0x1D,
0xFF,
0x07,

// } (125): w=3, h=11
0x22,0x16,
0x01,0xDE,0x20,
0x04,0x03,0x00,

// ~ (126): w=5, h=3
0x04,0x0F,
0x02,0x01,0x02,0x04,0x02

};
// 1021 bytes
// 1211 bytes with FAST_FONT_INDEX
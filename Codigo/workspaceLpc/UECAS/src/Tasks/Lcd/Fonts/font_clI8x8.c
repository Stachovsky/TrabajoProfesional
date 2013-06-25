#include "fonts.h"			// for FAST_FONT_INDEX
const unsigned char font_clI8x8[] = {
0x20,0x5E,   // characters 32 to 126
#ifdef FAST_FONT_INDEX
0xC0,0x00,
0xC4,0x00,
0xCB,0x00,
0xD3,0x00,
0xDC,0x00,
0xE4,0x00,
0xEE,0x00,
0xF8,0x00,
0xFD,0x00,
0x04,0x01,
0x0B,0x01,
0x14,0x01,
0x1D,0x01,
0x22,0x01,
0x2B,0x01,
0x2F,0x01,
0x39,0x01,
0x43,0x01,
0x49,0x01,
0x53,0x01,
0x5D,0x01,
0x66,0x01,
0x70,0x01,
0x7A,0x01,
0x83,0x01,
0x8D,0x01,
0x97,0x01,
0x9D,0x01,
0xA4,0x01,
0xAD,0x01,
0xB7,0x01,
0xC0,0x01,
0xC9,0x01,
0xD2,0x01,
0xDC,0x01,
0xE6,0x01,
0xF0,0x01,
0xFA,0x01,
0x04,0x02,
0x0E,0x02,
0x18,0x02,
0x22,0x02,
0x2C,0x02,
0x36,0x02,
0x40,0x02,
0x48,0x02,
0x52,0x02,
0x5C,0x02,
0x66,0x02,
0x70,0x02,
0x7A,0x02,
0x84,0x02,
0x8E,0x02,
0x96,0x02,
0xA0,0x02,
0xA9,0x02,
0xB3,0x02,
0xBD,0x02,
0xC5,0x02,
0xCF,0x02,
0xD7,0x02,
0xDF,0x02,
0xE7,0x02,
0xF1,0x02,
0xFA,0x02,
0xFF,0x02,
0x09,0x03,
0x13,0x03,
0x1C,0x03,
0x26,0x03,
0x30,0x03,
0x3A,0x03,
0x44,0x03,
0x4E,0x03,
0x56,0x03,
0x5F,0x03,
0x69,0x03,
0x70,0x03,
0x7A,0x03,
0x84,0x03,
0x8E,0x03,
0x98,0x03,
0xA1,0x03,
0xAB,0x03,
0xB5,0x03,
0xBE,0x03,
0xC8,0x03,
0xD2,0x03,
0xDC,0x03,
0xE6,0x03,
0xEF,0x03,
0xF9,0x03,
0x02,0x04,
0x08,0x04,
0x11,0x04,
#endif // FAST_FONT_INDEX

// C040 (32): w=1, h=1
0x80,0x07,0xB5,
0x00,

// ! (33): w=5, h=7
0x04,0x15,
0x40,0x58,0x1E,0x07,0x01,

// " (34): w=6, h=2
0x05,0x0F,
0x02,0x03,0x01,0x02,0x03,0x01,

// # (35): w=7, h=5
0x06,0x2E,
0x1A,0x1E,0x0F,0x1B,0x1E,0x0F,0x0B,

// $ (36): w=6, h=7
0x05,0x0F,
0x20,0x64,0x6E,0x3B,0x13,0x02,

// % (37): w=8, h=7
0x07,0x08,
0x20,0x30,0x13,0x1B,0x6C,0x64,0x06,0x02,

// & (38): w=8, h=7
0x07,0x08,
0x30,0x78,0x4E,0x4F,0x39,0x71,0x59,0x08,

// ' (39): w=3, h=2
0x02,0x1C,
0x02,0x03,0x01,

// ( (40): w=5, h=7
0x04,0x1A,
0x3C,0x7E,0x42,0x01,0x01,

// ) (41): w=5, h=7
0x04,0x10,
0x40,0x40,0x21,0x3F,0x1E,

// * (42): w=7, h=5
0x06,0x2E,
0x14,0x14,0x0D,0x1F,0x16,0x05,0x05,

// + (43): w=7, h=5
0x06,0x2E,
0x04,0x04,0x1C,0x1F,0x07,0x04,0x04,

// , (44): w=3, h=3
0x02,0xB7,
0x04,0x07,0x03,

// - (45): w=7, h=1
0x06,0x6E,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// . (46): w=2, h=2
0x01,0xBD,
0x03,0x03,

// / (47): w=8, h=7
0x07,0x08,
0x40,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,

// 0 (48): w=8, h=7
0x07,0x08,
0x30,0x7C,0x4E,0x43,0x61,0x39,0x1F,0x06,

// 1 (49): w=4, h=7
0x03,0x16,
0x60,0x7A,0x1F,0x07,

// 2 (50): w=8, h=7
0x07,0x08,
0x40,0x60,0x72,0x53,0x49,0x4D,0x07,0x02,

// 3 (51): w=8, h=7
0x07,0x08,
0x20,0x60,0x42,0x43,0x69,0x3D,0x17,0x02,

// 4 (52): w=7, h=7
0x06,0x09,
0x10,0x18,0x5C,0x74,0x7E,0x5F,0x13,

// 5 (53): w=8, h=7
0x07,0x08,
0x20,0x64,0x46,0x47,0x65,0x3D,0x19,0x01,

// 6 (54): w=8, h=7
0x07,0x08,
0x30,0x78,0x4C,0x4E,0x6A,0x39,0x11,0x01,

// 7 (55): w=7, h=7
0x06,0x0E,
0x42,0x63,0x31,0x19,0x0D,0x07,0x03,

// 8 (56): w=8, h=7
0x07,0x08,
0x20,0x70,0x5E,0x4F,0x79,0x3D,0x07,0x02,

// 9 (57): w=8, h=7
0x07,0x08,
0x40,0x44,0x4E,0x2B,0x39,0x19,0x0F,0x06,

// : (58): w=4, h=6
0x03,0x36,
0x30,0x30,0x03,0x03,

// ; (59): w=5, h=7
0x04,0x30,
0x40,0x70,0x30,0x03,0x03,

// < (60): w=7, h=5
0x06,0x2E,
0x04,0x0C,0x1E,0x1A,0x13,0x01,0x01,

// = (61): w=8, h=3
0x07,0x48,
0x04,0x05,0x05,0x05,0x05,0x05,0x05,0x01,

// > (62): w=7, h=5
0x06,0x2E,
0x10,0x10,0x19,0x0B,0x0F,0x06,0x04,

// ? (63): w=7, h=7
0x06,0x0E,
0x42,0x52,0x19,0x09,0x05,0x07,0x02,

// @ (64): w=7, h=7
0x06,0x0E,
0x38,0x46,0x59,0x55,0x55,0x0D,0x06,

// A (65): w=8, h=7
0x07,0x08,
0x40,0x60,0x70,0x1C,0x16,0x7F,0x7F,0x40,

// B (66): w=8, h=7
0x07,0x08,
0x60,0x7C,0x5F,0x4B,0x69,0x3D,0x17,0x02,

// C (67): w=8, h=7
0x07,0x08,
0x38,0x7C,0x46,0x42,0x21,0x21,0x03,0x02,

// D (68): w=8, h=7
0x07,0x08,
0x60,0x7C,0x5F,0x43,0x61,0x31,0x1F,0x0E,

// E (69): w=8, h=7
0x07,0x08,
0x60,0x7C,0x5F,0x4B,0x49,0x49,0x01,0x01,

// F (70): w=8, h=7
0x07,0x08,
0x60,0x7C,0x1F,0x0B,0x09,0x09,0x01,0x01,

// G (71): w=8, h=7
0x07,0x08,
0x38,0x7C,0x46,0x52,0x71,0x31,0x13,0x02,

// H (72): w=8, h=7
0x07,0x08,
0x60,0x7C,0x1F,0x0B,0x68,0x7C,0x1F,0x03,

// I (73): w=8, h=7
0x07,0x08,
0x40,0x40,0x60,0x7D,0x5F,0x03,0x01,0x01,

// J (74): w=8, h=7
0x07,0x08,
0x20,0x70,0x50,0x40,0x61,0x39,0x1F,0x07,

// K (75): w=8, h=7
0x07,0x08,
0x60,0x7C,0x1F,0x0B,0x3C,0x76,0x43,0x01,

// L (76): w=6, h=7
0x05,0x0F,
0x70,0x7C,0x4F,0x43,0x40,0x40,

// M (77): w=8, h=7
0x07,0x08,
0x60,0x7C,0x1F,0x03,0x67,0x7A,0x1F,0x07,

// N (78): w=8, h=7
0x07,0x08,
0x60,0x7C,0x1F,0x07,0x6E,0x7C,0x1F,0x03,

// O (79): w=8, h=7
0x07,0x08,
0x38,0x7C,0x46,0x42,0x21,0x31,0x1F,0x0E,

// P (80): w=8, h=7
0x07,0x08,
0x60,0x7C,0x1F,0x0B,0x09,0x0D,0x07,0x02,

// Q (81): w=8, h=8
0x07,0x08,
0x38,0x7C,0x46,0xC2,0xA1,0x31,0x1F,0x0E,

// R (82): w=8, h=7
0x07,0x08,
0x60,0x7C,0x1F,0x1B,0x79,0x6D,0x07,0x02,

// S (83): w=8, h=7
0x07,0x08,
0x20,0x60,0x46,0x4F,0x79,0x31,0x03,0x02,

// T (84): w=6, h=7
0x05,0x0F,
0x61,0x79,0x1F,0x07,0x01,0x01,

// U (85): w=8, h=7
0x07,0x08,
0x30,0x7C,0x4F,0x43,0x30,0x3C,0x0F,0x03,

// V (86): w=7, h=7
0x06,0x0E,
0x7C,0x7F,0x33,0x18,0x0C,0x07,0x03,

// W (87): w=8, h=7
0x07,0x08,
0x70,0x7C,0x2F,0x73,0x60,0x38,0x1F,0x07,

// X (88): w=8, h=7
0x07,0x08,
0x60,0x60,0x13,0x1F,0x7C,0x64,0x03,0x03,

// Y (89): w=6, h=7
0x05,0x14,
0x67,0x7F,0x1C,0x04,0x03,0x03,

// Z (90): w=8, h=7
0x07,0x08,
0x60,0x70,0x50,0x49,0x49,0x05,0x07,0x03,

// [ (91): w=6, h=7
0x05,0x14,
0x60,0x7C,0x5F,0x43,0x01,0x01,

// \ (92): w=6, h=7
0x05,0x0F,
0x01,0x07,0x0E,0x38,0x70,0x40,

// ] (93): w=6, h=7
0x05,0x0F,
0x40,0x40,0x61,0x7D,0x1F,0x03,

// ^ (94): w=8, h=3
0x07,0x08,
0x04,0x04,0x02,0x02,0x01,0x03,0x06,0x04,

// _ (95): w=7, h=1
0x06,0xCE,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// ` (96): w=3, h=2
0x02,0x1C,
0x01,0x03,0x02,

// a (97): w=8, h=5
0x07,0x48,
0x0C,0x1E,0x12,0x11,0x09,0x19,0x1F,0x07,

// b (98): w=8, h=7
0x07,0x08,
0x60,0x78,0x5E,0x47,0x45,0x64,0x3C,0x18,

// c (99): w=7, h=5
0x06,0x49,
0x0C,0x1E,0x12,0x11,0x11,0x11,0x01,

// d (100): w=8, h=7
0x07,0x08,
0x30,0x78,0x4C,0x44,0x64,0x7C,0x1F,0x07,

// e (101): w=8, h=5
0x07,0x48,
0x0C,0x1E,0x16,0x15,0x15,0x05,0x07,0x06,

// f (102): w=8, h=7
0x07,0x08,
0x40,0x74,0x3C,0x0E,0x06,0x05,0x05,0x01,

// g (103): w=8, h=6
0x07,0x48,
0x24,0x2E,0x2A,0x29,0x39,0x1D,0x0F,0x03,

// h (104): w=8, h=7
0x07,0x08,
0x60,0x78,0x1E,0x07,0x05,0x64,0x7C,0x18,

// i (105): w=6, h=7
0x05,0x0F,
0x40,0x44,0x74,0x7C,0x4D,0x41,

// j (106): w=7, h=8
0x06,0x09,
0x80,0x80,0x84,0xE4,0x7C,0x1D,0x01,

// k (107): w=8, h=7
0x07,0x08,
0x60,0x78,0x1E,0x17,0x39,0x68,0x44,0x04,

// l (108): w=5, h=7
0x04,0x10,
0x40,0x70,0x7D,0x4F,0x03,

// m (109): w=8, h=5
0x07,0x48,
0x18,0x1E,0x07,0x03,0x06,0x1B,0x1F,0x06,

// n (110): w=8, h=5
0x07,0x48,
0x18,0x1F,0x07,0x02,0x01,0x19,0x1F,0x06,

// o (111): w=8, h=5
0x07,0x48,
0x0C,0x1E,0x12,0x11,0x11,0x09,0x0F,0x06,

// p (112): w=8, h=6
0x07,0x48,
0x30,0x3C,0x1E,0x13,0x11,0x09,0x0F,0x06,

// q (113): w=7, h=6
0x06,0x4E,
0x0C,0x1E,0x13,0x31,0x39,0x1F,0x07,

// r (114): w=8, h=5
0x07,0x48,
0x18,0x1E,0x07,0x03,0x02,0x01,0x01,0x01,

// s (115): w=8, h=5
0x07,0x48,
0x10,0x10,0x12,0x17,0x1D,0x09,0x01,0x01,

// t (116): w=7, h=7
0x06,0x09,
0x04,0x34,0x7C,0x4E,0x47,0x05,0x04,

// u (117): w=8, h=5
0x07,0x48,
0x0C,0x1F,0x13,0x10,0x08,0x1C,0x1F,0x03,

// v (118): w=8, h=5
0x07,0x48,
0x01,0x07,0x1F,0x18,0x0C,0x07,0x03,0x01,

// w (119): w=8, h=5
0x07,0x48,
0x1C,0x1F,0x1B,0x0C,0x18,0x1C,0x0F,0x03,

// x (120): w=8, h=5
0x07,0x48,
0x10,0x18,0x0D,0x0F,0x1E,0x12,0x01,0x01,

// y (121): w=7, h=6
0x06,0x4E,
0x26,0x2F,0x29,0x38,0x1E,0x07,0x01,

// z (122): w=8, h=5
0x07,0x48,
0x10,0x18,0x19,0x15,0x15,0x13,0x03,0x01,

// { (123): w=7, h=7
0x06,0x0E,
0x08,0x38,0x7E,0x46,0x41,0x01,0x01,

// | (124): w=4, h=7
0x03,0x16,
0x60,0x7C,0x1F,0x03,

// } (125): w=7, h=7
0x06,0x0E,
0x40,0x40,0x41,0x31,0x3F,0x0E,0x08,

// ~ (126): w=8, h=3
0x07,0x08,
0x02,0x02,0x01,0x03,0x06,0x04,0x02,0x02

};
// 861 bytes
// 1051 bytes with FAST_FONT_INDEX
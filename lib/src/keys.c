// src/keys.c
#include <stdint.h>
#include <stdlib.h>
 
const uint8_t g_appkey[] = {
	0x01, 0x3A, 0x75, 0xBF, 0x5F, 0x41, 0xA8, 0x27, 0x9D, 0xD6, 0xA5, 0x89, 0xAD, 0x11, 0x0F, 0xBD,
	0x4D, 0x62, 0xE7, 0x3F, 0xFE, 0x52, 0x29, 0x0A, 0x23, 0x08, 0xC8, 0xF2, 0xDA, 0x1C, 0x18, 0x5A,
	0x96, 0x4B, 0x54, 0x4B, 0x8C, 0x6A, 0x5E, 0xD0, 0xAF, 0x73, 0xC1, 0xF7, 0x51, 0x2B, 0x10, 0xF0,
	0x0C, 0xA8, 0x1D, 0xE4, 0x8D, 0x1E, 0x2F, 0xF7, 0x1A, 0x78, 0xC0, 0xA4, 0xCC, 0x15, 0x9B, 0x0F,
	0x51, 0x92, 0x6E, 0x43, 0x47, 0xC0, 0x49, 0xB3, 0x75, 0xCB, 0xA3, 0xA2, 0x79, 0xD6, 0xA6, 0x1A,
	0x1D, 0xD2, 0x39, 0x3E, 0x55, 0x0E, 0xEA, 0x67, 0x3C, 0x4C, 0x9E, 0xFA, 0xD4, 0xCF, 0x6C, 0x0D,
	0x2D, 0xC9, 0x50, 0x43, 0x44, 0xB9, 0x55, 0x29, 0x1F, 0x98, 0xDC, 0x31, 0xDF, 0x92, 0x94, 0xED,
	0xC4, 0xBC, 0xFA, 0x36, 0x24, 0x9D, 0x7F, 0xF8, 0x9C, 0x9C, 0x47, 0x33, 0x5F, 0xE1, 0xBE, 0xA6,
	0xC6, 0x46, 0x57, 0x37, 0xD4, 0x9B, 0x2B, 0x6C, 0x61, 0x80, 0xB0, 0xAE, 0x91, 0xF0, 0x38, 0x61,
	0x7C, 0x67, 0xA0, 0xE5, 0x9F, 0xAC, 0x2D, 0xB2, 0xC9, 0x27, 0x11, 0xFF, 0xBE, 0x65, 0x08, 0xF4,
	0x0A, 0x67, 0xAB, 0x0C, 0x4F, 0xF6, 0x01, 0xFF, 0x4D, 0x35, 0x29, 0x44, 0x13, 0x92, 0x9B, 0x77,
	0x2A, 0x9A, 0xFD, 0x6B, 0x10, 0xAA, 0x50, 0x99, 0x61, 0x78, 0xD3, 0xD8, 0x7F, 0x90, 0xC6, 0xFB,
	0x32, 0x5A, 0xC1, 0x37, 0xAC, 0x7E, 0x01, 0xEA, 0x58, 0xEE, 0x5A, 0xC0, 0x42, 0x7B, 0xF6, 0xAF,
	0x34, 0xFD, 0xC1, 0x59, 0x6E, 0x88, 0x9E, 0xF1, 0x58, 0x8D, 0xE1, 0x78, 0x97, 0x37, 0x32, 0x8A,
	0xFB, 0xB1, 0x05, 0xBB, 0xA0, 0xC8, 0x65, 0xE4, 0x74, 0xAB, 0x70, 0xB2, 0xA9, 0xA6, 0x8C, 0x5F,
	0xB0, 0x58, 0x8D, 0x31, 0xB0, 0xF1, 0xCD, 0x0D, 0xC3, 0x06, 0xE0, 0x90, 0xC6, 0x7F, 0x74, 0x0C,
	0x9B, 0xB1, 0xCC, 0xDF, 0x92, 0x24, 0x65, 0xD0, 0xE2, 0x83, 0xF5, 0x86, 0x55, 0x66, 0x93, 0xF8,
	0xF2, 0xDD, 0xDD, 0x3E, 0x7B, 0x78, 0x92, 0x10, 0x5E, 0x1F, 0xDD, 0x01, 0x10, 0xE7, 0x8D, 0x6B,
	0x26, 0xA3, 0x6D, 0x62, 0x08, 0xC9, 0x5F, 0x59, 0x13, 0x5F, 0xC4, 0x77, 0x8E, 0xAB, 0xDB, 0xDE,
	0x75, 0x49, 0x01, 0xDF, 0xA3, 0xCF, 0x3D, 0xBB, 0x80, 0xB9, 0x67, 0xE0, 0x04, 0xB0, 0xF1, 0xD0,
	0x23,
};
const size_t g_appkey_size = sizeof(g_appkey);
const char *username = "jacobsore";
const char *password = "len999";

// const uint8_t g_appkey[] = {
// 	0x01, 0x9B, 0x84, 0xA5, 0xC4, 0xA0, 0x37, 0x44, 0x18, 0xDC, 0xBD, 0xAB, 0xCB, 0x4D, 0xC7, 0x44,
// 	0xB0, 0xD0, 0x8D, 0x9A, 0x65, 0x18, 0x77, 0x86, 0xDA, 0x50, 0xA4, 0x73, 0xCC, 0xCB, 0xF4, 0xA3,
// 	0xE6, 0xC9, 0xC2, 0x3E, 0x71, 0x9A, 0x9F, 0xE7, 0x6B, 0xCC, 0x93, 0x17, 0x80, 0x7D, 0xF1, 0x45,
// 	0x40, 0x63, 0x77, 0x68, 0x83, 0x5E, 0xE3, 0x65, 0x55, 0x83, 0x77, 0x69, 0xA7, 0xFE, 0x04, 0x12,
// 	0x96, 0x57, 0x9A, 0xB7, 0x29, 0x70, 0xAC, 0x1E, 0x76, 0x10, 0x96, 0xA8, 0x0C, 0xC3, 0x00, 0xD8,
// 	0xD3, 0xCB, 0x7D, 0xB0, 0xFA, 0x45, 0xC7, 0xF9, 0xFF, 0xDB, 0x18, 0xCC, 0xAE, 0x7F, 0xA8, 0x38,
// 	0xAA, 0x61, 0x6E, 0xDB, 0x9B, 0xB1, 0x45, 0xAF, 0x27, 0x89, 0xC5, 0x44, 0x86, 0x16, 0x4C, 0xBE,
// 	0xBD, 0x71, 0x26, 0x93, 0x03, 0x28, 0x63, 0x2F, 0x7C, 0xBD, 0xA0, 0xAA, 0x06, 0x78, 0xB6, 0x80,
// 	0x94, 0x05, 0x05, 0x00, 0xF2, 0x45, 0x5C, 0xD0, 0x11, 0xDA, 0x67, 0xF9, 0x2F, 0x55, 0xA7, 0x4A,
// 	0xB6, 0x15, 0xEF, 0x71, 0xAB, 0x22, 0x78, 0xBD, 0x20, 0xC8, 0xBB, 0x69, 0x95, 0x83, 0x54, 0x17,
// 	0xA3, 0x67, 0x32, 0x23, 0x38, 0xD0, 0xEC, 0xDC, 0xBE, 0x0F, 0xEB, 0xAD, 0x73, 0xBD, 0xA1, 0x83,
// 	0x09, 0x46, 0x12, 0x73, 0x04, 0x59, 0x6D, 0xA9, 0x83, 0x42, 0xCB, 0x27, 0x26, 0x1B, 0xDB, 0x93,
// 	0x58, 0x40, 0xFD, 0x81, 0x4E, 0x30, 0x0E, 0x16, 0xC1, 0x50, 0xCC, 0x20, 0x0A, 0x8D, 0xE7, 0x8C,
// 	0x73, 0xC8, 0x82, 0xFB, 0x0F, 0x07, 0x6C, 0x4B, 0x7D, 0xFF, 0x3E, 0x54, 0x68, 0x9A, 0x39, 0x47,
// 	0x8C, 0xDF, 0x82, 0x6C, 0xA1, 0xB2, 0x03, 0xE1, 0xBA, 0xFA, 0x55, 0xD1, 0x0D, 0x72, 0xDB, 0x9B,
// 	0xE2, 0x7D, 0xCC, 0x66, 0x61, 0x24, 0x4F, 0x06, 0xBF, 0xC9, 0xF6, 0xE7, 0x24, 0x60, 0x7B, 0xF9,
// 	0xF0, 0x7E, 0x0D, 0x4E, 0x91, 0xE7, 0xDE, 0xE8, 0xAB, 0xCA, 0x9D, 0x5C, 0x10, 0x7F, 0x0A, 0x64,
// 	0xE5, 0x61, 0xD5, 0x3B, 0xDB, 0x09, 0x5D, 0x93, 0x32, 0xA1, 0x09, 0xF9, 0x78, 0xE1, 0x68, 0x68,
// 	0x87, 0x60, 0x79, 0x88, 0x8D, 0x25, 0x71, 0xD5, 0x34, 0x08, 0x87, 0xD7, 0xAE, 0x5B, 0x7F, 0xD6,
// 	0x38, 0x41, 0x77, 0x81, 0x3F, 0x33, 0x15, 0x7B, 0x86, 0x34, 0x10, 0x0A, 0x87, 0xEB, 0xFC, 0x2E,
// 	0x5A,
// };
// const size_t g_appkey_size = sizeof(g_appkey);
// const char *username = "goofyahead";
// const char *password = "ALE1984jandro";
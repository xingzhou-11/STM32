#ifndef __ASCKII_8x16_H
#define __ASCKII_8x16_H
#ifdef __cplusplus
 extern "C" {
#endif

#include "main.h"

const uint8_t ASCII_8_16[][16]= 
{
	0xF8,0xFC,0x04,0xC4,0x24,0xFC,0xF8,0x00,  // -0-
	0x07,0x0F,0x09,0x08,0x08,0x0F,0x07,0x00,

	0x00,0x10,0x18,0xFC,0xFC,0x00,0x00,0x00,  // -1-
	0x00,0x08,0x08,0x0F,0x0F,0x08,0x08,0x00,

	0x08,0x0C,0x84,0xC4,0x64,0x3C,0x18,0x00,  // -2-
	0x0E,0x0F,0x09,0x08,0x08,0x0C,0x0C,0x00,

	0x08,0x0C,0x44,0x44,0x44,0xFC,0xB8,0x00,  // -3-
	0x04,0x0C,0x08,0x08,0x08,0x0F,0x07,0x00,

	0xC0,0xE0,0xB0,0x98,0xFC,0xFC,0x80,0x00,  // -4-
	0x00,0x00,0x00,0x08,0x0F,0x0F,0x08,0x00,

	0x7C,0x7C,0x44,0x44,0xC4,0xC4,0x84,0x00,  // -5-
	0x04,0x0C,0x08,0x08,0x08,0x0F,0x07,0x00,

	0xF0,0xF8,0x4C,0x44,0x44,0xC0,0x80,0x00,  // -6-
	0x07,0x0F,0x08,0x08,0x08,0x0F,0x07,0x00,

	0x0C,0x0C,0x04,0x84,0xC4,0x7C,0x3C,0x00,  // -7-
	0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00,

	0xB8,0xFC,0x44,0x44,0x44,0xFC,0xB8,0x00,  // -8-
	0x07,0x0F,0x08,0x08,0x08,0x0F,0x07,0x00,

	0x38,0x7C,0x44,0x44,0x44,0xFC,0xF8,0x00,  // -9-
	0x00,0x08,0x08,0x08,0x0C,0x07,0x03,0x00,

};


#ifdef __cplusplus
}
#endif
#endif /*__ ASCKII_8x16_H */
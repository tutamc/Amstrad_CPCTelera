#include "gameoverChiquitin.h"
// Data created with Img2CPC - (c) Retroworks - 2007-2015
// Tile init_gameoverChiquitin: 60x32 pixels, 30x32 bytes.
const u8 init_gameoverChiquitin[30 * 32] = {
	0x41, 0xff, 0xff, 0xeb, 0x00, 0xd7, 0xff, 0xff, 0x82, 0x55, 0x82, 0x00, 0x00, 0x55, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xc3, 0xeb, 0xc3, 0xeb, 0x41, 0xd7, 0xff, 0xff, 0xeb, 0x55, 0xeb, 0x00, 0x00, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xeb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xaa, 0x00, 0xff, 0xd7, 0xff, 0xeb, 0xd7, 0xff, 0xd7, 0xff, 0x82, 0x55, 0xff, 0xc3, 0xff, 0xc3, 0xc3, 0xc3, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xaa, 0x00, 0xff, 0xd7, 0xff, 0xaa, 0x55, 0xff, 0x55, 0xff, 0xeb, 0xd7, 0xff, 0xc3, 0xff, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xaa, 0x00, 0xc3, 0x55, 0xff, 0xaa, 0x55, 0xff, 0x55, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xaa, 0x00, 0x00, 0x55, 0xff, 0xaa, 0x55, 0xff, 0x55, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xaa, 0xd7, 0xff, 0x55, 0xff, 0xaa, 0x55, 0xff, 0x55, 0xff, 0xd7, 0xeb, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xaa, 0xd7, 0xff, 0xd7, 0xff, 0xaa, 0x55, 0xff, 0x55, 0xff, 0x55, 0xc3, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xaa, 0x00, 0xff, 0xd7, 0xff, 0xff, 0xff, 0xff, 0x55, 0xff, 0x00, 0x41, 0xff, 0xc3, 0xff, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xaa, 0x00, 0xff, 0xd7, 0xff, 0xc3, 0xd7, 0xff, 0x55, 0xff, 0x00, 0x41, 0xff, 0xc3, 0xff, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xeb, 0x00, 0xff, 0xd7, 0xff, 0x00, 0x55, 0xff, 0x55, 0xff, 0x00, 0x41, 0xff, 0xc3, 0xff, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xff, 0xc3, 0xff, 0xd7, 0xff, 0x00, 0x55, 0xff, 0x55, 0xff, 0x00, 0x41, 0xff, 0xc3, 0xff, 0xc3, 0xc3, 0xc3, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xc3, 0xff, 0xff, 0xeb, 0x55, 0xff, 0x00, 0x55, 0xff, 0x55, 0xff, 0x00, 0x41, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xeb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xd7, 0xff, 0xeb, 0x55, 0xff, 0x00, 0x55, 0xff, 0x55, 0xff, 0x00, 0x41, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd7, 0xff, 0xff, 0x82, 0xff, 0xaa, 0x00, 0xff, 0xaa, 0xff, 0xff, 0xff, 0xff, 0xd7, 0xff, 0xff, 0xff, 0x82,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xd7, 0xc3, 0xd7, 0xaa, 0xff, 0xaa, 0x00, 0xff, 0xaa, 0xff, 0xeb, 0xc3, 0xc3, 0x55, 0xff, 0xc3, 0xd7, 0xeb,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xeb, 0xff, 0xaa, 0x00, 0xff, 0xaa, 0xff, 0xaa, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xeb, 0xff, 0xaa, 0x00, 0xff, 0xaa, 0xff, 0xaa, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xeb, 0xff, 0xaa, 0x00, 0xff, 0xaa, 0xff, 0xaa, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xeb, 0xff, 0xaa, 0x00, 0xff, 0xaa, 0xff, 0xaa, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xeb, 0xff, 0xaa, 0x00, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xeb, 0x55, 0xff, 0xff, 0xff, 0xeb,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xeb, 0xd7, 0xeb, 0x00, 0xff, 0xaa, 0xff, 0xff, 0xff, 0xeb, 0x55, 0xff, 0xff, 0xff, 0xeb,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xeb, 0x41, 0xff, 0xff, 0xff, 0x82, 0xff, 0xaa, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xeb, 0x41, 0xff, 0xff, 0xff, 0x82, 0xff, 0xaa, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xeb, 0x41, 0xff, 0xff, 0xff, 0x82, 0xff, 0xaa, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xff, 0x00, 0x55, 0xeb, 0x00, 0x55, 0xff, 0x00, 0x00, 0xff, 0xeb, 0xc3, 0xc3, 0x55, 0xff, 0x00, 0x55, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xd7, 0xc3, 0xd7, 0xaa, 0x00, 0x55, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xd7, 0xff, 0x00, 0x55, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd7, 0xff, 0xff, 0x00, 0x00, 0x55, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x55, 0xff, 0x00, 0x55, 0xff
};


#ifndef __BOARD_H__
#define __BOARD_H__
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
struct board {
	uint8_t b[14][4];
};

typedef struct board board_t;

board_t * copyBoard (const board_t * src, board_t * cpy);
void clearBoard (board_t b);
int8_t isTileOccupied (const board_t b, uint8_t x, uint8_t y);
int8_t getTileOwner (const board_t b, uint8_t x, uint8_t y);
int8_t setTileOwner(board_t b, uint8_t x, uint8_t y, uint8_t p);
int8_t clearTile(board_t b, uint8_t x, uint8_t y);

#endif
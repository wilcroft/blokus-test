#include "board.h"
board_t * copyBoard (const board_t * src, board_t * cpy){
	if (src==NULL) return NULL;
	if (cpy==NULL) cpy = malloc (sizeof(board_t));
	for (int i = 0; i<14; i++)
		for (int j = 0; j<4; j++)
			(*cpy).b[i][j]=(*src).b[i][j];
	
	return cpy;
}
void clearBoard (board_t b){
	for (int i = 0; i<14; i++)
		for (int j = 0; j<4; j++)
			b.b[i][j]=0;
}
int8_t isTileOccupied (const board_t b, uint8_t x, uint8_t y){
	if (x < 0 || x >=14 || y < 0 || y >=14) return -1;
	uint8_t t=b.b[y][x/4];
	t = t >>((x%4)*2);
	t = t&0x01;
	return t;
}

int8_t getTileOwner (const board_t b, uint8_t x, uint8_t y){
	if (x < 0 || x >=14 || y < 0 || y >=14) return -1;
	uint8_t t=b.b[y][x/4];
	t = t >>((x%4)*2+1);
	t = t&0x01;
	return t;
}

int8_t setTileOwner(board_t b, uint8_t x, uint8_t y, uint8_t p){
	if (x < 0 || x >=14 || y < 0 || y >=14 || p < 0 || p >=2 ) return -1;
	uint8_t t=b.b[y][x/4];
	t = t|((p<<1)&0x01) << ((x%4)*2);
	b.b[y][x/4]=t;
	return 0;
}
int8_t clearTile(board_t b, uint8_t x, uint8_t y){
	if (x < 0 || x >=14 || y < 0 || y >=14) return -1;
	uint8_t t=b.b[y][x/4];
	t = t & ~(0x03 << ((x%4)*2));
	b.b[y][x/4]=t;
	return 0;
}
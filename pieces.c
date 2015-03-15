#include "pieces.h"
void clearUsedPieces(pieces_t * p){
	for (int i = 0; i < 3; i++){
		(*p) = 0;
	}
}
int8_t isPieceUsed(const pieces_t * p, const enum piecenum n){
	if (n == PIECE_INVALID) return -1;
	uint8_t t = ((*p) >> n) & 0x01;
	return t;
	
}
void usePiece(pieces_t * p, const enum piecenum n){
	pieces_t t = 0x01 << n;
	(*p) |= t;
}
uint8_t checkAndUsePiece(pieces_t * p, const enum piecenum n){
	if (isPieceUsed(p,n)) return 1;
	usePiece(p,n);
	return 0;
}
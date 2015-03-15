#ifndef __PIECES_H__
#define __PIECES_H__

#include <stdlib.h>
#include <stdint.h>

#define NUM_PIECES 21

typedef uint32_t pieces_t;

enum piecenum{
	PIECE_A=0,	//1x1	(1)
	PIECE_B,	//1x2	(2)
	PIECE_C,	//1x3 	(3)
	PIECE_D,	//3-block L	(crooked 3)
	PIECE_E,	//1x4 	(4)
	PIECE_F,	//4-block L	(short L)
	PIECE_G,	//4-block T (short T)
	PIECE_H,	//2x2		(square)
	PIECE_I,	//4-block Z (short Z)
	PIECE_J,	//1x5	(5)
	PIECE_K,	//5-block L	(L)
	PIECE_L,	//5-block	(N)
	PIECE_M,	//5-block	(P)
	PIECE_N,	//5-block U	(U)
	PIECE_O,	//5-block half-T (Y)
	PIECE_P,	//5-block T (T)
	PIECE_Q,	//5-block V (V)
	PIECE_R,	//5-block W (W)
	PIECE_S,	//5-block S (Z)
	PIECE_T,	//5-block F (F)
	PIECE_U,	//5-block X (X)
	PIECE_INVALID
};

#define PIECE_A_ROT 1	//1x1	(1)
#define PIECE_B_ROT 2	//1x2	(2)
#define PIECE_C_ROT 2	//1x3 	(3)
#define PIECE_D_ROT 4	//3-block L	(crooked 3)
#define PIECE_E_ROT 2	//1x4 	(4)
#define PIECE_F_ROT 8	//4-block L	(short L)
#define PIECE_G_ROT 4	//4-block T (short T)
#define PIECE_H_ROT 1	//2x2		(square)
#define PIECE_I_ROT 4	//4-block Z (short Z)
#define PIECE_J_ROT 2	//1x5	(5)
#define PIECE_K_ROT 8	//5-block L	(L)
#define PIECE_L_ROT 8	//5-block	(N)
#define PIECE_M_ROT 8	//5-block	(P)
#define PIECE_N_ROT 4	//5-block U	(U)
#define PIECE_O_ROT 8	//5-block half-T (Y)
#define PIECE_P_ROT 4	//5-block T (T)
#define PIECE_Q_ROT 4	//5-block V (V)
#define PIECE_R_ROT 4	//5-block W (W)
#define PIECE_S_ROT 4	//5-block S (Z)
#define PIECE_T_ROT 8	//5-block F (F)
#define PIECE_U_ROT 1	//5-block X (X)

void clearUsedPieces(pieces_t * p);
int8_t isPieceUsed(const pieces_t* p, const enum piecenum n);
void usePiece(pieces_t * p, const enum piecenum n);
uint8_t checkAndUsePiece(pieces_t * p, const enum piecenum n);


#endif
#pragma once

#include <time.h>
#include <stdlib.h>
#define TAMANHO 15 
#define VAZIO '\0'
#define JOGADOR 'P'
#define	INIMIGO1 'E'
#define INIMIGO2 'G'
#define INIMIGO3 'H'
#define INIMIGO4 'I'
#define CENTRO_POKEMON 'C'
#define LIDER 'L'
 
using namespace std;


//
void iniciarMatriz(char matriz[TAMANHO][TAMANHO]);
//
int sorteia(int numeroMaximo);
//
void baixo(char matriz[TAMANHO][TAMANHO], int p_linha, int p_coluna);
//
void cima(char matriz[TAMANHO][TAMANHO], int p_linha, int p_coluna);
//
void direita(char matriz[TAMANHO][TAMANHO], int p_linha, int p_coluna);
//
void esquerda(char matriz[TAMANHO][TAMANHO], int p_linha, int p_coluna);
//
char interacao ();
//
void iniciarInimigos(char matriz[TAMANHO][TAMANHO]);

void iniciarMatriz(char matriz[TAMANHO][TAMANHO]) {
	for (int linha = 0; linha < TAMANHO; linha++) {
		for (int coluna = 0; coluna < TAMANHO; coluna++) {
			matriz[linha][coluna] = VAZIO;
		}
	}
	matriz[TAMANHO / 2][TAMANHO / 2] = JOGADOR;
	iniciarInimigos(matriz);
	matriz[sorteia(TAMANHO)][sorteia(TAMANHO)] = CENTRO_POKEMON;
}
int sorteia(int numeroMaximo) {

	srand(time(NULL));

	return rand() % numeroMaximo;
}
void  movimentacaoJogador( char matriz[TAMANHO][TAMANHO] , int  linha , int coluna , char comando ) {
	switch (comando )
	{
	case 'w': if (matriz[linha-1][coluna] == VAZIO) 
			cima(matriz, linha, coluna);
		if (matriz[linha - 1][coluna] == INIMIGO1) {
			
		}
		break;
	case 'a':if (matriz[linha ][coluna-1] == VAZIO)
			esquerda(matriz, linha, coluna);
		break;
	case 's': 
		if (matriz[linha + 1][coluna] == VAZIO)
			baixo(matriz, linha, coluna);
		break;
	case 'd':if (matriz[linha ][coluna + 1] == VAZIO)
			direita(matriz, linha, coluna);
		break;
	case 'j':if (matriz[linha - 1][coluna] == CENTRO_POKEMON || matriz[linha + 1][coluna] == CENTRO_POKEMON
		|| matriz[linha][coluna - 1] == CENTRO_POKEMON || matriz[linha][coluna + 1] == CENTRO_POKEMON)
		//AINDA NAO ESTA PRONATO 
		;
		break;
	default:
		break;
	}
}
void esquerda(char matriz[TAMANHO][TAMANHO], int p_linha, int p_coluna) {
	char aux = matriz[p_linha][p_coluna];
	matriz[p_linha][p_coluna] = matriz[p_linha][p_coluna - 1];
	matriz[p_linha ][p_coluna -1] = aux;
}
void direita(char matriz[TAMANHO][TAMANHO], int p_linha, int p_coluna) {
	char aux = matriz[p_linha][p_coluna];
	matriz[p_linha][p_coluna] = matriz[p_linha][p_coluna + 1];
	matriz[p_linha ][p_coluna +1 ] = aux;
}
void cima(char matriz[TAMANHO][TAMANHO], int p_linha, int p_coluna) {
	char aux = matriz[p_linha][p_coluna];
	matriz[p_linha][p_coluna] = matriz[p_linha -1][p_coluna];
	matriz[p_linha - 1][p_coluna] = aux;
}
void baixo(char matriz[TAMANHO][TAMANHO], int p_linha, int p_coluna) {
	char aux = matriz[p_linha][p_coluna];
	matriz[p_linha][p_coluna] = matriz[p_linha + 1][p_coluna];
	matriz[p_linha + 1][p_coluna] = aux;
}
char interacao() {
	char x = '\0';
	cin >> x; 
	return x;
}
void atualizarPosicao(char matriz [TAMANHO][TAMANHO], int vetor[], char verificado) {
	for (int linha = 0; linha < TAMANHO; linha++) {
		for (int coluna = 0; coluna < TAMANHO; coluna++) {
			if (matriz[linha][coluna] == verificado) {
				vetor[0] = linha;
				vetor[1] = coluna;
			}
		}
	}
}
void iniciarInimigos(char matriz [TAMANHO][TAMANHO]) {
	int x = sorteia(TAMANHO) * 2 % TAMANHO;
	int x1 = sorteia(TAMANHO) * 3 % TAMANHO;
	int x3 = sorteia(TAMANHO) * 4 % TAMANHO;
	int x4 = sorteia(TAMANHO) * 5 % TAMANHO;
	int y = sorteia(TAMANHO) * 2 % TAMANHO;
	int y1 = sorteia(TAMANHO) * 3 % TAMANHO;
	int y3 = sorteia(TAMANHO) * 4 % TAMANHO;
	int y4 = sorteia(TAMANHO) * 5 % TAMANHO;
	
	matriz[x][y] = INIMIGO1;
	matriz[x1][y1] = INIMIGO2;
	matriz[x3][y3] = INIMIGO3;
	matriz[x4][y4] = INIMIGO4;


}

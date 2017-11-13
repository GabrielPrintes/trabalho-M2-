#pragma once


#include "pokemon.h"
#include "dinamica.h" 


//desenha a tela 
void Desenhartela(char matriz[TAMANHO][TAMANHO]);

//escreve a matris na tela 
void escreverMatriz(char matriz [TAMANHO][TAMANHO]);




void escreverMatriz(char matriz[TAMANHO][TAMANHO]) {
	for (int linha =-1 ; linha <= TAMANHO ; linha++) {
		for (int coluna= -1 ; coluna <= TAMANHO ; coluna++) {
			if (linha == -1 || linha == TAMANHO || coluna == -1 || coluna == TAMANHO) {
				cout << "##";
			}
			else {
				cout << matriz[linha][coluna]<< '|'  ;
			}
		}
		cout << endl  ;
	}
}
void Desenhartela(char matriz[TAMANHO][TAMANHO]) {
	cout << "bem vindo ao jogo" << endl;
	escreverMatriz(matriz);
}
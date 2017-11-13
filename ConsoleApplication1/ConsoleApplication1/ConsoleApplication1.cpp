// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "pokemon.h"
#include "printconsole.h"

using namespace std;

int  posicao_atual[2], posicao_inimigo1[2], posicao_inimigo2[2];




int main()
{
	int  posicao_atual[2], posicao_inimigo1[2], posicao_inimigo2[2];
	bool sair = false;


	


	Pokemon pokemons [TOTAL_MOSNTROS];
	pokemons[0].nome = "agaua1"; 
	pokemons[0].tipo = AGUA;

	pokemons[1].nome = "agaua2";
	pokemons[1].tipo = AGUA;

	pokemons[2].nome = "agaua3";
	pokemons[2].tipo = AGUA;

	pokemons[3].nome = "fogo1";
	pokemons[3].tipo = FOGO;

	pokemons[4].nome = "fogo2";
	pokemons[4].tipo = FOGO;
	
	pokemons[5].nome = "fogo3";
	pokemons[5].tipo = FOGO;

	pokemons[6].nome = "grama";
	pokemons[6].tipo = GRAMA;

	pokemons[7].nome = "agaua1";
	pokemons[7].tipo = GRAMA;

	pokemons[8].nome = "agaua1";
	pokemons[8].tipo = VOADOR;

	pokemons[9].nome = "agaua1";
	pokemons[9].tipo = VOADOR;

	pokemons[10].nome = "agaua1";
	pokemons[10].tipo = ELETRICO;

	pokemons[11].nome = "agaua1";
	pokemons[11].tipo = ELETRICO;










	Persongen jogador, inimigos[TOTAL_INIMIGOS], lider;
	char  campo[TAMANHO][TAMANHO];


	iniciarMatriz(campo);
	do
	{
		Desenhartela(campo);
		atualizarPosicao(campo,posicao_atual,JOGADOR);
		movimentacaoJogador(campo, posicao_atual[0], posicao_atual[1], interacao());
		system("cls");
	} while (!sair);
	
	//cout << "hello world" << endl;
	system("pause");
	return 0;
}


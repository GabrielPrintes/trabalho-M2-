#pragma once



#include <iostream> 
#include <string>
//total de monstos que tem no jogo
#define TOTAL_MOSNTROS 12 

//tipo de monstros e seu atakes
#define AGUA 1 
#define FOGO 2 
#define GRAMA 3 
#define ELETRICO 4 
#define VOADOR 5 

//total de inigos 
#define TOTAL_INIMIGOS 4
using namespace std;

struct Pokemon {
	string nome;
	int vida = 200;
	int tipo;
	int ataque = 100 ;
	int defesa = 100 ;
	int velocidade;
	int golpes;
	
};
struct Habilidade {
	int tipo = AGUA ;
	string nome = "  "  ;
	int poder = 100;
	int quantidade = 4 ;
};

struct Persongen
{
	Pokemon monstro[2];
	int nivel;
};

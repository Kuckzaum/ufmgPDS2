#ifndef PARTIDA
#define PARTIDA

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include "Jogador.hpp"

using namespace std;

class Partida {
	
private:
	vector<Jogador> _jogadores;
	int _num_jogadores = 0;

public:

	Partida(int num_jogadores);
	void addJogador(Jogador jogador);
	
	int getNumJogadores();
	int getNumAtualJogadores();
	void setJogadores(Jogador jogadores);
	void printJogadores();
	Jogador getCampeao();
	list<Jogador> getJogadoresOrdenados();
	void imprimeJogadoresOrdenados();
};

#endif
#include <iostream>
#include "Partida.cpp"
#include "Partida.hpp"
#include "Jogador.cpp"
#include "Jogador.hpp"
#include "Carta.cpp"
#include "Carta.hpp"

using namespace std;

int main() {

	int numero_cartas_por_jogador;
	int numero_jogadores;
	
	cin >> numero_jogadores;
	cin >> numero_cartas_por_jogador;
	
	Partida *p = new Partida(numero_jogadores);
	
	string nomeJogador;
	int numero_pontos_carta;
	int i, j;
	string naipe;
	for(int i=0; i<numero_jogadores; i++) {
	    cin >> nomeJogador;
		Jogador jog;
		jog.setNomeJogador(nomeJogador);
	    for(int j=0; j<numero_cartas_por_jogador; j++){
	        cin >> numero_pontos_carta;
		    cin >> naipe;
			Carta card(numero_pontos_carta,naipe);
			jog.adicionaCarta(card);
	    }
		p->addJogador(jog);
	}
	
	p->imprimeJogadoresOrdenados();
	
	Jogador vencedor = p->getCampeao();
	cout << vencedor.getNomeJogador() << endl;
    return 0;
}
#include "Partida.hpp"
#include "Jogador.hpp"
#include "Carta.hpp"
#include <iostream>
#include <list>


Partida::Partida(int num) {
    this->_num_jogadores=num;
}

void Partida::addJogador(Jogador j) {
    this->_jogadores.push_back(j);
}

int Partida::getNumJogadores() {
    return this->_num_jogadores;
}

int Partida::getNumAtualJogadores() {
    return this->_num_jogadores;
}

list<Jogador> Partida::getJogadoresOrdenados() {
    int maior = 0;
    int menor = 1000;
    list<Jogador> ordenado;
    for(auto &player:_jogadores) {
        if(player.calcularPontuacao()>maior){
            ordenado.push_back(player);
            maior = player.calcularPontuacao();
        } else if(player.calcularPontuacao()<menor){
            ordenado.push_front(player);
            menor = player.calcularPontuacao();
        } else {
            Jogador aux = ordenado.front();
            ordenado.pop_front();
            if(player.calcularPontuacao()>ordenado.front().calcularPontuacao()) {
                Jogador aux2 = ordenado.front();
                ordenado.pop_front();
                ordenado.push_front(player);
                ordenado.push_front(aux2);
                ordenado.push_front(aux);
            } else {
                ordenado.push_front(player);
                ordenado.push_front(aux);
            }
        }
    }
    return ordenado;
}

void Partida::imprimeJogadoresOrdenados() {
    list<Jogador>ordered = getJogadoresOrdenados();
    for(auto &Jogador:ordered) {
        cout<<Jogador.getNomeJogador()<<" "<<Jogador.calcularPontuacao()<<endl;
    }
}

Jogador Partida::getCampeao() {
    list<Jogador>ordered = getJogadoresOrdenados();
    Jogador champion = ordered.back();
    return champion;
}
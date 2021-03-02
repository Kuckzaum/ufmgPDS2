#include "FilaPrioridade.hpp"
#include "No.hpp"
#include "No.cpp"
#include <iostream>

FilaPrioridade::FilaPrioridade() {
    tamanho=0;
}

void FilaPrioridade::inserir(int prioridade, int dado) {
    No* add= new No(prioridade,dado);
    int C_prioridade = cabeca->getPrioridade();
    if(prioridade<C_prioridade) {
        No* aux = cabeca;
        cabeca = add;
        cabeca->setProximo(aux);
    } else {
        No* atual = cabeca;
        No* proximo = cabeca->getProximo();
        for(int i=1;;i++) {
            if(prioridade<proximo->getPrioridade()){
                add->setProximo(proximo);
                atual->setProximo(add);
                break;
            } else if(prioridade == proximo->getPrioridade()) {
                add->setProximo(proximo->getProximo());
                proximo->setProximo(add);
                break;
            } else if(i == this->getTamanho()) {
                atual->setProximo(add);
                cout<<atual->getDado()<<endl;
                cout<<proximo->getDado()<<endl;
                break;
            } 
            atual = atual->getProximo();
            proximo = proximo->getProximo();
        }
    }
    this->tamanho++;
}

int FilaPrioridade::remover() {
    No *aux = cabeca;
    cabeca = cabeca->getProximo();
    this->tamanho--;
    return aux->getDado();
}

int FilaPrioridade::estaVazio() {
    if(this->cabeca->getDado()!=0) return false;
    else return true;
}

int FilaPrioridade::getTamanho() {
    return this->tamanho;
}

int FilaPrioridade::getMeio() {
    No* atual = cabeca;
    for(int i=0;i<this->getTamanho()/2;i++){
        atual = atual->getProximo();
    }
    return atual->getDado();
}

int FilaPrioridade::getUltimo() {
    No* atual = cabeca;
    for(int i=1;i<this->getTamanho();i++){
        atual = atual->getProximo();
    }
    return atual->getDado();
}

void FilaPrioridade::furaFila(int dado) {
    No* aux = this->cabeca;
    No* newHead = new No(1,dado);
    newHead->setProximo(aux);
    cabeca = newHead; 
    this->tamanho++;
}

void FilaPrioridade::print() {
    No* atual = cabeca;
    for(int i=0;i<this->getTamanho();i++){
        std::cout<<atual->getDado()<<" ";
        atual = atual->getProximo();
    }
}


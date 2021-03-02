#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	std::cout << "  Nome: " << this->getNome() << endl
	<< "  Endereço: " << this->getEndereco() << endl
	<< "  Cidade: " << this->getCidade() << endl
	<< "  Estado: " << this->getEstado() << endl
	<< "  CEP: " << this->getCEP() << endl;
}

// Implementação das funções de atribuição
void Cliente::setNome(string _nome) {
	this->nome = _nome;
}

void Cliente::setEndereco(string _endereco) {
	this->endereco = _endereco;
}
void Cliente::setCidade(string _cidade) {
	this->cidade = _cidade;
}

void Cliente::setEstado(string _estado) {
	this->estado= _estado;
}

void Cliente::setCEP(string _cep) {
	this->CEP = _cep;
}

// Implementação das funções de acesso aos atributos
string Cliente::getNome() {
	return this->nome;
}

string Cliente::getEndereco() {
	return this->endereco;
}

string Cliente::getCidade() {
	return this->cidade;
}

string Cliente::getEstado() {
	return this->estado;
}

string Cliente::getCEP() {
	return this->CEP;
}

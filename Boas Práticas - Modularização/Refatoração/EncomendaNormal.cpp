#include <iostream>
#include "EncomendaNormal.hpp"

void EncomendaNormal::print() {
    std::cout << "[Remetente]" << endl;
    this->getRemet().print();
	std::cout << "[Destinatário]" << endl;
	this->getDest().print();
	std::cout << "[Encomenda Normal]" << endl;
	std::cout << "  Peso: " << this->getPeso() << endl
	    << "  Custo por kg: " << this->getCustoKG() << endl
	    << "  Custo total: " << this->getTotal() << endl;
}

double EncomendaNormal::calcula(){
	return this->getPeso() * this->getCustoKG();
}

void EncomendaNormal::setPeso(double _peso) {
    this->peso = _peso;
}
void EncomendaNormal::setCustoKG(double _custoKg) {
    this->custoKg = _custoKg;
}
void EncomendaNormal::setTotal(double _total) {
    this->total = _total;
}
void EncomendaNormal::setDest(Cliente _dest) {
    this->dest = _dest;
}
void EncomendaNormal::setRemet(Cliente _remetente) {
    this->remetente = _remetente;
}

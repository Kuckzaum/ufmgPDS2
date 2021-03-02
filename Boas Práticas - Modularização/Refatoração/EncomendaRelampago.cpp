#include <iostream>
#include "EncomendaRelampago.hpp"

void EncomendaRelampago::print() {
    std::cout << "[Remetente]" << endl;
    this->getRemet().print();
	std::cout << "[Destinatário]" << endl;
	this->getDest().print();
	std::cout << "[Encomenda Relâmpago]" << endl;
	std::cout << "  Peso: " << this->getPeso() << endl
		<< "  Custo por kg: " << this->getCustoKG() << endl
		<< "  Taxa adicional: " << this->getTaxaAdc() << endl
		<< "  Custo total: " << this->getTotal() << endl;
}

double EncomendaRelampago::calcula(){
	double x = this->getPeso() * this->getCustoKG();
	x += x * this->getTaxaAdc();
	return x;
}

void EncomendaRelampago::setPeso(double _peso) {
    this->peso = _peso;
}

void EncomendaRelampago::setCustoKG(double _custoKg) {
    this->custoKg = _custoKg;
}

void EncomendaRelampago::setTotal(double _total) {
    this->total = _total;
}

void EncomendaRelampago::setDest(Cliente _dest) {
    this->dest = _dest;
}

void EncomendaRelampago::setRemet(Cliente _remetente) {
    this->remetente = _remetente;
}
	
void EncomendaRelampago::setTaxaAdc(double tax){
    this->taxaAdicional = tax;
}

double EncomendaRelampago::getTaxaAdc(){
    return this->taxaAdicional;
}

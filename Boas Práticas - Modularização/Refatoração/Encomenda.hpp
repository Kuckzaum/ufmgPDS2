#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:
		virtual void print() = 0;
		virtual double calcula() = 0;
		
		// Funções para acesso aos dados
		double getPeso() {return peso;}
		double getCustoKG() {return custoKg;}
		double getTotal() {return total;}
		Cliente getRemet() {return remetente;}
		Cliente getDest() {return dest;}
		
		// Esqueleto das funções para atribuição de valores
		virtual void setPeso(double) = 0;
		virtual void setCustoKG(double) = 0;
		virtual void setTotal(double) = 0;
		virtual void setRemet(Cliente) = 0;
		virtual void setDest(Cliente) = 0;
	
		// Pensei também na implementação de um construtor mas conclui que o código ficaria mais fácil de entender setando atributo por atributo.

	protected:	
		double peso = 0;
		double custoKg = 0;
		double total = 0;
		Cliente remetente;
		Cliente dest;
		
};

#endif

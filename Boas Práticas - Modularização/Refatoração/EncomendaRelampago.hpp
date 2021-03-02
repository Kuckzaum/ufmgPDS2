#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
		void print() override;
		double calcula() override;
	
		// Overrides do esqueleto definido na superclasse 'Encomenda'
		void setPeso(double _peso) override;
		void setCustoKG(double _custoKg) override;
		void setTotal(double _total) override;
		void setDest(Cliente _dest) override;
		void setRemet(Cliente _remetente) override;
		
		// Funções para atribuir valor a variável taxa adicional e acessar esse valor.
		void setTaxaAdc(double tax);
		double getTaxaAdc();
	
	protected:
		double taxaAdicional = 0.25;

};

#endif

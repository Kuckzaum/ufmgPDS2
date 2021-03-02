#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda {

	public:
		void print() override;
		double calcula() override;

		// Overrides do esqueleto definido na superclasse 'Encomenda'
		void setPeso(double _peso) override;
		void setCustoKG(double _custoKg) override;
		void setTotal(double _total) override;
		void setDest(Cliente _dest) override;
		void setRemet(Cliente _remetente) override;
	
};

#endif
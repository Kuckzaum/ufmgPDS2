#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		void print(); // imprime na tela os dados de um cliente cadastrado
		
		// Funções necessária para setar os atributos de cada cliente
		void setNome(string _nome);
		void setEndereco(string _endereco);
		void setCidade(string _cidade);
		void setEstado(string _estado);
		void setCEP(string _cep);
		
		// Funções necessária para acessar os atributos de cada cliente
		string getNome();
		string getEndereco();
		string getCidade();
		string getEstado();
		string getCEP();

	protected:
		string nome;
		string endereco;
		string cidade;
		string estado;
		string CEP;
	
};

#endif

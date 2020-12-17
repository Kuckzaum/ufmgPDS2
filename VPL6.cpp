#include "VPL6.hpp"

#include <iostream>
#include <iomanip>

#include "VPL6-1.cpp"

using namespace std;

// // // Função que separa as palavras de cada linha e manda pra lista 'palavras'
void separatePhrase(string str, list<string> &palavras) {
    string word = "";
    // // // O loop passa por cada caracter da frase
    for (auto &x : str) {
        // // // Se o carácter for espaço significa que acabou a palavra então ele manda a palavra que foi formada pelo else enquanto x!+' '  
        if (x == ' ') {
            palavras.push_back(word);
            // // // Reseta a palavra
            word = "";
        // // // Forma a palavra
        } else {
            word += x;
        }
    }
    // // // Manda a última palavra que não vai pelo for porquê a última passagem do if acaba sem contabiliza-la
    palavras.push_back(word);
}

// // // Conta quantas vezes uma palavra se encontra na lista de palavras total
int repetitions(string x,list<string> &palavras) {
    int count = 0;
    for(auto &y: palavras) {
        if(y==x){
            count ++;
        }
    }
    return count;
}

// // // Calcula quantos porcento do texto é aquela palavra
float percentage(int reps ,int total) {
    float _reps = reps;
    float _total= total;
    return _reps/_total;
}

// // // Conta o total de palavras do texto
int total(list<string> &palavras) {
    int count = 0;
    for(auto &y: palavras) {
        if(y!=""){
            count++;
        }
    }
    return count;
}

// // // Função parametro para a ordenação da lista de palavras
bool sorter(const std::string& first, const std::string& second){
    unsigned int i=0;
    while ( (i<first.length()) && (i<second.length())){
        if (tolower(first[i])<tolower(second[i])) return true;
        else if (tolower(first[i])>tolower(second[i])) return false;
    ++i;
    }
    return ( first.length() < second.length() );
}

int main() {
    // Como se fosse um .2 no printf, define as casa decimais de saída
    cout << fixed << showpoint; 
    cout << setprecision(2);

    /*
    While que captura todo input até que o usuário dê um double enter,
    a cada loop do while(cada linha) ele chama a função que separa as palavras
    da frase e as coloca todas em uma lista
    */
    string str = " ";
    list<string> *palavras = new list<string>;
    while(str!=""){
        getline(cin,str);
        separatePhrase(str,*palavras);
    }

    // // // Usado na implementação com TAD  
    // list<indice> indexes = {};

    /* 
    Dou esse pop back porque o último caracter é sempre vazio em decorrência 
    da condição de parada ser essa, nesse caso é necessário retirar esse espaço
    vazio porque ele conta como uma palavra e atrapalha o cálculo da porcentagem.
    */
    // palavras->pop_back();
    palavras->sort(sorter);
    int _total = total(*palavras);

    // // // set de controle para não haver repetições no output
    set<string> out;
    for(auto &n:*palavras) {
        if(n.length() >= 3){
            if(out.count(n)==0){
                cout<<n<<" "<<repetitions(n,*palavras)<<" "<<percentage(repetitions(n,*palavras),_total)<<endl;

                // // // Implementação por meio do TAD
                // indice x(n,repetitions(n,*palavras),percentage(repetitions(n,*palavras),_total));
                // indexes.push_back(x);
                out.insert(n);
            }
        }
    }


    // // // Fase final caso utilizando a versão com o TAD
    /*
    cout<<endl;

    set<string> out;
    for(indice &x:indexes) {
        if(out.count(x.word)==0){
            cout<<x.word<<" "<<x.reps<<" "<<x.percentage<<endl;
            out.insert(x.word);
        }
    }
    */
    
    delete palavras;
    return 0;
}
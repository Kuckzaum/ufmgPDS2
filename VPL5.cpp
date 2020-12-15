#include "VPL5.hpp"

#include <iostream>
#include <iomanip>
using namespace std;

// Facilitar a compilação
#include "VPL5-1.cpp"

int main() {
    Estudante estudante[10];
    for(int i=0;i<10;i++) {
        cin>>estudante[i].matricula;
        cin>>estudante[i].nome;
        for(int j=0;j<5;j++){
            cin>>estudante[i].notas[j];
        }
    }

    cout << fixed << showpoint; 
    // Como se fosse um .2 no printf, define as casa decimais de saída
    cout << setprecision(2);
    Estudante first={}; 
    Estudante second={}; 
    Estudante third={}; 
    
    for(int i=0;i<10;i++) {
        if(estudante[i].calcularRSG()>=first.calcularRSG()){
            if(estudante[i].calcularRSG()==first.calcularRSG()){
                if(estudante[i].matricula>first.matricula){
                    third = second;
                    second = estudante[i];
                }
            } else {
                third = second;
                second = first;
                first = estudante[i];
            }
        } else if(estudante[i].calcularRSG()>=second.calcularRSG()) {
            if(estudante[i].calcularRSG()==second.calcularRSG()){
                if(estudante[i].matricula>second.matricula){
                    third = estudante[i];
                }
            } else {
                third = second;
                second = estudante[i];
            }
        } else if(estudante[i].calcularRSG()>=third.calcularRSG()) {
            if(estudante[i].calcularRSG()==third.calcularRSG()){
                if(estudante[i].matricula>third.matricula){
                    third = third;
                }
            } else {
                third = estudante[i];
            }
        }    
    }

    cout<<first.matricula<<" "<<first.nome<<" "<<first.calcularRSG()<<endl;
    cout<<second.matricula<<" "<<second.nome<<" "<<second.calcularRSG()<<endl;
    cout<<third.matricula<<" "<<third.nome<<" "<<third.calcularRSG()<<endl;

    return 0;
}
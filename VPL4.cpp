#include "VPL4.hpp"

#include <iostream>
#include <iomanip>

// Compile o arquivo de referência abaixo junto ou descomente a próxima linha.
// #include "VPL4-1.cpp"
using namespace std;

int main() {

    double xc1, yc1, r1;
    cin >> xc1 >> yc1 >> r1;
    Circunferencia* circ1 = new Circunferencia(xc1, yc1, r1);

    double xc2, yc2, r2;
    cin >> xc2 >> yc2 >> r2;
    Circunferencia* circ2 = new Circunferencia(xc2, yc2, r2);

    cout << fixed << showpoint; 
    // Como se fosse um .2 no printf, define as casa decimais de saída
    cout << setprecision(2);

    cout << circ1->calcularArea() << " " << circ1->possuiIntersecao(circ2) << endl;
    cout << circ2->calcularArea() << " " << circ2->possuiIntersecao(circ1) << endl;

    delete circ1;
    delete circ2;

    return 0;
}


// #include <iostream>
// #include "VPL4.hpp"
// // #include "VPL4-1.cpp"

// using std::cin;
// using std::cout;
// using std::endl;

// int main() {

    
//     circunferencia* circ1 = new circunferencia(0,0,1);
//     cout<<circ1->calcularArea()<<endl;

//     delete circ1;
//     return 0;
// }
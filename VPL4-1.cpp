
#include "VPL4.hpp"

Circunferencia::Circunferencia(double x, double y, double raio) {
    xc = x;
    yc = y;
    this->raio = raio;
}

double Circunferencia::calcularArea(){
    return (PI * (raio * raio));
}    

// Essa função calcula distancia entre os dois centros para identificar se as circunferências se encontram
double distancia(Circunferencia* a, Circunferencia* b){
    return sqrt(pow(a->xc-b->xc,2)+pow(a->yc-b->yc,2));
} 

bool Circunferencia::possuiIntersecao(Circunferencia *c) {
    if(distancia(this,c) <= (raio+c->raio)) return true;
    return false;
}

#include <cmath>

// Checka se a const PI já foi declarada, caso não tenha sido ela é declarada.
#ifndef PI 
#define PI 3.14
#endif

// Const CIRCUNFERENCIA_H é apenas uma const de controle para sabermos se o TAD já foi declarado.
#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H
struct Circunferencia{
    double xc,yc,raio;
    
    Circunferencia(double, double, double);
    double calcularArea();
    bool possuiIntersecao(Circunferencia*c);    
};
#endif

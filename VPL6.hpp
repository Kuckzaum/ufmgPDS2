#ifndef INDICE
#define INDICE

#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <set>

using namespace std;

struct indice {
    string word;
    int reps;
    float percentage;

    indice(string,int,float);

    // Antiga solução calculando a porcentagem por método em vez de função
    // float percentage(int total);
};

#endif
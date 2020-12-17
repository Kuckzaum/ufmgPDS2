#include "VPL6.hpp"

indice::indice(string word,int reps, float percentage) {
    this->word = word;
    this->reps = reps;
    this->percentage = percentage;
}

// Antiga solução calculando a porcentagem por método em vez de função
// float indice::percentage(int total) {
//     float _reps = this->reps;
//     float _total= total;
//     return _reps/_total;
// }

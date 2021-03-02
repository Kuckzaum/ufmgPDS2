#include "Ponto4D.hpp"

std::string Ponto4D::to_string() const
{
    return "(" + std::to_string(this->getX()) + "," + std::to_string(this->getY()) + "," + std::to_string(this->getZ()) + "," + std::to_string(this->getW()) + ")";
}

double Ponto4D::distancia(Ponto *p) const
{
    Ponto4D* point = dynamic_cast<Ponto4D *>(p);
    return sqrt(pow(this->getX() - point->getX(), 2) + pow(this->getY() - point->getY(), 2) + pow(this->getZ() - point->getZ(), 2) + pow(this->getW() - point->getW(), 2));
}

#include "Ponto3D.hpp"

std::string Ponto3D::to_string() const
{
    return "(" + std::to_string(this->getX()) + "," + std::to_string(this->getY()) + "," + std::to_string(this->getZ()) + ")";
}

double Ponto3D::distancia(Ponto *p) const
{
    Ponto3D* point = dynamic_cast<Ponto3D *>(p);
    return sqrt(pow(this->getX() - point->getX(), 2) + pow(this->getY() - point->getY(), 2)+ pow(this->getZ() - point->getZ(), 2));
}

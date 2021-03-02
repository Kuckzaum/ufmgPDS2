#include "Ponto2D.hpp"

std::string Ponto2D::to_string() const
{
    return "(" + std::to_string(this->getX()) + "," + std::to_string(this->getY()) + ")";
}

double Ponto2D::distancia(Ponto *p) const
{
    Ponto2D* point = dynamic_cast<Ponto2D *>(p);
    return sqrt(pow(this->getX() - point->getX(), 2) + pow(this->getY() - point->getY(), 2));
}

void Ponto2D::converteParaPolar()
{
    double r = sqrt(pow(this->getX(), 2) + pow(this->getY(), 2));
    double theta = atan(this->getY() / this->getX());
    this->_x = r;
    this->_y = theta;
}

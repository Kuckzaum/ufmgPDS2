#include "OpacidadeDecorator.hpp"

std::string OpacidadeDecorator::desenha()
{
    std::string out = "";
    if (this->getOpacidade() > 0 && this->getOpacidade() <= 0.33)
    {
        return FormaDecorator::desenha() + "\n- opacidade: baixa";
    }
    else if (this->getOpacidade() > 0.33 && this->getOpacidade() <= 0.66)
    {
        return FormaDecorator::desenha() + "\n- opacidade: média" ;
    }
    else if (this->getOpacidade() > 0.66 && this->getOpacidade() <= 1)
    {
        return FormaDecorator::desenha() + "\n- opacidade: alta ";
    } else {
        return FormaDecorator::desenha();
    }
}

void OpacidadeDecorator::setOpacidade(double opacidade)
{
    this->_opacidade = opacidade;
}

double OpacidadeDecorator::getOpacidade()
{
    return this->_opacidade;
}

#include "circulo.hpp"

Circulo::Circulo()
{
    this->raio = 0;
}

void Circulo::setRaio(float r) {
    this->raio = r;
}

float Circulo::getRaio() {
    return this->raio;
}

double Circulo::calculaComprimento() {
    return (2 * 3.14159 * this->raio);
}

double Circulo::calculaArea() {
    return (3.14159 * this->raio * this->raio);
}

Circulo::~Circulo()
{
    //dtor
}

#include "circulo.hpp"
#include "math.h"

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

float Circulo::calculaComprimento() {
    return (2 * 3.14159 * this->raio);
}

float Circulo::calculaArea() {
    return (3.14159 * pow(this->raio, 2));
}

float Circulo::calculaAreaE() {
    return (4 * 3.14159 * pow(this->raio, 2));
}

float Circulo::calculaVolumeE() {
    return ((4 * 3.14159 * pow(this->raio, 3)) / 3);
}

Circulo::~Circulo()
{
    //dtor
}

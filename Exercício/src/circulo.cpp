#include "circulo.hpp"
#include "math.h"

Circulo::Circulo()
{
    this->raio = 0;
}

void Circulo::setRaio(float r) {
    this->raio = r;
}

void Circulo::setAlturaC(float h) {
    this->altura = h;
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

float Circulo::getAlturaC() {
    return this->altura;
}

float Circulo::calculaGeratrizC() {
    return (sqrt(pow(this->raio, 2) + pow(this->altura, 2)));
}

float Circulo::calculaAreaLatC() {
    return (3.14159 * this->raio * sqrt(pow(this->raio, 2) + pow(this->altura, 2)));
}

float Circulo::calculaAreaTotC() {
    return (3.14159 * this->raio * (sqrt(pow(this->raio, 2) + pow(this->altura, 2)) + this->raio));
}

float Circulo::calculaVolumeC() {
    return ((3.14159 * pow(this->raio, 2) * this->altura) / 3);
}

Circulo::~Circulo()
{
    //dtor
}

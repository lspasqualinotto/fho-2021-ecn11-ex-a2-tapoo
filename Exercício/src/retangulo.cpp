#include "retangulo.hpp"

Retangulo::Retangulo() {
    this->comprimento = 0;
    this->altura = 0;
}

void Retangulo::setComprimento(float l) {
    this->comprimento = l;
}

void Retangulo::setAltura(float h) {
    this->altura = h;
}

float Retangulo::getComprimento() {
    return this->comprimento;
}

float Retangulo::getAltura() {
    return this->altura;
}

float Retangulo::calculaPerimetro() {
    return ((2 * this->comprimento) + (2 * this->altura));
}

float Retangulo::calculaArea() {
    return (this->comprimento * this->altura);
}

Retangulo::~Retangulo()
{
    //dtor
}

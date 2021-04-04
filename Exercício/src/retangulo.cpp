#include "retangulo.hpp"
#include "math.h"

Retangulo::Retangulo() {
    this->comprimento = 0;
    this->altura = 0;
    this->largura = 0;
}

void Retangulo::setComprimento(float c) {
    this->comprimento = c;
}

void Retangulo::setAltura(float h) {
    this->altura = h;
}

void Retangulo::setLarguraP(float l) {
    this->largura = l;
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

float Retangulo::calculaDiagonal() {
    return (sqrt(pow(this->comprimento, 2 ) + pow(this->altura, 2)));
}

float Retangulo::getLarguraP() {
    return this->largura;
}

float Retangulo::calculaPerimetroP() {
    return ((4 * this->comprimento) + (4 * this->altura) + (4 * this->largura));
}

float Retangulo::calculaAreaTotalP() {
    return ((2 * this->comprimento * this->altura) + (2 * this->comprimento * this->largura) + (2 * this->altura * this->largura));
}

float Retangulo::calculaVolumeP() {
    return (this->comprimento * this->altura * this->largura);
}

float Retangulo::calculaDiagonalP() {
    return (sqrt(pow(this->comprimento, 2 ) + pow(this->altura, 2) + pow(this->largura, 2)));
}

Retangulo::~Retangulo()
{
    //dtor
}

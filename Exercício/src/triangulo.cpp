#include "triangulo.hpp"
#include "math.h"

Triangulo::Triangulo() {
    this->lado = 0;
}

void Triangulo::setLado(float l) {
    this->lado = l;
}

void Triangulo::setAltura(float h) {
    this->altura = h;
}

void Triangulo::setAlturaPBQ(float hp) {
    this->alturaPBQ = hp;
}

float Triangulo::getLado() {
    return this->lado;
}

float Triangulo::getAltura() {
    return this->altura;
}

float Triangulo::calculaAltura() {
    return ((this->lado / 2) * sqrt(3));
}

float Triangulo::calculaPerimetro() {
    return (3 * this->lado);
}

float Triangulo::calculaArea() {
    return ((pow(this->lado, 2) * sqrt(3)) / 4);
}

float Triangulo::getAlturaPBQ() {
    return this->alturaPBQ;
}

float Triangulo::calculaArea2() {
    return ((this->lado * this->altura) / 2);
}

Triangulo::~Triangulo()
{
    //dtor
}

#include "triangulo.hpp"
#include "math.h"

Triangulo::Triangulo() {
    this->lado = 0;
}

void Triangulo::setLado(float l) {
    this->lado = l;
}

float Triangulo::getLado() {
    return this->lado;
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

Triangulo::~Triangulo()
{
    //dtor
}

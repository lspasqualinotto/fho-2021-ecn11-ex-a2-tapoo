#include "triangulo.hpp"

Triangulo::Triangulo() {
    this->base = 0;
    this->altura = 0;
}

void Triangulo::setBase(float b) {
    this->base = b;
}

void Triangulo::setAltura(float h) {
    this->altura = h;
}

float Triangulo::getBase() {
    return this->base;
}

float Triangulo::getAltura() {
    return this->altura;}


Triangulo::~Triangulo()
{
    //dtor
}

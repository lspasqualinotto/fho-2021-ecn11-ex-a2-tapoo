#include "trapezio.hpp"

Trapezio::Trapezio() {
    this->baseMaior = 0;
    this->baseMenor = 0;
    this->altura = 0;
}

void Trapezio::setBaseMaior(float bM) {
    this->baseMaior = bM;
}

void Trapezio::setBaseMenor(float bm) {
    this->baseMenor = bm;
}

void Trapezio::setAltura(float h) {
    this->altura = h;
}

float Trapezio::getBaseMaior() {
    return this->baseMaior;
}

float Trapezio::getBaseMenor() {
    return this->baseMenor;
}

float Trapezio::getAltura() {
    return this->altura;
}

float Trapezio::calculaArea() {
    return (((this->baseMaior + this->baseMenor) * this->altura)/2);
}

float Trapezio::calculaBaseMedia() {
    return ((this->baseMaior + this->baseMenor) / 2);
}

float Trapezio::calculaMediana() {
    return ((this->baseMaior - this->baseMenor) / 2);
}

Trapezio::~Trapezio()
{
    //dtor
}

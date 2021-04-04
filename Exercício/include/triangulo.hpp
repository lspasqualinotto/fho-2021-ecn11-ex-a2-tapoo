#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

class Triangulo {
    public:
        Triangulo();
        void setLado(float l);
        float getLado();
        float calculaAltura();
        float calculaPerimetro();
        float calculaArea();
        virtual ~Triangulo();

    private:
        float lado;
};

#endif // TRIANGULO_HPP

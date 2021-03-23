#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

class Triangulo {
    public:
        Triangulo();
        void setBase(float b);
        void setAltura(float h);
        float getBase();
        float getAltura();
        float calculaArea();
        virtual ~Triangulo();

    private:
        float base;
        float altura;
};

#endif // TRIANGULO_HPP

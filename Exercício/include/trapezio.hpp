#ifndef TRAPEZIO_HPP
#define TRAPEZIO_HPP

class Trapezio
{
    public:
        Trapezio();
        void setBaseMaior(float bM);
        void setBaseMenor(float bm);
        void setAltura(float h);
        float getBaseMaior();
        float getBaseMenor();
        float getAltura();
        float calculaArea();
        float calculaBaseMedia();
        float calculaMediana();
        virtual ~Trapezio();

    private:
        float baseMaior;
        float baseMenor;
        float altura;
};

#endif // TRAPEZIO_HPP

// Herenças básica de um trapézio.

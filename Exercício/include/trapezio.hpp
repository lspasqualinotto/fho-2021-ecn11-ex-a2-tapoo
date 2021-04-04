// Heran�as do trap�zio. Utilizados para a geometria "Trap�zio"
#ifndef TRAPEZIO_HPP
#define TRAPEZIO_HPP

class Trapezio {
    public:
        Trapezio(); // Fun��o padr�o
        void setBaseMaior(float bM); // Fun��o para salvar valor da vari�vel
        void setBaseMenor(float bm); // Fun��o para salvar valor da vari�vel
        void setAltura(float h); // Fun��o para salvar valor da vari�vel
        float getBaseMaior(); // Fun��o para retornar valor da vari�vel
        float getBaseMenor(); // Fun��o para retornar valor da vari�vel
        float getAltura(); // Fun��o para retornar valor da vari�vel
        float calculaArea(); // Fun��o para calcular a �rea do trap�zio
        float calculaBaseMedia(); // Fun��o para calcular a base m�dia do trap�zio
        float calculaMediana(); // Fun��o para calcular a mediana do trap�zio
        virtual ~Trapezio(); // Fun��o padr�o

    private:
        float baseMaior; // Vari�vel para a base maior do trap�zio
        float baseMenor; // Vari�vel para a base menor do trap�zio
        float altura; // Vari�vel para a altura do trap�zio
};

#endif // TRAPEZIO_HPP

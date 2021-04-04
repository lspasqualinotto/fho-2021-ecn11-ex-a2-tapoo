// Heran�as do tri�ngulo. Utilizados para as geometrias "Tri�ngulo Equil�tero" e "Pir�mide de Base Quadrada"
#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

class Triangulo {
    public:
        Triangulo(); // Fun��o padr�o
        void setLado(float l); // Fun��o para salvar valor da vari�vel
        void setAltura(float h); // Fun��o para salvar valor da vari�vel
        void setAlturaPBQ(float hp); // Fun��o para salvar valor da vari�vel
        float getLado(); // Fun��o para retornar valor da vari�vel
        float getAltura(); // Fun��o para retornar valor da vari�vel
        float calculaAltura(); // Fun��o para calcular a altura do tri�ngulo
        float calculaPerimetro(); // Fun��o para calcular o per�metro do tri�ngulo
        float calculaArea(); // Fun��o para calcular a �rea do tri�ngulo
        float getAlturaPBQ(); // Fun��o para retornar valor da vari�vel
        float calculaArea2(); // Fun��o para calcular a �rea do tri�ngulo caso haja a altura
        virtual ~Triangulo(); // Fun��o padr�o

    private:
        float lado; // Vari�vel para o comprimento do lado do tri�ngulo
        float altura; // Vari�vel para a altura do tri�ngulo
        float alturaPBQ; // Vari�vel para a altura da pir�mide de base quadrada
};

#endif // TRIANGULO_HPP

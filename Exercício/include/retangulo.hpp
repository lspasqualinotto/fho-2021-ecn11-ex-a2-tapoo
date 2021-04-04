// Heran�as do ret�ngulo. Utilizados para as geometrias "Ret�ngulo", "Paralelep�pedo" e "Pir�mide de Base Quadrada"
#ifndef RETANGULO_HPP
#define RETANGULO_HPP

class Retangulo {
    public:
        Retangulo(); // Fun��o padr�o
        void setComprimento(float c); // Fun��o para salvar valor da vari�vel
        void setAltura(float h); // Fun��o para salvar valor da vari�vel
        void setLarguraP(float l); // Fun��o para salvar valor da vari�vel
        float getComprimento(); // Fun��o para retornar valor da vari�vel
        float getAltura(); // Fun��o para retornar valor da vari�vel
        float calculaPerimetro(); // Fun��o para calcular o per�metro do ret�ngulo
        float calculaArea(); // Fun��o para calcular a �rea do ret�ngulo
        float calculaDiagonal(); // Fun��o para calcular a diagonal do ret�ngulo
        float getLarguraP(); // Fun��o para retornar valor da vari�vel
        float calculaPerimetroP(); // Fun��o para calcular o per�metro do paralelep�pedo
        float calculaAreaTotalP(); // Fun��o para calcular a �rea total do paralelep�pedo
        float calculaVolumeP();  // Fun��o para calcular o volume do paralelep�pedo
        float calculaDiagonalP(); // Fun��o para calcular as diagonais do paralelep�pedo
        virtual ~Retangulo(); // Fun��o padr�o

    private:
        float comprimento; // Vari�vel para o comprimento do ret�ngulo
        float altura; // Vari�vel para a altura do ret�ngulo
        float largura; // Vari�vel para a largura do paralelep�pedo
};

#endif // RETANGULO_HPP

// Heran�as do c�rculo. Utilizados para as geometrias "C�rculo", "Esfera" e "Cone"
#ifndef CIRCULO_HPP
#define CIRCULO_HPP

class Circulo {
    public:
        Circulo(); // Fun��o padr�o
        void setRaio(float r); // Fun��o para salvar valor da vari�vel
        void setAlturaC(float h); // Fun��o para salvar o valor da vari�vel
        float getRaio(); // Fun��o para retornar valor da vari�vel
        float calculaComprimento(); // Fun��o para calcular o comprimento do c�rculo
        float calculaArea(); // Fun��o para calcular a �rea do c�rculo
        float calculaAreaE(); // Fun��o para calcular a �rea da esfera
        float calculaVolumeE(); // Fun��o para calcular o volume da esfera
        float getAlturaC(); // Fun��o para retornar valor da vari�vel
        float calculaGeratrizC(); // Fun��o para calcular a geratriz do cone
        float calculaAreaLatC(); // Fun��o para calcular a �rea lateral do cone
        float calculaAreaTotC(); // Fun��o para calcular a �rea total do cone
        float calculaVolumeC(); // Fun��o para calcular o volume do cone
        virtual ~Circulo(); // Fun��o padr�o

    private:
        float raio; // Vari�vel para o raio do c�rculo ou esfera
        float altura; // Vari�vel para a altura do cone
};

#endif // CIRCULO_HPP

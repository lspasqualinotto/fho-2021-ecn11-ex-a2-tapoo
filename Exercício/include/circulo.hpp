// Heranças do círculo. Utilizados para as geometrias "Círculo", "Esfera" e "Cone"
#ifndef CIRCULO_HPP
#define CIRCULO_HPP

class Circulo {
    public:
        Circulo(); // Função padrão
        void setRaio(float r); // Função para salvar valor da variável
        void setAlturaC(float h); // Função para salvar o valor da variável
        float getRaio(); // Função para retornar valor da variável
        float calculaComprimento(); // Função para calcular o comprimento do círculo
        float calculaArea(); // Função para calcular a área do círculo
        float calculaAreaE(); // Função para calcular a área da esfera
        float calculaVolumeE(); // Função para calcular o volume da esfera
        float getAlturaC(); // Função para retornar valor da variável
        float calculaGeratrizC(); // Função para calcular a geratriz do cone
        float calculaAreaLatC(); // Função para calcular a área lateral do cone
        float calculaAreaTotC(); // Função para calcular a área total do cone
        float calculaVolumeC(); // Função para calcular o volume do cone
        virtual ~Circulo(); // Função padrão

    private:
        float raio; // Variável para o raio do círculo ou esfera
        float altura; // Variável para a altura do cone
};

#endif // CIRCULO_HPP

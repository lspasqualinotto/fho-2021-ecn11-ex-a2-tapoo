// Heranças do retângulo. Utilizados para as geometrias "Retângulo", "Paralelepípedo" e "Pirâmide de Base Quadrada"
#ifndef RETANGULO_HPP
#define RETANGULO_HPP

class Retangulo {
    public:
        Retangulo(); // Função padrão
        void setComprimento(float c); // Função para salvar valor da variável
        void setAltura(float h); // Função para salvar valor da variável
        void setLarguraP(float l); // Função para salvar valor da variável
        float getComprimento(); // Função para retornar valor da variável
        float getAltura(); // Função para retornar valor da variável
        float calculaPerimetro(); // Função para calcular o perímetro do retângulo
        float calculaArea(); // Função para calcular a área do retângulo
        float calculaDiagonal(); // Função para calcular a diagonal do retângulo
        float getLarguraP(); // Função para retornar valor da variável
        float calculaPerimetroP(); // Função para calcular o perímetro do paralelepípedo
        float calculaAreaTotalP(); // Função para calcular a área total do paralelepípedo
        float calculaVolumeP();  // Função para calcular o volume do paralelepípedo
        float calculaDiagonalP(); // Função para calcular as diagonais do paralelepípedo
        virtual ~Retangulo(); // Função padrão

    private:
        float comprimento; // Variável para o comprimento do retângulo
        float altura; // Variável para a altura do retângulo
        float largura; // Variável para a largura do paralelepípedo
};

#endif // RETANGULO_HPP

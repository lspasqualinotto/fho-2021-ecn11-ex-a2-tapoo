// Heranças do triângulo. Utilizados para as geometrias "Triângulo Equilátero" e "Pirâmide de Base Quadrada"
#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

class Triangulo {
    public:
        Triangulo(); // Função padrão
        void setLado(float l); // Função para salvar valor da variável
        void setAltura(float h); // Função para salvar valor da variável
        void setAlturaPBQ(float hp); // Função para salvar valor da variável
        float getLado(); // Função para retornar valor da variável
        float getAltura(); // Função para retornar valor da variável
        float calculaAltura(); // Função para calcular a altura do triângulo
        float calculaPerimetro(); // Função para calcular o perímetro do triângulo
        float calculaArea(); // Função para calcular a área do triângulo
        float getAlturaPBQ(); // Função para retornar valor da variável
        float calculaArea2(); // Função para calcular a área do triângulo caso haja a altura
        virtual ~Triangulo(); // Função padrão

    private:
        float lado; // Variável para o comprimento do lado do triângulo
        float altura; // Variável para a altura do triângulo
        float alturaPBQ; // Variável para a altura da pirâmide de base quadrada
};

#endif // TRIANGULO_HPP

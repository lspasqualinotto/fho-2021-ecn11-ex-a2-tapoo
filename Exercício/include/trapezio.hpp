// Heranças do trapézio. Utilizados para a geometria "Trapézio"
#ifndef TRAPEZIO_HPP
#define TRAPEZIO_HPP

class Trapezio {
    public:
        Trapezio(); // Função padrão
        void setBaseMaior(float bM); // Função para salvar valor da variável
        void setBaseMenor(float bm); // Função para salvar valor da variável
        void setAltura(float h); // Função para salvar valor da variável
        float getBaseMaior(); // Função para retornar valor da variável
        float getBaseMenor(); // Função para retornar valor da variável
        float getAltura(); // Função para retornar valor da variável
        float calculaArea(); // Função para calcular a área do trapézio
        float calculaBaseMedia(); // Função para calcular a base média do trapézio
        float calculaMediana(); // Função para calcular a mediana do trapézio
        virtual ~Trapezio(); // Função padrão

    private:
        float baseMaior; // Variável para a base maior do trapézio
        float baseMenor; // Variável para a base menor do trapézio
        float altura; // Variável para a altura do trapézio
};

#endif // TRAPEZIO_HPP

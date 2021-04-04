#ifndef RETANGULO_HPP
#define RETANGULO_HPP

class Retangulo {
    public:
        Retangulo();
        void setComprimento(float c);
        void setAltura(float h);
        void setLarguraP(float l);
        float getComprimento();
        float getAltura();
        float calculaPerimetro();
        float calculaArea();
        float calculaDiagonal();
        float getLarguraP();
        float calculaPerimetroP();
        float calculaAreaTotalP();
        float calculaVolumeP();
        float calculaDiagonalP();
        virtual ~Retangulo();

    private:
        float comprimento;
        float altura;
        float largura;
};

#endif // RETANGULO_HPP

// Herenças básica de um retângulo.

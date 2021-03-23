#ifndef RETANGULO_HPP
#define RETANGULO_HPP

class Retangulo {
    public:
        Retangulo();
        void setComprimento(float l);
        void setAltura(float h);
        float getComprimento();
        float getAltura();
        float calculaPerimetro();
        float calculaArea();
        virtual ~Retangulo();

    private:
        float comprimento;
        float altura;
};

#endif // RETANGULO_HPP

// Herenças básica de um retângulo.

#ifndef CIRCULO_HPP
#define CIRCULO_HPP

class Circulo {
    public:
        Circulo();
        void setRaio(float r);
        float getRaio();
        double calculaComprimento();
        double calculaArea();
        virtual ~Circulo();

    private:
        float raio;
};

#endif // CIRCULO_HPP

// Heren�as b�sica de um circulo

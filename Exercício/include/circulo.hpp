#ifndef CIRCULO_HPP
#define CIRCULO_HPP

class Circulo {
    public:
        Circulo();
        void setRaio(float r);
        float getRaio();
        float calculaComprimento();
        float calculaArea();
        float calculaAreaE();
        float calculaVolumeE();
        virtual ~Circulo();

    private:
        float raio;
};

#endif // CIRCULO_HPP

// Herenças básica de um circulo

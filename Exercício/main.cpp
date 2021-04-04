#include "retangulo.hpp"
#include "circulo.hpp"
#include "triangulo.hpp"
#include "trapezio.hpp"

#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale( LC_ALL, "" );

    int op0 = -1, op1 = -1, op2 = -1;

    // Menu Principal
    while (op0 != 0) {
        cout << "==============================\n\t  BEM-VINDO!\n==============================" << endl;
        cout << "1. Geometrias 2D" << endl;
        cout << "2. Geometrias 3D" << endl;
        cout << "0. Sair" << endl;
        cout << "Opção: ";
        cin >> op0;

        // Mensagem de escolha de Geometrias 2D
        if (op0 == 1) {
            cout << "\nVocê escolheu 'Geometrias 2D'" << endl;
            cout << "==============================\n" << endl;
            system("pause");
            system ("cls");

            // Menu das Geometrias 2D
            while (op1 != 0) {
                cout << "==============================\n\tGEOMETRIAS 2D\n==============================" << endl;
                cout << "1. Retângulo" << endl;
                cout << "2. Círculo" << endl;
                cout << "3. Triângulo Equilátero" << endl;
                cout << "4. Trapézio" << endl;
                cout << "0. Voltar" << endl;
                cout << "Opção: ";
                cin >> op1;

                // Menu do Retângulo
                if (op1 == 1) {
                    float c, h;
                    Retangulo r1;

                    cout << "\n==============================\n\t  RETÂNGULO\n==============================" << endl;
                    cout << "Comprimento: ";
                    cin >> c;
                    while(c <= 0) {
                        cout << "Erro! 'Comprimento' não pode ser menor ou igual a zero." << endl;
                        cout << "\nComprimento: ";
                        cin >> c;
                    }

                    cout << "Altura: ";
                    cin >> h;
                    while(h <= 0) {
                        cout << "Erro! 'Altura' não pode ser menor ou igual a zero." << endl;
                        cout << "\nAltura: ";
                        cin >> h;
                    }

                    r1.setComprimento(c);
                    r1.setAltura(h);

                    cout << "\n==============================\n\t INFORMAÇÕES\n============================== " << endl;
                    cout << "Comprimento:\t" << r1.getComprimento() << "u" << endl;
                    cout << "Altura:\t\t" << r1.getAltura() << "u" << endl;
                    cout << "Perímetro:\t" << r1.calculaPerimetro() << "u" << endl;
                    cout << "Área:\t\t" << r1.calculaArea() << "u²" << endl;
                    cout << "Diagonal:\t" << r1.calculaDiagonal() << "u" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                // Menu do Círculo
                else if (op1 == 2) {
                    float r;
                    Circulo c1;

                    cout << "\n==============================\n\t   CIRCULO\n==============================" << endl;
                    cout << "Raio: ";
                    cin >> r;
                    while(r <= 0) {
                        cout << "Erro! 'Raio' não pode ser menor ou igual a zero." << endl;
                        cout << "\nRaio: ";
                        cin >> r;
                    }

                    c1.setRaio(r);

                    cout << "\n==============================\n\t INFORMAÇÕES\n============================== " << endl;
                    cout << "Raio:\t\t" << c1.getRaio() << "u" << endl;
                    cout << "Comprimento:\t" << c1.calculaComprimento() << "u" << endl;
                    cout << "Área:\t\t" << c1.calculaArea() << "u²" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                // Menu do Triângulo Equilátero
                else if (op1 == 3) {
                    float l;
                    Triangulo t1;

                    cout << "\n==============================\n     TRIÂNGULO EQUILÁTERO\n==============================" << endl;
                    cout << "Lado: ";
                    cin >> l;
                    while(l <= 0) {
                        cout << "Erro! 'Lado' não pode ser menor ou igual a zero." << endl;
                        cout << "\nLado: ";
                        cin >> l;
                    }


                    t1.setLado(l);

                    cout << "\n==============================\n\t INFORMAÇÕES\n============================== " << endl;
                    cout << "Lado:\t\t" << t1.getLado() << "u" << endl;
                    cout << "Altura:\t\t" << t1.calculaAltura() << "u" << endl;
                    cout << "Perímetro:\t" << t1.calculaPerimetro() << "u" << endl;
                    cout << "Área:\t\t" << t1.calculaArea() << "u²" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                // Menu do Trapézio
                else if (op1 == 4) {
                    float bM, bm, h;
                    Trapezio t1;

                    cout << "\n==============================\n\t  TRAPÉZIO\n==============================" << endl;
                    cout << "Base Maior: ";
                    cin >> bM;
                    while(bM <= 0) {
                        cout << "Erro! 'Base Maior' não pode ser menor ou igual a zero." << endl;
                        cout << "\nBase Maior: ";
                        cin >> bM;
                    }

                    cout << "Base Menor: ";
                    cin >> bm;
                    while(bm <= 0) {
                        cout << "Erro! 'Base Menor' não pode ser menor ou igual a zero." << endl;
                        cout << "\nBase Menor: ";
                        cin >> bm;
                    }

                    cout << "Altura: ";
                    cin >> h;
                    while(h <= 0) {
                        cout << "Erro! 'Altura' não pode ser menor ou igual a zero." << endl;
                        cout << "\nAltura: ";
                        cin >> h;
                    }

                    t1.setBaseMaior(bM);
                    t1.setBaseMenor(bm);
                    t1.setAltura(h);

                    cout << "\n==============================\n\t INFORMAÇÕES\n============================== " << endl;
                    cout << "Base Maior:\t" << t1.getBaseMaior() << "u" << endl;
                    cout << "Base Menor:\t" << t1.getBaseMenor() << "u" << endl;
                    cout << "Altura:\t\t" << t1.getAltura() << "u" << endl;
                    cout << "Área:\t\t" << t1.calculaArea() << "u²" << endl;
                    cout << "Base Média:\t" << t1.calculaBaseMedia() << "u" << endl;
                    cout << "Mediana:\t" << t1.calculaMediana() << "u" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                // Mensagem de erro para opção inválida
                else if (op1 < 0 || op1 > 4) {
                    cout << "\n==============================\n\t   INVÁLIDO\n==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                // Mensagem de retorno
                else {
                    op1 = -1;
                    op0 = -1;
                    cout << "\nVoltando...\n==============================\n" << endl;
                    system("pause");
                    system("cls");
                    break;
                }
            }
        }

        // Mensagem de escolha de Geometrias 3D
        else if (op0 == 2) {
            cout << "\nVocê escolheu 'Geometrias 3D'" << endl;
            cout << "==============================\n" << endl;
            system("pause");
            system ("cls");

            // Menu das Geometrias 3D
            while (op2 != 0) {
                cout << "==============================\n\tGEOMETRIAS 3D\n==============================" << endl;
                cout << "1. Paralelepípedo" << endl;
                cout << "2. Esfera" << endl;
                cout << "3. Cone" << endl;
                cout << "4. Pirâmide de Base Quadrada" << endl;
                cout << "0. Voltar" << endl;
                cout << "Opção: ";
                cin >> op2;

                // Menu do Paralelepípedo
                if (op2 == 1) {
                    float c, h, l;
                    Retangulo p1;

                    cout << "\n==============================\n\tPARALELEPÍPEDO\n==============================" << endl;
                    cout << "Comprimento: ";
                    cin >> c;
                    while(c <= 0) {
                        cout << "Erro! 'Comprimento' não pode ser menor ou igual a zero." << endl;
                        cout << "\nComprimento: ";
                        cin >> c;
                    }

                    cout << "Altura: ";
                    cin >> h;
                    while(h <= 0) {
                        cout << "Erro! 'Altura' não pode ser menor ou igual a zero." << endl;
                        cout << "\nAltura: ";
                        cin >> h;
                    }

                    cout << "Largura: ";
                    cin >> l;
                    while(l <= 0) {
                        cout << "Erro! 'Largura' não pode ser menor ou igual a zero." << endl;
                        cout << "\nLargura: ";
                        cin >> l;
                    }

                    p1.setComprimento(c);
                    p1.setAltura(h);
                    p1.setLarguraP(l);

                    cout << "\n==============================\n\t INFORMAÇÕES\n============================== " << endl;
                    cout << "Comprimento:\t" << p1.getComprimento() << "u" << endl;
                    cout << "Altura:\t\t" << p1.getAltura() << "u" << endl;
                    cout << "Largura:\t" << p1.getLarguraP() << "u" << endl;
                    cout << "Perímetro:\t" << p1.calculaPerimetroP() << "u" << endl;
                    cout << "Área Total:\t" << p1.calculaAreaTotalP() << "u²" << endl;
                    cout << "Volume:\t\t" << p1.calculaVolumeP() << "u³" << endl;
                    cout << "Diagonais:\t" << p1.calculaDiagonalP() << "u" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                // Menu da Esfera
                else if (op2 == 2) {
                    float r;
                    Circulo e1;

                    cout << "\n==============================\n\t    ESFERA\n==============================" << endl;
                    cout << "Raio: ";
                    cin >> r;
                    while(r <= 0) {
                        cout << "Erro! 'Raio' não pode ser menor ou igual a zero." << endl;
                        cout << "\nRaio: ";
                        cin >> r;
                    }

                    e1.setRaio(r);

                    cout << "\n==============================\n\t INFORMAÇÕES\n============================== " << endl;
                    cout << "Raio:\t\t" << e1.getRaio() << "u" << endl;
                    cout << "Área Superf.:\t" << e1.calculaAreaE() << "u²" << endl;
                    cout << "Volume:\t\t" << e1.calculaVolumeE() << "u³" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                // Menu do Cone
                else if (op2 == 3) {
                    float r, h;
                    Circulo c1;

                    cout << "\n==============================\n\t     CONE\n==============================" << endl;
                    cout << "Raio: ";
                    cin >> r;
                    while(r <= 0) {
                        cout << "Erro! 'Raio' não pode ser menor ou igual a zero." << endl;
                        cout << "\nRaio: ";
                        cin >> r;
                    }

                    cout << "Altura: ";
                    cin >> h;
                    while(h <= 0) {
                        cout << "Erro! 'Altura' não pode ser menor ou igual a zero." << endl;
                        cout << "\nAltura: ";
                        cin >> h;
                    }

                    c1.setRaio(r);
                    c1.setAlturaC(h);

                    cout << "\n==============================\n\t INFORMAÇÕES\n============================== " << endl;
                    cout << "Raio:\t\t" << c1.getRaio() << "u" << endl;
                    cout << "Altura:\t\t" << c1.getAlturaC() << "u" << endl;
                    cout << "Geratriz:\t" << c1.calculaGeratrizC() << "u" << endl;
                    cout << "Área da Base:\t" << c1.calculaArea() << "u²" << endl;
                    cout << "Área Lateral:\t" << c1.calculaAreaLatC() << "u²" << endl;
                    cout << "Área Total:\t" << c1.calculaAreaTotC() << "u²" << endl;
                    cout << "Volume:\t\t" << c1.calculaVolumeC() << "u³" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                // Menu da Pirâmide de Base Quadrada
                else if (op2 == 4) {
                    float lb, h, g;
                    Retangulo bp1;
                    Triangulo lp1;

                    cout << "\n==============================\n\t   PIRÂMIDE\n==============================" << endl;
                    cout << "Aresta da Base: ";
                    cin >> lb;
                    while(h <= 0) {
                        cout << "Erro! 'Aresta da Base' não pode ser menor ou igual a zero." << endl;
                        cout << "\nAresta da Base: ";
                        cin >> lb;
                    }

                    cout << "Altura: ";
                    cin >> h;
                    while(h <= 0) {
                        cout << "Erro! 'Altura' não pode ser menor ou igual a zero." << endl;
                        cout << "\nAltura: ";
                        cin >> h;
                    }

                    bp1.setComprimento(lb);
                    bp1.setAltura(lb);

                    g = sqrt(pow(lb/2, 2) + pow(h, 2));
                    lp1.setLado(lb);
                    lp1.setAltura(g);
                    lp1.setAlturaPBQ(h);

                    cout << "\n==============================\n\t INFORMAÇÕES\n============================== " << endl;
                    cout << "Aresta da base:\t" << bp1.getComprimento() << "u" << endl;
                    cout << "Altura:\t\t" << lp1.getAlturaPBQ() << "u" << endl;
                    cout << "Apótema:\t" << lp1.getAltura() << "u" << endl;
                    cout << "Perím. da Base:\t" << bp1.calculaPerimetro() << "u" << endl;
                    cout << "Área da Base:\t" << bp1.calculaArea() << "u²" << endl;
                    cout << "Área Lateral:\t" << lp1.calculaArea2() << "u²" << endl;
                    cout << "Área Lat. Tot.:\t" << 4 * lp1.calculaArea2() << "u²" << endl;
                    cout << "Área Total:\t" << bp1.calculaArea() + 4 * lp1.calculaArea2() << "u²" << endl;
                    cout << "Volume:\t\t" << (bp1.calculaArea() * lp1.getAlturaPBQ()) / 3 << "u³" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                // Mensagem de erro para opção inválida
                else if (op2 < 0 || op2 > 4) {
                    cout << "\n==============================\n\t   INVÁLIDO\n==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                // Mensagem de retorno
                else {
                    op2 = -1;
                    op0 = -1;
                    cout << "\nVoltando...\n==============================\n" << endl;
                    system("pause");
                    system("cls");
                    break;
                }
            }
        }

        // Mensagem de erro para opção inválida
        else if (op0 < 0 || op0 > 2) {
            cout << "\n==============================\n\t   INVÁLIDO\n==============================\n" << endl;
            system("pause");
            system("cls");
        }

        // Mensagem de saída
        else {
            cout << "\n==============================\n\t   OBRIGADO\n==============================" << endl;
            cout << "Desenvolvido por:" << endl;
            cout << "Leonardo de Souza Pasqualinotto - RA 94015" << endl;
            cout << "\nEngenharia da Computação - Período 11 (Noturno)" << endl;
            cout << "Tópicos Avançados em Programação Orientada a Objetos" << endl;
            cout << "Fundação Hermínio Ometto - 2021" << endl;
        }
    }

    /* INÍCIO DOS TESTES

    ----- 2D -----
    Retangulo r1;
    r1.setComprimento(4);
    r1.setAltura(5);
    cout << r1.calculaPerimetro() << endl;
    cout << r1.calculaArea() << endl;
    cout << r1.calculaDiagonal << endl;

    Circulo c1;
    c1.setRaio(5);
    cout << c1.calculaComprimento() << endl;
    cout << c1.calculaArea() << endl;

    Triangulo t1;
    t1.setLado(5);
    cout << t1.calculaAltura() << endl;
    cout << t1.calculaPerimetro() << endl;
    cout << t1.calculaArea() << endl;

    Trapezio tp1;
    tp1.setBaseMaior(1.3);
    tp1.setBaseMenor(0.7);
    tp1.setAltura(1);
    cout << tp1.calculaArea() << endl;
    cout << tp1.calculaBaseMedia() << endl;
    cout << tp1.calculaMediana() << endl;
    ----- 2D -----

    ----- 3D -----
    Retangulo p1;
    p1.setComprimento(3);
    p1.setAltura(4);
    p1.setLarguraP(5);
    cout << p1.calculaPerimetroP() << endl;
    cout << p1.calculaAreaTotalP() << endl;
    cout << p1.calculaVolumeP() << endl;
    cout << p1.calculaDiagonalP() << endl;

    Circulo e1;
    e1.setRaio(5);
    cout << e1.calculaAreaE() << endl;
    cout << e1.calculaVolumeE() << endl;

    Circulo co1;
    co1.setRaio(10);
    co1.setAltura(21);
    cout << co1.calculaArea() << endl;
    cout << co1.calculaAreaLatC() << endl;
    cout << co1.calculaAreaTotC() << endl;
    cout << co1.calculaVolumeC() << endl;

    Retangulo bp1;
    Triangulo lp1;
    float g;
    bp.setComprimento(18);
    bp.setAltura(18);
    lp.setLado(18);
    p1.setAlturaPBQ(12);
    g = sqrt(pow(9, 2) + pow(12, 2);
    lp.setAltura(g);
    cout << bp1.calculaPerimetro() << endl;
    cout << bp1.calculaArea() << endl;
    cout << lp1.calculaArea2() << endl;
    cout << 4 * lp1.calculaArea2() << endl;
    cout << bp1.calculaArea() + 4 * lp1.calculaArea2() << endl;
    cout << (bp1.calculaArea() * lp1.getAlturaPBQ()) / 3 << endl;
    ----- 3D -----

    FIM DOS TESTES */
}

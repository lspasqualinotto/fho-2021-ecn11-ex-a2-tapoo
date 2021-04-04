#include "retangulo.hpp"
#include "circulo.hpp"
#include "triangulo.hpp"
#include "trapezio.hpp"

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale( LC_ALL, "" );

    int op0 = -1, op1 = -1, op2 = -1;

    while (op0 != 0) {
        cout << "==============================\n\t  BEM-VINDO!\n==============================" << endl;
        cout << "1. Geometrias 2D" << endl;
        cout << "2. Geometrias 3D" << endl;
        cout << "0. Sair" << endl;
        cout << "Op��o: ";
        cin >> op0;


        if (op0 == 1) {
            cout << "\nVoc� escolheu 'Geometrias 2D'" << endl;
            cout << "==============================\n" << endl;
            system("pause");
            system ("cls");

            while (op1 != 0) {
                cout << "==============================\n\tGEOMETRIAS 2D\n==============================" << endl;
                cout << "1. Ret�ngulo" << endl;
                cout << "2. C�rculo" << endl;
                cout << "3. Tri�ngulo Equil�tero" << endl;
                cout << "4. Trap�zio" << endl;
                cout << "0. Voltar" << endl;
                cout << "Op��o: ";
                cin >> op1;

                if (op1 == 1) {
                    float c, h;
                    Retangulo r1;

                    cout << "\n==============================\n\t  RET�NGULO\n==============================" << endl;
                    cout << "Comprimento: ";
                    cin >> c;
                    cout << "Altura: ";
                    cin >> h;

                    r1.setComprimento(c);
                    r1.setAltura(h);

                    cout << "\n==============================\n\t INFORMA��ES\n============================== " << endl;
                    cout << "Comprimento:\t" << r1.getComprimento() << "u" << endl;
                    cout << "Altura:\t\t" << r1.getAltura() << "u" << endl;
                    cout << "Per�metro:\t" << r1.calculaPerimetro() << "u" << endl;
                    cout << "�rea:\t\t" << r1.calculaArea() << "u�" << endl;
                    cout << "Diagonal:\t" << r1.calculaDiagonal() << "u" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                else if (op1 == 2) {
                    float r;
                    Circulo c1;

                    cout << "\n==============================\n\t   CIRCULO\n==============================" << endl;
                    cout << "Raio: ";
                    cin >> r;

                    c1.setRaio(r);

                    cout << "\n==============================\n\t INFORMA��ES\n============================== " << endl;
                    cout << "Raio:\t\t" << c1.getRaio() << "u" << endl;
                    cout << "Comprimento:\t" << c1.calculaComprimento() << "u" << endl;
                    cout << "�rea:\t\t" << c1.calculaArea() << "u�" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                else if (op1 == 3) {
                    float l;
                    Triangulo t1;

                    cout << "\n==============================\n     TRI�NGULO EQUIL�TERO\n==============================" << endl;
                    cout << "Lado: ";
                    cin >> l;

                    t1.setLado(l);

                    cout << "\n==============================\n\t INFORMA��ES\n============================== " << endl;
                    cout << "Lado:\t\t" << t1.getLado() << "u" << endl;
                    cout << "Altura:\t\t" << t1.calculaAltura() << "u" << endl;
                    cout << "Per�metro:\t" << t1.calculaPerimetro() << "u" << endl;
                    cout << "�rea:\t\t" << t1.calculaArea() << "u�" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                else if (op1 == 4) {
                    float bM, bm, h;
                    Trapezio t1;

                    cout << "\n==============================\n\t  TRAP�ZIO\n==============================" << endl;
                    cout << "Base Maior: ";
                    cin >> bM;
                    cout << "Base Menor: ";
                    cin >> bm;
                    cout << "Altura: ";
                    cin >> h;

                    t1.setBaseMaior(bM);
                    t1.setBaseMenor(bm);
                    t1.setAltura(h);

                    cout << "\n==============================\n\t INFORMA��ES\n============================== " << endl;
                    cout << "Base Maior:\t" << t1.getBaseMaior() << "u" << endl;
                    cout << "Base Menor:\t" << t1.getBaseMenor() << "u" << endl;
                    cout << "Altura:\t\t" << t1.getAltura() << "u" << endl;
                    cout << "�rea:\t\t" << t1.calculaArea() << "u�" << endl;
                    cout << "Base M�dia:\t" << t1.calculaBaseMedia() << "u" << endl;
                    cout << "Mediana:\t" << t1.calculaMediana() << "u" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                else if (op1 < 0 || op1 > 4) {
                    cout << "\n==============================\n\t   INV�LIDO\n==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

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

        else if (op0 == 2) {
            cout << "\nVoc� escolheu 'Geometrias 3D'" << endl;
            cout << "==============================\n" << endl;
            system("pause");
            system ("cls");

            while (op2 != 0) {
                cout << "==============================\n\tGEOMETRIAS 3D\n==============================" << endl;
                cout << "1. Paralelep�pedo" << endl;
                cout << "2. Esfera" << endl;
                cout << "3. Cone" << endl;
                cout << "4. Pir�mide de base quadrada" << endl;
                cout << "0. Voltar" << endl;
                cout << "Op��o: ";
                cin >> op2;

                if (op2 == 1) {
                    float c, h, l;
                    Retangulo p1;

                    cout << "\n==============================\n\tPARALELEP�PEDO\n==============================" << endl;
                    cout << "Comprimento: ";
                    cin >> c;
                    cout << "Altura: ";
                    cin >> h;
                    cout << "Largura: ";
                    cin >> l;

                    p1.setComprimento(c);
                    p1.setAltura(h);
                    p1.setLarguraP(l);

                    cout << "\n==============================\n\t INFORMA��ES\n============================== " << endl;
                    cout << "Comprimento:\t" << p1.getComprimento() << "u" << endl;
                    cout << "Altura:\t\t" << p1.getAltura() << "u" << endl;
                    cout << "Largura:\t" << p1.getLarguraP() << "u" << endl;
                    cout << "Per�metro:\t" << p1.calculaPerimetroP() << "u" << endl;
                    cout << "�rea Total:\t" << p1.calculaAreaTotalP() << "u�" << endl;
                    cout << "Volume:\t\t" << p1.calculaVolumeP() << "u�" << endl;
                    cout << "Diagonais:\t" << p1.calculaDiagonalP() << "u" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                else if (op2 == 2) {
                    float r;
                    Circulo e1;

                    cout << "\n==============================\n\t    ESFERA\n==============================" << endl;
                    cout << "Raio: ";
                    cin >> r;

                    e1.setRaio(r);

                    cout << "\n==============================\n\t INFORMA��ES\n============================== " << endl;
                    cout << "Raio:\t\t" << e1.getRaio() << "u" << endl;
                    cout << "�rea Superf.:\t" << e1.calculaAreaE() << "u�" << endl;
                    cout << "Volume:\t\t" << e1.calculaVolumeE() << "u�" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                else if (op2 == 3) {

                }

                else if (op2 == 4) {
                        /*
                    float lb, h;
                    Retangulo b1;

                    cout << "\n==============================\n\t   PIR�MIDE\n==============================" << endl;
                    cout << "Aresta da base: ";
                    cin >> lb;
                    cout << "Altura: ";
                    cin >> h;

                    b1.setComprimento(lb);
                    b1.setAltura(lb);

                    cout << "\n==============================\n\t INFORMA��ES\n============================== " << endl;
                    cout << "Aresta da base:\t" << b1.getComprimento() << "u" << endl;
                    cout << "Altura:\t\t" << h << "u" << endl;
                    cout << "Per�m. da base:\t" << b1.calculaPerimetro() << "u" << endl;
                    cout << "�rea da base:\t" << b1.calculaArea() << "u�" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                    */
                }

                else if (op2 < 0 || op2 > 4) {
                    cout << "\n==============================\n\t   INV�LIDO\n==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

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

        else if (op0 < 0 || op0 > 2) {
            cout << "\n==============================\n\t   INV�LIDO\n==============================\n" << endl;
            system("pause");
            system("cls");
        }

        else {
            cout << "\n==============================\n\t   OBRIGADO\n==============================" << endl;
        }
    }


    /* IN�CIO DOS TESTES

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
    Circulo e1;
    e1.setRaio(5)
    cout << e1.calculaAreaE() << endl;
    cout << e1.calculaVolumeE() << endl;

    Retangulo p1;
    p1.setComprimento(3);
    p1.setAltura(4);
    p1.setLarguraP(5);
    cout << p1.calculaPerimetroP() << endl;
    cout << p1.calculaAreaTotalP() << endl;
    cout << p1.calculaVolumeP() << endl;
    cout << p1.calculaDiagonalP() << endl;
    ----- 3D -----

    FIM DOS TESTES */
}

#include "retangulo.hpp"
#include "circulo.hpp"
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
                cout << "3. Tri�ngulo" << endl;
                cout << "4. Trap�zio" << endl;
                cout << "0. Voltar" << endl;
                cout << "Op��o: ";
                cin >> op1;

                if (op1 == 1) {
                    int l, h;
                    Retangulo r1;

                    cout << "\n==============================\n\t  RET�NGULO\n==============================" << endl;
                    cout << "Comprimento: ";
                    cin >> l;
                    cout << "Altura: ";
                    cin >> h;

                    r1.setComprimento(l);
                    r1.setAltura(h);

                    cout << "\n==============================\n\t INFORMA��ES\n============================== " << endl;
                    cout << "Comprimento:\t" << r1.getComprimento() << "u" << endl;
                    cout << "Altura:\t\t" << r1.getAltura() << "u" << endl;
                    cout << "Per�metro:\t" << r1.calculaPerimetro() << "u" << endl;
                    cout << "�rea:\t\t" << r1.calculaArea() << "u�" << endl;
                    cout << "==============================\n" << endl;
                    system("pause");
                    system("cls");
                }

                else if (op1 == 2) {
                    int r;
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

                }

                else if (op2 == 2) {

                }

                else if (op2 == 3) {

                }

                else if (op2 == 4) {

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

    Retangulo r1;
    r1.setComprimento(4);
    r1.setAltura(5);
    cout << r1.calculaPerimetro() << endl;
    cout << r1.calculaArea() << endl;

    Circulo c1;
    c1.setRaio(5);
    cout << c1.calculaComprimento() << endl;
    cout << c1.calculaArea() << endl;

    Trapezio t1;
    t1.setBaseMaior(1.3);
    t1.setBaseMenor(0.7);
    t1.setAltura(1);
    cout << t1.calculaArea() << endl;
    cout << t1.calculaBaseMedia() << endl;
    cout << t1.calculaMediana() << endl;

    FIM DOS TESTES */
}

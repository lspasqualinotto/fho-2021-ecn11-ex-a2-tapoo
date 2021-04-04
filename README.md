# fho-2021-ecn11-ex-a2-tapoo
Exercício - Tópicos Avançados em Programação Orientada a Objetos (Aula 02)

Exercício referente a disciplina de Tópicos Avançados em Programação Orientada a Objetos ministrada pelo professor Mauricio Acconcia Dias da Fundação Hermínio Ometto, curso de Engenharia da Computação Noturno, Período 11.
Este exercício consiste em utilizar de classes, objetos, headers, herenças e polimorfismos para implementar uma ou mais classes que calculem questões relativas a figuras geométricas 2D e 3D.

Inicialmente, a pretenção é criar as seguintes figuras:

- 2D:
  • Retângulo;
  • Circulo;
  • Triângulo Equilátero;
  • Trapézio.

- 3D:
  • Paralelepípedo;
  • Esfera;
  • Cone;
  • Pirâmide de Base Quadrada.

Desenvolvimento:
1. Criação de um menu inicial na função principal;
2. Definição de classes e heranças para as geometrias 2D;
3. Implementação das geometrias 2D e testes;
4. Atualização das classes e heranças para comportarem geometrias 3D. Aqui, resolvi adicionar as geometrias 3D onde observei o melhor encaixe:
  - Paralelepípedo: Composto por retângulos;
  - Esfera e Cone: Compostos necessariamente por uma geometria contendo raio;
  - Pirâmide de Base Quadrada: Composta em sua grande maioria por triângulos.
5. Implementação das geometrias 3D e testes;
6. Atualização do menu inicial;
7. Adição de comentários no código;
8. Revisão geral.

A classe e a herança do trapézio foram os únicos arquivos exclusivos para uma única geometria.

Foi necessário mesclar as classes e as heranças de retângulo e círculo dentro da função principal para o cálculo da pirâmide de base quadrada a fim de evitar a criação de uma nova classe e uma nova herança.

O conteúdo deste trabalho pode ser alterado até a data de entrega, dia 05 de abril de 2021, às 19:00.

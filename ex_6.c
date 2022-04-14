#include <stdio.h>

// Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).

float largura, comprimento, areaHectares;

int main(void) {
  printf("Digite a largura e comprimento do terreno, separados por espaço, em metros: ");
  scanf("%f %f", &largura, &comprimento);

  areaHectares = comprimento * largura / 1e4;

  printf("A área do terreno em hectares é aprox %.2f\n", areaHectares);

  return 0;
}

//gcc ex_6.c -o resu -Wno-unused-result && ./resu
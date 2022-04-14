#include <stdio.h>

// Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.

float largura, comprimento, areaHectares;

int main(void) {
  printf("Digite a largura e comprimento do terreno, separados por espaço, em metros: ");
  scanf("%f %f", &largura, &comprimento);

  areaHectares = comprimento * largura / 1e4;

  printf("A área do terreno em hectares é aprox %.2f\n", areaHectares);

  return 0;
}

//gcc ex_10.c -o resu -Wno-unused-result && ./resu
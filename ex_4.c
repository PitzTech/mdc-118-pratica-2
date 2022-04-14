#include <stdio.h>

// Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).

float largura, comprimento, areaHectares;

int main(void) {
  printf("Digite a largura e comprimento do terreno, separados por espaço, em metros: ");
  scanf("%f %f", &largura, &comprimento);

  areaHectares = comprimento * largura / 1e4;

  printf("A área do terreno em hectares é aprox %.2f\n", areaHectares);

  return 0;
}

//gcc ex_4.c -o resu -Wno-unused-result && ./resu
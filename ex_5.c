#include <stdio.h>

// Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

float largura, comprimento, areaHectares;

int main(void) {
  printf("Digite a largura e comprimento do terreno, separados por espaço, em metros: ");
  scanf("%f %f", &largura, &comprimento);

  areaHectares = comprimento * largura / 1e4;

  printf("A área do terreno em hectares é aprox %.2f\n", areaHectares);

  return 0;
}

//gcc ex_5.c -o resu -Wno-unused-result && ./resu
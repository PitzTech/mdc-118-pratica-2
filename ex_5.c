#include <stdio.h>

// Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

float peso, altura, imc;

int main(void) {
  printf("Digite o peso (kg) e a altura (m) da pessoa, separados por espaço: ");
  scanf("%f %f", &peso, &altura);

  imc = peso / (altura * altura);

  printf("O imc é aprox %.2f\n", imc);

  return 0;
}

//gcc ex_5.c -o resu -Wno-unused-result && ./resu
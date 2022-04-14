#include <stdio.h>

//Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.

float largura, comprimento, areaHectares;

int main(void) {
  printf("Digite a largura e comprimento do terreno, separados por espaço, em metros: ");
  scanf("%f %f", &largura, &comprimento);

  areaHectares = comprimento * largura / 1e4;

  printf("A área do terreno em hectares é aprox %.2f\n", areaHectares);

  return 0;
}

//gcc ex_7.c -o resu -Wno-unused-result && ./resu
#include <stdio.h>

// Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.

#define IR 0.25
#define INSS 0.11

float valorHoraReais, salarioBruto, salarioLiquido, impostosDescontados;
int totalHoras;

int main(void) {
  printf("Digite o valor da hora de trabalho em reais: ");
  scanf("%f", &valorHoraReais);
   printf("Digite o número de horas trabalhadas: ");
  scanf("%d", &totalHoras);

  salarioBruto = valorHoraReais * totalHoras;
  salarioLiquido = salarioBruto * (1 - IR) * (1 - INSS);
  impostosDescontados = salarioBruto - salarioLiquido;

  printf("O salário bruto é de aprox R$ %.2f\n", salarioBruto);
  printf("O salário liquido é de aprox R$ %.2f\n", salarioLiquido);
  printf("Os impostos descontados são aprox R$ %.2f\n", impostosDescontados);


  return 0;
}

//gcc ex_7.c -o resu -Wno-unused-result && ./resu
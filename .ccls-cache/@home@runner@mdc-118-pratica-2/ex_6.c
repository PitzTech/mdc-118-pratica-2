#include <stdio.h>

// Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).

float valorCompraReais, valorFinalReais;
int anoFabricacao, anoDepreciacao;

int main(void) {
  printf("Digite o valor de compra do veículo: ");
  scanf("%f", &valorCompraReais);
  
  printf("Digite o ano de fabricação seguido do de depreciação, separados por espaço: ");
  scanf("%d %d", &anoFabricacao, &anoDepreciacao);

  valorFinalReais = (anoDepreciacao - anoFabricacao) * 0.01 * valorCompraReais;

  printf("O valor depreciado do carro é de aprox R$%.2f\n", valorFinalReais);

  return 0;
}

//gcc ex_6.c -o resu -Wno-unused-result && ./resu
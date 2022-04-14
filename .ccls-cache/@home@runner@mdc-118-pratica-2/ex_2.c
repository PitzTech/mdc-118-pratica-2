#include <stdio.h>

// Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.

int num1, num2, soma, quociente, resto;

int main(void) {
  printf("Digite 2 números separados por espaços: ");
  
  scanf("%d %d", &num1, &num2);

  quociente = num1 / num2;
  resto = num1 % num2;

  printf("A quociente entre n1 e n2 é %d\n", quociente);
  printf("O resto entre n1 e n2 é %d\n", resto);

  return 0;
}

//gcc ex_2.c -o resu -Wno-unused-result && ./resu
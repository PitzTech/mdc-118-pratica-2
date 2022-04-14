#include <stdio.h>

// Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.

int num1, num2, soma, quociente, resto;

int main(void) {
  printf("Digite o dividendo e o divisor separados por espaços: ");
  
  scanf("%d %d", &num1, &num2);

  quociente = num1 / num2;
  resto = num1 % num2;

  printf("Divisão entre %d e %d tem quociente %d e resto %d\n", num1, num2, quociente, resto);

  return 0;
}

//gcc ex_2.c -o resu -Wno-unused-result && ./resu
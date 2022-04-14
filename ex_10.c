#include <stdio.h>

// Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.

unsigned int tableNumber;

int main(void) {
  printf("Digite qual tabuada vc deseja: ");
  scanf("%d", &tableNumber);

  for(int index = 10; index >= 1; index--) {
    printf("%d x %d = %d\n", index, tableNumber, index * tableNumber);
  }
  
  return 0;
}

//gcc ex_10.c -o resu -Wno-unused-result && ./resu
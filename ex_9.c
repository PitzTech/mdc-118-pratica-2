#include <stdio.h>

// Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.

unsigned int asciInteger;

int main(void) {
  printf("Digite um inteiro: ");

  // caracteres começam em 32
  while(!scanf("%d", &asciInteger) || asciInteger > 255 || asciInteger < 32){
     printf("O valor máximo é 255 e minimo 32, tente novamente: "); 
  }

  printf("O caractere correspondente na tabela ACII é o: '%c'\n", asciInteger);

  return 0;
}

//gcc ex_9.c -o resu -Wno-unused-result && ./resu
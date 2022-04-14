#include <stdio.h>

// Faça um programa em C que leia três números reais e imprima a média aritmética destes números.

float numbers[3], media;

int main(void) {

  for(int index = 0; index < 3; index++) {
    scanf("%f", &numbers[index]);
  }

  media = (numbers[0] + numbers[1] + numbers[2]) / 3;

  printf("A media aritmetica é %.2f\n", media);

  return 0;
}

//gcc ex_1.c -o resu -Wno-unused-result && ./resu
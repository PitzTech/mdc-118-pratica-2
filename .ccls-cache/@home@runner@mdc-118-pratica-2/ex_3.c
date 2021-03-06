#include <stdio.h>

// Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).

float celciusTemperature, fahrenheitTemperature;

int main(void) {
  printf("Digite a temperatura em Celcius: ");
  scanf("%f", &celciusTemperature);

  fahrenheitTemperature = celciusTemperature * 9/5 + 32;

  printf("%.2fºC = %.2fºF\n", celciusTemperature, fahrenheitTemperature);

  return 0;
}

//gcc ex_3.c -o resu -Wno-unused-result && ./resu
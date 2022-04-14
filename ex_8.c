#include <stdio.h>
#include <math.h>

// Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).

typedef struct {
  float x, y;
} Ponto;

Ponto p1, p2;
float distancia;

int main(void) {
  printf("Digite as coordenadas x e y do primeiro ponto, separadas por espaço:\n");
  scanf("%f %f", &p1.x, &p1.y);
  
  printf("Digite as coordenadas x e y do segundo ponto, separadas por espaço:\n");
  scanf("%f %f", &p2.x, &p2.y);

  distancia = sqrtf(powf(p2.x - p1.x, 2) + powf(p2.y - p1.y, 2));

  printf("A distancia entre os pontos é aprox %.2f\n", distancia);

  return 0;
}

//gcc ex_8.c -o resu -lm -Wno-unused-result && ./resu
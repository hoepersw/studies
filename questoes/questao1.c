#include <stdio.h>

int main(void) {
  int valorA, valorB, valorC, valorD, resultado;
  
  printf("Insira um valor inteiro para A:\n");
  scanf("%d", &valorA);
  printf("Insira um valor inteiro para B:\n");
  scanf("%d", &valorB);
  printf("Insira um valor inteiro para C:\n");
  scanf("%d", &valorC);
  printf("Insira um valor inteiro para D:\n");
  scanf("%d", &valorD);

  resultado = (valorA + valorB + valorC) * valorD;
    printf("O resultado da expressão (A + B + C) x D é: %i\n", resultado);
      
   printf("FIM");

  return 0;

}

   
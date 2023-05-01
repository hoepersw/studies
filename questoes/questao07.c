#include <stdio.h>

int main(void) {
  float peso, altura, imc;
  
  printf("Insira seu peso\n");
  scanf("%f", &peso);
  printf("Insira sua altura\n");
  scanf("%f", &altura);
 

  imc = peso/(altura*altura);
printf("O seu IMC é: %2.f\n", imc);

  if (imc <= 18.5){
  printf("Abaixo do peso\n");
  } else {
    if (imc >= 18.6){
      printf("Peso normal\n");
    } else {
      if (imc >= 25){
        printf("Acima do peso\n");
     } else {
        if (imc >= 30){
          printf("Obeso\n");    
      } 
      }
    }  
  }

  printf("FIM");

  return 0;

  
 
}
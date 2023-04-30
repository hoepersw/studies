#include <stdio.h>
#include <math.h>

int main(void) {
  int tempoMinutos, valor;
  
  printf("Insira o tempo, de minutos, de permanência no estacionamento:\n");
  scanf("%d", &tempoMinutos);
 


  if (tempoMinutos >= 60){
    printf("O valor do estacionamento é: R$ 2,00\n");
  } else {
      if (tempoMinutos >= 15){
    printf("O valor do estacionamento é: R$ 1,00\n");
    } else {
    printf("O valor do estacionamento é: GRÁTIS\n");
        } 
  }  
   
    
      
   printf("FIM");

  return 0;

  
 
}
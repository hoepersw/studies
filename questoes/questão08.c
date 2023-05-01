#include <stdio.h>
#include <math.h>

int main(void) {
  int numero1, par, impar, resultado;
  
  printf("Insira um número\n");
  scanf("%d", &numero1);
  

  resultado = numero1%2;


  if (resultado == 0){
  par = numero1 + 5;
    printf("Seu resultado é: %i\n", par);
  } else {
    impar = numero1 + 8;
       printf("Seu resultado é: %i\n", impar);
    }    
   
    
      
   printf("FIM");

  return 0;

  
 
}
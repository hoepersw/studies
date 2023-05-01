#include <stdio.h>
#include <math.h>

int main(void) {
  float etiqueta, desconto, total;
  int n;
  
  printf("Insira o valor normal da etiqueta\n");
  scanf("%f", &etiqueta);
  printf("Insira o método de pagamento:\n 1- Quatro vezes no cartão\n 2- Duas vezes no cartão\n 3- À vista no cartão de crédito\n 4-À vista em dinheiro ou debito\n Insira aqui:");
  scanf("%d", &n);
 


  if (n == 1){
        desconto = etiqueta*0.1;
        total = etiqueta+desconto;
        printf("Você escolheu o método de parcelamento em 4x\n 10%% de juros adicionado no valor total da peça\n");
        printf("O valor a pagar é: %2.f\n reais", total);
  } else {
      if (n == 2){
        printf("Você escolheu o método de parcelamento em 2x\n preço normal da peça\n");
        printf("O valor a pagar é: %2.f reais\n", etiqueta);
    } else {
      if (n == 3){
        desconto = etiqueta*0.05;
        total = etiqueta-desconto;
        printf("Você escolheu o método à vista no cartão\n Você recebeu um desconto de 5%%!\n");
        printf("O valor a pagar é: %2.f reais\n", total);
      } else {
        if (n == 4){
        desconto = etiqueta*0.1;
        total = etiqueta-desconto;
        printf("Você escolheu o método à vista em dinheiro ou débito\n Você recebeu um desconto de 10%%!\n");
        printf("O valor a pagar é: %2.f reais\n", total);
        } else {
          printf("Forma de pagamento inválida.");
        }
      }
      }
  }  
   
    
      
   printf("FIM");

  return 0;

  
 
}
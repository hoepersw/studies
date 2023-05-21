#include <stdio.h>
#include <strings.h>

int main(){

  float desconto, compra, valorTotal;
  char saidaDoPrograma = 'S';

  while (saidaDoPrograma == 'S' ){
    printf("Insira o valor da compra efetuada: ");
    scanf("%f", &compra);

    if(compra > 500){
      desconto = compra * 0.20;
      valorTotal = compra - desconto;
    } else {
      desconto = compra * 0.15;
      valorTotal = compra - desconto;
    }
    printf("O valor total a ser pago é de: %.2f\n", valorTotal);
    printf("Deseja continuar no programa? Insira (S) para \"SIM\" ou (N) para \"NÃO\":");
    scanf(" %c", &saidaDoPrograma);
  }

}
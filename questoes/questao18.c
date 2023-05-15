#include <stdio.h>
#include <string.h>

int main() {

  char cliente[75], endereco[75];
  float desconto, valorDaCompra, valorTotal;

  while (1) {
    printf("Insira o nome completo: ");
    scanf("%s", cliente);

    if (strcmp(cliente, "ÚLTIMO") == 0) {
      break;
    }

    printf("\n");
    printf("Insira um endereço: ");
    scanf("%s", endereco);
    printf("\n");
    printf("Insira o valor da compra: ");
    scanf("%f", &valorDaCompra);

    if (valorDaCompra > 500) {
      desconto = valorDaCompra * 0.2;
    } else {
      desconto = valorDaCompra * 0.15;
    }
    valorTotal = valorDaCompra - desconto;

    printf("Cliente: %s\n", cliente);
    printf("Endereço: %s\n", endereco);
    printf("Valor da compra: %.2f\n", valorDaCompra);
    printf("Valor total da compra (com os descontos): %.2f\n", valorTotal);
  }
  printf("FIM");

  return 0;
}
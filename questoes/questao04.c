#include <stdio.h>

int main(){

    float real, dolar;

    printf("Converta Real para Dólar");
    printf("Insira a quantidade desejada em reais:\n");
    scanf("%f", &real);

    dolar = real/3.50;
    printf("A quantidade convertida para dólar é de: U$ %f", dolar);

    return 0;

}
#include <stdio.h>

int main (){

    int contador=0, termos, numeroAtual=8;

    printf("Insira a quantidade de termos para a sequência: ");
    scanf("%d", &termos);

    while (contador < termos){
        
        if(contador % 2 == 0){
            printf("O número atual é: %d\n", numeroAtual);

        } else {
            printf("O número atual é: %d\n", numeroAtual +2);
            numeroAtual += numeroAtual;
        }
        contador++;
    }
    return 0;

}
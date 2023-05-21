#include <stdio.h>

int main(){

    int idade, quantidadeDePessoas = 0, idadeTotal = 0;
    float idadeMedia;
    char saidaDoPrograma = 'S';

    while (saidaDoPrograma == 'S'){
        printf("Insira a idade de uma pessoa: ");
        scanf("%d", &idade);
        quantidadeDePessoas++;

        printf("Deseja continuar no programa? Insira (S) para \"SIM\" ou (N) para \"NÃO\":");
        scanf(" %c", &saidaDoPrograma);

        idadeTotal += idade;

    }
    
    idadeMedia = idadeTotal/quantidadeDePessoas;
    printf("A idade média é de: %.2f", idadeMedia);


    return 0;
}
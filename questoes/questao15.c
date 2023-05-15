#include <stdio.h>

int main(){

    int contador = 1, alturaPessoas, soma = 0;
    float mediaAltura;

    while(contador <= 5){
        printf("Insira a altura da pessoa %d: ", contador);
        scanf("%d", &alturaPessoas);
        contador ++;

        soma += alturaPessoas;
        mediaAltura = soma/5;
    }

    printf("A média das alturas inseridas anteriormente é de: %2.f", mediaAltura);

    return 0;

}
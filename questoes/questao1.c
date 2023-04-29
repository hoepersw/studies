#include <stdio.h>
int main (){

    float altura1, altura2, altura3, media_da_altura;

    printf("Informe a primeira altura");
    scanf("%f", &altura1);
    printf("Informe a segunda altura");
    scanf("%f", &altura2);
    printf("informe a terceira altura");
    scanf("%f", &altura3);

    media_da_altura = (altura1 + altura2 + altura3)/3;
    printf("A média da altura das três pessoas é: %.2f metros", media_da_altura);
}
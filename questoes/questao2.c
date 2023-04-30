#include <stdio.h>

int main (void){

    float nota1, nota2, nota3, nota4, resultado;

    printf("Cálcule a média das suas notas!\n");
    printf("Insira a sua primeira nota com as casas decimais:\n");
    scanf("%f", &nota1);
    printf("Insira a sua segunda nota com as casas decimais:\n");
    scanf("%f", &nota2);
    printf("Insira a sua terceira nota com as casas decimais:\n");
    scanf("%f", &nota3);
    printf("Insira a sua quarta nota com as casas decimais:\n");
    scanf("%f", &nota4);

    resultado = (nota1 + nota2 + nota3 + nota4)/4;
        printf("A média de suas notas é: %2.f", resultado);

    printf("FIM");

    return 0;

}
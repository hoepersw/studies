#include <stdio.h>
#include <math.h>

int main(){

    int formas; 
    float area, altura, base, raio, lado;

    printf("Insira o número correspondente das formas abaixo para calcular sua área:\n (1) Área de um Triângulo;\n (2) Área de um retângulo;\n (3) Área de um quadrado;\n (4) Área de um círculo.\n");
    scanf("%d", &formas);

    
    if (formas == 1){
        printf("Você escolheu calcular a área de um triângulo!\n");
        printf("Insira um valor para a altura do triângulo: ");
        scanf("%f", &altura);
        printf("Insira um valor para a base do triângulo: ");
        scanf("%f", &base);
        area = (altura * base) /2;
        printf("A área do seu triângulo é de: %2.f\n", area);

        } else if (formas == 2) {
            printf("Você escolheu calcular a área de um retângulo!\n");
            printf("Insira um valor para a altura do retângulo: ");
            scanf("%f", &altura);
            printf("Insira um valor para a base do retângulo: ");
            scanf("%f", &base);
            area = altura * base;
            printf("A área do seu retângulo é de: %2.f\n", area);

            } else if (formas == 3) {
                printf("Você escolheu calcular a área de um quadrado!\n");
                printf("Insira um valor para o lado do quadrado: ");
                scanf("%f", &lado);
                area = lado * lado;
                printf("A área do seu retângulo é de: %2.f\n", area);

                } else if (formas == 4) {
                    printf("Você escolheu calcular a área de um círculo!\n");
                    printf("Insira um valor o raio do círculo: ");
                    scanf("%f", &raio);
                    area = 3.14*(raio*raio);
                    printf("A área do seu círculo é de: %2.f\n", area);
    } else {
        printf("Opção inválida!\n");
    }

    printf("FIM");

    return 0;
  
    }

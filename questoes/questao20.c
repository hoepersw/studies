#include <stdio.h>

int main (){

    char saidaDoPrograma = ' ', areaEscolhida;
    float area, base, altura, lado;

    while (saidaDoPrograma != 'Z'){
        printf("\nCalculadora de áreas! Escolha qual deseja calcular:\nT: calcular a área de um triângulo;\nQ: calcular a área de um quadrado;\nR: calcular a área de um retângulo;\nZ: finalizar a execução;\n" );
        scanf(" %c", &areaEscolhida);

        if(areaEscolhida == 'T'){
            printf("Você escolheu calcular a área de um triângulo!\nInsira um valor para a altura do triângulo: ");
            scanf("%f", &altura);
            printf("Insira um valor para a base do triângulo: ");
            scanf("%f", &base);
            area = (altura * base) /2;
            printf("A área do seu triângulo é de: %.2f", area);
      
        } else if (areaEscolhida == 'Q'){
            printf("Você escolheu calcular a área de um quadrado!\nInsira um valor para o lado do quadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("A área do seu retângulo é de: %2.f", area);

        } else if (areaEscolhida == 'R'){
            printf("Você escolheu calcular a área de um retângulo!\nInsira um valor para a altura do retângulo: ");
            scanf("%f", &altura);
            printf("Insira um valor para a base do retângulo: ");
            scanf("%f", &base);
            area = altura * base;
            printf("A área do seu retângulo é de: %2.f", area);

        } else if (areaEscolhida == 'Z'){
            printf("Você escolheu deixar o programa.");
            saidaDoPrograma = 'Z';

        } else {
            printf("Opção inválida!");
        }


    }

    return 0;

}
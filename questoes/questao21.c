#include <stdio.h>

int main(){
    
    int inscricao, diaria, menuRecepcionista, contEncerradas = 0;
    float totalDasDiarias = 0;

    while (menuRecepcionista != 3){
        printf("\nBem-vindo ao menu do Hotel Park! Escolha uma das opções:\n 1. Encerrar a conta de um hóspede;\n 2. Verificar número de contas encerradas;\n 3. Finalizar a execução;\n Opção:  ");
        scanf("%d", &menuRecepcionista);

        if(menuRecepcionista == 1){
            printf("Insira o número de inscrição do hóspede (com 4 dígitos): ");
            scanf("%d", &inscricao);
            printf("Insira o número de diárias do hóspede: ");
            scanf("%d", &diaria);

            contEncerradas++;

            totalDasDiarias = diaria * 50;

            if(diaria < 15){
                totalDasDiarias += diaria * 7.50;
            } else if(diaria == 15){
                totalDasDiarias += diaria * 6.50;
            } else {
                totalDasDiarias += diaria * 5;
            }

            printf("O Hóspede com inscrição %d precisa pagar %.2f ao Hotel Park", inscricao, totalDasDiarias);

        } else if(menuRecepcionista == 2){
            printf("O Hotel Park encerrou %d de contas até o momento", contEncerradas);
            
        } else if (menuRecepcionista == 3){
            printf("Você escolheu encerrar o programa!");
        } else {
            printf("Opção inválida!");
        }
    }
    return 0;
}
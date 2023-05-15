#include <stdio.h>

int main (){

    int valorTotal, quantidadeInteiros, contador=1, quantidadeNegativos=0;

    printf("Insira a quantidade de números que você deseja utilizar: ");
    scanf("%d", &valorTotal);

    while (contador <= valorTotal){
        printf("Insira o %dº valor inteiro: ", contador);
        scanf("%d", &quantidadeInteiros);
        
        if(quantidadeInteiros < 0){
            quantidadeNegativos++;     
        } 

        contador++;
    }

    printf("A quantidade de valores negativos é de: %d\n", quantidadeNegativos);

    return 0;
   
}

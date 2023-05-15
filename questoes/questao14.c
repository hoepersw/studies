#include <stdio.h>

int main(void) {

    int somaNumerosPares = 0, somaNumerosImpares = 0;
    int contador=1;

    while(contador <= 5){
       
        if (contador % 2 == 0){
            somaNumerosPares += contador;
        } else {
            somaNumerosImpares += contador;
        }
        contador++;
    }
    
    printf("A soma dos números pares de 1 até 100 é de: %d\n", somaNumerosPares);
    printf("A soma dos números ímpares de 1 até 100 é de: %d", somaNumerosImpares);

    return 0;

}
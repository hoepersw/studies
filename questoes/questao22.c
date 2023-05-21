#include <stdio.h>

int main(){

    float massaInicial, massaFinal;
    int tempo = 0;

    printf("Insira a massa inicial do material radioativo (kg): ");
    scanf("%f", &massaInicial);

    massaFinal = massaInicial;

    while (massaFinal >= 0.5){
        massaFinal /= 2;
        tempo += 50;

    }

    printf("Sua massa inicial era de: %.2f kg. Após %d segundos ela passou a pesar %.2f.", massaInicial, tempo, massaFinal);

    return 0;
}
#include <stdio.h>

int main (){

    float valorX, valorY, valorZ;

    printf("Descubra se o triângulo é equilátero, isóceles ou escaleno!\n");
    printf("Determine um valor para X:\n");
    scanf("%f", &valorX);
    printf("Determine um valor para Y:\n");
    scanf("%f", &valorY);
    printf("Determine um valor para Z:\n");
    scanf("%f", &valorZ);

    if(valorX + valorY > valorZ && valorX + valorZ > valorY && valorY + valorZ > valorX) {
        if (valorX == valorY && valorY == valorZ) {
             printf("Os valores que você determinou correspondem a um triângulo equilátero\n");
        } else if (valorX == valorY || valorX == valorZ || valorY == valorZ) {
                 printf("Os valores que você determinou correspondem a um triângulo escaleno\n");   
        } else {
            printf("Os valores que você determinou correspondem a um triângulo isóceles\n");
        }       
    } else {
        printf("Os valores determinados NÃO correspondem a um triângulo");
    }
    
    printf("FIM");

    return 0;

    

}
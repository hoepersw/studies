#include <stdio.h> 
#include <math.h>

int main(){

    float ladoA, ladoB, ladoC, variavelP, area;

    printf("Insira um valor para um dos lados do triângulo: ");
    scanf("%f", &ladoA);
    printf("Insira um valor para um dos lados do triângulo: ");
    scanf("%f", &ladoB);
    printf("Insira um valor para um dos lados do triângulo: ");
    scanf("%f", &ladoC);

    variavelP = (ladoA + ladoB + ladoC)/2;
    area = sqrt((variavelP - ladoA)*(variavelP - ladoB)*(variavelP - ladoC));

    printf("A área do triângulo é de: %f", area);

}

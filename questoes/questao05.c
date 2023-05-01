#include <stdio.h>

int main(){

    float fahrenheit, celsius;

    printf("Transforme a temperatura de Fahrenheit para Celsius!\n");
    printf("Insira a temperatura em graus fahrenheit:\n");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit-32)/1,8;
    printf("A temperatura correspondente em graus celsius é de: %2.f graus", celsius);

    return 0;

}
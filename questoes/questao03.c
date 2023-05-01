#include <stdio.h>

int main() {
    int comprimento, largura, area, perimetro;

    printf("Calcule a Área e o Perímetro de um retângulo!\n");
    printf("Insira um valor para o comprimento/altura do seu retângulo:\n");
    scanf("%d", &comprimento);
    printf("Insira um valor para o largura/base do seu retângulo:\n");
    scanf("%d", &largura);

    area = (comprimento * largura);
    printf("A área do seu retângulo é: %d\n", area);

    perimetro = (comprimento + largura)*2;
    printf("O perímetro do seu retângulo é: %d\n", perimetro);

    printf("FIM");

    return 0;

}
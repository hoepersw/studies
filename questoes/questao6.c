#include <stdio.h>

int main(void) {
  float nota1, nota2, nota3, mediaExercicio, mediaAproveitamento;
  
  printf("Insira nota 1\n");
  scanf("%f", &nota1);
  printf("Insira nota 2\n");
  scanf("%f", &nota2);
  printf("Insira nota 3\n");
  scanf("%f", &nota3);
  printf("Insira a média dos exercícios\n");
  scanf("%f", &mediaExercicio);

  mediaAproveitamento = (nota1 + nota2*2 + nota3*3 + mediaExercicio)/7*10;
printf("A média de Aproveitamento é: %2.f\n", mediaAproveitamento);

  if (mediaAproveitamento >= 90){
  printf("Conceito A\n Você foi aprovado :)\n");
  } else {
    if (mediaAproveitamento >= 75){
      printf("Conceito B\n Você foi aprovado :|\n");
    } else {
      if (mediaAproveitamento >= 60){
        printf("Conceito C\n Você foi aprovado :/\n");
     } else {
        if (mediaAproveitamento >= 40){
          printf("Conceito D\n Você foi reprovado :(\n");    
      } else {
          printf("Conveito E\n Você foi reprovado >:(\n");
        }
      }
    }  
  }

  printf("FIM");

  return 0;

  
 
}
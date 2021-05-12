#include <stdio.h>
#include <stdlib.h>
#define N 30

typedef struct
{
  char texto[150];
} pregunta;

int main()
{
  pregunta preguntas[N];
  FILE *fpreguntas;
  int i = 0;

  fpreguntas = fopen("Cultura_Preguntas.txt", "r");
    
  while(fscanf(fpreguntas, "%[^\n]\n", preguntas[i].texto) != EOF)
    {
      printf("%s\n", preguntas[i].texto);
      i++;
    }
  
  fclose(fpreguntas);
  return 0;  
}
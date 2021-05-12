#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

typedef struct
{
  char pregunta[150];
  char opciones[150];
  char soluciones[30];
  char respuestas[30];
} pregunta;

int main()
{
  pregunta preguntas[N];
  opciones opciones[N];
  soluciones soluciones[N];
  respuestas respuestas[N];
  FILE *fpreguntas,*frespuestas,*fopciones,*fsoluciones;
  int i = 0,x=0;
  char n,s;

  fpreguntas = fopen("Cultura_Preguntas.txt", "r");
  fopciones = fopen("Cultura_Opciones.txt", "r");
  fsoluciones = fopen("Cultura_Soluciones.txt", "r");
  while(fscanf(fpreguntas, "%[^\n]\n %[^;]\n %[^;]\n %[^;]\n", preguntas[i].pregunta,opciones[i].opciones,opciones[i].opciones,opciones[i].opciones) != EOF)
    {
      printf("%s\n%s\n%s\n%s\n", preguntas[i].pregunta,opciones[i].opciones,opciones[i].opciones,opciones[i].opciones);
      s=soluciones[i];
      scanf("%c",&n);
      if (n==s)
        x=+1;
      
      
      i++;
    }
  
  fclose(fpreguntas);
  return 0;  
}
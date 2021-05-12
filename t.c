#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

typedef struct
{
  char preguntas[150];
  char opciones[150];
  char soluciones[30];
  char respuestas[30];
} cuestionario;

int main()
{
  cuestionario vector[N];
  FILE *fpreguntas,*fopciones,*fsoluciones;
  int i = 0,x=0;
  char n,s,soluciones[30];
  fsoluciones = fopen("Cultura_Soluciones.txt", "r");
  
  
  fpreguntas = fopen("Cultura_Preguntas.txt", "r");
  fopciones = fopen("Cultura_Opciones.txt", "r");
  while(fscanf(fpreguntas, "%[^\n]\n %[^;]\n %[^;]\n %[^;]\n", cuestionario[i].preguntas,cuestionario[i].opciones,cuestionario[i].opciones, cuestionario[i].opciones) != EOF)
    {
      printf("%s\n%s\n%s\n%s\n",cuestionario[i].preguntas,cuestionario[i].opciones,cuestionario[i].opciones,cuestionario[i].opciones);
      s=soluciones[i];
      scanf("%c",&n);
      if (n==s)
        x=+1;
      
      
      i++;
    }
  
  fclose(fpreguntas);
  return 0;  
}

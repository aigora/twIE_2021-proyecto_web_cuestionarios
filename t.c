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
  while(fscanf(fpreguntas, "%[^\n]\n", vector[i].preguntas) && fscanf(fopciones,"%[^;]\n %[^;]\n %[^;]\n",vector[i].opciones,vector[i].opciones, vector[i].opciones) != EOF)
    {
      printf("%s\n%s\n%s\n%s\n",vector[i].preguntas,vector[i].opciones,vector[i].opciones,vector[i].opciones);
      /*s=soluciones[i];
      scanf("%c",&n);
      if (n==s)
        x=+1;*/
      
      
      i++;
    }
  
  fclose(fpreguntas);
  fclose(fopciones);
  fclose(fsoluciones);
  return 0;  
}

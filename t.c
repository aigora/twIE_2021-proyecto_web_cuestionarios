#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

typedef struct
{
  char preguntas[150];
  char opciones[150];
  char soluciones[30];
} cuestionario;

int main()
{
  cuestionario vector[N];
  FILE *fpreguntas,*fopciones,*fsoluciones;
  int i = 0,u=0,x=0;
  char n,s,soluciones[30];
  fsoluciones = fopen("Cultura_Soluciones.txt", "r");
   while (fscanf(fsoluciones,"%[^\n]\n", vector[u].soluciones) != EOF)
   {
     soluciones[u]=vector[u];
    u++;
   }
   
  
  fpreguntas = fopen("Cultura_Preguntas.txt", "r");
  fopciones = fopen("Cultura_Opciones.txt", "r");
  while(fscanf(fpreguntas, "%[^\n]\n", vector[i].preguntas) && fscanf(fopciones,"%[^;]\n",vector[i].opciones) != EOF)
    {
      printf("%s\n\n%s\n\n",vector[i].preguntas,vector[i].opciones);
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

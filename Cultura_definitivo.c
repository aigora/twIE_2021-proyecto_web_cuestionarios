#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30
#include"CodSoluciones.h"
int Cultura_definitivo (int x);


int Cultura_definitivo (int x){
typedef struct
{
  char preguntas[200];
  char opciones[150];
  char soluciones;
} cuestionario;

  cuestionario vector[N];
  FILE *fpreguntas,*fopciones,*fsoluciones;
  int i = 0,x=0;
  char n;
  
  fsoluciones = fopen("Cultura_Soluciones.txt","r");
  fpreguntas = fopen("Cultura_Preguntas.txt", "r");
  fopciones = fopen("Cultura_Opciones.txt", "r");
  while(fscanf(fpreguntas, "%[^\n]\n", vector[i].preguntas) !=EOF && fscanf(fopciones,"%[^\n]\n",vector[i].opciones) != EOF && fscanf(fsoluciones,"%[^\n]\n",&vector[i].soluciones) !=EOF)
    {
      printf("%s\n\n%s\n\n",vector[i].preguntas,vector[i].opciones);
      
      scanf(" %c",&n); 
      if (n==vector[i].soluciones)
        x++;
  
       i++;
    }
  
  fclose(fpreguntas);
  fclose(fopciones);
  fclose(fsoluciones);
  SolCultura (x);
  return 0;  
}


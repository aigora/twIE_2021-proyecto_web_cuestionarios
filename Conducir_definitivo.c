#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30
int Conducir_definitivo (int x);

int Conducir_definitivo (int x){
typedef struct
{
  char preguntas[200];
  char opciones[150];
  char soluciones;
} cuestionario;


  cuestionario vector[N];
  FILE *fpreguntas,*fopciones,*fsoluciones;
  int i = 0;
  char n;
  
  x=0;
  fsoluciones = fopen("Conducir_Soluciones.txt","r");
  fpreguntas = fopen("Conducir_Preguntas.txt", "r");
  fopciones = fopen("Conducir_Opciones.txt", "r");
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
  return x;
}


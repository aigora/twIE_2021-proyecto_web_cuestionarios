#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

typedef struct
{
  char pregunta[150];
  char opciones[150];
  char solucion;
} cuestionario;

int main()
{
  int numero_de_preguntas, puntuacion;
  cuestionario vector[N];
  if( (numero_de_preguntas = CargarCuestionario("Cultura", vector)) != 0 )
  {
    puntuacion = EjecutarCuestionario();
    printf("\n\nPuntuación: %i de %i", puntuacion, numero_de_preguntas);
  }

}

int CargarCuestionario(char *nombre_base, cuestionario *vector)
{
  char fich_soluciones[256], fich_preguntas[256], fich_opciones[256];
  FILE *fpreguntas,*fopciones,*fsoluciones;
  int i = 0, u = 0;
  char c;

  strcpy(fich_soluciones, nombre_base);
  strcat(fich_soluciones,"_Soluciones.txt");
  strcpy(fich_preguntas, nombre_base);
  strcat(fich_preguntas,"_Preguntas.txt");
  strcpy(fich_opciones, nombre_base);
  strcat(fich_opciones,"_Opciones.txt");

  if( (fsoluciones = fopen( fich_soluciones, "r") ) == NULL )
  {
    printf("\nErro r: no se encuentra el archivo %s", fich_soluciones);
    return 0;
  }
  while (fscanf(fsoluciones,"%[^\n]\n", &c ) != EOF)
  {
    vector[0u].solucion = c;
    u++;
  }
  fclose(fsoluciones);
  printf("\nNumero de preguntas leidas: %i", u);
  printf("\n%s.", fich_soluciones);
  printf("\n%s.", fich_preguntas);
  printf("\n%s.", fich_opciones);

  if( (fpreguntas = fopen( fich_preguntas, "r") ) == NULL )
  {
    printf("\nError: no se encuentra el archivo %s.", fich_preguntas);
    return 0;
  }
  if( (fopciones = fopen( fich_opciones, "r")) == NULL )
  {
    printf("\nError: no se encuentra el archivo %s..", fich_opciones);
    return 0;
  }
  while(fscanf(fpreguntas, "%[^\n]\n", vector[i].pregunta) && fscanf(fopciones,"%[^;]\n",vector[i].opciones) != EOF)
  {
     printf("%s\n\n%s\n\n",vector[i].pregunta,vector[i].opciones);
      /*s=soluciones[i];
      scanf("%c",&n);
      if (n==s)
        x=+1;*/
       i++;
  }
  fclose(fpreguntas);
  fclose(fopciones);
  if( i != u)
  {
    printf("\nError: numero de preguntas inconsistente.");
    return 0;
  }
  return i;
}

int EjecutarCuestionario(cuestionario *pregunta, int numero_de_preguntas)
{
  int puntuacion = 0;

  for(int i=0 ; i < numero_de_preguntas; i++)
  {
    int respuesta;
    printf("\n\n%s\n%s\n", pregunta[i].pregunta, pregunta[i].opciones);
    scanf("%c", &respuesta);
    if( respuesta == pregunta[i].solucion)
      puntuacion++;
  }

  return puntuacion;
}

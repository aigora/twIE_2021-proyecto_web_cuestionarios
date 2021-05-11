#include <stdio.h>

int main()
{
  FILE *pr;
  FILE *pp;
  char respuestas[30],n,x;
  char preguntas[50];

  pp = fopen("preguntas.txt", "r");
  if (pp == NULL) {
    printf("Error al abrir el fichero.\n");
    return -1;
  }
  else {
    fscanf(pp,"%[^.]\n",preguntas[]);
    fclose(pp); 

   scanf("%c",&n);
   n=respuestas[0];
 pr = fopen("respuestas.txt", "w");
  if (pr == NULL) {
    printf("Error al abrir el fichero.\n");
    return -1;
  }
  else {
    fprintf(pr,"%c",respuestas[0]);
    fclose(pr); 
  

  pr = fopen("respuestas.txt", "r");
  if (pr == NULL) {
    printf("Error al abrir el fichero.\n");
    return -1;
  }
  else {
    if (respuestas[0]==99)
    {
       x=+1;
    }
    fclose(pr); 

    return 0;
}
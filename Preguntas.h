#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define N 30
#define U 38

int Personalidad_definitivo (int a,int b,int c,int d);



int Personalidad_definitivo (int a,int b,int c,int d){
typedef struct
{
  char preguntas[200];
  char opciones[300];
  char soluciones;
} cuestionario;


  cuestionario vector[U];
  FILE *fpreguntas,*fopciones,*fsoluciones;
  int i = 0;
  char letra;
   
   printf("\t\t\tTEST DE PERSONALIDAD\nDEPENDIENDO DE SUS RESPUESTAS, SABRA QUE TIPO DE PERSONALIDAD TIENE\n\n\tESTE TEST ESTA DIVIDO EN DOS PARTES:\n\t SOCIAL/TIMIDO Y EGOCENTRICO/ALTRUISTA\n\n");
   printf("PORFAVOR RESPONDA CON SINCERIDAD\n\tTODAS LAS RESPUESTAS DEBERAN ESTAR EN MINUSCULA PARA SER VALIDADAS\n\n");
   a=0; 
   b=0;
   c=0;
   d=0; 


  fsoluciones = fopen("Personalidad_Soluciones.txt","r");
  fpreguntas = fopen("Personalidad_Preguntas.txt", "r");
  fopciones = fopen("Personalidad_Opciones.txt", "r");
  while(fscanf(fpreguntas, "%[^\n]\n", vector[i].preguntas) !=EOF && fscanf(fopciones,"%[^\n]\n",vector[i].opciones) != EOF && fscanf(fsoluciones,"%[^\n]\n",&vector[i].soluciones) !=EOF)
    {
      printf("%s\n\n%s\n\n",vector[i].preguntas,vector[i].opciones);
      
      scanf(" %c", &letra);
          if(letra==97)
             a++;

        else if(letra==98)
            b++;

        else if(letra==99)
            c++;

        else if(letra==100)
            d++;
        else
            printf("Lo sentimos, esa respuesta no es valida");
    }
  
  fclose(fpreguntas);
  fclose(fopciones);
  fclose(fsoluciones);
        return a,b,c,d;
 }


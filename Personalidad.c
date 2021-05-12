#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include "CodSoluciones.h"
    int main()
    {
       char letra, a, b, c, d;

        printf("\t\t\tTEST DE PERSONALIDAD\nDEPENDIENDO DE SUS RESPUESTAS, SABRA QUE TIPO DE PERSONALIDAD TIENE\n\n\tESTE TEST ESTA DIVIDO EN DOS PARTES:\n\t SOCIAL/TIMIDO Y EGOCENTRICO/ALTRUISTA\n\n");
        printf("PORFAVOR RESPONDA CON SINCERIDAD\n\tTODAS LAS RESPUESTAS DEBERAN ESTAR EN MINUSCULA PARA SER VALIDADAS\n\n");
        printf("PREGUNTA 1\n A\n B\n");
        scanf("%c", &letra);

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

int SolPersonalidades (int a,int b, int c,int d);
        return 0;
    }



#include <stdio.h>
#include "Preguntas.h"
int main()
{
    char opcion,f;
    int a,b,c,d,x;
    printf("\n\n                           ¡¡BIENVENIDO A LA MEJOR PAGINA PARA HACER CUESTIONARIOS!!     \n\n");
    do
    {
        printf("\n\n  En esta página tiene la posibilidad de realizar cuestionarios/tests de distintos temas. Puede elegir entre:\n\n\n\n");
        printf("     1-Cuestionario de personalidad.\n     2-Test de cultura general.\n     3-Test de Conducir.\n     4-Cuestionario de Geografía.\n     5-Cuestionario de Deportes.\n     6-Salir\n\n");
        printf("\n\n\n  A continuacion seleccione la opcion deseada pulsando la tecla correspondiente:\n\n");
        printf("   Introduzca el numero:");scanf(" %c",&opcion);
    switch (opcion)
    {
          case '1':
            printf("\n  Cuestionario de personalidad\n\n\n");
            Personalidad_definitivo (a,b,c,d);
            printf("   Pulse cualquier letra para volver al menu principal\n");
            scanf(" %c", &f);
            break;

          case '2':
            printf("\n   Test de cultura general\n\n\n");
            Cultura_definitivo (x);
            printf("   Pulse cualquier letra para volver al menu principal\n");
            scanf(" %c", &f);
            break;

          case '3':
            printf("\n   Test de Conducir\n\n\n");
            Conducir_definitivo (x);
            printf("   Pulse cualquier letra para volver al menu principal\n");
            scanf(" %c", &f);
            break;

          case '4':
            printf("\n   Cuestionario de Geografía\n\n\n");
            Paises_definitivo (x);
            printf("   Pulse cualquier letra para volver al menu principal\n");
            scanf(" %c", &f);
            break;

          case '5':
            printf("\n   Cuestionario de Deportes\n\n\n");
            Deportes_definitivo (x);
            printf("   Pulse cualquier letra para volver al menu principal\n");
            scanf(" %c", &f);
            break;

          case '6':
            printf("\n\n   Ha decidido salir de esta pagina.\n\n");
            printf("   ¡¡Esperamos que le haya gustado!!\n\n");
            break;


          default:
            printf("El numero introducido no corresponde con ninguna opcion, por favor seleccione otro numero.\n");
            printf("Pulse cualquier letra para volver al menu principal\n");
            scanf(" %c", &f);
            break;
    }
    }

    while(opcion!='6');

    return 0;
}

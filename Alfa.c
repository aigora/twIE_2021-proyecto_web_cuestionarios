#include<stdio.h>

int main()
{
    char opcion,f;

    printf("\n\n                           ¡¡BIENVENIDO A LA MEJOR PAGINA PARA HACER CUESTIONARIOS!!     \n\n");
    do
    {
        printf("\n\n  En esta página tiene la posibilidad de realizar cuestionarios/tests de distintos temas. Puede elegir entre:\n\n\n\n");
        printf("     1-Cuestionario de personalidad.\n     2-Test de cultura general.\n     3-Test de Conducir.\n     4-Cuestionario de Capitales intermacionales.\n     5-Cuestionario de Deportes.\n     6-Salir\n\n");
        printf("\n\n\n  A continuacion seleccione la opcion deseada pulsando la tecla correspondiente:\n\n");
        printf("   Introduzca el numero:");scanf(" %c",&opcion);
    switch (opcion)
    {
          case '1':
            printf("\n   Cuestionario 1\n\n\n");
            printf("   Pulse 'f' para volver al menu principal\n");
            scanf(" %c", &f);
            break;

          case '2':
            printf("\n   Cuestionario 2\n\n\n");
            printf("   Pulse 'f' para volver al menu principal\n");
            scanf(" %c", &f);
            break;

          case '3':
            printf("\n   Cuestionario 3\n\n\n");
            printf("   Pulse 'f' para volver al menu principal\n");
            scanf(" %c", &f);
            break;

          case '4':
            printf("\n   Cuestionario 4\n\n\n");
            printf("   Pulse 'f' para volver al menu principal\n");
            scanf(" %c", &f);
            break;

          case '5':
            printf("\n   Cuestionario 5\n\n\n");
            printf("   Pulse 'f' para volver al menu principal\n");
            scanf(" %c", &f);
            break;

          case '6':
            printf("\n\n   Ha decidido salir de esta pagina.\n\n");
            printf("   ¡¡Esperamos que le haya gustado!!\n\n");
            break;


          default:
            printf("El numero introducido no corresponde con ninguna opcion, por favor seleccione otro numero.\n");
            printf("Pulse 'f' para volver al menu principal\n");
            scanf(" %c", &f);
            break;
    }
    }

    while(opcion!='6');

    return 0;
}

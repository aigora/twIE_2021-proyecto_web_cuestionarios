#include <stdio.h>

int main ()
{

	char f, opcion;
	        
            printf("  \n\n     ¡¡BIENVENIDO A LA MEJOR PAGINA PARA HACER CUESTIONARIOS!!     \n\n\n");
            printf("En esta página tiene la posibilidad de realizar cuestionarios/tests de distintos temas. Puede elegir entre:\n\n");
            printf(" 1-Cuestionario de personalidad.\n 2-Test de cultura general.\n 3-Test de Conducir.\n 4-Cuestionario de Capitales intermacionales.\n 5-Cuestionario de Deportes.\n 6-Salir\n\n");
	        printf("A continuacion seleccione la opcion deseada pulsando la tecla correspondiente:\n");


    scanf("%c",&opcion);

	switch(opcion) {
	
		case '1' :
			printf("Cuestionario 1\n\n\n");
			printf("Pulse 'f' para volver al menu principal\n");
			scanf("&c", f);
			break;
		case '2' :
			printf("Cuestionario 2\n\n\n");
			printf("Pulse 'f' para volver al menu principal\n");
			scanf("&c", f);
			break;
		case '3' :
			printf("Cuestionario 3\n\n\n");
			printf("Pulse 'f' para volver al menu principal\n");
			scanf("&c", f);
			break;
		case '4' :
			printf("Cuestionario 4\n\n\n");
			printf("Pulse 'f' para volver al menu principal\n");
			scanf("&c", f);
			break;
                case '5':
                        printf("Cuestionario 5\n\n\n");
                        printf("Pulse 'f' para volver al menu principal\n");
                        scanf("&c", f);
                        break;
               case '6' :
                        printf("Ha pulsado 'salir de la pagina'.\n\n");
                        printf(" ¡¡Esperamos que le haya gustado!!\n\n");
                        break;
       
               default :
			printf("El numero introducido no corresponde con ninguna opcion, por favor seleccione otro numero");
			printf("Pulse 'f' para volver al menu principal\n");
			scanf("&c", f);
}
   return 0;
}


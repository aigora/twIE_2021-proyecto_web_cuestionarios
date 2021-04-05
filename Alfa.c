#include <stdio.h>

int main ()
{

	char cuestionario,F,f, opcion;
	printf("       ¡¡BIENVENIDO A LA MEJOR PAGINA PARA HACER CUESTIONARIOS!!     \n\n\n");
  

    printf("A continuacion seleccione la opcion deseada pulsando la tecla correspondiente\n\n");
    printf(" 0-Menu general de test e intrucciones\n\n 1-Cuestionario 1\n 2-Cuestionario 2\n 3-Cuestionario 3\n 4-Cuestionario 4\n\n 5-Salir de la pagina\n");
	scanf("%c",&opcion);

	switch(opcion) {
		case '0' :
			printf("Menu general de test e intrucciones\n");
			printf("En esta página de cuestionarios tiene la posibilidad de realizar distintos cuestionarios que en funcion de las respuestas te dara unos reulstados. Puede elegir entre:\n");
            printf("Cuestionario de personalidad.\n Cuestionario de inteligencia.\n Cuestionario de moda.\n Cuestionario de cultura general.\n Cuestionario de politica.\n\n\n");
            printf("Pulse 'f' para volver al menu principal");
            scanf("&c", f);

			break;
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
        case '5' :
            printf("Ha pulsado 'salir de la pagina'.");
            printf(" ¡¡Esperamos que le haya gustado!!");
            break;
        default :
			printf("El numero introducido no corresponde con ninguna opcion, por favor seleccione otro numero");
			printf("Pulse 'f' para volver al menu principal\n");
			scanf("&c", f);
}
   
return 0;}

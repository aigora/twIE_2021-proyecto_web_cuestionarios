#include<time.h>
#include<stdio.h>
#include<stdlib.h>

void ctriocta1();
void ctriocta2();
void ctriocta3();
void ctriocta4();
void ctriocta5();
void ctriocta6();
void ctriocta7();
void ctriocta8();
void ctriocta9();
void ctriocta10();
void ctriocta11();
void ctriocta12();

typedef struct {

	char pta[100];
	char rpta1[20];
	char rpta2[20];
	char rpta3[20];

}cuestionario1;

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
              system("cls"); //Borra todo lo anterior en el compilador
            printf("\n   Cuestionario 1\n\n\n");
            printf("A continuacion debera responder a las preguntas formuladas eligiendo la respuesta entre las tres opciones dadas\n");

             ctriocta1();
             ctriocta2();
             ctriocta3();
             ctriocta4();
             ctriocta5();

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

void ctriocta1(){

	//Declaracion de las variables a utilizar
	FILE *pf1, *pf2;
	int i, cont=0;
	int opcion;
	cuestionario1 cultura[100]; //Declaracion del vector de estructuras

	printf("\n Pregunta 1\n\n");

	pf1 = fopen("Cuestionario cultura 1.txt", "r"); //Abre el fichero indicado

	if(pf1 == NULL){ //Si no encuentra el fichero avisa con un error
		printf("No se ha encontrado el fichero");
	}

	// Almacena lo que pone en el fichero en las variables indicadas
	while(fscanf(pf1, "%[^;]; %[^;]; %[^;]; %[^;]; %[^\n]\n", cultura[i].pta, cultura[i].rpta1, cultura[i].rpta2,cultura[i].rpta3) != EOF){
		cont++;
		i++;
	}
	for(i=0; i<cont; i++){ //Con este bucle se muestra por pantalla lo que pone en el fichero
		printf("%d.%s \t\t %d.%s \t\t %d.%s \t\t %d.%s \t\n", i+1, cultura[i].pta, cultura[i].rpta1, cultura[i].rpta2,cultura[i].rpta3);
	}

	fclose(pf1); //Cierra el fichero correspondiente

	do{ //Pide reiteradamente una opcion hasta que se da una valida
    	printf("\n\n Escribe el numero correspondiente con tu respuesta: ");
    	scanf("%d", &opcion); //Guarda dicha opcion
	} while (opcion<1 || opcion>3);

	system("cls"); //Limpia el compilador
	pf2 = fopen("recopilacionrespuestas.txt", "w"); //Crea el fichero correspondiente

	if(pf2 == NULL){ //Avisa de un error si no se ha podido crear el fichero
		printf("No se ha podido crear el fichero");
	}

	// Escribe en el fichero el nombre del portero elegido
	fprintf(pf2, "Pregunta: %s \t\t Respuesta: %s\n", cultura[opcion-1].pta, cultura[opcion-1].rpta3);
	fclose(pf2); //Cierra el fichero
}
void ctriocta2(){

	//Declaracion de las variables a utilizar
	FILE *pf1, *pf2;
	int i, cont=0;
	int opcion;
	cuestionario1 cultura[100]; //Declaracion del vector de estructuras

	printf("\n Pregunta 2\n\n");

	pf1 = fopen("Cuestionario cultura 2.txt", "r"); //Abre el fichero indicado

	if(pf1 == NULL){ //Si no encuentra el fichero avisa con un error
		printf("No se ha encontrado el fichero");
	}

	// Almacena lo que pone en el fichero en las variables indicadas
	while(fscanf(pf1, "%[^;]; %[^;]; %[^;]; %[^;]; %[^\n]\n", cultura[i].pta, cultura[i].rpta1, cultura[i].rpta2,cultura[i].rpta3) != EOF){
		cont++;
		i++;
	}
	for(i=0; i<cont; i++){ //Con este bucle se muestra por pantalla lo que pone en el fichero
		printf("%d.%s \t\t %d.%s \t\t %d.%s \t\t %d.%s \t\n", i+1, cultura[i].pta, cultura[i].rpta1, cultura[i].rpta2,cultura[i].rpta3);
	}

	fclose(pf1); //Cierra el fichero correspondiente

	do{ //Pide reiteradamente una opcion hasta que se da una valida
    	printf("\n\n Escribe el numero correspondiente con tu respuesta: ");
    	scanf("%d", &opcion); //Guarda dicha opcion
	} while (opcion<1 || opcion>3);

	system("cls"); //Limpia el compilador
	pf2 = fopen("recopilacionrepuestas.txt", "w"); //Crea el fichero correspondiente

	if(pf2 == NULL){ //Avisa de un error si no se ha podido crear el fichero
		printf("No se ha podido crear el fichero");
	}

	// Escribe en el fichero el nombre del portero elegido
	fprintf(pf2, "Pregunta: %s \t\t Respuesta: %s\n", cultura[opcion-1].pta, cultura[opcion-1].rpta3);
	fclose(pf2); //Cierra el fichero
}
void ctriocta3(){

	//Declaracion de las variables a utilizar
	FILE *pf1, *pf2;
	int i, cont=0;
	int opcion;
	cuestionario1 cultura[100]; //Declaracion del vector de estructuras

	printf("\n Pregunta 3\n\n");

	pf1 = fopen("Cuestionario cultura 3.txt", "r"); //Abre el fichero indicado

	if(pf1 == NULL){ //Si no encuentra el fichero avisa con un error
		printf("No se ha encontrado el fichero");
	}

	// Almacena lo que pone en el fichero en las variables indicadas
	while(fscanf(pf1, "%[^;]; %[^;]; %[^;]; %[^;]; %[^\n]\n", cultura[i].pta, cultura[i].rpta1, cultura[i].rpta2,cultura[i].rpta3) != EOF){
		cont++;
		i++;
	}
	for(i=0; i<cont; i++){ //Con este bucle se muestra por pantalla lo que pone en el fichero
		printf("%d.%s \t\t %d.%s \t\t %d.%s \t\t %d.%s \t\n", i+1, cultura[i].pta, cultura[i].rpta1, cultura[i].rpta2,cultura[i].rpta3);
	}

	fclose(pf1); //Cierra el fichero correspondiente

	do{ //Pide reiteradamente una opcion hasta que se da una valida
    	printf("\n\n Escribe el numero correspondiente con tu respuesta: ");
    	scanf("%d", &opcion); //Guarda dicha opcion
	} while (opcion<1 || opcion>3);

	system("cls"); //Limpia el compilador
	pf2 = fopen("recopilacionrepuestas.txt", "w"); //Crea el fichero correspondiente

	if(pf2 == NULL){ //Avisa de un error si no se ha podido crear el fichero
		printf("No se ha podido crear el fichero");
	}

	// Escribe en el fichero el nombre del portero elegido
	fprintf(pf2, "Pregunta: %s \t\t Respuesta: %s\n", cultura[opcion-1].pta, cultura[opcion-1].rpta3);
	fclose(pf2); //Cierra el fichero
}
void ctriocta4(){

	//Declaracion de las variables a utilizar
	FILE *pf1, *pf2;
	int i, cont=0;
	int opcion;
	cuestionario1 cultura[100]; //Declaracion del vector de estructuras

	printf("\n Pregunta 4\n\n");

	pf1 = fopen("Cuestionario cultura 4", "r"); //Abre el fichero indicado

	if(pf1 == NULL){ //Si no encuentra el fichero avisa con un error
		printf("No se ha encontrado el fichero");
	}

	// Almacena lo que pone en el fichero en las variables indicadas
	while(fscanf(pf1, "%[^;]; %[^;]; %[^;]; %[^;]; %[^\n]\n", cultura[i].pta, cultura[i].rpta1, cultura[i].rpta2,cultura[i].rpta3) != EOF){
		cont++;
		i++;
	}
	for(i=0; i<cont; i++){ //Con este bucle se muestra por pantalla lo que pone en el fichero
		printf("%d.%s \t\t %d.%s \t\t %d.%s \t\t %d.%s \t\n", i+1, cultura[i].pta, cultura[i].rpta1, cultura[i].rpta2,cultura[i].rpta3);
	}

	fclose(pf1); //Cierra el fichero correspondiente

	do{ //Pide reiteradamente una opcion hasta que se da una valida
    	printf("\n\n Escribe el numero correspondiente con tu respuesta: ");
    	scanf("%d", &opcion); //Guarda dicha opcion
	} while (opcion<1 || opcion>3);

	system("cls"); //Limpia el compilador
	pf2 = fopen("recopilacionrepuestas.txt", "w"); //Crea el fichero correspondiente

	if(pf2 == NULL){ //Avisa de un error si no se ha podido crear el fichero
		printf("No se ha podido crear el fichero");
	}

	// Escribe en el fichero el nombre del portero elegido
	fprintf(pf2, "Pregunta: %s \t\t Respuesta: %s\n", cultura[opcion-1].pta, cultura[opcion-1].rpta3);
	fclose(pf2); //Cierra el fichero
}
void ctriocta5(){

	//Declaracion de las variables a utilizar
	FILE *pf1, *pf2;
	int i, cont=0;
	int opcion;
	cuestionario1 cultura[100]; //Declaracion del vector de estructuras

	printf("\n Pregunta 5\n\n");

	pf1 = fopen("Cuestionario cultura 5", "r"); //Abre el fichero indicado

	if(pf1 == NULL){ //Si no encuentra el fichero avisa con un error
		printf("No se ha encontrado el fichero");
	}

	// Almacena lo que pone en el fichero en las variables indicadas
	while(fscanf(pf1, "%[^;]; %[^;]; %[^;]; %[^;]; %[^\n]\n", cultura[i].pta, cultura[i].rpta1, cultura[i].rpta2,cultura[i].rpta3) != EOF){
		cont++;
		i++;
	}
	for(i=0; i<cont; i++){ //Con este bucle se muestra por pantalla lo que pone en el fichero
		printf("%d.%s \t\t %d.%s \t\t %d.%s \t\t %d.%s \t\n", i+1, cultura[i].pta, cultura[i].rpta1, cultura[i].rpta2,cultura[i].rpta3);
	}

	fclose(pf1); //Cierra el fichero correspondiente

	do{ //Pide reiteradamente una opcion hasta que se da una valida
    	printf("\n\n Escribe el numero correspondiente con tu respuesta: ");
    	scanf("%d", &opcion); //Guarda dicha opcion
	} while (opcion<1 || opcion>3);

	system("cls"); //Limpia el compilador
	pf2 = fopen("recopilacionrepuestas.txt", "w"); //Crea el fichero correspondiente

	if(pf2 == NULL){ //Avisa de un error si no se ha podido crear el fichero
		printf("No se ha podido crear el fichero");
	}

	// Escribe en el fichero el nombre del portero elegido
	fprintf(pf2, "Pregunta: %s \t\t Respuesta: %s\n", cultura[opcion-1].pta, cultura[opcion-1].rpta3);
	fclose(pf2); //Cierra el fichero
}

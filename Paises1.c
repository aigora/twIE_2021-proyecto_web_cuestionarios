#include <stdio.h>
#include <string.h>


int main()
{
   int x;
   char solucion[]="Madrid";
   char res[15];
   printf("Elige la respuesta\n");
   scanf("%15[^\n]", res);
  if (strcmp(solucion,res))
     printf("Incorrecto\n");
   else 
        x=+1;
    
 printf("%d\n",x);

    return 0;
}


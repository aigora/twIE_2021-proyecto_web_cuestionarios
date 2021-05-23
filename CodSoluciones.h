#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define N 30
int SolConducir (int x);
int SolDeporte  (int x);
int SolCultura  (int x);
int SolPaises  (int x);
int SolPersonalidades (int a,int b, int c,int d);

int SolConducir (int x)
{
    if (x>=27)
      printf("\nHas acertado %d preguntas!\n\nHas tenido menos de tres errores así que eso es un aprobado!! Ya estas listo para sacarte el carne.\n\n",x);
    else
      printf("\nHas acertado %d preguntas!\n\nHas tenido más de tres fallos, eso es un suspenso..Pero no te rindas vuelve a intentarlo hasta que no tengas ni un fallo!!\n\n",x);
  return 0;
}

int SolDeporte  (int x)
{
    if (x>13)
      printf("\nHas conseguido %d respuestas bien sobre 25!!\n\nWow se te da genial el deporte!! Me he quedado impresionado.\n\n",x);
    else if (x==13)
      printf("\nHas conseguido %d respuestas bien sobre 25!!\n\nUn aprobado justo, no esta mal pero si quieres dominar la teoría de los deportes tendrás que estudiar más.\n\n",x);
    else
      printf("\nHas conseguido %d respuestas bien sobre 25!!\n\nNOO que mal, no sabes nada de deportes, pero no te desanimes, prueba otra vez e intenta conseguir un mejor resultado!\n\n",x);
  return 0;  
}

int SolCultura  (int x)
{
    if (x>15)
      printf("\nHas conseguido %d respuestas bien sobre 30!!\n\nWow se te da genial la cultura!! Me he quedado impresionado.\n\n",x);
    else if (x==15)
      printf("\nHas conseguido %d respuestas bien sobre 30!!\n\nUn aprobado justo, no esta mal pero si quieres dominar la cultura tendrás que estudiar más.\n\n",x);
    else
      printf("\nHas conseguido %d respuestas bien sobre 30!!\n\nNOO que mal, no sabes nada de cultura, pero no te desanimes, prueba otra vez e intenta conseguir un mejor resultado!\n\n",x);
  return 0;  
}

int SolPaises  (int x)
{
    if (x>15)
      printf("\nHas conseguido %d respuestas bien sobre 30!!\n\nWow se te da genial la geografía!! Me he quedado impresionado.\n\n",x);
    else if (x==15)
      printf("\nHas conseguido %d respuestas bien sobre 30!!\n\nUn aprobado justo, no esta mal pero si quieres dominar la geografía tendrás que estudiar más.\n\n",x);
    else
      printf("\nHas conseguido %d respuestas bien sobre 30!!\n\nNOO que mal, no sabes nada de geografía, pero no te desanimes, prueba otra vez e intenta conseguir un mejor resultado!\n\n",x);
  return 0;  
}

int SolPersonalidades (int a,int b, int c,int d)
{
   if (a>b && a>c && a>d)
     printf("\n Eres SOCIABLE!!\n  Eres una persona con la que la gente se lo pasa bien y eres el centro de la fiesta,\n haces amigos muy fácilmente y te gusta hacerlo, ademas de hablar con todo el mundo sin problema alguno.\n Si pudieras estarías con tus amigos 24/7 y te gusta vivir experiencias nuevas.\n Es una muy buena personalidad pero ten cuidado que no se le puede caer bien a todo el mundo!!!\n\n");
   else if (b>a && b>c && b>d)
     printf("\n Eres TIMIDO!!\n  Puede sonar a algo negativo, pero no lo es en absoluto,\n te cuesta mas hacer amigos y prefieres quedarte en casa cómodamente,\n pero a ti te gusta y eso es lo que importa.\n Tener confianza con unas pocas personas hace que tengas relaciones más profundas e intimas.\n Eso sí, salir de la zona de Comfort nunca esta mal, y te animo a hacerlo para vivir nuevas experiencias.\n\n");
   else if (c>a && c>b && c>d)
     printf("\n Eres EGOCENTRICO!!\n  Suena muy muy negativo…y no te voy a engañar lo es.\n Pero no te preocupes tu eres muy importante y esa carita que debería salir,\n en vez de los que salen que no se lo merecen, en las portadas de todas las revistas y hacerte millonario.\n Yo te entiendo, esta bien quererse a uno mismo y querer lo mejor para ti.\n Pero parate un segundo a pensar en el resto de las personas que hacen lo imposible para que tu seas feliz,\n e intenta hacer algo tú por ellos, es saludable.\n\n");
   else if (d>a && d>b && d<c)  
     printf("\n Eres ALTRUISTA!!\n  Wow, eres un ejemplo a seguir, te gusta ayudar a la gente y lo haces sin pensártelo dos veces.\n Estas todo el rato ayudando al resto y nadie es capaste quitarte esa sonrisa de la cara.\n Sigue así porque se necesita mas gente como tú en la sociedad. Pero también de vez en cuando piensa en lo que tú quieres y tu felicidad,\n la vida no es solo ayudar al resto a conseguir sus objetivos,\n tú también tienes que seguir tus sueños y para eso no podrás ayudar ni agradar a todo todo el mundo.\n\n");
   else if (a==c)  
     printf("\n Eres EGOCENTRICO y SOCIABLE!!!\n  Te gusta ser el centro de atención y quieres serlo todo el rato,\n que la gente hable de ti para después tu seguirlo hablando de ti aunque a le gente no le importe mucho.\n No tienes reparo en conocer a gente nueva y hacer nuevos “amigos” simplemente para decirles lo guay que eres y contarles tu vida,\n que no les importa lo mas mínimo.\n\n");
   else if (a==d)  
     printf("\n Eres ALTRUISTA y SOCIABLE!!!\n  Tomaaa tu personalidad es la guinda del pastel,\n le caes bien a todo el mundo, nos solo porque haces reír a la gente y haces amigos super fácil,\n sino cambie porque haces lo que sea para ayudar a la gente que te rodea. Sigue así! Y se tú mismo que se te da bien.\n\n");
   else if (b==c)  
     printf("\n Eres EGOCENTRICO y TIMIDO!!\n  Te encantaría hablar mas de ti y que tus amigos te tuviesen mas en cuenta y sobre todo que hicierais siempre los planes que tu quieres.\n Pero no se te da bien hablar con la gente ni convencerles de hacer tus planes y lo único que consigues es frustrarte a ti mismo.\n Podrías intentar hacer nuevos amigos que hiciesen lo que tu quisieras y hables sobre ti todo el rato,\n pero no se te da nada nada bien hacer amigos nuevos.\n\n");
   else if (b==d)  
     printf("\n Eres ALTRUISTA y TIMIDO!!!\n  Piensas todo el rato en ayudar a la gente y te sientes bien cuando lo haces,\n aunque a veces te cuesta hacerlo porque te cuesta entablar conversación y no quieres llamar la atención.\n No te preocupes estas haciendo algo muy bueno, y la gente no te va a criticar por ello, sino agradecértelo con creces.\n\n");
   else
   printf("\n No tienes personalidad que fatalidad\n\n");
  return 0;

}

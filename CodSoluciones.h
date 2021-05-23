 #include<stdio.h>

int SolConducir (int x);
int SolDeporte  (int x);
int SolCultura  (int x);
int SolPaises  (int x);
int SolPersonalidades (int a,int b, int c,int d);


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
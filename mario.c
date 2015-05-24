#include <cs50.h>
#include <stdio.h>
int main()
{
  int conteo;
  int c = 2;
  do 
  {
    printf("Ingresa numero: ");
    conteo = GetInt();
  }
  while (conteo < 1 || conteo > 23);
  int cont = conteo;
  for (int k = 0; k < cont; k++)
    {
      for (int i = 0; i < conteo; i++) 
      {
        printf(" ");
      }
      for (int j = 0; j < c; j++)
      {
        printf("#");
      }
      conteo--;
      c++;
      printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h>

int main() 
{

  int i,j,Matriz[3][3],soma=0;

  for(i=0; i<3; i++)
  {
    for(j=0;j<3;j++)
    {
      Matriz[i][j] = rand() % 10;
    }
  }

  printf("\nMATRIZ COMPLETA: \n");
  
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d ", Matriz[i][j]);
    }
      printf("\n");
  }

  printf("\n\nTERCEIRA COLUNA: ");
  
  for(i=0; i<3; i++)
  {
    printf("%d ", Matriz[i][2]);
    soma = soma + Matriz[i][2];
  }
  
  printf("\n\n");
  printf("A SOMA DOS ELEMENTOS DA 3ª COLUNA É: %d",soma);

  return 0;
}

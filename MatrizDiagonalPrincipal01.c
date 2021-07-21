#include <stdio.h>

int main() 
{

  int Matriz[5][5],linha,coluna;

  for(linha=0;linha<5; linha++)
  {
    for(coluna=0;coluna<5;coluna++)
    {
      Matriz[linha][linha] = 1;
      Matriz[coluna][linha+1] = 0;
    }
  }
    
  printf("\n\nMATRIZ COMPLETA: \n");

  for(linha=0; linha<5; linha++)
  {
    for(coluna=0;  coluna<5; coluna++)
    {
      printf("%2d ", Matriz[linha][coluna]);
    }
      printf("\n");
  }

  printf("\n\nDIAGONAL PRINCIPAL: ");

  for(linha=0; linha<5; linha++)
  {
    printf("%d ", Matriz[linha][linha]);
  }

  printf("\n\n");

  return 0;
}
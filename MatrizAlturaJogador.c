#include <stdio.h>

int main() 
{

  int linha,coluna;
  float MatrizAltura[3][4],maiorA,maiorB,maiorC;

  for(linha=0; linha<3; linha++)
  {
    for(coluna=0; coluna<4; coluna++)
    {
      printf("DELEGAÇÃO[%d] ALT. ATLETA[%d]:", linha+1, coluna+1);
      scanf("%f", &MatrizAltura[linha][coluna]);

      if(MatrizAltura[0][coluna] > maiorA)
      {
        maiorA = MatrizAltura[0][coluna];
      }
      else if(MatrizAltura[1][coluna] > maiorB)
      {
        maiorB = MatrizAltura[1][coluna];
      }
      else if(MatrizAltura[2][coluna] > maiorC)
      {
        maiorC = MatrizAltura[2][coluna];
      }
    }
  }

  printf("\nMATRIZ COMPLETA: \n");

  for(linha=0; linha<3; linha++)
  {
    for(coluna=0; coluna<4; coluna++)
    {
      printf("%.2f ", MatrizAltura[linha][coluna]);
    }
      printf("\n");
  }
    
  printf("\n\n");
  printf("MAIOR ALTURA DELEGAÇÃO I: %.2f",maiorA);
  printf("\nMAIOR ALTURA DELEGAÇÃO II: %.2f",maiorB);
  printf("\nMAIOR ALTURA DELEGAÇÃO III: %.2f",maiorC);

  return 0;
}
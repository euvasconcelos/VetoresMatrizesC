#include <stdio.h>

int main() 
{

  int linha,coluna;
  float Matriz[3][3],soma=0;
    
  for(linha=0; linha<3; linha++)
  {
    for(coluna=0; coluna<3; coluna++)
    {
      printf("LINHA[%d] COLUNA[%d]:", linha+1, coluna+1);
      scanf("%f", &Matriz[linha][coluna]);
    }
  }

  printf("\nMATRIZ COMPLETA: \n");
    
  for(linha=0; linha<3; linha++)
  {
    for(coluna=0; coluna<3; coluna++)
    {
      printf("%.2f ", Matriz[linha][coluna]);
    }
      
    printf("\n");
  }

  printf("\n\nDIAGONAL SECUNDARIA: ");
    
  for(linha=0; linha<3; linha++)
  {
    printf("%.2f ", Matriz[linha][3 - 1 - linha]);
    soma = soma + Matriz[linha][3-1-linha];
  }
  
  printf("\n\n");
  
  printf("A SOMA DOS ELEMENTOS DA DIAGONAL SECUNDARIA É: %.2f",soma);

  return 0;
}
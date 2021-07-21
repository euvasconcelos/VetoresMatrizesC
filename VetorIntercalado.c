#include <stdio.h>

int main() 
{
  int VetorI[15],VetorII[15],VetorIII[30],i;

  for(i=0; i<15; i++)
  { 
    printf("DIGITE O %dº NÚMERO DO VETOR I: ",i+1);
    scanf("%d", &VetorI[i]);
  }

  printf("\n\n");

  for(i=0; i<15; i++) 
  {
    printf("DIGITE O %dº NÚMERO DO VETOR II: ",i+1);
    scanf("%d", &VetorII[i]);
  }

  printf("\n\n");

  for(i=0; i<15; i++)
  {
    VetorIII[i*2] = VetorI[i];
  }

  for(i=0; i<15; i++)
  {
    VetorIII[i*2+1] = VetorII[i];
  }

  printf("\n");

  printf("VETOR INTERCALADO: ");

  for (i=0; i<15*2; i++)
  {
    printf("%d ", VetorIII[i]);
  }

  return 0;
}
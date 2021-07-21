#include <stdio.h>

int main(void) 
{
  int K[20],i,aux;
 
  for(i=0; i<20; i++)
  {
    printf("DIGITE A POSIÇÃO %d: ",i+1);
    scanf("%d",&K[i]);
  }

  printf("\n");

  for(i=0; i<20; i+=2)
  {
    aux = K[i];
    K[i] = K[i+1];
    K[i+1] = aux;
  }
  printf("VETOR TROCADO: \n");

  for(i=0; i<20; i++) 
  {
    printf("%d ",K[i]);
  }
  
  return 0;
}
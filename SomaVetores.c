#include <stdio.h>

int main(void) 
{
  int x[10],y[10],z[10],i;

    for(i=0;i<10;i++)
    { 
      printf("DIGITE O %dº NUMERO PARA O VETOR X: ",i+1);
      scanf("%d",&x[i]);
    }

    printf("\n");

    for(i=0;i<10;i++)
    {
      printf("DIGITE O %dº NUMERO PARA O VETOR Y: ",i+1);
      scanf("%d",&y[i]);
    }

    printf("\n\nSOMA DOS ELEMENTOS DOS VETORES X e Y É: ");

    for(i=0;i<10;i++)
    {
      z[i] = (x[i] + y[i]);
      printf("%d ",z[i]);
    }
    
  return 0;
}
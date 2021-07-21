#include <stdio.h>

int main(void) 
{
  int x[9],y[9],z[9],i;

  for(i=0; i<9; i++)
  { 
    printf("DIGITE O %dº NUMERO PARA O VETOR X: ",i+1);
    scanf("%d",&x[i]);
  }

  printf("\n");

  for(i=0; i<9; i++)
  {
    printf("DIGITE O %dº NUMERO PARA O VETOR Y: ",i+1);
    scanf("%d",&y[i]);
  }

  printf("\n");

  for(i=0; i<9; i++)
  {
    printf("DIGITE O %dº NUMERO PARA O VETOR Z: ",i+1);
    scanf("%d",&z[i]);
  }

  printf("\n\nO VETOR CRIADO COM OS TERÇOS FOI: ");

  int w[9] = {x[0],x[1],x[2],y[3],y[4],y[5],z[6],z[7],z[8]};
  
  for(i=0; i<9; i++)
  {
    printf(" %d ",w[i]);
  }
    
  return 0;
}
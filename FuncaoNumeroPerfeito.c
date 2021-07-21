#include <stdio.h>

int NumeroPerfeito(int numero)
{
  int i, soma = 0;

  for(i = 1; i <= numero/2; i++)
  {
    if(numero % i == 0)
    {
      soma += i;
    }   
  }
  if(soma == numero)
  {
    return 1;
  }
  else
  {
    return 0;
  }
    
}

int main()
{
  int Numero,Resultado;

  printf("DIGITE UM NÚMERO:");
  scanf("%d",&Numero);

  Resultado = NumeroPerfeito(Numero);

  if(Resultado == 1)
  {
    printf("RESULTADO: %d",Resultado);
    printf("\nO NÚMERO %d É PERFEITO",Numero);
  }

  else
  {
    printf("RESULTADO: %d",Resultado);
    printf("\nO NÚMERO %d NÃO É PERFEITO",Numero);
  }
    

  return 0;
}
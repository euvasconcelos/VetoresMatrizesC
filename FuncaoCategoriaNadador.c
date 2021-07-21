#include <stdio.h>

int CategoriaNadador(int idade)
{
  int i, soma = 0; 

  if(idade>=5 && idade<=7)
  {
    printf("\nCATEGORIA: INFANTIL A");
  }

  else if(idade>7 && idade<=10)
  {
    printf("\nCATEGORIA: INFANTIL B");
  }

  else if(idade>10 && idade <=13)
  {
    printf("\nCATEGORIA: JUVENIL A");
  }

  else if(idade>13 && idade<=17)
  {
    printf("\nCATEGORIA: JUVENIL B");
  }

  else if(idade >= 18)
  {
    printf("\nCATEGORIA: ADULTO");
  }
  
  else
  {
    printf("\nIDADE NÃO ATENDE AOS REQUISITOS ");
  }

  return 0;
}    

int main()
{
  int idade,Resultado;

  printf("DIGITE SUA IDADE: ");
  scanf("%d",&idade);

  Resultado = CategoriaNadador(idade);
    

  return 0;
}
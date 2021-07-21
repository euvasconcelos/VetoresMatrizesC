#include <stdio.h>

#define tamanho 10

int BuscaVetor(int numero, int posicao, int *vetor, int inicio)
{
	int i;
	for (i=inicio; i<posicao; i++)
	{
		if (vetor[i]==numero)
    {
      return i;
    } 
	}
	return -1;
}

int main()
{
	int posicao = 0,i,Resultado,numero,vetor[tamanho];
	
	for(i=0;i<tamanho;i++)
	{
		printf("DIGITE O %dº DO VETOR: ",i+1);
		fflush(stdin);
		scanf("%d",&vetor[i]);
	}
	
	printf("\nVETOR GERADO: ");
	
	for(i=0;i<tamanho;i++)
	{
		printf("%d ",vetor[i]);
	}
		
	printf("\nDIGITE O NÚMERO DA BUSCA:  ");
	scanf("%d",&numero);
	
	Resultado = BuscaVetor(numero,tamanho,vetor,0);

	if (Resultado == -1) 
  {
    printf("\nNUMERO NÃO ENCONTRADO NO VETOR");
  }
  
	while(Resultado != -1)
	{
		printf("\nNUMERO %d ENCONTRADO NA POSIÇÃO %d DO VETOR.",numero,Resultado);

		posicao = Resultado+1;

		Resultado = BuscaVetor(numero,posicao,vetor,posicao);				
	}
		
	return 0;
}
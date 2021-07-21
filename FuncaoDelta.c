#include <stdio.h>
#include <math.h>

float CalculaDelta(float a,float b, float c)
{
  return pow(b,2) - 4 * a * c;
}


int main()
{
  float A, B, C,Resultado;

  printf("DIGITE O VALOR DE A: ");
  scanf("%f",&A);
  
  printf("DIGITE O VALOR DE B: ");
  scanf("%f",&B);
  
  printf("DIGITE O VALOR DE C: ");
  scanf("%f",&C);

  Resultado = CalculaDelta(A, B, C);
  printf("\nDELTA = %.2f",Resultado);
    
  return 0;
}
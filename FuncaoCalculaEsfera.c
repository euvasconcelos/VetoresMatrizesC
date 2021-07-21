#include <stdio.h>
#include<math.h>

#define pi 3.14

float CalculaVolumeEsfera(float raio)
{
  float volume = 4/3 * pi*pow(raio,3);
  return volume;
}

int main()
{
  float Raio,Resultado;

  printf("INFORME O RAIO DA ESFERA: ");
  scanf("%f",&Raio);

  Resultado = CalculaVolumeEsfera(Raio);
  printf("VOLUME DA ESFERA: %.2f\n",Resultado);

  return 0;
}
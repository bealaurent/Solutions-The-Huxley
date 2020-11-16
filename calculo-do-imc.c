#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float altura, peso, IMC;
    scanf ("%f", &altura);
    scanf ("%f", &peso);

      printf("%f\n", IMC);
    if (IMC<17)
      printf("Muito abaixo do peso");
      else
    if (IMC>=17 && IMC<18.5)
      printf("Abaixo do peso");
      else
    if(IMC>=18.5 && IMC<25)
      printf("Peso normal");
      else
    if(IMC>=25 && IMC<30)
      printf("Acima do peso");
      else
    if(IMC>=30 && IMC<35)
      printf("Obesidade grau I");
      else
    if (IMC>=35 && IMC<40)
      printf("Obesidade grau II");
      else
    if (IMC>40)
      printf("Obesidade grau III");
	return 0;
}
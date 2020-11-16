#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
    float ph;
    printf ("Digite o pH da solucao:\n");
    scanf ("%f", &ph);

    if (ph > 0 && ph < 7)
    {
        printf ("Solucao acida");
    }
    if (ph > 7 && ph < 14)
    {
        printf ("Solucao basica");
    }
    if (ph == 7)
    {
        printf ("Solucao neutra");
    }
    if (ph < 0)
    {
       printf ("Valor do pH deve estar entre 0 e 14");
    }

	return 0;
}
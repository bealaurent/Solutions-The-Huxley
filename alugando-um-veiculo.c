#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	float valor_fixo, km_extra, valor_mais_dia, valor_km_extra;
    int dia, km;
    printf ("Digite a quantidade de dias: ");
    scanf ("%i", &dia);
    printf ("Digite a quilometragem: ");
    scanf ("%i", &km);
    
    valor_fixo = 90.00;
    km_extra = (km - 100);
    valor_mais_dia = (valor_fixo * dia);
    valor_km_extra = (km_extra * 12);

    if (km <= 100 && dia == 1)
      printf ("%0.2f", valor_fixo);
    if (km <= 100 && dia > 1)
        printf ("%0.2f", valor_mais_dia);
    if (km > 100 && dia == 1)
        printf ("%0.2f", (valor_fixo + valor_km_extra));
    if (km > 100 && dia > 1)
        printf ("%0.2f", (valor_mais_dia + valor_km_extra));
    return 0;
}
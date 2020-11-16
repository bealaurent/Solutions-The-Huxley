#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    float salario_atual, salario_novo;
    
    printf ("Informe seu salário: ");
    scanf ("%f", &salario_atual);

if (salario_atual > 500)
    salario_novo = (salario_atual * 0.10);
else
    if (salario_atual > 300)
            salario_novo = (salario_atual * 0.07);
else
    if (salario_atual < 300 )
        salario_novo = (salario_atual * 0.05);
    printf ("Seu novo salário = %0.2f", salario_novo);

	return 0;
}
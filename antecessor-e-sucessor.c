#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int numero, antecessor, sucessor;
printf ("Digite um número: ");
scanf ("%i", &numero);

antecessor = --numero;
sucessor = ++numero;
    printf (antecessor, "%i \n %i", sucessor);
	return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int num1, num2;
    printf ("Digite dois numeros:");
    scanf ("%i", &num1);
    scanf ("%i", &num2);

    if (num1 > num2)
    {
        printf ("%i %i",num2, num1);
    }
        else
        printf ("%i %i", num1, num2);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int x, y;
   
    printf(" Digite o numero: ");
    scanf("%d", &x);
   
    y = (x%10);
   
    printf("Algarismo das unidades: %d", y);

	return 0;
}
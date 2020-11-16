#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int num;
    
    scanf ("%d", &num);

    if(num % 4 == 0 && num % 7 == 0 && num % 5 != 0)
    {
        printf("sim");
    }
    else 
    {
        printf("nao");
    }

	return 0;
}
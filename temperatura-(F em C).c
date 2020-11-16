#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float temp_f;
    double temp_c;
    
    printf ("Digite a temperatura:\n");
    scanf ("%f", &temp_f);

    temp_c = ((temp_f - 32)*5);
    
    printf ("%.14f", temp_c/9);

	return 0;
}
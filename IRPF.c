#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    float rend_anual, retido, total_ali, total_dedu, total;
    printf ("Informe o rendimento anual: ");
    scanf ("%f", &rend_anual);
    printf ("Informe o valor retido: ");
    scanf ("%f", &retido);

    if (rend_anual >= 22847.77 && rend_anual <= 33919.80){
        total_ali = rend_anual * 0.075;
        total_dedu = total_ali - 1713.58;
        total = total_dedu - retido;
        printf ("%.2f", total);}
    else
        if (rend_anual >= 33919.81 && rend_anual <= 45012.60){
            total_ali = rend_anual * 0.15;
            total_dedu = total_ali - 4257.57;
            total = total_dedu - retido;
            printf ("%.2f", total);}
    else
        if (rend_anual >= 45012.61 && rend_anual <= 55976.16){
            total_ali = rend_anual * 0.225;
            total_dedu = total_ali - 7633.51;
            total = total_dedu - retido;
            printf ("%.2f", total);}
    else
        if (rend_anual >= 55976.16){
            total_ali = rend_anual * 0.275;
            total_dedu = total_ali - 10432.32;
            total = total_dedu - retido;
            printf ("%.2f", total);}
    else
        if (rend_anual <= 22847.76){
        printf ("0.0");}
	return 0;
}
 
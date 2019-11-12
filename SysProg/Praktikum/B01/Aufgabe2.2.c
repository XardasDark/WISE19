#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    int grad = 0;
    float wert;
    while(grad<=360)
    {
        wert = sin(grad*(PI / 180));
        printf("Winkel: %d Grad => Sinus-Funktionswert: %.3f\n", grad, wert);
        grad=grad+10;
    }

    printf("\n\n");

    for (grad=0; grad<=360; grad=grad+10)
    {
        wert = sin(grad*(PI / 180));
        printf("Winkel: %d Grad => Sinus-Funktionswert: %.3f\n", grad, wert);
    }

    return 0;
}

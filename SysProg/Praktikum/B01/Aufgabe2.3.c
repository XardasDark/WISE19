#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,zahl;

    printf("Gib eine positive ganze Zahl ein: ");
    scanf("%d", &zahl);

    printf("1. Ausgabe\n\n");
    for(a=0; a<zahl; a++)
    {
        printf("*");
    }
    printf("\n\n");

    printf("2. Ausgabe\n\n");
    for(a=0; a<zahl; a++)
    {
        for(b=0; b<=a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    printf("3. Ausgabe\n\n");
    if(zahl%2)
    {
        for(a=0; a<=zahl; a=a+2)
        {
            for(b=a; b<=floor(zahl/2); b++)
            {
                printf(" ");
            }
            for(c=0; c<(2*a)-1; c++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Eingegebe Zahl ist gerade. Ausgabe kann nicht ausgeführt werden");
    }

    return 0;
}

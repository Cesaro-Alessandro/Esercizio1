#include <stdio.h>
int main(int argc, char *argv[])
{

    double numero1;
    double numero2;
    double rapporto;
    printf("Inserisci un numero \n");
    scanf("%lf", &numero1);
    printf("Inserisci un secondo numero \n");
    scanf("%lf", &numero2);
    do
    {
        if (numero1 > numero2)
        {
            rapporto = numero1 / numero2;
            printf("%lf \n", rapporto);
        }
        else if (numero2 > numero1)
        {
            rapporto = numero2 / numero1;
            printf("%lf \n", rapporto);
        }

    } while (numero1 != 0 || numero2 != 0);
}

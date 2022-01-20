#include <stdio.h>
int main(int argc, char *argv[])
{

    double numero1;
    double numero2;
    double rapporto;
    do
    {

        printf("Inserisci un numero \n");
        scanf("%lf", &numero1);
        printf("Inserisci un secondo numero \n");
        scanf("%lf", &numero2);
        printf("%lf \n", numero1);
        printf("%lf \n", numero2);
        if (numero1 > numero2){
            printf("rapporto");
            rapporto = numero1 / numero2;
            printf("rapporto");
            printf("%lf \n", rapporto);
        }
        else if (numero2 > numero1){
            printf("rapporto");
            rapporto = numero2 / numero1;
            printf("rapporto");
            printf("%lf \n", rapporto);
        }
        return 0;
    } while (numero1 != 0 || numero2 != 0);
}

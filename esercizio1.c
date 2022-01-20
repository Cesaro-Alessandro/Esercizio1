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
        printf("rapporto \n");
        printf("Inserisci un secondo numero \n");
        scanf("%lf", &numero2);
        printf("rapporto \n");
        printf("%lf \n", numero2);
        if (numero1 > numero2){
            printf("rapporto \n");
            rapporto = numero1 / numero2;
            printf("rapporto \n");
            printf("%lf \n", rapporto);
        }
        else if (numero2 > numero1){
            printf("rapporto \n");
            rapporto = numero2 / numero1;
            printf("rapporto \n");
            printf("%lf \n", rapporto);
        }
    } while (numero1 != 0 || numero2 != 0);
}

#include <stdio.h>
int main (int argc, char *argv[])
{

    double numero1;
    double numero2;
    double rapporto;
    printf("Inserisci un numero \n");
    scanf("%e", &numero1);
    printf("Inserisci un secondo numero \n");
    scanf("%e", &numero2);
    do
    {
        if (numero1 > numero2)
        {
            numero1 = numero1/numero2;
        }
        else if (numero2 > numero1)
        {
            numero2 = numero2/numero1;
        }
    
    } while (numero1 != 0 || numero1 != 0);
    printf("%e", numero1);
    printf("%e", numero2);
}

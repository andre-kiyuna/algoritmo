#include <stdio.h>
int main()
{
int a, b, MAIOR, MENOR;
    printf ("digite o primeiro numero: ");
    scanf ("%d", &a);
    printf ("digite o segundo numero: ");
    scanf ("%d", &b);
    if (a > b) { MAIOR = a;
    MENOR = b;
     printf ("os numeros: %d e %d\no maior deles e o:%d\no menor deles e o:%d", MAIOR, MENOR, MAIOR, MENOR);
}
    if (b > a) { MAIOR = b;
    MENOR = a;
     printf ("os numeros: %d e %d\no maior deles e o:%d\no menor deles e o:%d", MAIOR, MENOR, MAIOR, MENOR);
    }
    else {printf ("numeros iguais");}
    return 0;
}
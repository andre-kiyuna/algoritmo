#include <stdio.h>

int main()
{
    int r, num1;
    do {
        do{
        printf ("Digite um número: ");
        scanf ("%d", &r);
        }
        while (r > 150 || r < 50);
        
        if (r %2 == 0){
            printf ("O número:%d é par\n", r);
        }
        else {
            printf ("O número:%d é impar\n", r);
        }
    }
    while (r %5 != 0);
    printf ("Fim do programa XD");
    return 0;
}
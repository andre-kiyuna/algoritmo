#include <stdio.h>

int main()
{
    int idade[7];
    int i;
    for(i=0; i<=7; i++){
        printf ("Digite uma idade: ");
        scanf ("%d", &idade[i]);
        if (idade[i] % 2 == 0){
            printf ("Idade par\n");
        }
        else {
            printf ("Idade impar");
            idade[i] = 0;
            i--;
        }
    }
    for (i=0; i<=7; i++){
        printf ("Idades: %d\n", idade[i]);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int idades[7], idade;
    int i=0;
    do {
        printf ("Digite uma idade: ");
        scanf ("%d", &idade);
        if (idade % 2 == 0){
            printf ("Idade par\n");
            idades[i] = idade;
            i++;
        }
        else {
            printf ("Idade impar\n");
        }
    }while (i<=7);
    
    for (i=0; i<=7; i++){
        printf ("Idades: %d\n", idades[i]);
    }
    return 0;
}
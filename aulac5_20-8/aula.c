#include <stdio.h>

int main()
{
    float a1, a2, media;
    char senha;
    senha = 's';
    a1 = 6;
    a2 = 6;
    while (senha == 's'){
        while (a1 >= 5 && a2 >= 5){
        printf ("Digite a nota a1: ");
        scanf ("%f", &a1);
        printf ("Digite a nota a2: ");
        scanf ("%f", &a2);
        }
    media = (a1 + a2) / 2;
    printf ("A média é: %0.1f\n", media);
    printf ("Deseja calcular a nota do aluno?\nDigite 's' se sim: ");
    scanf (" %c", &senha);
    }
    return 0;
}
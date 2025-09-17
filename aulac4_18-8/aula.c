#include <stdio.h>

int main()
{
    float salario, mediaf;
    int faltas, megasena;
    printf ("Digite o salario: ");
    scanf ("%f", &salario);
    
    printf ("Ganhou na megasena? Digite 1 se sim: ");
    scanf ("%d", &megasena);
    
    if (salario >= 60000 || megasena == 1) {
        printf ("Digite a média final: ");
    scanf ("%f", &mediaf);
    
    printf ("Digite as faltas: ");
    scanf ("%d", &faltas);
        if (mediaf >= 6 && faltas <= 15) {
        printf ("Você tem dinheiro e passou de ano, então pode viajar :)");
        }
        else {
            printf ("Você tem dinheiro mas não passou de ano, então não pode viajar XD");
        }
    }
    else {
        printf ("Você não tem dinheiro e não pode viajar XD");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int x, rep;
    printf ("Digite um número:");
    scanf ("%d", &x);
    printf ("Quantas vezes vai se repetir: ");
    scanf ("%d", &rep);
    while(x<rep + 1){
    printf ("Número %d\n", x);
    x = x + 1;
    }
    printf ("Fim do programa");
    return 0;
}
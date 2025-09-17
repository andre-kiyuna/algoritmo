#include <stdio.h>

int main()
{
    float a1, a2, media, faltas, mediaf, provaf, maior, menor;
    printf ("digite quantas faltas: ");
    scanf ("%f", &faltas);
    if (faltas >= 16) {
        printf ("o aluno não passou de ano");
     }
    else {
    printf ("digite a nota 1: ");
    scanf ("%f", &a1);
    printf ("digite a nota 2: ");
    scanf ("%f", &a2);
    if (a1 > a2) { 
        maior = a1;
        menor = a2;
    }
    if (a2 > a1) {
        maior = a2;
        menor = a1;
    }
    
    media = (a1 + a2) / 2;
    if (media >= 6) {
        printf ("o aluno passou de ano com a média: %f", media);
    }
    if (media < 6) {
        printf ("digite a nota da prova final: ");
        scanf ("%f", &provaf);
        mediaf = (maior + provaf) / 2;
        
        if (mediaf >= 6) {
            printf ("o aluno não passou de ano com a média: %f\nmas fazendo a prova final ele substituiu a menor nota: %f ficando com a média final: %f", media, menor, mediaf);
        }
    else {
    printf ("o aluno não passou de ano");
    }
    }
    }
    return 0;
}
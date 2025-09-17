#include <stdio.h>

int main()
{
    float media, mediaf, soma=0;
    int trab, i;
    printf ("Digite quantos trabalhos: ");
    scanf ("%d", &trab);
    for(i=1; i<=trab; i++){
        printf ("Digite a nota %d: ", i);
        scanf ("%f", &media);
        soma = soma + media;
        mediaf = soma / i;
    }
    printf ("A média das notas dos trabalhos é:%.2f", mediaf);
    return 0;
}
#include <stdio.h>0

int main()
{
    int cont, bn, idade;
    printf ("Quantos boa noite você quer: ");
    scanf ("%d", &bn);

    for (cont=1; cont<=bn; cont=cont+1){
        printf ("Qual sua idade: ");
        scanf ("%d", &idade);
        printf ("Boa noite %d\nSua idade é:%d\n", cont, idade);
    }
    
    return 0;
}
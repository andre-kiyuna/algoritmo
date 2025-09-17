#include <stdio.h>

int main()
{
    int idades[10], soma, media, num, qtd = 1;
    printf ("Quantas idades: ");
    scanf ("%d", &num);
    for (int i=0; i<num; i++){
    printf ("\nDigite a %d°idade: ", qtd );
    scanf ("%d", &idades[i]);
    qtd = qtd + 1;
    soma = soma + idades[i];
    }
    
    for (int cont=num-1; cont>=0; cont--){
    printf ("\nidade:%d", idades[cont]);
    }
    
    media = soma / num;
    printf ("\na soma das idades é:%d", soma);
    printf ("\na média das idades é:%d", media);
    return 0;
}
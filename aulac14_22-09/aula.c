#include <stdio.h> 
int main() 
{ 
    char nome[31], nome2[31], nome3[31]; 
    int i=0, z=0, qnt=0, cont=0;
    printf ("Quantos nomes quieres?: ");
    scanf ("%d", &qnt);
    for (cont=0; cont<qnt; cont++){
    printf ("Digite o seu nome: ");     
    scanf(" %31[^\n]", nome); 
    printf ("o nome é: "); 

    for (i = 0; nome[i] != '\0'; i++){ 
        printf("%c", nome[i]);
        nome2[i] = nome[i]; 
    } 
    printf ("\nnumero de caracteres: %d\n", i); 
    printf ("vetor 2: %s", nome2);
    
    for(z=0; z<=i; z++){
    nome3[z]=nome2[i-1-z];
    }
    nome3[z]='\0';
    printf ("\nO nome ao contrário é: %s", nome3);
    }
    return 0; 
} 
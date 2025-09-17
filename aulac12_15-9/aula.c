#include <stdio.h> 
int main() 

{ 

    char nome[31], nome2[31]; 

    int i=0; 

    printf ("Digite o seu nome: "); 

    scanf(" %31[^\n]", nome); 

    printf ("o nome é: "); 

     

     

    for (i = 0; nome[i] != '\0'; i++){ 

        printf("%c", nome[i]); 

        nome2[i] = nome[i]; 

    } 

    printf ("\nnumero de caracteres: %d\n", i); 

    printf ("vetor 2:%s", nome2); 

    return 0; 

} 
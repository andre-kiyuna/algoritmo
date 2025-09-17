#include <stdio.h>

int main()
{
    int num;
    printf("Digite o número do representante: ");
    scanf ("%d", &num);
    if (num == 1) {
    printf ("O representante é o André");
    }
    if (num == 2){
    printf ("O representante é o Danylo");
    }
    if (num == 3){
    printf ("o representante é o Sérgio");
    }
    else {
        printf ("número inválido");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int num;
    printf ("Digite o número do representante:");
    scanf ("%d", &num);
    switch (num){
        case 1: printf ("O representante é o André");
        break;
        case 2: printf ("O representante é o Danylo");
        break;
        case 3: printf ("O representante é o Sérgio");
        break;
        default: printf ("número inválido");
    }
    return 0;
    }
    #include <stdio.h>

int main()
{
    int caso, num1, num2, quad, senha;
    float divi;
    printf ("digite a senha: ");
    scanf ("%d", &senha);
    if (senha == 1){
    printf ("Escolha um número de 1 a 3: ");
    scanf ("%d", &caso);
    switch (caso){
        case 1: printf ("Digite um número: ");
        scanf ("%d", &num1);
        if (num1 % 2 == 0) {
            printf ("o número é par");
        }
        else { printf ("o número é ímpar");
        }
        break;
        case 2: printf ("Digite um número: ");
        scanf ("%d", &num1);
        quad = num1 * num1;
        printf ("O quadrado do número %d é:%d", num1, quad);
        break;
        case 3: printf ("Digite o primeiro número: ");
        scanf ("%d", &num1);
        printf ("Digite o segundo número: ");
        scanf ("%d", &num2);
        (divi = num1 / num2);
        printf ("O resultado da divisão do número %d por %d é:%0.2f", num1, num2, divi);
        break;
        default: printf ("número inválido");
    }
    }
    else {
        printf ("senha inválida");
    }
    return 0;
}
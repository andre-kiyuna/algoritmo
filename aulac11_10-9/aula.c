#include <stdio.h>

int main()
{
    float boletim [5][5], media[5];
    int cod, nota, med;
    printf ("antes dos 2 for");
    
    for (cod=0;cod<5;cod++){
         printf ("embaixo do 1 for");
        printf ("Digite o código do aluno: ");
        scanf ("%f", &boletim[cod][0]);
        for (nota=1;nota<5;nota++){
            printf ("embaixo do 2 for");
        printf ("Digite a %d °nota: ", nota);
        scanf ("%f", &boletim[cod][nota]);
            for (med=0;med<5;med++){
        media [med]= ((boletim [cod][2] + boletim [cod][3]) / 2 + (boletim [cod][4] + boletim [cod][5]))/2;  
    }
    }
    printf ("fim do 2 for");
    }
    printf("fim do 1 for");
    for (cod=0;cod<5;cod++){
        printf ("O código do aluno é:%f\n", boletim [cod][0]);
        for (nota=1;nota<5;nota++){
            printf ("A nota do aluno é:%f\n", boletim [cod][nota]);
            for (med=1;med<5;med++){
                printf ("A média do aluno é:%f\n", media [med]);
            }
        }
    }
    return 0;
}
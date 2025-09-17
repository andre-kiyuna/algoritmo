#include <stdio.h>

int main()
{
    float trab, prov, medialuno, somanotas=0, mediabim, notaexam, mediafinal;
    int bimestre;
    for (bimestre=1; bimestre< 5; bimestre=bimestre+1){
        printf ("Digite as notas do %d°Bimestre\n", bimestre);
    do{
        printf ("Digite a nota do trabalho: ");
        scanf ("%f", &trab);
    }
    while (trab < 0 || trab > 10);
    do{
        printf ("Digite a nota da prova: ");
        scanf ("%f", &prov);
    }
    while (prov < 0 || prov > 10);
    mediabim = (prov * 0.8) + (trab * 0.2);
    somanotas = somanotas + mediabim;
    }
    medialuno = somanotas/4;
    if (medialuno >= 6.75 && medialuno < 7){
        medialuno = 7;}
        
        printf ("A média anual do aluno foi arredondada para 7\n");
    }
    printf ("A média anual do aluno é: %0.2f\n", medialuno);
    if (medialuno >= 7){
        printf ("O aluno passou de ano\n");
    }
    if (medialuno < 4){
        printf ("O aluno reprovou\n");
    }
    if (medialuno >= 4 && medialuno < 6.75){
        printf ("O anulo poderá fazer um exame\n");
        do{
        printf ("Digite a nota do exame: ");
        scanf ("%f", &notaexam);
    }
    while (notaexam < 0 || notaexam > 10);
    mediafinal = (notaexam + medialuno) / 2;
    if (mediafinal >= 5){
    printf ("O aluno passou no exame\n");
    }
    else{
    printf ("O aluno reprovou mesmo com exame\n");
    }
    }

    return 0;
}
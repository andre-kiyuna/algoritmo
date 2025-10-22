#include <stdio.h>

void bemvindo();
void atelogo();
float registrarConsumo(float agua[], float media);
float calcularMedia(float agua[], float media);
int main()
{
    bemvindo();
    float agua[13], media;
    agua[0]=0;
    int i;
    registrarConsumo(agua, media);
    calcularMedia(agua, media);
    atelogo();
    return 0;
}
void bemvindo(){
    printf ("O objetivo do programa e calcular a media de consumo de agua por ano\n");
}
void atelogo()
{
    printf ("fim do programa");
}
float registrarConsumo(float agua[], float media){
    float consumo=0;
    media = 0;
    int i;
    for(i=1; i<13; i++){
        printf ("Digite o consumo de agua do %d°mes: ", i);
        scanf ("%f", &agua[i]);
    media = agua[i] + agua[-i];
    }
    for(i=1; i<13; i++){
        printf("%d°mes e: %f\n", i, agua[i]);
    }
    for(i=1; i<13; i++){
    consumo = consumo + agua[i];
    }
    printf ("O consumo do ano: %f\n", consumo);
    return consumo;
}
float calcularMedia(float agua[13], float media){
    agua[0] = media / 12;
    printf ("A media e: %f\n", agua[0]);
    return agua, media;
}

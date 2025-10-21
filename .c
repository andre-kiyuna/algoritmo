#include <stdio.h>

void bemvindo(){
    printf ("O objetivo do programa e calcular a media de consumo de agua por ano\n");
}
void atelogo(){
    printf ("fim do programa");
}
int main()
{
    bemvindo();
    float agua[13];
    agua[0]=0;
    int i;
    for(i=1; i<13; i++){
    printf ("Digite o consumo de agua do %d°mes: ", i);
    scanf ("%f", &agua[i]);
    agua[0] = agua[i] + agua[-i];
    }
    agua[0] / 12;
    printf ("A media e: %f\n", agua[0]);
    for(i=0; i<13; i++){
    printf("%d°mes e: %f\n", i, agua[i]);
    }
    registrarConsumo();
    atelogo();
    return 0;
}
float registrarConsumo(){
    float consumo=0;
    int i;
    for(i=1; i<13; i++){
    consumo = consumo + agua[i];
    }
    printf ("O consumo do ano: %f", consumo);
    return consumo;
}
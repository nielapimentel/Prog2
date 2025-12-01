#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main (){
    int tamanho;
    int *v;
    scanf("%d", &tamanho);

    v = CriaVetor(tamanho);
    LeVetor(v, tamanho);
    
    printf("%.2f\n", CalculaMedia(v, tamanho));

    LiberaVetor(v);
    return 0;
}
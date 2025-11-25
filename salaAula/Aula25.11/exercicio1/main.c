#include <stdio.h>
#include <stdlib.h>

#define TAM_INICIO_ARRAY 5
#define TAM_INCREMENTO 5

int main (){
    int tamAlocado = TAM_INICIO_ARRAY;
    float nota = 0;
    float *ptrNota;

    ptrNota = (float*) calloc(tamAlocado, sizeof(float));

    for (int i=0; nota!=-1; i++){
        scanf("%f", &nota);

        
        if (i == tamAlocado){
            tamAlocado += TAM_INCREMENTO;
            ptrNota = (float*) realloc(ptrNota, tamAlocado * sizeof(float));
        }
        ptrNota[i] = nota;
    }

    free(ptrNota);
    return 0;
}
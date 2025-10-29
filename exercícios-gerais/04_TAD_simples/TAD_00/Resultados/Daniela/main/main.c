#include <stdio.h>
#include "ponto.h"

int main (){
    Ponto p1, p2;
    float x, y;

    scanf ("%f %f", &x, &y);
    p1= pto_cria(x, y);

    scanf ("%f %f", &x, &y);
    p2= pto_cria(x, y);

    float dist= pto_distancia(p1, p2);
    int distInt= (int)dist;

    if (dist>distInt){
        printf ("%.3f", &dist);
    } else {
        printf ("%d", distInt);
    }


    return 0;
}

// Ponto pto_cria (float x, float y);

// float pto_acessa_x (Ponto p);

// float pto_acessa_y (Ponto p);

// Ponto pto_atribui_x (Ponto p, float x);

// Ponto pto_atribui_y (Ponto p, float y);

// float pto_distancia (Ponto p1, Ponto p2);
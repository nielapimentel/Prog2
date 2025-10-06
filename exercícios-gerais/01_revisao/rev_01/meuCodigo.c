#include <stdio.h>
#include <math.h>

typedef struct {
    float raio;
    float x, y;
}Circulo;

int main (){
    Circulo Tiro;
    Circulo Alvo;

    float distParametro, distReal;

    scanf ("%f %f %f", &Alvo.x, &Alvo.y, &Alvo.raio);
    scanf ("%f %f %f", &Tiro.x, &Tiro.y, &Tiro.raio);

    distParametro = Alvo.raio + Tiro.raio;
    distReal= sqrt(pow((Alvo.x - Tiro.x), 2) + pow((Alvo.y -Tiro.y), 2));
    
    if (distReal<=distParametro) {
        printf ("ACERTOU");
    } else {
        printf ("ERROU");
    }
}
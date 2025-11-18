#include <stdio.h>
#include "tDepartamento.h"
#include <string.h>

int main (){
    int qtd;
    char curso1[STRING_MAX];
    char curso2[STRING_MAX];
    char curso3[STRING_MAX];
    char diretor[STRING_MAX];
    char nome[STRING_MAX];
    int m1, m2, m3;

    scanf("%d", &qtd);
    tDepartamento d[qtd];

    for (int i=0; i<qtd; i++){
        scanf(" %[^\n]", nome);
        scanf(" %[^\n]", diretor);
        scanf(" %[^\n]", curso1);
        scanf(" %[^\n]", curso2);
        scanf(" %[^\n]", curso3);
        scanf("%d %d %d", &m1, &m2, &m3);

        if (m1<0 || m2<0 || m3<0){
            i--;
            printf("\nDigite um departamento com médias válidas");
        } else {
            d[i] = CriaDepartamento(curso1, curso2, curso3, nome, m1, m2, m3, diretor);
        }
    }

    OrdenaDepartamentosPorMedia(d, qtd);

    for (int i=0; i<qtd; i++){
        ImprimeAtributosDepartamento(d[i]);
    }
    printf("\n");
}
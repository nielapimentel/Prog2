#include "evento.h"
#include <stdio.h>
#include <string.h>



/**
 * Cadastra um novo evento no calendário e o insere na próxima posição do array.
 *
 * @param eventos Array de eventos onde o novo evento será cadastrado.
 * @param numEventos Ponteiro para o número atual de eventos cadastrados.
 */
void cadastrarEvento(Evento* eventos, int* numEventos){

    if (*numEventos < MAX_EVENTOS){
        Evento e;
        
        scanf(" %[^\n]\n", e.nome);
        scanf("%d %d %d", &e.dia, &e.mes, &e.ano);
    
        eventos[*numEventos]= e;
        *numEventos = *numEventos+1;

        printf("Evento cadastrado com sucesso!\n");
    }

}

/**
 * Exibe todos os eventos cadastrados no calendário.
 *
 * @param eventos Array de eventos a serem exibidos.
 * @param numEventos Ponteiro para o número total de eventos cadastrados.
 */
void exibirEventos(Evento* eventos, int* numEventos){

    if (*numEventos > 0){
        printf("Eventos cadastrados:\n");
    }

    for (int i=0; i<*numEventos; i++){
        printf("%d - %s - %d/%d/%d\n", i, eventos[i].nome, eventos[i].dia, eventos[i].mes, eventos[i].ano);
    }
}

/**
 * Troca a data de um evento específico no calendário.
 *
 * @param eventos Array de eventos onde o evento será modificado.
 * @param numEventos Ponteiro para o número total de eventos cadastrados.
 */
void trocarDataEvento(Evento* eventos, int* numEventos){
    int idx;
    scanf("%d", &idx);

    if(idx >= *numEventos){
        printf("Indice invalido!\n");
    } else {
        scanf("%d %d %d", &eventos[idx].dia, &eventos[idx].mes, &eventos[idx].ano);
        printf("Data modificada com sucesso!\n");
    }
}

/**
 * Troca a posição de dois eventos, a partir do índice, dentro do array de eventos.
 *
 * @param eventos Array de eventos onde a troca será realizada.
 * @param indiceA Ponteiro para o primeiro índice.
 * @param indiceB Ponteiro para o segundo índice.
 * @param numEventos Ponteiro para o número total de eventos cadastrados.
 */
void trocarIndicesEventos(Evento* eventos, int* indiceA, int* indiceB, int* numEventos){
    //*numEventos esta fora do array, como eu nao aumentei o indice, o evento nunca vai ser alcancado pelos for's
    
    if (indiceA >= *numEventos || indiceB >= *numEventos){
        printf("Indices invalidos!\n");
    } else {
        eventos[*numEventos] = eventos[*indiceA];
        eventos[*indiceA] = eventos[*indiceB];
        eventos[*indiceB] = eventos[*numEventos];
        printf("Eventos trocados com sucesso!\n");
    }


}


#ifndef DATA_H
#define DATA_H

typedef struct {
    int dia;
    int mes;
    int ano;
} tData;

tData criaData(int dia, int mes, int ano){
    tData data;
    data.dia = dia;

    return data;
}


#endif
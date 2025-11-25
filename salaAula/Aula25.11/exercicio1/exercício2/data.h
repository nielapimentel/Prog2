#ifndef DATA_H
#define DATA_H

typedef struct {
    int dia;
    int mes;
    int ano;
} tData;

tData *criaData(int d, int mes, int ano);

#endif
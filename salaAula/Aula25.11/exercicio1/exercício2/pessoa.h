#ifndef PESSOA_H
#define PESSOA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"

typedef struct {
    char nome[100];
    tData data;
    int cpf;
} tPessoa;

#endif
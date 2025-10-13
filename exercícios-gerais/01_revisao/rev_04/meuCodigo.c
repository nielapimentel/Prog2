#include <stdio.h>

int main (){
    int numDecimal;
    int rest,resultado=0, i;

    scanf("%d", &numDecimal);

    for (i=1; numDecimal!=0; i=i*10){
        rest= numDecimal%8;
        resultado += rest*i;
        numDecimal= numDecimal/8;
    }

    printf ("%d", resultado);

    return 0;
}
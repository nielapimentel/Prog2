#include <stdio.h>
#//include <math.h>
#include <stdlib.h>

int main (){
    int num, salvaNum=1;
    int i, j;

    scanf("%d", &num);

    for (i=0; i<num; i++){
        for (j=0; j<=i; j++){
            printf ("%d ", salvaNum);
            salvaNum++;
        }
        printf ("\n");
    }

    return 0;
}
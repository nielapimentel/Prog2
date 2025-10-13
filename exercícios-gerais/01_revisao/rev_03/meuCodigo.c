#include <stdio.h>

void preencheVetor (int vet[], int tam){
    int i=0;
    for (i=0; i<tam; i++){
        scanf("%d", &vet[i]);
    }
}

void organizaVetor (int vet[], int tam){
    int i=0, j=0;
    int aux=0;

    for (i=0; i<tam; i++){
        for (j=i+1; j<tam; j++){
            if (vet[i]>vet[j]){
                aux= vet[i];
                vet[i]=vet[j];
                vet[j]= aux;
            }
        }
    }
}

int main (){
    int num;
    scanf ("%d", &num);

    int ident[num];
    preencheVetor (ident, num);
    organizaVetor (ident, num);

    int i=0, j=0;
    int flagCopia=0;

    for (i=0; i<num; i++){
        for (j=i+1; j<num; j++){
            if (ident[i]==ident[j]){
                ident[j]=0;
                flagCopia++;
            }
        }
        if (flagCopia>0){
            ident[i]=0;
            flagCopia=0;
        }
    }

    j=0;
    for (i=0; i<num; i++){
        if (ident[i]!=0){
            printf ("%d ", ident[i]);
            j++;
        }
    }
    
    if (j==0){
        printf ("NENHUM");
    }
}
#include "Algoritmos.h"
#define MAX 1000

int main(){
    int vetor[MAX];
    FILE* arq;
    arq = fopen("arquivo10000.txt", "r");

    if(!arq){
        printf("Erro!\n");
        return 1;
    }

    else{
        while(feof(arq) != 1){
            for(int i = 0; i< MAX; i++)
                fscanf(arq, "%d", &vetor[i]);
        }
    }

    quick_sort(vetor, 0, MAX-1);

    fclose(arq);
}
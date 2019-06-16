#include "Algoritmos.h"

int main(){
    int vetor[10];
    int escolha;
    vetor[0] = 17;
    vetor[1] = 14;
    vetor[2] = 8;
    vetor[3] = 6;
    vetor[4] = 7;
    vetor[5] = 11;
    vetor[6] = 20;
    vetor[7] = 3;
    vetor[8] = 1;
    vetor[9] = 9;

    printf("Qual algoritmo deseja usar?\n1 - Bubble\n2 - Radix\n3 - Quick\nEscolha: ");
    scanf("%d", &escolha);
    
    if(escolha == 1){
        bubble_sort(vetor, TAM);
    }
    else if(escolha == 2){
        radix_sort(vetor, TAM);
    }
    else if(escolha == 3){
        quick_sort(vetor, 0, TAM - 1);
    }
    else{
        return 1;
    }
    
    printf("Vetor ordenado:\n");
    for(int i = 0; i < TAM-1; i++){
        printf("%d, ", vetor[i]);
    }
    printf("%d.\n", vetor[TAM-1]);
    
    return 0;
}
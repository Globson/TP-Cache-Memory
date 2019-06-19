#include "Algoritmos.h"

//Algoritmos de ordenacao

void bubble_sort (int *vetor, int n) {
    int k, j, aux;
    for (k = n - 1; k > 0; k--) {
        for (j = 0; j < k; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j+1] = aux;
            }
        }
    }
}

void radix_sort(int *vetor, int n) {
	int i; 
    int exp = 1; 
    int m = 0; 
    int vetAux[n]; 
    int temp[n];
	for(i = 0; i < n; i++) {
		if(vetor[i] > m) {
			m = vetor[i];
		}
	}
	while((m/exp) > 0) {
		for (i = 0; i < n; i++) {
			vetAux[i] = 0;
		}
		for(i = 0; i < n; i++) {
			vetAux[(vetor[i] / exp) % 10]++;
		}
		for(i = 1; i < n; i++) {
			vetAux[i] += vetAux[i-1];
		}
		for(i = (n - 1); i >= 0; i--) {
			temp[--vetAux[(vetor[i] / exp) % 10]] = vetor[i];
		}
		for(i = 0; i < n; i++) {
			vetor[i] = temp[i];
		}
		exp *= 10;
	}
}

void quick_sort(int *vetor, int left, int right){
    //Entre com vetor, 0, TAM-1
    int i, j, x, y;     
    i = left;
    j = right;
    x = vetor[(left + right) / 2];
    while(i <= j) {
        while(vetor[i] < x && i < right) {
            i++;
        }
        while(vetor[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = y;
            i++;
            j--;
        }
    }
    if(j > left) {
        quick_sort(vetor, left, j);
    }
    if(i < right) {
        quick_sort(vetor, i, right);
    }
}

//Algoritmo escolhido pelo grupo

long int Fatorial (int n) {

    if ((n==1) || (n==0))
        return 1;               
    else
        return Fatorial(n-1)*n;}                       

//Algoritmo escolhido pelo grupo modificado

/*TODO: Alterar o algoritmo*/
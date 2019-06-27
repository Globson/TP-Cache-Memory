#ifndef ALGORITMOS_H
#define ALGORITMOS_H

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//Algoritmos de ordenacao

void bubble_sort(int *vetor, int n);
void radix_sort(int *vetor, int n);
void quick_sort(int *vetor, int left, int right);

//Algoritmo escolhido pelo grupo

void Fatorial(int n);

//Algoritmo escolhido pelo grupo modificado

long long unsigned int FatorialMelhorado (int n);                 

/*TODO: Prototipo do algoritmo alterado*/

#endif
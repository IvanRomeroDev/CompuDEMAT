/**
* Author: Jorge Raul Tzab Lopez
* Github: https://github.com/SJMA11723
* LinkedIn: https://www.linkedin.com/in/jorgetzab/
*/

#include <stdio.h>
#include <stdlib.h>
#define N 20

int interseccion(int A[], int sizeA, int B[], int sizeB, int C[]);

int main(void){
    int arr[N], arr2[N];

    ///probamos la funcion generando arreglos de enteros
    int i;
    for(i = 0; i < N; ++i) arr[i] = i;
    for(i = 0; i < N; ++i) arr2[i] = rand() % (N * 5);

    printf("Arr: ");
    for(i = 0; i < N; ++i) printf("%d ", arr[i]);
    printf("\nArr2: ");
    for(i = 0; i < N; ++i) printf("%d ", arr2[i]);

    int inter[N];

    int tam = interseccion(arr, N, arr2, N, inter);
    printf("\nCardinalidad de la interseccion: %d\nInterseccion: ", tam);
    for(i = 0; i < tam; ++i) printf("%d ", inter[i]);

    return 0;
}

int interseccion(int A[], int sizeA, int B[], int sizeB, int C[]){
    int cardC = 0;

    int i;
    for(i = 0; i < sizeA; ++i){
        int j;
        for(j = 0; j < sizeB; ++j){
            ///Si encontramos elementos iguales, entonces guardamos el elemento en C
            if(A[i] == B[j]){
                C[cardC] = A[i];
                cardC++;
                break;
            }
        }
    }

    return cardC;
}

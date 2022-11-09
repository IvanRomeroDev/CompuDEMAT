/**
* Author: Jorge Raul Tzab Lopez
* Github: https://github.com/SJMA11723
* LinkedIn: https://www.linkedin.com/in/jorgetzab/
*/

#include <stdio.h>

#define N 50

int buscaValor(long int vec[], int size, long int val);

int main(void){
    long int arr[N];
    int i;
    for(i = 0; i < N; ++i) arr[i] = i;

    printf("%d", buscaValor(arr, N, 100));
    return 0;
}

int buscaValor(long int vec[], int size, long int val){
    int i;
    for(i = 0; i < size; ++i)
        if(val == vec[i]) return i;

    return -1;
}

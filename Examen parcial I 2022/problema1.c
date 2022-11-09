/**
* Author: Jorge Raul Tzab Lopez
* Github: https://github.com/SJMA11723
* LinkedIn: https://www.linkedin.com/in/jorgetzab/
*/

#include <stdio.h>
#include <math.h>

#define N 50


float normEuc(float vec[], int n);

int main(void){
    float arr[N];
    ///llenamos el arreglo para probar la funcion
    for(int i = 0; i < N; ++i) arr[i] = i;

    printf("%f", normEuc(arr, N));
    return 0;
}

float normEuc(float vec[], int n){
    float norma = 0;

    int i;
    for(i = 0; i < n; ++i)
        norma += vec[i] * vec[i];

    norma = sqrt(norma);

    return norma;
}

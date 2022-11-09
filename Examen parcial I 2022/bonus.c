/**
* Author: Jorge Raul Tzab Lopez
* Github: https://github.com/SJMA11723
* LinkedIn: https://www.linkedin.com/in/jorgetzab/
*/

#include <stdio.h>
#include <math.h>

#define N 100
#define M 100

int main(void){
    double mat[M][N];

    ///llenamos la matriz para probar el funcionamiento
    int i;
    for(i = 0; i < M; ++i){
        int j;
        for(j = 0; j < N; ++j){
            mat[i][j] = i * j;
        }
    }

    double norma = 0;
    for(i = 0; i < M; ++i){
        int j;
        for(j = 0; j < N; ++j){
            norma += mat[i][j] * mat[i][j];
        }
    }

    norma = sqrt(norma);

    printf("La norma de Frobenius es: %lf", norma);

    return 0;
}

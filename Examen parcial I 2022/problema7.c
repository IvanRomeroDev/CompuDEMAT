/**
* Author: Jorge Raul Tzab Lopez
* Github: https://github.com/SJMA11723
* LinkedIn: https://www.linkedin.com/in/jorgetzab/
*/

#include <stdio.h>

#define N 1500

double prodInt(double v[], double w[], int n);

int main(void){

    return 0;
}

double prodInt(double v[], double w[], int n){
    double p = 0;

    int i;
    for(i = 0; i < n; ++i){
        p += w[i] * w[i];
    }

    return p;
}

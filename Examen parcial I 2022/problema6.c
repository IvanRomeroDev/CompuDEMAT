/**
* Author: Jorge Raul Tzab Lopez
* Github: https://github.com/SJMA11723
* LinkedIn: https://www.linkedin.com/in/jorgetzab/
*/

#include <stdio.h>
#include <math.h>

#define X 50

int main(void){
    int k;
    printf("Ingrese la cantidad de terminos de la expansion: ");
    scanf("%d", &k);

    /// en los comentarios dice de que parte de la suma se trata
    double ans = 0;
    double pot = 1; /// x^n
    double fact = 1; /// n!

    int i;
    for(i = 0; i < k; ++i){
        ans += pot / fact; /// x^n / n!

        pot *= X; /// x^n * x = x^(n + 1)
        fact *= i + 1; /// n! * (n + 1) = (n + 1)!
    }

    printf("Mi exp: %lf\nmath.h: %lf\n", ans, exp(X));
    return 0;
}

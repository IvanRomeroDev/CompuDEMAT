/**
* Author: Jorge Raul Tzab Lopez
* Github: https://github.com/SJMA11723
* LinkedIn: https://www.linkedin.com/in/jorgetzab/
*/

#include <stdio.h>

unsigned long int divide32(unsigned long int x);

int main(void){
    printf("%d", divide32(96));
    return 0;
}

unsigned long int divide32(unsigned long int x){
    return x >> 5;
}

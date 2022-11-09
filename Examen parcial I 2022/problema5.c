/**
* Author: Jorge Raul Tzab Lopez
* Github: https://github.com/SJMA11723
* LinkedIn: https://www.linkedin.com/in/jorgetzab/
*/

#include <stdio.h>
#include <string.h>

char mostFreqChar(char cad[]);

int main(void){
    printf("%c", mostFreqChar("hola mundoaaa"));
    return 0;
}

char mostFreqChar(char cad[]){
    int n = strlen(cad);

    ///aqui guardo la frecuencia de cada caracter
    /// al principio todo es 0
    int freq[300] = {};


    int maxFreq = 0;
    char maxChar = 0;

    int i;
    for(i = 0; i < n; ++i){
        ///actualizamos la frecuencia de la letra actual
        freq[ cad[i] ]++;

        ///si la nueva frecuencia es mayor a la maxima frecuecia
        ///entonces guardamos el nuevo caracter
        if(maxFreq < freq[ cad[i] ]){
            maxFreq = freq[ cad[i] ];
            maxChar = cad[i];
        }
    }

    return maxChar;
}

/**
* Author: Jorge Raul Tzab Lopez
* Github: https://github.com/SJMA11723
* LinkedIn: https://www.linkedin.com/in/jorgetzab/
*/

#include <stdio.h>
#include <string.h>

int buscaPatron(char cad[]);

int main(void){
    //printf("Patron encontrado %d veces\n", buscaPatron("mi casa es la caza que uso para cazar casados en castillos hechos casi por cesar"));
    printf("Patron encontrado %d veces\n", buscaPatron("..cas"));
    return 0;
}

int buscaPatron(char cad[]){
    int n = strlen(cad);
    printf("%d\n", strlen(cad));
    int con = 0;

    int i;
    for(i = 3; i < n; ++i){
        ///busca en subarrglos de tamanio 4
        if(cad[i - 1] == 's' && cad[i - 3] == 'c')
            con++;
    }

    return con;
}

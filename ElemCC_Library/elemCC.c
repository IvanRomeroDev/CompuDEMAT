#include "elemCC.h"



void GuessNum(int limMenor, int limMayor)
{
    char followUpQuestion; //variable para la respuesta del usuario.
    int midValue, tries = 1; //variable del valor medio del intervalo y el número de intentos

    do
    {
        midValue = (limMenor + limMayor) / 2; //define el valor medio como la suma del limite menor con el mayor dividio entre 2.

        printf("\n El numero que pensaste es %d? \n \n Ingrese \" v \" para verdadero, \" < \" para indicar que el numero es menor al mostrado, o \" > \" para indicar que el numero es mayor al mostrado \n\n",  midValue);

        if(scanf(" %c", &followUpQuestion)) //detecta que el input sea un caracter.
        {
            if(followUpQuestion == '<') //detecta si el numero pensado es menor al dicho.
            {
                limMayor = (midValue - 1);
                tries++;
            }
            else if(followUpQuestion == '>') //detecta si el numero pensado es mayor al dicho.
            {
                limMenor = (midValue + 1);
                tries++;
            }
        }
        else
        {
            printf("\n Input Error");
            return;
        }

    }
    while(followUpQuestion != "v"); //condición del ciclo que indica que no se ha adivinado el número.

    printf("\n Adivine tu numero tras %d intentos !!!", tries);
    getchar();
}

void RootCalculation(double num)
{
    double root; //raíz cuadrada
    int tries = 0; //numero de aproximaciones.
    root = num;

    if(num != 0)
    {
        do //realiza la operación necesaria para calcular la aproximación a la raíz
        {
            tries++;
            root = 0.5 * (num/root + root);
            printf("\n Aproximacion %d: %0.5f\n", tries, root);
        }
        while(fabs(root-num/root) > TOLERANCIA); //mientras el valor absoluto de la aproximación sea mayor al valor de tolerancia.

        printf("\n La raiz cuadrada de %0.1lf es %0.5lf \n", num, root);

        getchar();
        return;
    }
    else
    {
        printf("\n No se puede sacar raiz de 0.");
        getchar();
        return;
    }
}

void CalculateArea(float bm, float bM, float h)
{
    float area = bm + bM;
    area = area / 2;
    area = area * h;

    printf("\n El area del trapecio es de: %0.3f", area);
    getchar();
    return;
}

void FillMatrices(float matrixA[N][N], float matrixB[N][N], int lenght[1], int height[1])
{
    printf("\n Defina el numero de columans y renglones de la matrices, separados con un espacio. \n \n");
    if(scanf("%d %d",&lenght[0], &height[0]))
    {
        if(lenght[0] > 0 && lenght[0] <= N && height[0] > 0 && height[0] <= N)
        {
            printf("\n \n Ingrese los valores de la matriz A \n");
            for(int i = 0; i < height[0]; i++)
            {
                for(int j = 0; j < lenght[0]; j++)
                {
                    printf("Valor [%d][%d]: ", j+1,i+1);
                    if(scanf("%f",&matrixA[i][j]))
                    {
                            continue;
                    }
                }
            }

            printf("\n \n Ingrese los valores de la matriz B \n");
            for(int i = 0; i < height[0]; i++)
            {
                for(int j = 0; j < lenght[0]; j++)
                {
                    printf("Valor [%d][%d]: ", j+1,i+1);
                    if(scanf("%f",&matrixB[i][j]))
                    {
                            continue;
                    }
                }
            }
        }
        else
        {
            printf("\n Input Error");
            return;
        }
    }
    else
    {
        printf("\n Input Error");
        return;
    }
}

void SumMatrix(float matrix[N][N], int lenght[1], int height[1])
{
    float count = matrix[0][0], aux;

    for(int i = 0; i < height[0]; i++)
    {
        for(int j = 0; j < lenght[0]; j++)
        {
            aux = matrix[i][j];
            count = count + aux;
        }
    }

    printf("\n \n \n La suma de los elementos de la Matriz A es igual a: %f \n \n \n", count);

}

void PrintTraza(float matrix[N][N], int lenght[1], int height[1])
{
    float traza = matrix[0][0], aux;
    int i,j;

    if(lenght[0] == height[0])
    {
        for( i = 0, j = 0; i < height[0], j < lenght[0]; i++, j++)
        {
            aux = matrix[i][j];
            traza += aux;
        }

        printf("La traza de la matriz es: %0.3f \n \n \n");

    }
    else
    {
        printf("\n \n \n La matriz no es cuadrada. \n \n \n");
    }
}

void SumMatrices(float matrixA[N][N], float matrixB[N][N], int lenght[1], int height[1])
{
    printf("Matriz A + B: \n \n");
    for(int i = 0; i < height[0]; i++)
    {
        for(int j = 0; j < lenght[0]; j++)
        {
            printf("%0.3f \t", matrixA[i][j] + matrixB[i][j]);
        }
        printf("\n");
    }

    printf("\n \n \n");
}

void HalfMatrix(float matrix[N][N], int lenght[1], int height[1])
{
    printf("1/2 de Mátriz: \n \n");
    for(int i = 0; i < height[0]; i++)
    {
        for(int j = 0; j < lenght[0]; j++)
        {
            printf("%0.3f \t", matrix[i][j] * 0.5);
        }
        printf("\n");
    }

    printf("\n \n \n");
}

void CompareNumbers(int a,int b,int c)
{
    if(a < b)
    {
        if(b < c)
        {
            printf("\n %d es el numero mas grande.", c);
            getchar();
            return;
        }
        else if(b > c)
        {
            printf("\n %d es el numero mas grande.", b);
            getchar();
            return;
        }
    }
    else if(a > b)
    {
        if(a < c)
        {
            printf("\n %d es el numero mas grande.", c);
            getchar();
            return;
        }
        else if(a > c)
        {
            printf("\n %d es el numero mas grande.", a);
            getchar();
            return;
        }
    }
    else if(a == b && a == c)
    {
        printf("\n Los tres numeros son iguales.");
        getchar();
        return;
    }
}

void FillArrayRandBetweenZeroAndOne(float array[], int size)
{
    srand (time(NULL));

    for(int i = 0; i < size; i++)
    {
        array[i] = 0.01 + rand()/((RAND_MAX + 1u) / 1 - 1.0);

        printf("\n Espacio %d: %0.5f", i + 1, array[i]);
    }
}

void ConvertUSA(float a)
{
    float usaValue = 20.01;
    float usaAmount;
    usaAmount = usaValue * a;
    printf("\n %0.3f pesos mexicanos son %0.3f dolares estadounidense.\n", a, usaAmount);
    getchar();
    return;
}

void ConvertCanada(float a)
{
    float canadaValue = 15.38;
    float canadaAmount;
    canadaAmount = canadaValue * a;
    printf("\n %0.3f pesos mexicanos son %0.3f dolares canadienses.\n", a, canadaAmount);
    getchar();
    return;
}

void PrimeDetector(int n)
    {
        int i = 1; //variable que indica entre que numero se dividira n.
        int count = 0; //contador para saber cuantas divisiones del numero dan 0 como resultado

        while( i <= n) //realiza el ciclo de operaciones mientras el numero con el que se prueba la división no sea mayor al numero que se quiere saber si es primo o no
        {
            if(n%i == 0) //si el residuo de la division es 0 entonces se suma un contador y se prueba a dividir con el siguiente numero
            {
                count++;
                i++;
            }
            else //si no es 0 se prueba a dividir con el siguiente numero.
            {
                i++;
            }
        }
        if(count == 2) //cuando tienes dos contadores se sabe si es primo.
        {
            printf("\n%d es un numero primo !!!\n", n);
        }
        else //si dividiste entre todos los numeros entre 1 y el numero a verificar y hay mas o menos de dos contadores entonces no es primo.
        {
            printf("\n%d no es un numero primo :c\n", n);
        }
    }

void SolveEcuation(float a, float b, float c)
{
    float x1, x2, tempOp;

    tempOp = ((b*b) -4*a*c);

        if( tempOp > 0)
        {
            tempOp = sqrt(tempOp);
            x1 = (- b + tempOp) / (2 * a);
            x2 = (- b - tempOp) / (2 * a);

            printf("\n Las raices de la ecuacion son: \n x1 = %.2f \n x2 = %.2f", x1, x2);
            getchar();
            return;
        }
        else if(tempOp == 0)
        {
            x1 = (- b) / (2 * a);
            printf("\n Las raices de la ecuacion son: \n x1 = x2", x1);
            getchar();
            return;
        }
        else if(tempOp < 0)
        {
            printf("La raíz es imaginaria.");
            getchar();
            return;
        }
}

#ifndef ELEMCC_H

#define ELEMCC_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOLERANCIA 1e-6 //Tolerancia para la precisi�n del calculo de ra�z cuadrada.

#define N 1000 //Tama�o M�ximo de la m�triz.

void GuessNum(int, int); //Funci�n que adivina el numero dado un limite entero menor y mayor respectivamente.

void RootCalculation(double num); //Funci�n para calcular la ra�z cuadrada de un numero dado.

void CalculateArea(float,float,float); //Funci�n que calcula el area de un trapecio isoceles dada su base mayor, base menor y altura.

void FillMatrices(float[N][N], float[N][N], int[1], int[1]); //Funci�n que rellena 2 m�trices de flotantes de tama�o definido por el usuario en arrays, con valores ingresados por el usuario.

void SumMatrix(float[N][N], int[1], int[1]); //Funci�n que suma los valores de una m�triz de flotantes de tama�o definido por el usuario en arrays.

void PrintTraza(float [N][N], int[1], int[1]); //Funci�n que calcula si la m�triz de flotantes de tama�o definido por el usuario en arrays dada es cuadrada, y en caso de serlo, calcula la traza.

void SumMatrices(float[N][N], float [N][N], int[1], int[1]); //Funci�n que suma 2 m�trices de flotantes de tama�o definido por el usuario en arrays en una sola m�triz y la imprime.

void HalfMatrix(float[N][N], int[1], int[1]); //Funci�n que divide entre 2 los valores de una m�triz de flotantes de tama�o definido por el usuario en arrays y la imprime.

void CompareNumbers(int,int,int); //Funci�n que compara 3 n�meros enteros dados para saber cual es mayor.

void FillArrayRandBetweenZeroAndOne(float[], int); //Funci�n que rellena un array de flotantes de tama�o definido por el usuario en enteros con numeros aleatorios entre 0 y 1 y los imprime.

void ConvertUSA(float a); //Funci�n para realizar la conversi�n de Peso M�xicano a Dolar Estadounidense.

void ConvertCanada(float a); //Funci�n para realizar la conversi�n de Peso M�xicano a Dolar Canadiense.

void PrimeDetector(int n); //Funci�n para detectar si un numero entero dado es primo.

void SolveEcuation(float, float, float); //Funci�n para resolver ecuaciones cuadraticas no complejas segun tres coeficientes flotantes dados.

#endif // ELEMCC_H

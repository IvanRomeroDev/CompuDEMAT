#ifndef ELEMCC_H

#define ELEMCC_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOLERANCIA 1e-6 //Tolerancia para la precisión del calculo de raíz cuadrada.

#define N 1000 //Tamaño Máximo de la mátriz.

void GuessNum(int, int); //Función que adivina el numero dado un limite entero menor y mayor respectivamente.

void RootCalculation(double num); //Función para calcular la raíz cuadrada de un numero dado.

void CalculateArea(float,float,float); //Función que calcula el area de un trapecio isoceles dada su base mayor, base menor y altura.

void FillMatrices(float[N][N], float[N][N], int[1], int[1]); //Función que rellena 2 mátrices de flotantes de tamaño definido por el usuario en arrays, con valores ingresados por el usuario.

void SumMatrix(float[N][N], int[1], int[1]); //Función que suma los valores de una mátriz de flotantes de tamaño definido por el usuario en arrays.

void PrintTraza(float [N][N], int[1], int[1]); //Función que calcula si la mátriz de flotantes de tamaño definido por el usuario en arrays dada es cuadrada, y en caso de serlo, calcula la traza.

void SumMatrices(float[N][N], float [N][N], int[1], int[1]); //Función que suma 2 mátrices de flotantes de tamaño definido por el usuario en arrays en una sola mátriz y la imprime.

void HalfMatrix(float[N][N], int[1], int[1]); //Función que divide entre 2 los valores de una mátriz de flotantes de tamaño definido por el usuario en arrays y la imprime.

void CompareNumbers(int,int,int); //Función que compara 3 números enteros dados para saber cual es mayor.

void FillArrayRandBetweenZeroAndOne(float[], int); //Función que rellena un array de flotantes de tamaño definido por el usuario en enteros con numeros aleatorios entre 0 y 1 y los imprime.

void ConvertUSA(float a); //Función para realizar la conversión de Peso Méxicano a Dolar Estadounidense.

void ConvertCanada(float a); //Función para realizar la conversión de Peso Méxicano a Dolar Canadiense.

void PrimeDetector(int n); //Función para detectar si un numero entero dado es primo.

void SolveEcuation(float, float, float); //Función para resolver ecuaciones cuadraticas no complejas segun tres coeficientes flotantes dados.

#endif // ELEMCC_H

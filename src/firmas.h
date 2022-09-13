/*
 * firmas.h
 *
 */

#ifndef FIRMAS_H_
#define FIRMAS_H_

int ObtenerNumero(char*mensaje,int minimo,int maximo);
void CargarListadoNumeros(int numeros[],int limit);
int  ContarPositivos(int numeros[],int limit);
int  ContarNegativos(int numeros[],int limit);
int determinarPariedad(int numeros);
int sumaPares(int numeros[],int limit);
int DevolverSigno(int numeroIngresado);
int numerosIngresados(int numeros[],int limit);
int mayorImpar(int numeros[],int limit);
int listaPares(int numeros[],int limit);
int posicionImpar(int numeros[],int limit);

int menorAmayorPositivo(int numeros[],int limit);
int ordenPositivo(int numeros[], int size);
int ordenarCrecitePos(int numeros[],int limit);

int mayorAmenorNegativo(int numeros[],int limit);
int ordenNegativos(int numeros[], int limit);
int ordenarDecreNeg(int numeros[],int limit);

int repetidos(int numeros[],int limit);

#endif /* FIRMAS_H_ */

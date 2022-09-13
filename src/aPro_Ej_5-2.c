/*
 ============================================================================
 Name        : aPro_Ej_5-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
Cantidad de positivos y negativos. ok
Sumatoria de los pares.  ok
El mayor de los impares.
Listado de los números ingresados. ok
Listado de los números pares. ok
Listado de los números de las posiciones impares.
Anexo 5-2
Los números que se repiten
Los positivos creciente y los negativos de manera decreciente

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "firmas.h"

#define TAM 10

int main(void) {
	setbuf(stdout,NULL);

	int numIngresados[TAM];

	CargarListadoNumeros(numIngresados,TAM);

	ContarNegativos(numIngresados,TAM);
	ContarPositivos(numIngresados,TAM);

	sumaPares(numIngresados,TAM);

	mayorImpar(numIngresados, TAM);

	numerosIngresados(numIngresados,TAM);

	listaPares(numIngresados, TAM);

	posicionImpar(numIngresados, TAM);

	//NUMERO QUE SE REPITEN
	repetidos(numIngresados, TAM);
	//ORDEN DE LOS NUMERO
	menorAmayorPositivo(numIngresados, TAM); // POSITIVOS - a +
	mayorAmenorNegativo(numIngresados, TAM); // NEGATIVOS + a -


	return EXIT_SUCCESS;
}

































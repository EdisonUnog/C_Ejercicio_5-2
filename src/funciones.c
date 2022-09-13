/*
 * funciones.c
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "firmas.h"

int ObtenerNumero(char*mensaje,int minimo,int maximo){
    int numIngresado;

    printf("%s", mensaje);
    scanf("%d", &numIngresado);
    while (numIngresado < minimo || numIngresado > maximo) {
        printf(" Error!!! Vuelva a ingresar el numero... ");
        scanf("%d", &numIngresado);
    }

    return numIngresado;
}
void CargarListadoNumeros(int numeros[],int limit){
	printf("\n");
    for (int i =0; i<limit ;i++){
          numeros[i] = ObtenerNumero(" ingrese un numero >> ", -1000,1000);
    }
}

int DevolverSigno(int numeroIngresado){
    int iGet=0;
    if(numeroIngresado < 0){
    	iGet=-1; //negativo
    }else{
        if(numeroIngresado >0){
        	iGet=1; //positivos
        }
    }
    return iGet;
}
int ContarNegativos(int numeros[],int limit){
    int contNegativo=0;
    int esNegativo;
   for(int i=0;i<limit;i++){
       esNegativo=DevolverSigno(numeros[i]);
       if(esNegativo==-1){
           contNegativo++;
       }
   }
   printf("\n NEGATIVOS: %d",contNegativo);
   return contNegativo;
}
int ContarPositivos(int numeros[],int limit){
    int contPositivos=0;
    int esPositivo;
    int i;
    for(i=0;i<limit;i++){
        esPositivo=DevolverSigno(numeros[i]);
        if(esPositivo==1){
        	contPositivos++;
        }
    }
    printf("\n POSITIVOS: %d",contPositivos);
    return contPositivos;
}
int sumaPares(int numeros[],int limit){
    int i;
    int acumPares=0;
    int pares;
    for(i=0;i<limit;i++){
        pares=determinarPariedad(numeros[i]);
        if(pares==1){
            acumPares+=numeros[i];
        }
    }
    printf("\n SUMA PARES: %d",acumPares);
    return acumPares;
}
int mayorImpar(int numeros[],int limit){
	int maxImpar;
	int i;
	for(i=0;i<limit;i++){
		if(i==0 || numeros[i]>maxImpar){
			maxImpar=numeros[i];
		}
	}
	printf("\n MAYOR IMPAR: %d",maxImpar);
	return maxImpar;
}
int determinarPariedad(int numeros){
    int pariDad;
    if(numeros%2==0){
        pariDad=1;
    }else{
        pariDad=0;
    }
    return pariDad;
}

int numerosIngresados(int numeros[],int limit){
	int iGet=-1;
	int i;

	if(limit>0){
		iGet=0;
		printf("\n NUMEROS INGRESADOS: ");
		for(i=0;i<limit;i++){
			printf("[(%d)] ",numeros[i]);
		}
	}
	return iGet;
}

int listaPares(int numeros[],int limit){
	int iGet=-1;
	int opcion;
	int i;
	printf("\n NUMEROS PARES: ");
	for(i=0;i<limit;i++){
		opcion=determinarPariedad(numeros[i]);
		if(opcion==1){ //return 1 par
			iGet=0;
			printf("[(%d)] ",numeros[i]);
		}
	}
	return iGet;
}
int posicionImpar(int numeros[],int limit){
	int iGet=-1;
	int opcion;
	int i;
	printf("\n POSICION DE IMPARES: ");
	for(i=0;i<limit;i++){
		opcion=determinarPariedad(numeros[i]);
		if(opcion==0){ // return 0 impar
			iGet=0;
			printf("[(%d)] ",i);
		}
	}
	return iGet;
}

//-------------ORDEN DE LOS PÓSITIVOS DE NEMOR A MAYOR--------------------
int menorAmayorPositivo(int numeros[],int limit){
	int iGet=-1;
	if(numeros!=NULL && limit >0){
		printf("\n\n ORDEN LOS POSITIVOS DE MANERA CRECIENTE\n");
		ordenPositivo(numeros, limit);
		ordenarCrecitePos(numeros, limit);
		printf("\n");
		ordenPositivo(numeros, limit);
	}
	return iGet;
}
int ordenPositivo(int numeros[],int limit){
   int iGet=-1;
   int esNegativo;
   printf("  POSITIVOS: ");
   for(int i=0;i<limit;i++){
       esNegativo=DevolverSigno(numeros[i]);
       if(esNegativo==1){
    	   printf("[(%d)] ",numeros[i]);
       }
   }
   return iGet;
}
int ordenarCrecitePos(int numeros[],int limit){
	int iGet=-1;
	int flagSwap;
	int i;
	int buffer;
	if(numeros!=NULL && limit>0){
		iGet=0;
		do{
			flagSwap=0;
			limit--;
			for(i=0;i<limit;i++){
				if(numeros[i]>numeros[i+1]){
					buffer=numeros[i];
					numeros[i]=numeros[i+1];
					numeros[i+1]=buffer;
					flagSwap=1;
				}
			}
		}while(flagSwap);
	}
	return iGet;
}
//----------------ORDEN DE LOS NEGATIVOS DE MAYOR A MENOR-----------
int mayorAmenorNegativo(int numeros[],int limit){
	int iGet=-1;
	if(numeros!=NULL && limit>0){
		printf("\n\n ORDEN LOS NEGATIVOS DE MANERA DECRECIENTE\n");
		ordenNegativos(numeros, limit);
		ordenarDecreNeg(numeros, limit);
		printf("\n");
		ordenNegativos(numeros, limit);
	}
	return iGet;
}
int ordenNegativos(int numeros[],int limit){
   int iGet=-1;
   int esNegativo;
   printf("  NEGATIVOS: ");
   if(numeros!=NULL && limit>0){
	   for(int i=0;i<limit;i++){
		   esNegativo=DevolverSigno(numeros[i]);
		   if(esNegativo==-1){
			   printf("[(%d)] ",numeros[i]);
		   }
	   }
   }
   return iGet;
}
int ordenarDecreNeg(int numeros[],int limit){
	int iGet=-1;
	int flagSwap;
	int i;
	int buffer;
	if(numeros!=NULL && limit>0){
		iGet=0;
		do{
			flagSwap=0;
			limit--;
			for(i=0;i<limit;i++){
				if(numeros[i]<numeros[i+1]){
					buffer=numeros[i];
					numeros[i]=numeros[i+1];
					numeros[i+1]=buffer;
					flagSwap=1;
				}
			}
		}while(flagSwap);
	}
	return iGet;
}

//------NUMERO REPETIDOS--------
int repetidos(int numeros[],int limit){
	int iGet=-1;
	int cont=0;
	int j;
	int i;
	if(numeros!=NULL && limit>0){
		printf("\n\n NUMEROS REPETIDOS: ");
		for (i=0;i<10;i++){
			for(j=i+1;j<limit;j++){
				if (numeros[j]==numeros[i]){
					cont++;
					printf(" [(%d)]",numeros[i]);
					iGet=0;
				}
			}
		}
	}
	return iGet;
}







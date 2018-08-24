/*
*Programa:  5 numeros ingresados en un array, copiarlos a otro multiplicados por 2 y todos ordenados en un tercero
*Fecha: 23 de Agosto del 2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros[5], multiplicados[5];
	int i = 0, j = 0, aux;
//	inicio el arreglo y lleno los datos
	printf("Ingrese 5 numeros: \n");
	for(i = 0; i <= 4; i++){		
		scanf("%d", &numeros[i]);
	}
	//Paso el primer arreglo al segundo multplicados por 2
	
	for(i = 0; i <= 4; i++){
		multiplicados[i] = numeros[i] * 2;
	}	
	// Se ordenan los arreglos
	for(i = 0; i <= 4; i++){
		for(j = 0; j <= 4; j++){
			if(multiplicados[j] > multiplicados[j + 1]){
				aux = multiplicados[j];
				multiplicados[j] = multiplicados[j + 1];
				multiplicados[j + 1] = aux;
			}
		}
	}
	printf("Los numeros al ser ordenados y multiplicados por 2 son:\n");
	for(i = 0; i <= 4; i++){
		printf("%d\n", multiplicados[i]);
	}	
	return 0;
}


/*
*Programa: Generar un arreglo numero entero de 20 elementos ingresados por el usuario mosstrar en pantalla cuales son impares
*Fecha: 23 de Agosto del 2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros[20];
	
	printf("Ingrese 20 numeros:\n");
	
	for(int i = 0; i < 20; i++){
		scanf("%d", &numeros[i]);
	}
	printf("Los pares son:\n");
	for(int i = 0; i < 20; i++){
		if(numeros[i] % 2 == 1){
			printf("%d\n", numeros[i]);
		}
	}
	return 0;
}


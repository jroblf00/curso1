#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

void asignarValores(int matrizA[TAM][TAM], int matrizB[TAM][TAM]);
void multiplicarMatrices(int matrizA[TAM][TAM], int matrizB[TAM][TAM]);
void imprimirResultado();

int matriz1[TAM][TAM];
int matriz2[TAM][TAM];
int matrizResultado[TAM][TAM];

int main(){
	
	srand(time(NULL));
	
	asignarValores(matriz1, matriz2);
	multiplicarMatrices(matriz1, matriz2);
	imprimirResultado();

	return 0;
}

void asignarValores(int matrizA[TAM][TAM], int matrizB[TAM][TAM]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matrizA[i][j] = (random()%10)+1;
			matrizB[i][j] = (random()%10)+1;
			matrizResultado[i][j] = 0;
		}
	}
}

void multiplicarMatrices(int matrizA[TAM][TAM], int matrizB[TAM][TAM]){
	
	int i,j,k;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				matrizResultado[i][j] = matrizResultado[i][j] + matrizA[j][i]*matrizB[j][k];
			}	
		}
	}
}

void imprimirResultado(){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",matrizResultado[i][j]);
		}
		printf("\n");
	}
}
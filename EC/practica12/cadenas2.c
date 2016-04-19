#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char* argv[]){

	if(argc!=5){
	
		printf("error en los parametros");
		return -1;
	}
	int filas = atoi(argv[3]);
	int columnas = atoi(argv[4]);
	int **matriz;
	int *vector;
	int i;
	
	srand(time(NULL));
	
	vector = (int*)malloc(columnas*sizeof(int))
	
	matriz = (int**)malloc(filas*sizeof(int*));
	for(i=0;i<columnas;i++){
		
		*(matriz+i) = (int*)malloc(columnas*sizeof(int));
	}
	
	inicializa(matriz, filas, columnas);
	
	return 0;
}

void inicializa(int *matriz, int filas, int columnas){

	int i,j;
	for(i=0;i<filas;i++){
		for(j=0;j<colunmas;j++){
			
			matriz[i][j] = (rand%11)-40;
		}
	}
}

void simatorio(int *matriz, int filas, int columnas, int *vector){

	int i,j;
	for(i=0;i<columnas;i++){
		for(j=0;j<filas;j++){
			
			vector[i] = matriz[j][i];
		}
	}
}
#include <stdio.h>

#define TAM 9

int matriz[TAM][TAM];

void matrizIdentidad(int matrizI[TAM][TAM]);

int main(){
	
	int i,j;
	
	matrizIdentidad(matriz);
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
		
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

void matrizIdentidad(int matrizI[TAM][TAM]){
	
	int i,j;
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
		
			if(i==j){
				
				matrizI[i][j] = 1;
			}else{
			
				matrizI[i][j] = 0;
			}
		}
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int intentos[TAM];

void tirada(int tirada[TAM]);

int main(){

	
	int i;
	srand(time(NULL));
	
	tirada(intentos);
	
	for(i=0;i<TAM;i++){
		
		printf("%d\n", intentos[i]);
	}
	
	return 0;
}

void tirada(int tirada[TAM]){

	int i;
	for(i=0;i<TAM;i++){
	
		int numero = (rand()%6)+1;
		tirada[i]=numero;
	}
}

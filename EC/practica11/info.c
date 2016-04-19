#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	FILE *archivo;
	char cadena[50] ="Miguel ereh un pringao\n";
	
	archivo = fopen("texto.txt", "w");
	
	if(archivo==NULL){
		fprintf(stderr, "Se ha producido un error");
		exit(EXIT_FAILURE);
	}else{
	
		fprintf(archivo, "%s", cadena);
	}
	
	fclose(archivo);
	return 0;
}
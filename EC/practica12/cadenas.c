#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
	
	int longitudCadenaParametros;
	char cadena1[100];

	if(argc!=3){
		printf("Error, introduzca como argumentos una cadena y un entero\n");
		return -1;
	}
	
	longitudCadenaParametros = strlen(argv[1]);
	printf("la longitud de la cadena de los parametros es: %d\n",longitudCadenaParametros);
	
	strcpy(cadena1, argv[1]);
	strcat(cadena1,", cadena añadida");
	
	printf("%s\n", cadena1);
	
	if(strstr(cadena1,argv[1])==NULL){
		
		printf("no se encuentra la cadena del parametro\n");
	}else{
	
		printf("se ha encontrado la cadena del parametro\n");
	}
	
	printf("la posicion %d de la cadena corresponde a %c\n",atoi(argv[2]), cadena1[atoi(argv[2])] );	
		
	return 0;
}
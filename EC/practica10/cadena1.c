#include <stdio.h>

void quitaEspacios(char cadena[100], char cadenasin[100]);

int main(){
	
	char cadenaIntroducida[100];
	char cadenaSinEspacios[100];
	int j;
	
	printf("Introduce una cadena\n");
	printf("->");

	fflush(stdin);	
	fgets(cadenaIntroducida,100,stdin);
	
	quitaEspacios(cadenaIntroducida,cadenaSinEspacios);
	
	
	for(j=0;cadenaSinEspacios[j]!='\0';j++){
		
		printf("%c",cadenaSinEspacios[j]);
	}
	printf("\n");
	
	return 0;
}

void quitaEspacios(char cadena[100], char cadenasin[100]){

	int cont=0;
	int i;
	for(i=0;i<100;i++){
	
		if(cadena[i]!=' '){
			
			cadenasin[cont]=cadena[i];
			cont++;
		}
	}
}
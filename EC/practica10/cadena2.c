#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quitaEspacios(char *cad, char *cadenaSin,int tamanioCadena);

int main(){
	
	

	char *cadena,vaciar;
	char *cadenaSinEspacios;
	int tamanioCadena;
	int i;
	
	printf("Introduce el tamaño de la cadena\n");
	printf("->");
	scanf("%d", &tamanioCadena);
	//printf("Y");
	cadena=(char *)malloc(tamanioCadena*sizeof(char));
	cadenaSinEspacios=(char *)malloc(tamanioCadena*sizeof(char));
	
	printf("Introduce la cadena");
	printf("->");
	//strcpy(cadena,cadenaSinEspacios);
	while((vaciar=getchar()) != EOF && vaciar != '\n');
	//fflush(stdin);
	fgets(cadena,tamanioCadena,stdin);
	//scanf("%s",cadena);	
	quitaEspacios(cadena, cadenaSinEspacios,tamanioCadena);
	
	
	
	printf("%s",cadenaSinEspacios);
	
	
	free(cadena);
	free(cadenaSinEspacios);
	
	return 0;
}

void quitaEspacios(char *cad, char *cadenaSin, int tamanioCadena){

	int cont=0;
	int i;
	for(i=0;i<tamanioCadena;i++){
	
		if(*(cad+i)!=' '){
		
			*(cadenaSin+cont)=*(cad+i);
			cont++;
		}
	}
}
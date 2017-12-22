#include <stdio.h>
#include <stdlib.h>
int main(void){
	/*variable*/

	/*Cuerpo del programa*/
	
	/* NOTAS:
	 * stdlib.h: Contiene las variables para los valores de retorno:
	 *			 EXIT_SUCCESS = 0
	 *			 EXIT_FAILURE = 1
	 *
	 *
	*/   
	char x = 'x';
	char y1[] = "hey, being trying to meet ya";
	char y2[] = {'u','h','m','!','\0'};
	char *z = &x;	
/*
	printf("* Dirección: '%x'\n",&x);
	printf("La variable 'y1'\n");
	printf("* Valor: '%s'\n",y1);
	printf("* Dirección: '%x'\n",&y1);
	printf("La variable 'y2'\n");
	printf("* Valor: '%s'\n",y2);
	printf("* Dirección: '%x'\n",&y2);

	// char *z = &x
	// z : la direccion de memoria de x
	// *z : la valor de x
	printf("La variable 'z'\n");
	printf("* Valor: '%c'\n",z);
	printf("* Dirección: '%x'\n",&z);*/
	for(int i = 0; i<sizeof(y2);i++){
		printf("La direccion de memoria del valor %i en y2 es: %p\n",i+1,y2[i]);
	}
	char *py1;
	py1 = &y1[0];
	for(int i = 0; i<sizeof(y1);i++){
		printf("numero %i y valor: %c con la direccion: %x\n",i+1,*py1,py1);
		py1++;	
	}
/*
	printf("%c\n",x);
	printf("%s\n",y1);
	printf("%s\n",y2);
    x = 'y';
	printf("%c\n",*z);*/	
	return EXIT_SUCCESS;
}

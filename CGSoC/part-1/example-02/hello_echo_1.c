#include <stdio.h>

int main(int argc, char *argv[]){
	/*
		* argc: Es el número de argumentos que recibe le programa cuando es llamado desde la línea de comandos (y desde cualquier otro lado)
		* 		El primer argumento es el nombre del ejecutable, por lo cual, si no le pasamos los argumentos al programa, imprimirá 1.
		*
		*
		* argv: Contiene los valores de los argumentos ingresados por linea de comando (y desde culquier otro lado).
		*
		*
		* Las expresiones como "\t" o "\n" se conocen como secunecias de escape
	*/
	for(int i = 1; i < argc; i++){
		/*	printf("%d\t", i);
		*/
		printf("%s ",argv[i]);
	}
	printf("%s\n", "");

}

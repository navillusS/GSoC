# Complacion:
Obtener el archivo objeto apartir del archivo fuente *.c --> *.o
el .o tiene todos los simbolos que tiene el .c 

$ggc -c prueba.c

# Enlazado:
Llenar el programa con las cosas que son necesaria

$gcc prueba.o \-o prueba

El archivo "hello-world-1" termina pesando ya que contiene todas las funciones enlazadas en el .o

# tipos de errores:
Errores de compilacion y errores de tiempo
"#" --> directiva de preprocesamiento, también sirven para ver en que tipo de sistema estoy trabajando
"#include" --> ejemplo directiva de preprocesamiento, o sea, coge todo el contenido de la libreria que esta con él y copia todo la fuente(las funciones)

Los argumentos de los ejecutables se dan al costado de llamar la funcion, ej:

$hello-echo-1 holi boli --> aqui "holi" "boli" son los argumentos del ejecutable hello-echo-1, el numero de argumentos que tiene son 3, el argumento 0 es el nombre del ejecutable

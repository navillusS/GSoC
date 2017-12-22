Hay comandos que se definen en una sola linea 
EJ:
pwd --> Nos indica en que directorio nos encontramos

cat --> muestra un archivo de arriba abajo 

grep --> lista las lineas de un archivo que contenga una palabra como filtro 

egrep --> filtra como grep pero con un conjunto amplio de expresiones regulares 

fgrep --> filtra como grep pero sin expresiones regulares, es el mas rápido 

tac --> al reves del cat tail --> muestra las ultimas lineas de un archivo 

head --> muetsra las primeras lineas de un archivo more --> como cat pero con pausa 

less --> visualizacion con pausa y en modo interactivo 

wc --> cuenta las lineas, palabras o caracteres 

sed --> buscar y reemplaza cadenas en la vista de un archivo 

pr --> visualiza un archivo en formato de impresión 

tr --> efectúa transformación de caracteres en la vista de un archivo

clear --> Limpia la pantalla, aunque también puedes usar Ctrl+l

echo --> Muestra valores de las variables de entorno también imprime lineas te texto

touch --> Crea archivos vacios 

Ej touch y echo:

$touch f1 f2 f3 #se pueden hacer multipleas archivos en un solo comando 
$echo "holamundo" > f1 #Borra todo lo que se encuentre en f1 y escribe en la primera linea "holamundo" (esto lo hace '>' en conjunto con echo)
$echo "Como estan?" >> f1 #Ahora lo que hace '>>' es escribir en la siguiente linea de texto

Entonces al hacer 
$cat f1
Tendriamos un outpu como:

holamundo
Como estan?

Ej grep:

Usualmente grep se usa con otros comando y el modo de usarlos es con 'pipe' que es '|'

$ls -l | grep *.rpm #filtra los archivos enlistados que tengan el formato .rpm
(:

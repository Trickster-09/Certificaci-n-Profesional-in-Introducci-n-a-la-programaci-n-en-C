#include <stdio.h>

int main() {
char primera, segunda, tercera, cuarta, quinta;

printf("Escribe la primera letra: ");
scanf("%c", &primera);

printf("\nEscribe la segunda letra: ");
scanf("\n%c", &segunda);

printf("\nEscribe la tercera letra: ");
scanf("\n%c", &tercera);

printf("\nEscribe la cuarta letra: ");
scanf("\n%c", &cuarta);

printf("\n\nEscribe la quinta letra: ");
scanf("\n%c", &quinta);

primera -= 3;
segunda -= 3;
tercera -= 3;
cuarta -= 3;
quinta -=3;

printf("%c%c%c%c%c%c", primera, segunda, tercera, cuarta, quinta);

return 0;
}


/*
Y por último, vamos a modificar el programa anterior para que nos permita descifrar cinco letras que introduzca el usuario, de una en una.

Este sería un ejemplo de entrada y salida del programa, utilizando la palabra cifrada que hemos obtenido en el programa anterior:

Introduce un carácter: K
Introduce un segundo carácter: r
Introduce un tercer carácter: p
Introduce otro carácter: h
Introduce el último carácter: u
La palabra cifrada es: Krphu
La palabra original es: Homer
*/
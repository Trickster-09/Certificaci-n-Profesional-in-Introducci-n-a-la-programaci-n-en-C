#include <stdio.h>

int main() {
char primera, segunda, tercera, cuarta, quinta;

printf("Escribe la primera letra: ");
scanf("%c", &primera);

printf("\nEscribe la segunda letra: ");
scanf("%c", &segunda);

printf("\nEscribe la tercera letra: ");
scanf("%c", &tercera);

printf("\nEscribe la cuarta letra: ");
scanf("%c", &cuarta);

printf("\nEscribe la quinta letra: ");
scanf("%c", &quinta);

primera += 3;
segunda += 3;
tercera += 3;
cuarta += 3;
quinta +=3;

printf("%c%c%c%c%c%c", primera, segunda, tercera, cuarta, quinta);

return 0;
}


/*
Vamos a escribir un programa que nos permita cifrar cinco 
letras mediante el cifrado César. Este algoritmo de cifrado 
consiste en sustituir la letra original por la que corresponde 
3 posiciones después en el alfabeto; es decir, la letra 'a' se 
sustituye por la letra 'd'.

*/
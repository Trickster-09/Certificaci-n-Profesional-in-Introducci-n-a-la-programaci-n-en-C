/*

Escribe un programa en C que solicite una cadena de caracteres y muestre por pantalla la cadena original, su tamaño y la cadena con el primer y último carácter intercambiados.

Para esto tendrá que declarar las variables y realizar las operaciones adecuadas.

Los mensajes se han de mostrar tal y como aparecen en el siguiente ejemplo de ejecución y en el mismo orden (variando sólo según los datos introducidos por el usuario).

Lo que sigue es un ejemplo de ejecución del programa:

Introduce una palabra: universidad
Si a la palabra universidad, que tiene 11 caracteres, le intercambiamos el primer y último carácter obtenemos la palabra dniversidau

*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define MACRO 50

int main(){
    char cadena[MACRO] = {0};
    char cadena_invertida[MACRO];
    int longitud = 0;
    
    
    printf("Introduce una palabra: ");
    scanf("%s", cadena);
    
    longitud = strlen(cadena);
    strcpy(cadena_invertida, cadena);
    cadena_invertida[0] = cadena[longitud - 1];
    cadena_invertida[longitud-1] = cadena[0];
    
    
    printf("\nSi a la palabra %s, que tiene %d caracteres, le intercambiamos el primer y último carácter obtenemos la palabra %s", cadena, longitud, cadena_invertida);
    
    return 0;
}
/*

Escribe un programa en C que declare:

Una tabla de seis enteros (utiliza una macro para el tamaño).
Un entero para almacenar el resto de una división.
Dos variables de tipo float a double para calcular unos valores medios.
A continuación solicitará seis números enteros y los almacenará en cada una de las posiciones de la tabla.

Seguidamente calculará la media de las posiciones pares de la tabla (incluida la posición cero) y la guardará en una variable.

A continuación calculará la media de las posiciones impares de la tabla y la guardará en otra variable.

Por último, calculará el resto de la división de las primeras y última posiciones de la tabla.

Antes de terminar mostrará por pantalla tres mensajes con toda la información calculada.

Los mensajes se han de mostrar tal y como aparecen en el siguiente ejemplo de ejecución y en el mismo orden (variando solo según los datos introducidos por el usuario).

Lo que sigue es un ejemplo de ejecución del programa:

Introduce el primer número entero: 3
Introduce el segundo número entero: 312
Introduce el tercer número entero: -45
Introduce el cuarto número entero: 129
Introduce el quinto número entero: 81
Introduce el sexto número entero: 17
La media de los números 3, -45 y 81 es 13.000000
La media de los números 312, 129 y 17 es 152.666667
El resto de la divisón de 17 y 3 es 2
Sube tu fichero .c haciendo clic en examinar.

*/

#include<stdlib.h>
#include<stdio.h>
#define MACRO 6

int main(){
    int tabla[MACRO] = {0};
    int resto = 0;
    double media_par = 0.0, media_impar = 0;
    
    
    printf("Introduce el primer numero entero: ");
    scanf("%d", &tabla[0]);
    
    printf("\nIntroduce el segundo numero entero: ");
    scanf("\n%d", &tabla[1]);
    
    printf("\nIntroduce el tercer numero entero: ");
    scanf("\n%d", &tabla[2]);
    
    printf("\nIntroduce el cuarto numero entero: ");
    scanf("\n%d", &tabla[3]);
    
    printf("\nIntroduce el quinto numero entero: ");
    scanf("\n%d", &tabla[4]);
    
    printf("\nIntroduce el sexto numero entero: ");
    scanf("\n%d", &tabla[5]);
    
    media_par = ( tabla[1] + tabla[3] + tabla[5] ) / 3.0;
    media_impar = ( tabla[0] + tabla[2] + tabla[4] ) / 3.0;
    resto = tabla[5] % tabla[0];
    
    printf("\nLa media de los números %d, %d y %d es %.6lf", tabla[0], tabla[2], tabla[4], media_impar);
    printf("\nLa media de los números %d, %d y %d es %.6lf", tabla[1], tabla[3], tabla[5], media_par);
    
    printf("\nEl resto de la divisón de %d y %d es %d", tabla[5], tabla[0], resto);
}
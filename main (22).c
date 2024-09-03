#include <stdio.h>

int main() {
    char char_1, char_2;
    int suma;
    printf("Por favor, introduce un carácter:");
    scanf("%c", &char_1);
    
    printf("\nPor favor, introduce otro carácter:");
    scanf("\n%c", &char_2);
    
    suma = (int) (char_1 + char_2);
    
    
    printf("\nSi sumamos el código ASCII del carácter %c que es %d con el código ASCII del carácter %c que es %d obtenemos el número %d", char_1, char_1,char_2,char_2,suma);
    


return 0;
}
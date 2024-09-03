#include <stdio.h>

int main() {
    char inicial = ' ';
    int edad = 0;
    double altura = 0.0, peso_ideal = 0.0;
    printf("Por favor, introduce la altura en cm:");
    scanf("%lf", &altura);
    
    printf("\nA continuación, introduce la edad en años:");
    scanf("\n%d", &edad);
    
    
    printf("\nPor último, introduce la inicial del nombre:");
    scanf("\n%c", &inicial);
    
    peso_ideal = altura - 100 + (9*edad)/100.0;
    
    printf("\nEl peso ideal de %c, que mide %.2lf cm y tiene %d años es de %.2lf kg.", inicial,altura,edad,peso_ideal);
    


return 0;
}
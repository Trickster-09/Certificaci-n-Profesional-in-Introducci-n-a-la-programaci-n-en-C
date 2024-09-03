#include <stdio.h>

#define LUNA 0.1655
#define MARTE 0.3895
#define JUPITER 2.640
#define MILLER 1.3
#define PANDORA 0.8
#define VULCANO 1.4

int main() {
    char char_1, char_2;
    int suma;
    double peso;
    printf("Introduce tu peso:");
    scanf("%lf", &peso);
    
    printf("\nTu peso en la Tierra es: %.2lf", peso);
    printf("\nTu peso en la Luna es: %.2lf", peso*LUNA);
    printf("\nTu peso en Marte es: %.2lf", peso*MARTE);
    printf("\nTu peso en Jupiter es: %.2lf", peso*JUPITER);
    printf("\nTu peso en Miller es: %.2lf", peso*MILLER);
    printf("\nTu peso en Pandora es: %.2lf", peso*PANDORA);
    printf("\nTu peso en Vulcano es: %.2lf", peso*VULCANO);

return 0;
}
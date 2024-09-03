#include <stdio.h>


int main() {
    const double LUNA = 0.1655;
    const double MARTE = 0.3895;
    const double JUPITER = 2.640;
    const double MILLER = 1.3;
    const double PANDORA = 0.8;
    const double VULCANO = 1.4;
    
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
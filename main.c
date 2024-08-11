#include <stdio.h>

int main() {
    double temporadas, capitulos, minutos, intro, total;
   
    printf("Quiero que pienses en una serie que hayas visto...");
    printf("Cuantas temporadas tiene?");
    scanf("%lf", &temporadas);
    printf("Cuantos capitulos de media cada temporada?");
    scanf("%lf", &capitulos);
    printf("Cuantos minutos duran aproximadamente cada capitulo?");
    scanf("%lf", &minutos);
    printf("Cuanto dura su intro?");
    scanf("%lf", &intro);
    total = temporadas * capitulos * (minutos - intro) / 60;

    printf("En total has invertido unas: %lf total horas.\n", total);
    
    return 0;
}


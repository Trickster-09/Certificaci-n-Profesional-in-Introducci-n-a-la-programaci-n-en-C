#include <stdio.h>

int main() {
double peso, altura;
char sexo;
int cp, hp, caramelos;

printf("Cual es el sexo (M/F)\n");
scanf("%c", &sexo);

printf("Cuantos son los CP?\n");
scanf("%d", &cp);

printf("Cuantos HP?\n");
scanf("%d", &hp);

printf("Cuanto pesa?\n");
scanf("%lf", &peso);

printf("Cual es su altura?\n");
scanf("%lf", &altura);

printf("Cuantos caramelos tiene?\n");
scanf("%d", &caramelos);

printf("Sexo: %c \nCP %d \nHP: %d \nPeso: %lf \nAltura: %2lf \nCaramelos: %d", sexo, cp, hp, peso, altura, caramelos);

return 0;
}
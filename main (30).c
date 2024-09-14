/*

Vamos a hacer un programa que solicite al usuario datos sobre su última partida al LoL y muestre el ratio KDA por pantalla, que se calcula con la fórmula: (K+A)/D, sea K Kills, A Assists y D Deaths.

Para ello, será necesario almacenarlos en una estructura, que al menos deberá contener: nombre de usuario, nivel del usuario, experiencia, nombre del campeón, asesinatos, muertes y asistencias.

Este sería un ejemplo de programa:

¿Cuál es tu nombre de invocador? asdfg
¿Cuál es tu nivel? 67
¿Cuánta experiencia has adquirido ya en dicho nivel? 2651
¿Con qué campeón has jugado tu última partida? Soraka
¿Cuántos asesinatos has hecho? 1
¿Cuántas veces has muerto? 3
¿Y cuántas asistencias has hecho? 18
asdfg, de nivel 67 y experiencia 2651, tu KDA ratio con Soraka ha sido 6.33.

*/

#include<string.h>
#include <stdio.h>

#define MAX_STR 128

typedef struct {
char nombre[MAX_STR];
int nivel;
int experiencia;
char last_champ[MAX_STR];
int kda_stats[3];
double kda;
} LOL;

int main () {

LOL player;

printf("¿Cuál es tu nombre de invocador? ");
scanf("%s", player.nombre);

printf("\n¿Cuál es tu nivel? ");
scanf("\n%d", &player.nivel);

printf("\n¿Cuánta experiencia has adquirido ya en dicho nivel? ");
scanf("\n%d", &player.experiencia);

printf("\n¿Con qué campeón has jugado tu última partida? ");
scanf("\n%s", player.last_champ);

printf("\n¿Cuántos asesinatos has hecho? ");
scanf("\n%d", &player.kda_stats[0]);

printf("\n¿Cuántas veces has muerto? ");
scanf("\n%d", &player.kda_stats[1]);

printf("\n¿Y cuántas asistencias has hecho? ");
scanf("\n%d", &player.kda_stats[2]);

player.kda = (player.kda_stats[0] + player.kda_stats[2]) / (double) player.kda_stats[1];

printf("\n%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2lf.", player.nombre, player.nivel, player.experiencia, player.last_champ, player.kda);

return 0;
}
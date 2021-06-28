#include <stdio.h>

int main () {

int hora, minuto, segundo, totSegundos;

printf("\n Me informe a hora desejada: %d\n", hora);
scanf("%d", &hora);

printf("\n Me informe o minuto desejada: %d\n", minuto);
scanf("%d", &minuto);

printf("\n Me informe o segundo desejado: %d\n", segundo);
scanf("%d", &segundo);

totSegundos = ((hora*3600) +(minuto*60)+ segundo);
printf("\n O total de segundos é: %d", totSegundos);

  return 0;
}
#include <stdio.h>
//Escreva um programa que apresente o somat ́orio de todos os n ́umeros divis ́ıveis por 3 pertencentes ao intervalo [0,100] e o somat ́orio de todos os n ́umeros divis ́ıveis por 5 pertencentes ao intervalo ]100,200]
//Obs.: Utilize apenas um la ̧co de repeti ̧c ̃ao.

int main () {

int i=0,j=100, somatorio=0, div1, div2;


for (i = 0; i <100; i++){
    div1= i%3;
    div2= i % 5;
    if (div1 % 3) {
    somatorio = somatorio + div1 * (div1 + 1);
    printf("\t\nSomatório dos numeros divíseis por 3: %d\n", somatorio);
    } else if (div2 % 5)
    somatorio = somatorio + div2 * (div2 + 1);
    printf("\t\nSomatório dos numeros divíseis por 5: %d\n", somatorio); 
  }
return 0;
}
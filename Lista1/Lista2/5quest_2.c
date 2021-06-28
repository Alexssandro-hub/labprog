#include <stdio.h>

int main(){
    int maior=0, menor=0, aux=0, i=0;
    do{
        printf("\n Digite um numero: ");
        scanf("%i", &aux);
        if(i!=1){
            maior=aux;
            menor=aux;
            i++;
        } else if(aux==0){
            break;
        }else if(aux>maior){
            maior = aux;
        } else if(aux<menor){
            menor = aux;
        }
    }while(1);
    printf("\n\n Maior numero: %i \n Menor numero: %i ", maior, menor);
}
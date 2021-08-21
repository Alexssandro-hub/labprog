#include <stdio.h>
#include <stdlib.h>

int main(){


	return 0;
}

int vetor(int *pV, int tam){
	int x;
	pV = &x;

	printf("digite um numero do tamanho do vetor: ");
	scanf("%d", &tam);

	int k, freq[tam];
	 
	 for(k=0; k<tam; k++){
       ++freq[*(pV+k)];
		
		if(*(pV+k)== x){
			return x;	
		} else{
			return (pV+k) == NULL;
		}
  	}
	  return 0;
}
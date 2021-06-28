#include <stdio.h>

int main(){

  unsigned int renata=0, paulo=0, branco=0, nulo=0;
	int voto, porcentagem;
  int qtdVotosPaulo, qtdVotosRenata, qtdVotosNulo,qtdVotosBranco,qtdTotalvotos, candidatoEleito;
	char conf;
	unsigned totalVotos = 0;
		
		do{ 
			printf("Em que canditado deseja votar?\n");
			printf("Opçao 7: Renata\n");
			printf("Opçao 5: Paulo\n");
			printf("Opçao 0: Em branco\n");

			scanf("%d",&voto);
			getchar();		   
     		
			switch (voto) {
        case 7:

				puts("Você escolheu Renata, digite s para confirmar e n para negar: ");
				conf = getchar();
				if (conf=='s'){
					printf("Votou Renata para Presidenta!\n");	
					renata++;
					totalVotos++;
				}
				break;
        
        case 5:
					printf("Votou Paulo para Presidente!\n");
					paulo++;
					totalVotos++;
        break;

        case 0:
					printf("Votou em branco!\n");
					branco++;
					totalVotos++;
        break;
        				
				default: 
					printf("Votou nulo!\n");
					if (!(voto<0)){
						nulo++;
						totalVotos++;
					}	
      }

	}while(voto>=0);


	  printf("R: %u\n",renata);
	  printf("P: %u\n",paulo);
	  printf("B: %u\n",branco);
	  printf("N: %u\n",nulo);

    printf("\t ======================= \t\n");

		if(totalVotos){

			printf("\t PORCENTAGEM DE VOTAÇÃO! \t\n");
			printf("Total percentual de votos é: %u\n", totalVotos);
			printf("A porcentagem de votos de Paulo é: %.2f %%\n", ((float) paulo / totalVotos)*100);
			printf("A porcentagem de votos de Renata é: %.2f %%\n", ((float) renata / totalVotos)*100);
    	printf("A porcentagem de votos Branco é: %.2f %%\n", ((float) branco / totalVotos)*100);
			printf("A porcentagem de votos Nulo é: %.2f %%\n", ((float) nulo / totalVotos)*100);
		}

  return 0;
}
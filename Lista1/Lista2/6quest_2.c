#include <stdio.h>

int main(){
  
  char conf;
  
  unsigned totalVotos = 0;
  
  int voto, porcentagem;
  
  unsigned int renata=0, paulo=0, branco=0, nulo=0;
  
  int qtdVotosPaulo, qtdVotosRenata, qtdVotosNulo,qtdVotosBranco,qtdTotalvotos, candidatoEleito;
	 
		
		do{ 
			printf("Em que canditado deseja votar?\n");
			printf("Opçao 7: Renata\n");
			printf("Opçao 5: Paulo\n");
			printf("Opçao 0: Em branco\n");

			scanf("%d",&voto);
			getchar();		   
     		
			switch (voto) {
        case 7:

				puts("Você escolheu Renata, digite S para confirmar e N para negar: ");
				conf = getchar();
				if (conf=='s'){
					printf("Votou Renata para Presidenta!\n");	
					renata++;
					totalVotos++;
				}
				break;
        
        case 5:
        puts("Você escolheu Paulo, digite S para confirmar e N para negar: ");
				conf = getchar();
				if (conf=='s'){
					printf("Votou Paulo para Presidenta!\n");	
					renata++;
					totalVotos++;
        }
        break;

        case 0:
					puts("Você escolheu voto em branco, digite S para confirmar e N para negar: ");
				conf = getchar();
				if (conf=='s'){
					printf("Votou em branco!\n");	
					renata++;
					totalVotos++;
          }
        break;
        				
				default: 
					printf("Votou nulo!\n");
					if (!(voto<0)){
						nulo++;
						totalVotos++;
					}	
      }

	}while(voto>=0);
      

	  printf("Renata para Presidenta: %u\n",renata);
	  printf("Paulo para Presidente: %u\n",paulo);
	  printf("Brancos: %u\n",branco);
	  printf("Nulos: %u\n",nulo);

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



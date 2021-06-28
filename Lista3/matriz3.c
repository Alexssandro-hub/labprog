#include <stdio.h>
#include <string.h>
#define TAM 11
int main () {

   char ch1[TAM], ch2;
   char pos;

  printf("Favor, digitar alguma palavra: \n");
  scanf("%s", &ch1[TAM]);
  fgets(ch1,TAM, stdin);

  printf("Favor, digitar um único caracter: \n");
  scanf("%c", &ch2);
  getchar();

  pos=ch2;
  while(ch1[pos]!=ch2) pos++;

  if(ch2==pos){
    printf("\n O caractere pertence a string!  %s\n", ch1);
  } else 
    printf("\n O caractere não pertence a string! %c", pos);

  return 0;
}
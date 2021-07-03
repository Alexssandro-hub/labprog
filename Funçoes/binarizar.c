#include <stdio.h>

const int MAX_VALUE = 15;

int main (void) {

  int MBIN[15][4] = {{0}};

  for (int i = 0; i < MAX_VALUE; i++) {
     MBIN[i][0] = (i >> 3) & 0x1;
     MBIN[i][1] = (i >> 2) & 0x1;
     MBIN[i][2] = (i >> 1) & 0x1;
     MBIN[i][3] = i & 0x1;
   }

   // Mostrando os valores da matriz
   for (int i = 0; i < MAX_VALUE; i++) {
    for (int j = 0; j < 4; j++) {
        printf("%d", MBIN[i][j]);
     }
    puts("");
   }
}

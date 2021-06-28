#include <stdio.h>

int main() {
    int cateto1, cateto2, hipotenusa;

    for(hipotenusa = 1; hipotenusa < 500; hipotenusa++) {
      for(cateto1 = 1; cateto1 < 500; cateto1++) {
        for(cateto2 = 1; cateto2 < 500; cateto2++) {
          int esquerdo = cateto1 * cateto1 + cateto2 * cateto2;
          int direito = hipotenusa * hipotenusa;

          if(esquerdo == direito) {
            printf("São números de pitágoras: %d , %d , %d\n", hipotenusa, cateto1, cateto2);
          } else if(esquerdo > direito) {
                    break;
                }
            }
        }
    }

    return 0;
}
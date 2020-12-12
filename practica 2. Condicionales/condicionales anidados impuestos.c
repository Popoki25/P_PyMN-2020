#include <stdio.h>
int estado;
float ganancia1, ganancia2;
int main(int argc, char const *argv[]) {
  printf("cual es su estado civil?\n ** soltero-> s  casado->c **" );
  scanf("%d\n",&estado );
  if (estado="s") {
        printf("cual es su ganancia mensual?\n\n");
        scanf("%f \n",&ganancia1 );
        if (ganancia1<3200) {
            printf("su tasa es del 10 porciento");
              } else if (ganancia1 >=3200) {
            printf("su tasa es del 25 porciento");
         }
     } else if (estado="c") {
        printf("cual es su ganancia mensual?\n\n");
        scanf("%f \n",&ganancia2 );
        if (ganancia1<6400) {
         printf("su tasa es dell 10 porciento");
             } else if (ganancia1>=6400) {
                printf("su tasa es del 20 porceinto");
         }
  }
  return 0;
}

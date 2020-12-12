#include <stdio.h>
#include <math.h>
float peso;
float estatura;
float imc;

int main(){
    printf("introduzca su peso en kg, por favor");
    scanf("%f", &peso );
    printf("por ultimo, introduzca su estatura en metros ");
    scanf("%f", &estatura );

   imc = peso/pow(estatura,2) ;
    printf("\n\tHola su imc es %2.4f .\n\n",imc);
  if (imc<=18.5) {
  printf("su peso es bajo");
  } else if (imc>18.5 && imc<=25.9 ) {
    printf("su peso es normal");
  } else if (imc>25 && imc<=29.9) {
    printf("tiene sobrepeso");
  } else if (imc>30 && imc<=34.5 ) {
      printf("obesidad tipo 1");
  } else if (imc>35 && imc<=39.5 ) {
      printf("obesidad tipo 2");
  } else if (imc = 40 ) {
      printf("hiper obesidad");
     }
    return 0;
}

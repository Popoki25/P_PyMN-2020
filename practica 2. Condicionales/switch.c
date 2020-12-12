#include <stdio.h>
int departamento;
char opcion;
float monto, tarifa;
int main(int argc, char const *argv[]) {
  printf("cual es el monto en dinero por su compra?");
  scanf("%f\n",&monto);
  printf("en cual departamento compro?\n\n opciones ** perfumeria-> p   salchichoneria-> s   carniceria-> c   liempieza-> l");
  scanf("%s\n",&opcion);
  switch (opcion) {
    case 'p': tarifa=(monto*0.8)+10; 
    printf("su tarifa final es de %f pesos"),tarifa; break;
    case 's': tarifa=(monto*0.6)+10; 
    printf("su tarifa final es de %f pesos"),tarifa; break;
    case 'c': tarifa=(monto*0.8)+10;
    printf("su tarifa final es de %f pesos"),tarifa; break;
    case 'l': tarifa=(monto*0.65)+10; 
    printf("su tarifa final es de %f pesos"),tarifa; break;
  }
  return 0;
}

#include <stdio.h>
int numero;
int digito;
int main(int argc, char const *argv[]) {
  printf("ingrese un numero para convertirlo a su equivalente en binario");
  scanf("%d",&numero);
  digito=numero%2;
  printf("el codigo en binario es:");
while (digito/2 >=1) {
  digito=digito%2;
  printf("%d",digito);
}
  return 0;
}
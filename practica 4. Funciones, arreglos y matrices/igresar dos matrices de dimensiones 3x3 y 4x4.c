#include <stdio.h>
int a[3][3],b[4][4],i,j,k,l ;
int main(int argc, char const *argv[]) {

printf("ingrese 7 valores para el primer arreglo y 8 valores para el segundo\t");

for (size_t i = 1; i < 3; i++) {
  printf("ingrese el digito del %d indice\t",i );
  for (size_t j = 1; j < 3; j++) {
  printf("ingrese el digito del %d indice\t",j );
  scanf("%d",&a[i][j]);
  
}
for (size_t k = 1; k < 8; k++) {
  printf("ingrese el digito del %d indice ",k );
  for (size_t l = 1; l < 3; l++) {
  printf("ingrese el digito del %d indice\t",l );
  scanf("%d",&b[k][l]);
}
printf("%d",a[i][j]);
printf("%d",b[k][l] );
 return 0;
}
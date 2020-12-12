#include <stdio.h>
int a[7],b[8], i,j;
int main(int argc, char const *argv[]) {

printf("ingrese 7 valores para el primer arreglo y 8 valores para el segundo\t");

for (size_t i = 1; i < 8; i++) {
  printf("ingrese el digito del %d indice\t",i );
  scanf("%d",&a[i]);
  
}
for (size_t j = 1; j < 8; j++) {
  printf("ingrese el digito del %d indice ",j );
  scanf("%d\n",a[j]);
}
printf("%d",a[i]);
printf("%d",b[j] );
 return 0;
}
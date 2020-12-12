#include <stdio.h>
int a[3]={{-1},{1},{-1}};
int b[3]={{-2},{4},{-2}};
int r[3];
int main(int argc, char const *argv[]) {
  for (size_t i = 0; i < 3; i++) {
    suma=0;
    for (size_t j = 0; j < 3; i++) {
      suma+= a[i]+b[j];
    }
  }
  r[3]=suma;
  printf("la suma de los arreglos es %d \n",r[3] );
  return 0;
}

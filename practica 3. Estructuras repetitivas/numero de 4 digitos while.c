#include <stdio.h>
int a,b,c,d;
int main(int argc, char const *argv[]) {
  printf("inserte un numero de 4 digitos (que ninguno de ellos sea iguales)");
  scanf("%d %d %d %d\n",a,b,c,d );
do {
  printf("el numero que ha ingresado tiene digitos iguales");
} while(a!=b&b!=c&c!=d);
  return 0;
}

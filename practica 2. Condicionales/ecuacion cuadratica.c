#include <stdio.h>
#include <math.h>
double a, b, c, dis, x1, x2 ;
int main(int argc, char const *argv[]) {
  printf("buenos dias, introduzca el valor del coeficiente cuadratico");
  scanf("%lf\n",&a);
  printf("ingrese el valor del coeficiente lineal");
  scanf("%lf\n",&b );
  printf("ingrese el valor de la constante de grado cero");
  scanf("%lf\n",&c );
  dis= (pow(b,2)-4*a*c);
  if (sqrt(pow(b,2)-4*a*c)>=0) {
  	  x1= (-b+pow(dis,0.5))/(2*a);
 	  x2= (-b-pow(dis,0.5))/(2*a);
    printf("el valor de la primera raiz es %f",x1 );
    printf("el valor de la segunda raiz es %f",x2 );
  } else {
  printf("el discriminante arroja raices con numeros imaginarios");
  }
  return 0;
}


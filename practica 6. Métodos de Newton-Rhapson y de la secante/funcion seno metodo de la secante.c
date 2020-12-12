#include <stdio.h>
#include<math.h>
float f1x(float x_in);
float errorRelativo(float va,float vn);
int iteracion, i ;
double x0,x1, xip1, ea, xip1anterior;
int main()
{
    printf("CALCULO DEL METODO DE NEWTON RAPSON \n");
    printf("Ingrese un punto x1 en la funcion tal que sea mas grande que x0\n");
    scanf("%lf",&x1 );
    printf("Ingrese un punto x0 en la funcion tal que sea mas chico que x1\n");
    scanf("%lf",&x0);
    printf("¿cuantas iteraciones deseas hacer?\n");
    scanf("%d",&iteracion);

printf("iteracion     valor de xipi         error relativo\n");
xip1anterior=0;
for (i = 0; i <= iteracion; i++) {
  x1=x0;
  x0=xip1;
  xip1anterior= xip1;
  xip1 = x0 - ((f1x(x0)*(x1-x0))/(f1x(x1)-(f1x(x0))));
  ea=errorRelativo(xip1,xip1anterior);
  printf("%d           %lf                 %lf %% \n",i,xip1,ea );
}
    return 0;
}
float f1x(float x_in){
    float y;
    y = (8*sin(x_in)*exp(-x_in))-1;
    return y;
}
float errorRelativo(float va, float vn){
    float epsilon;
    epsilon = fabs((va-vn)/va)*100;
    return epsilon;
}
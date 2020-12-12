#include <stdio.h>
#include<math.h>
float f1x(float x_in);
float errorRelativo(float va,float vn);
float df1x(float x_in);
int iteracion, i ;
double x0, xip1, ea, xip1anterior;
int main()
{
    printf("CALCULO DEL METODO DE NEWTON RAPSON \n");
    printf("Ingrese un valor inicial para x");
    scanf("%lf",&x0 );
    printf("¿cuantas iteraciones deseas hacer?");
    scanf("%d",&iteracion);

printf("iteracion     valor de xipi         error relativo\n");
xip1anterior=0;
for (i = 0; i <= iteracion; i++) {
  x0=xip1;
  xip1anterior= xip1;
  xip1 = x0 - (f1x(x0)/df1x(x0));
  ea=errorRelativo(xip1,xip1anterior);
  printf("%d           %lf                 %lf %% \n",i,xip1,ea );
}
    return 0;
}
float f1x(float x_in){
    float y;
    y = (2*pow(x_in,3))-(11*pow(x_in,2))+(17.7*(x_in))-5;
    return y;
}
float df1x(float x_in){
    float y;
    y = (6*pow(x_in,2))-(22*(x_in))+17.7;
    return y;
}
float errorRelativo(float va, float vn){
    float epsilon;
    epsilon = fabs((va-vn)/va)*100;
    return epsilon;
}
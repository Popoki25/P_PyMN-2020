#include <stdio.h>
#include<math.h>
float funcion1(float x_ent); 
float errorRelativo(float va,float vn); 
int iteraciones, i;
double a, b, xi, xianterior, regla, ea; 
int main()
{
 printf("Metodo de biseccion\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
  printf("introduzca el limite del valor approximado de la izquierda");
  scanf("%lf",&a);
  printf("intorduzca el limite del valor aproximado de la derecha");
  scanf("%lf",&b );
  printf("Â¿cuantas iteraciones quieres hacer?");
  scanf("%d",&iteraciones );

 xianterior=0;
if (funcion1(a)*funcion1(b) >0) {
  printf("no hay raiz en el intervalo que ha establecido, intente con otros valores");}
 else {
  printf("iteracion                 valor xi              error relativo\t\t\t\t\t\t");
  for (i= 0; i <= iteraciones ; i++) {
    xianterior=xi;
    xi=b-((funcion1(b)*(a-b))/(funcion1(a)-funcion1(b)));
    ea=errorRelativo(xi, xianterior);
    regla= funcion1(a)*funcion1(xi);
    if (regla>0) {
      a=xi;
    }
    else if (regla<0) {
      b=xi;
    } else {
      ea=0;
    }
    printf("\t %d                       %lf             %lf %% \t\t\t\t\t\t", i, xi, ea );
}
}
return 0;
}
float funcion1(float x_ent){
    float fx;
    fx = log(x_ent)+pow(x_ent,2)-4;
    return fx;
} 
float errorRelativo(float va, float vn){
    float epsilon;
    epsilon = fabs((va-vn)/va)*100;
    return epsilon; 
}
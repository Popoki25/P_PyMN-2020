#include <stdio.h>
#include<math.h>
float DerivAdelante(float h, float(xi));
float DerivAtras(float h, float(xi));
float DerivadaCen(float h, float(xi));
float error(float vr, float vo);
float real;
float xi,h;

int main()
{
    real=0.2489; xi=0.6; h=0.5;
    printf("Bienvenido, calculando la derivada de f(x)=1-e^(-x/0.2) en el punto xi=0.6c\n");
    printf("El valor para h=%f usando valores hacia adelante es: %f y\t",h,DerivAdelante(xi,h));
    printf ("el error relativo es %f %%\n",error(real,DerivAdelante(xi,h)));
    printf("El valor para h=%f usando valores hacia atras es: %f y\t",h,DerivAtras(xi,h));
    printf ("el error relativo es %f %%\n",error(real,DerivAtras(xi,h)));
    printf("El valor para h=%f usando valores centrados es: %f y\t",h,DerivadaCen(xi,h));
    printf ("el error relativo es %f %%\n",error(real,DerivadaCen(xi,h)));
}
float DerivAdelante(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2;
    fxi = 1-exp(-xi/0.2); 
    fxip1 = 1-exp(-(xi+h)/0.2); 
    fxip2 = 1-exp(-(xi+(2*h))/0.2); 
    dfxi = (-fxip2+(4*fxip1)-(3*fxi))/(2*h);
    return dfxi;
}
float DerivAtras(float h, float (xi)){
float dfxi, fxi, fxir1, fxir2;
fxi=1-exp(-xi/0.2);
fxir1= 1-exp(-(xi-h)/0.2);
fxir2= 1-exp(-(xi-(2*h))/0.2);
dfxi = (fxir2-(4*fxir1)+(3*fxi))/(2*h);
return dfxi; 
}
float DerivadaCen(float h, float(xi)){
  float dfxi, fxir1, fxir2, fxip1, fxip2;
  fxip1 = 1-exp(-(xi+h)/0.2); 
  fxip2 = 1-exp(-(xi+(2*h))/0.2); 
  fxir1= 1-exp(-(xi-h)/0.2);
  fxir2= 1-exp(-(xi-(2*h))/0.2);
  dfxi= (fxir2-(8*fxir1)+(8*fxip1)-fxip2)/(12*h);
  return dfxi; 
}
float error(float vr, float vo){
float epsilon;
epsilon = fabs((vr-vo)/vr)*100;
return epsilon;
}


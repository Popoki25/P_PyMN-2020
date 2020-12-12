#include <stdio.h>
main()
{
    int numero[5] =          
      {200, 150, 100, -50, 300};
    int suma;                  
 
    suma = 0; 
    for (i=0; i<=4; i++)
        suma += numero[i];
    printf("Su suma es %d", suma);
}

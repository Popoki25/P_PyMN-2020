#include <stdio.h>
#include <math.h>
int edad;
char nombre [20];
float peso;
float estatura;
float imc;

int main()
{

   //Datos
    printf("\n\t Saludos, cual es su nombre? ");
    scanf("%s", &nombre);
    printf("introduzca su edad\n");
    scanf("%d", &edad );
    printf("introduzca su peso en kg, por favor");
    scanf("%f", &peso );
    printf("por ultimo, introduzca su estatura en metros ");
    scanf("%f", &estatura );

    const float imc = peso/pow(estatura,2) ;
    printf("\n\tHola %s , su edad es %d, su estatura es de %1.2f metros, su peso es de %2.2f kg y su imc es %2.4f .\n\n",nombre, edad, estatura, peso,imc);
    return 0;
}

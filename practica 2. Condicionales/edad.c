#include <stdio.h>
int edad;
int main ()
{
	printf("Cual es tu edad\n");
	scanf("%d",&edad);
	if (edad>=18) {
	printf ("eres mayor de edad" );
	}
else {
	printf ("eres menor de edad");
}
return 0;
}

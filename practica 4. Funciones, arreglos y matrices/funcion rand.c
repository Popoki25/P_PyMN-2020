#include <iostream>
using std::cout;
using std::endl;
#include <ctime>
const int tamano = 10, MAXIMO = 100;
int main(){


int arreglo[ tamano ] = { 0 };
   int i;
   srand( time( 0 ) );
   for ( i = 0; i < tamano; ++i )
      arreglo[ i ] = rand() % MAXIMO;
   cout << "Los valores del arreglo son:\n";
   for ( i = 0; i < tamano; ++i ){
     cout <<"arreglo[" << i << "] = " << arreglo[ i ];
       cout << "\n";
   }
}

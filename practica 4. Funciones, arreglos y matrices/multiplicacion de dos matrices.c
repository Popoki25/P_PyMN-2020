#include <stdio.h>
int A[3][3] ={{0,1,-1},{0,1,0},{-1,0,1}};
int B[3][1] ={{2},{0},{1}}; 
int R[3][1];
int i,j,k,suma;
int main()
{ for(k=0;k<1;k++){
     for(i=0;i<3;i++){
      suma = 0;
      for(j=0;j<3;j++){
        suma += A[i][j]*B[j][k];
      }
      R[i][k] = suma;
      printf("%d\t",R[i][k]);
    }
  }
}

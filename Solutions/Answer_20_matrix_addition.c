/*Himansh Mudigonda*/
/*Twentieth Program -> Matrix addition.*/
//including standard io
#include <stdio.h>
//start of main function.
int main() {
       int a=5,b=5,c=5,d=5;
   int x[a][b],y[c][d],var[a][b];
   printf("Matrix A : \n");
   for(int i=0;i<a;i++)
       for(int j=0;j<a;j++) {
           printf("x[%d][%d]=",i,j);
           scanf("%d",&x[i][j]);
       }
   printf("Matrix B : \n");
   for(int i=0;i<c;i++)
       for(int j=0;j<d;j++) {
           printf("y[%d][%d]=",i,j);
           scanf("%d",&y[i][j]);
       }
   for(int i=0;i<c;i++)
       for(int j=0;j<a;j++) {
           var[i][j]=x[i][j]+y[i][j];
       }
   printf("A + B : \n");
   for(int i=0;i<a;i++){
       for(int j=0;j<b;j++)
       {
           printf("%d ",var[i][j]);
       }
       printf("\n");
    }
//return 0 if perfect.
    return 0;
//end of program.
}

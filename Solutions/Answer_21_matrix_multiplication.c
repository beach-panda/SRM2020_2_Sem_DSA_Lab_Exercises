/*Himansh Mudigonda*/
/*Twenty First Program -> Matrix addition.*/
//including standard io
#include <stdio.h>
//start of main function.
int main() {
    int a=5,b=5,c=5,d=5,sum=0;
    int x[a][b],y[a][b],var[a][b];
    printf("Matrix A:\n");
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++) {
            printf("x[%d][%d]=",i,j);
            scanf("%d",&x[i][j]);
        }
    printf("Matrix B:\n");
    for(int i=0;i<c;i++)
        for(int j=0;j<d;j++) {
            printf("y[%d][%d]=",i,j);
            scanf("%d",&y[i][j]);
        }
    printf("A * B : \n");
    for(int i=0;i<a;i++) {
        for(int k=0;k<d;k++) {
            for(int j=0;j<b;j++)
                sum=sum+x[i][j]*y[j][k];
            var[i][k]=sum;
            printf("%d ",var[i][k]);
            sum=0;
        }    
        printf("\n");
    }

//return 0 if perfect.
    return 0;
//end of program.
}

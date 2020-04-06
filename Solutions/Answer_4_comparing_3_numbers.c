/*Himansh Mudigonda*/
/*Fourth Program -> Comparing three numebrs using comditional operators.*/
//including standard io
#include <stdio.h>
//global variables -> alpha, beta, delta are the three variable
double alpha, beta, delta;
//start of main function.
int main() {
//initializing the variables.
    int choice;    
//Input the three numbers
    printf("Enter First number : ");
    scanf("%lf",&alpha);
    printf("Enter Second number : ");
    scanf("%lf",&beta);
    printf("Enter Third number : ");
    scanf("%lf",&delta);
/*
here we have multiple if statements.
first 3 are written for the case when numbers are different.
next 3 are written for the case when any of the two are same.
last statement is written for the case when all the three are the same.
*/
    if(alpha>beta && alpha>delta){
        printf("The greatest numeber is : %.1lf\n",alpha);
    }
    else if(beta>alpha && beta>delta){
        printf("The greatest numeber is : %.1lf\n",beta);
    }

    else if(delta>beta && delta>alpha){
        printf("The greatest numeber is : %.1lf\n",delta);
    }
    else if(alpha == beta && alpha > delta) {
        printf("First and second values(%.0lf) are the same and are greater than third(%.0lf)\n",alpha,delta);
    }
    else if(beta == delta && beta > alpha) {
        printf("Second and third values(%.0lf) are the same and are greater than first(%.0lf)\n",beta,alpha);
    }
    else if(delta == alpha && alpha > beta) {
        printf("First and third values(%.0lf) are the same and are greater than second(%.0lf)\n"),alpha,beta;
    }
    else if(alpha == beta && alpha == delta){
        printf("All the three numbers are the same!\n");
    }
//return 0 if perfect.
    return 0;
//end of program.
} 

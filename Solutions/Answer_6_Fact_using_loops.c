/*Himansh Mudigonda*/
/*Sixth Program -> Finding factorial using loops.*/
//including standard io
#include <stdio.h>
//start of main function.
int main() {
    int i,num;
    double f=1;
//Input char is taken her
    printf("Enter the target number: ");
    scanf("%d",&num);
/*
Here We have a for loop ranging from 1 to the input number.
*/
    for(i=1;i<=num;i++)
        f=f*i;
    printf("Factorial of %d is: %.0lf",num,f);
//return 0 if perfect.
    return 0;
//end of program.
} 

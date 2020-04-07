/*Himansh Mudigonda*/
/*Seventh Program -> Finding prime numbers using loops.*/
//including standard io
#include <stdio.h>
//start of main function.
int main() {
    int i,input_val;
    double f=1;
//Input char is taken her
    printf("Enter the target number: ");
    scanf("%d",&input_val);
/*
Here We have a for loop ranging from 1 to the input number.
*/
    if (input_val <= 1) {
        printf("%d is not a prime numbers \n", input_val);
        return 0;
    }
    int delta = 0;
    for (int j = 2; j <= input_val / 2; j++) {
        if ((input_val % j) == 0) {
            delta = 1;
            break;
        }
    }
    if (delta == 0)
        printf("%d is a prime number \n", input_val);
    else
        printf("%d is not a prime number \n", input_val);
//return 0 if perfect.
    return 0;
//end of program.
} 

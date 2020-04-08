/*Himansh Mudigonda*/
/*Eleventh Program -> Sum and Avg of digits in an array.*/
//including standard io
#include <stdio.h>
#define n 5
//start of main function.
int main() {
    int my_array[n-1]; 
    int sum;
    double avg;
    printf("Enter your numbers : ");
//we have a loop here that takes the input into the array.
    for(int i=0;i<=n-1;i++)
        scanf("%d",&my_array[i]);
/*
We have one loop here.
This helps us add up all the elements in an array one after the other.
*/
    for(int i=0;i<=n-1;i++){
        sum += my_array[i];
    }
    avg = (double)sum/n; //typecasting to double...
    printf("Sum : %d\n",sum);
    printf("Avg : %.2lf\n",avg); 
//return 0 if perfect.
    return 0;
//end of program.
} 

/*Himansh Mudigonda*/
//Twelfth Program -> Largest number in the array.
//including standard io
#include <stdio.h>
#define n 6
//start of main function.
int main() {
    int target_data;
    int target_num;
    int my_array[n-1]; 
    printf("Enter your numbers : ");
//we have a loop here that takes the input into the array.
    for(int i=0;i<n;i++)
        scanf("%d",&my_array[i]);
/*
We have one loop here.
This helps us find the largest number using a temp variable called target_data.
The variable target_num takes in the index of the largest number.
*/
    for(int i=0;i<=n-1;i++){
        if (target_data<my_array[i]) {
            target_data = my_array[i];
            target_num = i; 
        }
    }
    printf("\nTarget's Data  : %d", target_data);
    printf("\nTarget's Index : %d", target_num);
//return 0 if perfect.
    return 0;
//end of program.
}
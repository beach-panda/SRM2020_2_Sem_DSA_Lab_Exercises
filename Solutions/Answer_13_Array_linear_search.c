/*Himansh Mudigonda*/
/*Thirteenth Program -> Linear search algorithm in an array.*/
//including standard io
#include <stdio.h>
#define n 5
//start of main function.
int main() {
    int target_data;
    int my_array[n-1]; 
    printf("Enter your numbers : ");
//we have a loop here that takes the input into the array.
    for(int i=0;i<=n-1;i++)
        scanf("%d",&my_array[i]);
//Here we take the target value
    printf("Enter your target : ");
        scanf("%d",&target_data);

/*
We have one loop here.
This helps us perform a linear search in the array(one after the other).
*/
    for(int i=0;i<=n-1;i++){
        if (my_array[i] == target_data)
            printf("Data at index %d is same as the target data...\n",i);
        else
            printf("Data not at index %d...\n",i);
    }
//return 0 if perfect.
    return 0;
//end of program.
}
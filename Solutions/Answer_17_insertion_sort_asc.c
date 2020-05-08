/*Himansh Mudigonda*/
/*Sixteenth Program -> Insertion sort algorithm in an array to arrange in ascending order.*/
//including standard io
#include <stdio.h>
#define n 6
//start of main function.
int main() {
    int target_data;
    int my_array[n-1]; 
    printf("Enter your numbers : ");
//we have a loop here that takes the input into the array.
    for(int i=0;i<n;i++)
        scanf("%d",&my_array[i]);
/*
We have one loop here.
This helps us perform a linear search in the array(one after the other).
*/
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = my_array[i]; 
        j = i - 1; 
        while (j >= 0 && my_array[j] > key) { 
            my_array[j + 1] = my_array[j]; 
            j = j - 1; 
        } 
        my_array[j + 1] = key; 
    } 
//Printing out the insertion sorted array
    for ( i = 0; i < n; i++)
        printf("%d  ",my_array[i]);    
    
//return 0 if perfect.
    return 0;
//end of program.
}

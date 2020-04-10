/*Himansh Mudigonda*/
/*Fifteenth Program -> Selection sort algorithm in an array to arrange in descending order.*/
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
    int i = 0, j = 0, temp;
    for (i = 0; i < n-1; i++) { 
        int min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (my_array[j] > my_array[min_idx]) 
            min_idx = j; 
        temp = my_array[min_idx]; 
        my_array[min_idx] = my_array[i]; 
        my_array[i] = temp;
    }

//Printing out the selection sorted array
    for ( i = 0; i < n; i++)
        printf("%d  ",my_array[i]);    
    
//return 0 if perfect.
    return 0;
//end of program.
}
/*Himansh Mudigonda*/
/*Fourteenth Program -> Bubble sort algorithm in an array to arrange in ascending order.*/
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
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) {   // loop n times - 1 per element
        for (j = 0; j < n - i - 1; j++) { // last i elements are sorted already
            if (my_array[j] > my_array[j + 1]) {  // swop if order is broken
                tmp = my_array[j];
                my_array[j] = my_array[j + 1];
                my_array[j + 1] = tmp;
            }
        }
    }

//Printing out the bubble sorted array
    for ( i = 0; i < n; i++)
        printf("%d  ",my_array[i]);    
    
//return 0 if perfect.
    return 0;
//end of program.
}
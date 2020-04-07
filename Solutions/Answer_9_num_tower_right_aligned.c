/*Himansh Mudigonda*/
/*Sixth Program -> Finding factorial using loops.*/
//including standard io
#include <stdio.h>
//defining the level of tower here.
#define level 4
//start of main function.
int main() {
    char alpha = ' ';
/*
Here We have a for loop ranging from 1 to the level of the tower.
We would use two loop as shown to get to the desired output.
The first loop would be providing us with a new line.
The second loop would be providing us with the number of spaces.
The third loop would be providing us with the number.
*/


    for(int i=1; i<=level; i++) {
        for(int j=i; j<level; j++) {
            printf(" ");
        }
        for(int j=1; j<=i; j++) {
            printf("%d",j);
        }
        printf("\n");
    }

//return 0 if perfect.
    return 0;
//end of program.
} 

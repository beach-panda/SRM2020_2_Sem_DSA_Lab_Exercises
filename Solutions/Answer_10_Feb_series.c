/*Himansh Mudigonda*/
/*Tenth Program -> Feb Series.*/
//including standard io
#include <stdio.h>
//defining the level of tower here.
#define level 4
//start of main function.
int main() {
    int fib[15], i, fib[0] = 0, fib[1] = 1, n = 2;
/*
There are 2 loops.
The first loop does the calculation which basically include addition of two previous numbers.
The second loop does the printing of the feb series.
*/


    printf("\n");
        for (int i=n;i<=15;i++){
        fib [i]=fib[i-1]+fib[i-2];
        n+=1;
    }
    printf("\n");
    for(int i=0;i<n;++i){
        printf("\n %d",fib[i]);
    }
    return 0;
//return 0 if perfect.
    return 0;
//end of program.
} 

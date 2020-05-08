/*Himansh Mudigonda*/
/*Twenty fourth Program -> factorial using functions.*/
//including standard io
#include <stdio.h>
int fib();
//start of main function.
int main() {
    int num,i=0,c;
    printf("Enter the number to obtain Fibonacci series: ");
    scanf("%d",&num);
    printf("Fibonacci series terms are\n");
    for(c=1;c<=num;c++)
    {
        printf("%d",fib(i));
        i++;
    }
}
    
int fib(int n) {
        if(n==0||n==1)
        return n;
        else
        return(fib(n-1)+fib(n-2));

}

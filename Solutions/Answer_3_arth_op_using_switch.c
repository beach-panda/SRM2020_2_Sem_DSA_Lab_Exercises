/*Himansh Mudigonda*/
/*Third Program Program -> Performing arth operations using switch cases.*/
//including standard io
#include <stdio.h>
//global variables alpha and beta are the two operands
double alpha, beta;
//declaring the type of function
void add();
void sub();
void div();
void mul();
//start of main function.
int main() {
//initializing the variables.
    int choice;    
//finding option
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("0. Exit\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
//using SWITCH CASE to access the functions specified by the user.
    switch (choice)
    {
//each case calls its respective function
        case 0 : break;
        case 1 : add(); break;
        case 2 : sub(); break;
        case 3 : mul(); break;
        case 4 : div(); break;
        default: printf("Try again\n"); main();
        break;
    }
//return 0 if perfect.
    return 0;
//end of program.
} 

void add() {
//scanf the values of alpha and beta
    printf("Enter the numbers(with spaces between each) : ");
    scanf("%lf %lf",&alpha,&beta);    
    double result;
//applying arth operations
    result = alpha + beta;
//print final result
    printf("%.3lf",result);
//back to main function
    main();
}

void sub() {
//scanf the values of alpha and beta
    printf("Enter the numbers(with spaces between each) : ");
    scanf("%lf %lf",&alpha,&beta); 
    double result;
//applying arth operations
    result = alpha - beta;
//print final result
    printf("%.2lf",result);
//back to main function
    main();
}

void mul() {
//scanf the values of alpha and beta
    printf("Enter the numbers(with spaces between each) : ");
    scanf("%lf %lf",&alpha,&beta); 
    double result;
//applying arth operations
    result = alpha * beta;
//print final result
    printf("%.2lf",result);
//back to main function
    main();
}

void div() {
//scanf the values of alpha and beta
    printf("Enter the numbers(with spaces between each) : ");
    scanf("%lf %lf",&alpha,&beta); 
    double result;
//applying arth operations
    result = alpha / beta;
//print final result
    printf("%.2lf",result);
//back to main function
    main();
}

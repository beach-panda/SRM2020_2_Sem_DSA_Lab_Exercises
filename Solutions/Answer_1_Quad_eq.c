/*Himansh Mudigonda*/
/*First Program -> To find the Roots of the Quadratic equation using their coefficients.*/
//including math.h for finding the power.
//including standard io.
#include <math.h>
#include <stdio.h>
//start of main function.
int main() {
//initializing the variables.
    double a, b, c, disc, alpha, beta, realPart, imagPart;
//storing the values of the variables.
    printf("Quadratic Equation : a(x^2) + b(x) + c\n");
    printf("Enter coefficient of a : ");
    scanf("%lf", &a);
    printf("Enter coefficient of b : ");
    scanf("%lf", &b);
    printf("Enter coefficient of c : ");
    scanf("%lf", &c);
//finding the value of the discriminant using the established formula.
    disc = pow(b,2) - 4 * a * c;
//categorizing the discriminant based on it's value to find the root.
    if (disc > 0) {
        alpha = (-b + sqrt(disc)) / (2 * a);
        beta = (-b - sqrt(disc)) / (2 * a);
        printf("First Root : %.2lf \nSecond Root : %.2lf", alpha, beta);
    }
    else if (disc < 0){
        realPart = -b / (2 * a);
        imagPart = sqrt(-disc) / (2 * a);
        printf("First Root : %.2lf+%.2lfi \nSecond Root : %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    else {
        alpha = beta = -b / (2 * a);
        printf("First Root = Second Root = %.2lf;", alpha);
    }
//return 0 if perfect.
    return 0;
//end of program.
} 
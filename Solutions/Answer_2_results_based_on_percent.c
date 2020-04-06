/*Himansh Mudigonda*/
/*Second Program -> To find the user grade based on his percentage.*/
//including standard io
#include <stdio.h>
//start of main function.
int main() {
//initializing the variables.
    double user_percentage;
    char user_grade;
//storing the values of the variables.
    printf("Enter your percentage : ");
    scanf("%lf",&user_percentage);
//compare it with the given parameters for catorizing the student in his/her respective grades.
//printing the user's grades.
    if (user_percentage>=90)
    {
        printf("The user's grade is A");
    }
    else if (user_percentage>=80)
    {
        printf("The user's grade is B");
    }
    else if (user_percentage>=70)
    {
        printf("The user's grade is C");
    }
    else if (user_percentage>=60)
    {
        printf("The user's grade is D");
    }
    else if (user_percentage>=40)
    {
        printf("The user's grade is E");
    }
    else if (user_percentage<40)
    {
        printf("The user's grade is F");
    }
//return 0 if perfect.
    return 0;
//end of program.
} 
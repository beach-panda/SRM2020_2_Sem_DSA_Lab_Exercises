/*Himansh Mudigonda*/
/*Fifth Program -> Telling if the input char is vowel.*/
//including standard io
#include <stdio.h>
//global variables -> alpha is the variable that stores the target char.
char alpha;
//start of main function.
int main() {
//Input char is taken her
    printf("Enter First char : ");
    scanf("%c",&alpha);
/*
here we have multiple if statements.
The first if statement counts the small chars of the vowels.
The second if statement counts the cap chars of the vowels.
The default statement is that it is not a vowel.
*/
    if(alpha == 'a'||alpha == 'e'||alpha == 'i'||alpha == 'o'||alpha == 'u') {
        printf("The input character is a Vowel.\n");
    }
    else if(alpha == 'A'||alpha == 'E'||alpha == 'I'||alpha == 'O'||alpha == 'U') {
        printf("The input character is a Vowel.\n");
    }
    else {
        printf("The input character is a Consonant.\n");
    }
//return 0 if perfect.
    return 0;
//end of program.
} 

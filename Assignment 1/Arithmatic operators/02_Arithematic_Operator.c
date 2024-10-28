// OPERATOR 2 => SUBSTRACTION

#include<stdio.h>

int main(){

    int a, b, c;

    printf("Please enter the first number\n");
    scanf("%d", &a);

    printf("Please enter the second number\n");
    scanf("%d", &b);

   // USING THE ARITHEMATIC OPERATOR 'SUBSTRACTION' TO FIND THE DIFFERENCE OF TWO NUMBERS
    c = a - b;
    printf("The value of first number is %d and second number is %d and their difference is %d", a, b, c);


    return 0;
}
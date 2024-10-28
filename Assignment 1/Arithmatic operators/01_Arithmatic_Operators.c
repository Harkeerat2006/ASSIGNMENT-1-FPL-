// OPERATOR 1 => ADDITION 


#include<stdio.h>

int main()
{

    int a, b, c;

    printf("Enter the first number\n");
    scanf("%d", &a);

    printf("Enter the second number\n");
    scanf("%d", &b);

    // USING THE ARITHEMATIC OPERATOR 'ADDITION' TO FIND THE SUM OF TWO NUMBERS
    c = a + b;
    printf("The value of a is %d and b is %d and their sum is %d", a, b, c);

    return 0;
}
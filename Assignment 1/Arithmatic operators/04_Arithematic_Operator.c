// OPERATOR 4 => DIVISION

#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Please enter the first number\n");
    scanf("%d", &a);

    printf("Please enter the second number\n");
    scanf("%d", &b);

    // USING THE ARITHEMATIC OPERATOR 'DIVIDE' TO FIND THE RATIO OF TWO NUMBERS
    c = a / b;
    printf("The value of first number is %d and the value of second number is %d and their ratio is %d", a, b, c);

    return 0;
}
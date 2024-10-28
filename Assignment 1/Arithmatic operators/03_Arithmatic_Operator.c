//OPERATOR 3 => MULTIPLICATION

#include<stdio.h>

int main(){

    int a, b, c;

    printf("Please enter the first number\n");
    scanf("%d", &a);

    printf("Please enter the second number\n");
    scanf("%d", &b);

    // USING THE ARITHEMATIC OPERATOR 'MULTIPLICATION' TO FIND THE PRODUCT OF TWO NUMBERS
    c = a * b;
    printf("The the value of first number is %d and the value of  second number is %d and their product is %d", a, b, c);


    return 0;
}
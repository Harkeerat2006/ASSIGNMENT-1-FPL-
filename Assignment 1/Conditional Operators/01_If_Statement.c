#include <stdio.h>

int main()
{

    int age;
    printf("Please enter your age\n");
    scanf("%d", &age);

    if (age >= 18)
    {

        printf("As you are an ADULT, you are elegible to vote!");
    }
    if (age<18)
    {
        printf("You are a minor yet,cannot Vote.");
    }
    

    return 0;
}
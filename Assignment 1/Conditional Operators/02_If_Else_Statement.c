#include <stdio.h>

int main()
{

    int age;
    printf("Please enter your age\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You can get a DRIVING LICENCE!\n");
    }
    
    else
    {
        printf("You are a minor, cannot get a DRIVING LICENCE.");
    }

    return 0;
}
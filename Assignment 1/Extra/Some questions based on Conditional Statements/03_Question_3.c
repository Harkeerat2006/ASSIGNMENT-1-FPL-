/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/

#include <stdio.h>
int main()
{

    int Physics, Chemistry, Maths;

    printf("Please enter the marks of Physics : \n");
    scanf("%d", &Physics);

    printf("Please enter the marks of Chemistry : \n");
    scanf("%d", &Chemistry);

    printf("Please enter the marks of Maths : \n");
    scanf("%d", &Maths);

    if (Physics < 33 || Chemistry < 33 || Maths < 33)
    {
        printf("You have failed as you did not get the minimum amount of marks to pass the subject(s)\n");
    }
    else if ((Physics + Chemistry + Maths) / 3 < 40)
    {
        printf("You have failed as you did not get the minimum amount of marks to clear the grouping");
    }
    else
    {
        printf("CONGRATULATION! You have cleared the examination");
    }
    
    

    return 0;
}
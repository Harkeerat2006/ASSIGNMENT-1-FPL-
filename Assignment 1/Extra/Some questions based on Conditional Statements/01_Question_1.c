/*Quick Quiz: Write a program to find grade of a student given his marks based on below:
90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50 => F*/

#include <stdio.h>
int main()
{

    int marks;
    printf("Please enter the MARKS: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("CONGRATULATIONS! You have received A grade");
    }
    else if (marks >= 80)
    {
        printf("CONGRATULATIONS! You have received B grade");
    }
    else if (marks >= 70)
    {
        printf("You have recieved C grade");
    }
    else if (marks >= 60)
    {
        printf("YOu have reciever D grade");
    }
    else if (marks >= 50)
    {
        printf("You have recieved E grade");
    }
    else if (marks < 50)
    {
        printf("You have recieved F grade");
    }

        return 0;
}
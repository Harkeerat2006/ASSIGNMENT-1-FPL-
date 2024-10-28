/*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%*/

#include <stdio.h>
int main()
{

    int income;

    printf("Please enter you income: ");
    scanf("%d", &income);

    if (income >= 1000000)
    {
        printf("As you income is above the 10 lakh bracket, The income tax that you need to pay is %d", (30*income)/100);
    }
    else if (income >= 500000)
    {
        printf("As you income is above the 5 lakh bracket, The income tax that you need to pay is %d", (20*income)/100);
    }
    else if (income >= 250000)
    {
        printf("As you income is above the 2.5 lakh bracket, The income tax that you need to pay is %d", (5*income)/100);
    }
    else
    {
        printf("You are relieved of income tax");
    }

    return 0;
}
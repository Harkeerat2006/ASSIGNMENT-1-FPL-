/*What will be the output of this program
int a = 10;
if (a = 11)
printf("I am 11");
else
printf("I am not 11");*/

#include <stdio.h>
int main()
{

    int a = 10;
    if (a = 11)
    {
        printf("I am 11");
    }
    else
    {
        printf("I am not 11");
    }
    return 0;
}

/*The output should have been "I am not 11" however in the 13th line of code
 while using the 'if' condition we used the '=' sign which is a assignment operator
 instead of '==' which would have checked the conditon*/
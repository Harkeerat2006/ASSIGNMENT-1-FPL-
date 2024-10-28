//Write a C program to calculate the area of a rectangle 

#include<stdio.h>

int main(){

    /*int length = 8;
    int breadth = 6;
    printf("the area of rectangle is %d", length*breath);
*/
     int length, breadth;
     printf("Please enter the length \n");
     scanf("%d", &length);

     printf("Please enter the breadth \n");
     scanf("%d", &breadth);

     printf("The area of the rectangle is %d", length*breadth);

    
return 0;

}
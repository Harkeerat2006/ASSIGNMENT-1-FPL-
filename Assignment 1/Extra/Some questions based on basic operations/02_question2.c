// Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height

#include <stdio.h>

int main()
{

    // FOR CIRCLE
    int r, height;
    printf("Please enter the radius \n");
    scanf("%d", &r);

    printf("The AREA of the circle with radius %d is %f \n", r, 3.14 * r * r);

    // FOR CYLINDER
    printf("Please enter the height \n");
    scanf("%d", &height);

    printf("The AREA of the cylinder with radius %d and height %d is %f", r, height, 3.14 * r * r * height);


     //WITHOUT INPUT 
     /*
     int r = 6;
     int h = 10;
     printf("The AREA of the circle with radius %d is %f\n", r, 3.14*r*r);
     printf("The AREA of the cylinder with radius %d and height %d is %f", r, h, 3.14*r*r*h);
     */
    return 0;
}
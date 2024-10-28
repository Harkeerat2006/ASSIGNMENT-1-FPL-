//WRITE A PROGRAM TO CONVERT TEMPRATURE FROM CELCIUS TO FARENHEIT

#include<stdio.h>

int main(){

    float c,f;

    printf("Please enter the temprature in CELCIUS\n");
    scanf("%f", &c);

    printf("The conversion of %f degree celcius to farenheit is %f", c, ((9/5)*c)+32);

    return 0;
}
/*//WRITE A PROGRAM TO CALCULATE SIMPLE INTEREST FOR
 A SET OF VALUES REPRESENTING PRINCIPAL, NUMBER OF YEARS AND RATE OF INTEREST */

 #include<stdio.h>

 int main(){

    //float p;
    int p,t,r;
    printf("Enter value of PRINCIPAL amount\n");
    scanf("%d", &p);
    printf("Enter value of the TIME PERIOD\n");
    scanf("%d", &t);
    printf("Enter the value of RATE OF INTREST\n");
    scanf("%d", &r);

    printf("The value of SIMPLE INTEREST for principal amount %d time period %d and rate of intrest %d is %f", p, t, r, (p*r*t)/100);

    return 0;
 }
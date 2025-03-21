#include<stdio.h>
int main()
{
float a,b,c,d,e,sum,avg;

printf("Enter the first number : ");
scanf("%f",&a);
printf("Enter the second number : ");
scanf("%f",&b);
printf("Enter the third number : ");
scanf("%f",&c);
printf("Enter the fourth number : ");
scanf("%f",&d);
printf("Enter the fifth number : ");
scanf("%f",&e);

sum = a+b+c+d+e;
avg = sum/5;

printf("\nThe average : %.2f",avg);
return 0;
}

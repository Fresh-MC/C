#include<stdio.h>
int main()
{
const float a = 3.14;
float b;

printf("Enter the radius : ");
scanf("%f",&b);

float c = a*(b*b);
printf("The area is %f",c);
}

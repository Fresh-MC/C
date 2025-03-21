#include<stdio.h>
int main(){
int a;
printf("Enter the number : ");
scanf("%d",&a);

if(a%2 == 0 && a%3==0)
{
printf("Number is divisible by 2 and 3");
}
else
{
printf("Number is not divisible by both 2 and 3");
}
return 0;
}

#include<stdio.h>
int main(){
int n;
printf("Enter the amount : ");
scanf("%d",&n);

if (n>50000)
{
printf("invalid amount");
}
else{
n = 50000 - n;
printf("The remaining amt is %d",n);
}
return 0;
}

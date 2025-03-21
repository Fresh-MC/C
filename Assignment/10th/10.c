#include<stdio.h>
int main()
{
int a,b,c;
int i = 0;
printf("Enter a number : ");
scanf("%d",&a);
printf("Enter a number : ");
scanf("%d",&b);

do{
    c =a -b;
    a = c;
    i++;
    printf("%d\n",c);
}
while(c>=b);
printf("Remainder : %d ",c);
printf("\nQuotient : %d",i);

return 0;
}

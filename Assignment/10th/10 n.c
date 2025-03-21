#include<stdio.h>
int main()
{
int a,b,c;
float i = 1;
printf("Enter a number : ");
scanf("%d",&a);
printf("Enter a number : ");
scanf("%d",&b);

while(c>b){
    c =a -b;
    a = c;
    i++;
    printf("%d\n",c);
}

printf("\n%f",i);

return 0;
}

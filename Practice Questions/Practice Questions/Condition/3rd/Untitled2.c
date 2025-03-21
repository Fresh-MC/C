#include<stdio.h>
int main(){
int a;

printf("Enter a number : ");
scanf("%d",&a);

if (a%3==0)
{
printf("The number is a multiple of 3");
}
else if(a%7==0){
    printf("The number is a multiple of 7");
}
else{
    printf("The number is not a multiple of 3 or 7");
}
return 0;

}

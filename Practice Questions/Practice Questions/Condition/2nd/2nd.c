#include<stdio.h>
int main(){
char a;
int b;

printf("Enter a character : ");
scanf("%c",&a);
b=a;

if (b<91){
    printf("The character is UPPERCASE");
}
else
{
    printf("The character is lowercase");
}
return 0;

}

#include <stdio.h>
int main(){
int num,r;
int a=0;

printf("Enter an integer: ");
scanf("%d", &num);

while (num != 0){
    r = num % 10;
    a = a * 10 + r;
    num /= 10;
}
printf("Reversed Number = %d\n", a);
return 0;
}

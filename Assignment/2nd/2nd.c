#include<stdio.h>
int main(){
printf("5+3*5>=25%2<=8=5-3*2>=8+3!=5 ");
int a,b,c,d,e;
a = 5+3*5;
b = 25%2;
c = 5-3*2;
d = 8+3;
e = a>=b<=8=c>=d=!5;

printf("\nAnswer : %d ",e);
return 0;
}

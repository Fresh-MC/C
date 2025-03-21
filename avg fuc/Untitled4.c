#include<stdio.h>
float avg(int a,int b,int c,int d,int e){
int sum =a+b+c+d+e;
float av = sum/5;
return av;
}
int main(){
int a,b,c,d,e;
printf("Enter the numbers : ");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
printf("The avg is %.1f ",avg(a,b,c,d,e));
return 0;
}

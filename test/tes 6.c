#include<stdio.h>
void swap(int *a,int *b){
int t = *a;
*a = *b;
*b = t;
}
int main(){
int a,b;
scanf("%d %d",&a,&b);
printf("\nx is%d y is %d",a,b);
swap(&a,&b);
printf("\nx is %d y is %d",a,b);
return 0;
}

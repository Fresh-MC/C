#include<stdio.h>
int main(){
int i,n,j;
printf("Enter the number : ");
scanf("%d",&n);
int A[n];


for(i=0;i<n;i++){
scanf("%d",&A[i]);
}
for(i=0;i<n;i++)
{
printf("%d \t",A[i]);}
return 0;}

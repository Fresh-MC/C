#include<stdio.h>
int main(){
int i,n,j;
printf("Enter the number : ");
scanf("%d",&n);
int A[n];


for(i=0;i<n;i++){
scanf("%d",&A[i]);
}
printf("\n");

for(i=n-1;i>=0;i--)
{
printf("%d \t",A[i]);
}
printf("\n");
for(i=0;i<n;i++){
    printf("\n The element %d is at index %d",A[-i],i);
}
return 0;}

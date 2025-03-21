#include<stdio.h>
int main(){
int a,b,n,i;

printf("Enter the size of the array : ");
scanf("%d",&n);
int A[n];

printf("Enter the numbers : ");
for(i=0;i<n;i++){
    scanf("%d",&A[i]);
}

a = 0;
b = 0;

for(i=0;i<n;i++){
    a += A[i];
    }
b=a/n;
printf("\nThe sum of array is %d",a);
printf("\nThe avg of array is %d",b);
return 0;
}


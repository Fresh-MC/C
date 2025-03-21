#include<stdio.h>
int main(){
int a,b,n,i;

printf("Enter the size of the array : ");
scanf("%d",&n);
int A[n];
int B[n];
printf("Enter the numbers : ");
for(i=0;i<n;i++){
    scanf("%d",&A[i]);
}

for(i=0;i<n;i++){
B[i]=A[i];
}
for(i=0;i<n;i++){
    printf("%d\t",B[i]);
}
return 0;
}

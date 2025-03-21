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
    if(A[i]%2==0){
    a++;
    }
    else{
    b++;
    }

}
printf("\nThe count of odd no is %d",b);

printf("\nThe count of even no is %d",a);
return 0;
}

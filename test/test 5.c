#include<stdio.h>
int main(){
int r1,r2,c1,c2;
int i,j,k;

printf("Enter the rows : ");
scanf("%d %d",&r1,&r2);
printf("Enter the columns : ");
scanf("%d %d",&c1,&c2);

if(r1!=c2){
printf("No matrix multiplication");
}

int A[r1][c1];
int B[r2][c2];
int C[r1][c2];

printf("Enter the numbers in first array : ");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
scanf("%d",&A[i][j]);
}
}

printf("Enter the numbers in second array : ");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){
scanf("%d",&B[i][j]);
}
}

for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
C[i][j]=0;
for(k=0;k<c1;k++){
C[i][j]+=A[i][k]*B[k][j];
}
}
}
for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
printf("%d ",C[i][j]);
}
printf("\n");
}
return 0;
}

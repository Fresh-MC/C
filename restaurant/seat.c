#include<stdio.h>
#include<string.h>
int main(){
int A[6]={101,102,103,201,202,203};
for(int i=0;i<3;i++){
    for(int j=i;j<i+1;j++){
        printf("%d      %d",A[j],A[j+3]);
        }
        printf("\n");
        }


int tn;
printf("Enter the table number : ");
scanf("%d",&tn);
for(int i=0;i<6;i++){
if(tn==A[i]){
    A[i]=0;
    break;
}
else{
    printf("Not Avaiable");
}
}
for(int i=0;i<3;i++){
    for(int j=i;j<i+1;j++){
        printf("%d        %d",A[j],A[j+3]);
        }
        printf("\n");
        }

}

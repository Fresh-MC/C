#include<stdio.h>
int main(){
FILE *prt;
int A[5];
int i;
for(i=0;i<5;i++){
    scanf("%d ",&A[i]);
}
prt=fopen("text1.txt","w");
for(i=0;i<5;i++){
    fprintf(prt,"%d ",A[i]);
    }
    fclose(prt);
    return 0;

}

#include<stdio.h>
int main(){
int a[5]={1,2,3,4,5};
int *pt =a;
for(int i=0;i<5;i++){
    printf("%d ",*pt+i);
}
return 0;
}


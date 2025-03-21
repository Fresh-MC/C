#include<stdio.h>
int main(){
int i,j;
char a;
a=97;
for(i=0;i<4;i++){
    for(j=0;j<i;j++)
    {
    printf("%c\t",a++);

    }
    printf("%c\n",a);
        a+=1;
    }
    return 0;
}

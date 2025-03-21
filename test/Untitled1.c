#include<stdio.h>
int main(){
FILE *ptr;
int d[10];
for(int i =0;i<10;i++){
    scanf("%d ",&d[i]);
}
ptr=fopen("text.txt","w");
for(int i=0;i<10;i++){
fprintf(ptr,"%d ",d[i]);
}
fclose(ptr);
return 0;
}

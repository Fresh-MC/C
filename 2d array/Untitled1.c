#include<stdio.h>
int main(){
int a[2][2];
int i,j;
float s=0;

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d\t",&a[i][j]);
        }
        }

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d\t",a[i][j]);
        }
printf("\n");
        }


for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        s+=a[i][j];
        }
        printf("\n");
        }
    printf("%f",s);
    printf("\n%f",s/4);

return 0;
}

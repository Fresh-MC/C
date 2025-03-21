#include <stdio.h>
int main(){
int num,f= 1;

printf("Enter a  positive integer: ");
scanf("%d", &num);

if (num < 0){
    printf("No negative numbers \n");
}
else{
    for (int i = 1; i <= num; ++i) {
    f*= i;
}
printf("Factorial of %d = %d\n", num, f);
}
return 0;
}

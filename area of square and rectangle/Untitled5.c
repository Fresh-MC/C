#include<stdio.h>
int area(int l,int b,int c){
int r=l*b;
int s=c*c;
if(c==0){
return r;}
else{
return s;
}
}
int main(){
int l,b,c=0;
printf("Enter the length : ");
scanf("%d",&l);
printf("Enter the breadth : ");
scanf("%d",&b);
printf("The area of the rectangle : %d ",area(l,b,c));
printf("\nEnter the radius : ");
scanf("%d",&c);
printf("The area of the square : %d ",area(l,b,c));
return 0;

}

 #include<stdio.h>
 int main()
 {
 char a [20];
 char b [30];
 int pin;
 long long int p;
 float h,s;

 printf("Enter your name : ");
 scanf("%s",a);

 printf("Enter your phone number : ");
 scanf("%lld",&p);

 printf("Enter your pincode : ");
 scanf("%d",&pin);

 printf("Enter your email : ");
 scanf("%s",b);

 printf("Enter your HSC marks : ");
 scanf("%f",&h);

 printf("Enter your SSLC marks : ");
 scanf("%f",&s);

 printf("\n\t\t ***** Bio-Data *****");
 printf("\nName         : %s",a);
 printf("\nPhone Number : %lld",p);
 printf("\nAddress      : Coimbatore,TamilNadu,India");
 printf("\nPincode      : %d",pin);
 printf("\nEmail        : %s",b);

 printf("\n______________________________");
 printf("\n\tEducation Qualification");
 printf("\nCollege      : Rathinam Techincal Campus");
 printf("\nHSC Marks    : %f",h);
 printf("\nSSLC Marks   : %f",s);
 printf("\n______________________________");

 printf("\n\nSkills       : Good at programming \n\t\tData Analytics");
 printf("\n\n______________________________");

 printf("\n\nHobby      : Watching Movies");
 printf("\n\n______________________________");

return 0;
 }

#include<stdio.h>
main()
{
 int i,num1,num2,c;
 printf("Enter starting number to obtain fibonacci series\n");
 scanf("%d",&num1);
 printf("Enter end number to obtain fibonacci series\n");
 scanf("%d",&num2);
 printf("The series is\n");
 int b=num1+1,a=num1;
 printf("%d \n%d\n",a,b);
 int count=num1;
 while(count<num2)
{
 c=a+b;
 a=b;
 b=c;
 printf("%d\n",c);
 count++;

}

}



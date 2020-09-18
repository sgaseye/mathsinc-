#include<stdio.h>

#include<math.h>
main()
{
 float a,b;
 float sum;
 printf("Enter value of a\n");
 scanf("%f",&a);
 printf("Enter value of b\n");
 scanf("%f",&b);
 sum=pow(a,2)+sqrt(a*b)+pow(b,2);
 printf("Sum = %f\n",sum);

}



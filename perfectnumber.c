#include<stdio.h>

#include<math.h>
main()
{
 int num,i,sum=0;
 printf("Enter a number to know whether it is perfect or not\n");
 scanf("%d",&num);
 for(i=1;i<num;i++)
{
 if(num%i==0)
{
 sum+=i;

}

}
 if(sum==num)
{
 printf("The given number %d is perfect\n",num);

}
 else
{
 printf("The given number %d is not perfect because the sum of its divisors are %d\n",num,sum);

}

}



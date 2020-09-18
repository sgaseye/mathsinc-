#include<stdio.h>
int factorial(int);
main()
{
int n,r;
float nPr;
printf("Enter value of n in nPr\n");
scanf("%d",&n);
printf("Enter value of r in nPr\n");
scanf("%d",&r);
if(n>=r&&n>=0&&r>=0)
{
 nPr=(float)factorial(n)/factorial(n-r);
 printf("Value of %dP%d=%f\n",n,r,nPr);

}
else
{
 printf("Invalid Entry\n");

}

}
int factorial(int num)
{
 int i,fact=1;
 for(i=1;i<=num;i++)
{
 fact=fact*i;

}
 return(fact);

}



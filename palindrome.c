#include<stdio.h>
main()
{
 int dummy,n,rev=0,x;
 printf("Enter a number\n");
 scanf("%d",&n);
 dummy=n;
 while(n>0)
{
 x=n%10;
 rev=rev*10+x;
 n=n/10;

}
 if(dummy==rev){
 printf("PalindromeThe reverse of %d is same as input %d\n",dummy,rev);}
 else{printf("Not palindrome");}

}




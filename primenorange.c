#include<stdio.h>
main()
{
 int num,i,count=0,j;
 printf("Enter a number \n");
 scanf("%d",&num);
 printf("The Prime numbers upto %d are\n",num);
 for(i=1;i<=num;i++)
{
 count=0;
 for(j=1;j<=i;j++)
{
 if(i%j==0)
{
 count++;

}

}
 if(count==2)
{
 printf("%d\n",i);

}

}

}

/*#include<stdio.h>
main()
{
 int num,i,j,k,count=0;
 printf("Enter a number upto which you want prime.\n");
 scanf("%d",&num);
 for(j=0;j<num;j++){
 for(i=2;i<=j;i++)
{
 if(j%i==0)
{
 count++;

}


}
 if(count>2)
{

 printf("The given number %d is not Prime Number\n because The number is divisible by\n",j);
 for(k=1;k<=j;k++)
{
 if(j%k==0)
{
 printf("%d\n",k);

}

}

}
 else
{
 printf("The given number %d is Prime Number\n",j);

}

}




}


*/

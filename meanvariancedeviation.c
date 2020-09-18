#include<stdio.h>

#include<math.h>
main()
{
 int i,j,n;
 float mean,sum=0.0,sumMeanSquare=0.0,meanSquaredDifference,standardDeviation;
 printf("Enter number of terms\n");
 scanf("%d",&n);
 float a[n],subtractMeanSquare[n];
 printf("Enter Numbers\n");
 for(i=0;i<n;i++)
{
 scanf("%f",&a[i]);
 sum+=a[i];

}
 mean=(float)(sum/n);
 printf("Mean for given numbers is %f\n",mean);
 for(i=0;i<n;i++)
{
 subtractMeanSquare[i]=(a[i]-mean)*(a[i]-mean);
 sumMeanSquare+=subtractMeanSquare[i];

}
 meanSquaredDifference=(float)(sumMeanSquare/n);
 standardDeviation=(float)(sqrt(meanSquaredDifference));
 printf("Variance =%f\n",meanSquaredDifference);
 printf("Sandard Deviation=%f\n",standardDeviation);

}



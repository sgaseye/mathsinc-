#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int exactly3Divisors(int n){
    int i,j,d,k,count;
    for(i=1;i<=n;i++){
        count=0;
        for(j=1;j<=i;j++){

            d=i%j;
            printf("%d divide by %d = %d\n",i,j,d);

            for(k=1;k<=j;k++){
                //d=i%j;
                //printf("%d divide by %d = %d\n",i,j,d);

                if(d==0){
                    count+=1;
                    printf("%d\n",count);
                }    //printf("%d divide by %d = %d\n",i,j,d);
            }
        }
        //if(d==0){
          //  count++;
            //printf("%d\n",count);
        //}
    }
    //if(d==0){
        //count++;
        //printf("%d\n",count);}
    //if (count==3){
      //  printf("%d")
    //}
}*/


int exactly3divisors(int n)
{
	int c = 0;

	// check for all numbers <=N
	for (int i = 1; i <= n; i++) {
		// check if exactly 9 factors or not


        int g = 0;

        // iterate and check if factor or not
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                g += 1;
            }
        }

		if (g == 3){
			c += 1;}
	}
	return c;
}
int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends

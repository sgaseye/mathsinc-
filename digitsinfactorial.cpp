//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


//User function Template for C++

//You need to complete this function
int digitsInFactorial(int N)
{
     // factorial exists only for n>=0
    if (N < 0)
        return 0;

    // base case
    if (N <= 1)
        return 1;

    // else iterate through n and calculate the
    // value
    double digits = 0;
    for (int i=2; i<=N; i++)
        digits += log10(i);

    return floor(digits) + 1;
}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
  // Here we don't have to do factorial and then calculate for digits rather we have to know one logic that
  // digits in log10(i) = log10(2)+log10(3)+log10(4)+log10(5)+...........+log(i)

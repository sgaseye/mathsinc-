//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++


//You need to complete this function
double cToF(int C)
{
    //Your code here
    int f = (C * 9.0) / 5.0 + 32;
    return f;
}

// { Driver Code Starts.







int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        cout << floor(cToF(C)) << endl; //print the output
    }
    return 0;
}  // } Driver Code Ends

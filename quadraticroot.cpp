//Initial Template for C++
/* C++ program to find roots of a quadratic equation */
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//You need to complete this function
void quadraticRoots(int a,int b,int c)
{
   int d = b*b - 4*a*c;
   if (d >= 0) {
        float x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
        float x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
        cout <<floor(x1)<<" "<<floor(x2) ;

   }

    else {

        cout << "Imaginary" ;
    }

   //Your code here



   // Your don't need to printline
   // It will automatically be
   // handled by driver code
}



// { Driver Code Starts.

int main() {
	int T;
	cin>>T; //input number of testcases

	while(T--)
	{
	    int a, b, c;
	    cin>>a>>b>>c; //Input a, b, and c

	    quadraticRoots(a,b,c);
	    cout<<endl;

	}
	return 0;
}  // } Driver Code Ends

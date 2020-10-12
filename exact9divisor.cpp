// C++ implementation TLE
#include <bits/stdc++.h>
using namespace std;

// Function to count factors in O(N)
/*int numberOfDivisors(int num)
{
	int g = 0;

	// iterate and check if factor or not
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			g += 1;
		}
	}
	return g;
}*/

// Function to count numbers having
// exactly 9 divisors
int exact9divisor(int n)
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

		if (g == 9)
			c += 1;
	}
	return c;
}

// Driver Code
int main()
{
	int n = 2000;

	cout << exact9divisor(n);

return 0;
}

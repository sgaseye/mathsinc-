#include <iostream>
using namespace std;

// To count the no. of digits in a number
void count_digits(int n)
{
    // converting number to string using
    // to_string in C++
    string num = to_string(n);

    // calculate the size of string
    cout << num.size() << endl;
}
// driver function
int main()
{
    // number
    int n = 345;
    count_digits(n);
    return 0;
}

// This code is contributed by Shashank Pathak

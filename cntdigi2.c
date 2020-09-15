#include <stdio.h>

int countDigit(long long n)
{
    if(n == 0){
        return 0;

    }
    else{
        return 1+countDigit(n/10);
    }

}

// Driver code
int main(void)
{
    long long n = 3452893234347;
    printf("Number of digits : %d",
           countDigit(n));
    return 0;
}

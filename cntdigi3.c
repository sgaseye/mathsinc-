#include <stdio.h>

int countDigit(long long n)
{
    return floor(log10(n)+1);
}

int main(void)
{
    long long n = 345289467;
    printf("Number of digits : %d",
           countDigit(n));
    return 0;
}

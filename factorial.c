#include <stdio.h>

long long int func(long long int n)
{
    if(n==0) return 1;
   long long int fac = func(n-1);
    return n*fac;
}

int main() {
    long long int N;
     scanf("%lld",&N);
     long long int fac = func(N);
     printf("%lld",fac);
    return 0;
}

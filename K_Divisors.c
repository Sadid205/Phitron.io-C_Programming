#include <stdio.h>

int main() {
     long long int N;
     scanf("%lld",&N);
    
     for (long long int i = 1;i<=N;i++)
     {
        if(N%i==0)
        {
            printf("%lld\n",i);
        }
     }
    return 0;
}

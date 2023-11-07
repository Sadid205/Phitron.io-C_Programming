#include <stdio.h>

int main() {
    long long int T;
     scanf("%lld",&T);
     for(int i=0;i<T;i++)
     {
        long long int M,A,B,C;
        scanf("%lld %lld %lld %lld",&M,&A,&B,&C);
        long long int solution = M/(A*B*C);
        if(M%(A*B*C)!=0)
        {
            printf("%d\n",-1);
        }
        else 
        {
            printf("%lld\n",solution);
        }
     }
    return 0;
}

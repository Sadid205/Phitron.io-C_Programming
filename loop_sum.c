#include <stdio.h>

int main()
{
    long long int i;
    long long int sum = 0;
    int n ;
    scanf("%d",&n);
    for(i=1;i<=n;i+=1)
    {
        sum+=i;
    }
    printf("%lld",sum);
    return 0;
}
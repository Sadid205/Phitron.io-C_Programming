#include <stdio.h>
#include <limits.h>

int main()
{
    long long int num = LLONG_MAX;
    long long int n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    if (n <= num)
    {
        num = n;
    }
    if (m <= num)
    {
        num = m;
    }
    if (k <= num)
    {
        num = k;
    }
    n = n - num;
    m = m - num;
    k = k - num;

    if (n > 0 && k > 0)
    {
        n = n / 2;
        if (n > k)
        {
            long long int sum2 = k + num;
            printf("%lld\n", sum2);
        }
        if (k > n)
        {
            long long int sum3 = num + n;
            printf("%lld\n", sum3);
        }
    }
    else
    {
        printf("%lld\n", num);
    }
    return 0;
}

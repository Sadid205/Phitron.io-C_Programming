#include <stdio.h>

int main()
{
    long long int a, b, c;
    long long int d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int ans1 = a + b * c;
    long long int ans2 = a + b - c;
    long long int ans3 = a * b - c;
    long long int ans4 = a * b + c;
    long long int ans5 = a - b * c;
    long long int ans6 = a - b + c;
    if (ans1 == d)
    {
        printf("YES");
    }
    else if (ans2 == d)
    {
        printf("YES");
    }
    else if (ans3 == d)
    {
        printf("YES");
    }
    else if (ans4 == d)
    {
        printf("YES");
    }
    else if (ans5 == d)
    {
        printf("YES");
    }
    else if (ans6 == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

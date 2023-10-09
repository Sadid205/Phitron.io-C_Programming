#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A = N / 10;
    int B = N % 10;
    if (B == 0)
    {
        printf("YES");
        
    }
    else if (A % B == 0 || B % A == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

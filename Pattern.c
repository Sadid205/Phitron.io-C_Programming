#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int k = (2 * N) - 1;
    int l = 1;
    int s = N - 1;
    int t = (2 * N) - 3;
    int w = 1;
    for (int i = 1; i <= k; i++)
    {
        if (i <= N)
        {
            if (i % 2 == 1)
            {
                for (int p = 1; p <= s; p++)
                {
                    printf(" ");
                }
                for (int j = 1; j <= l; j++)
                {
                    printf("#"); 
                    
                }
                printf("\n");
                s--;
                l = l + 2;
            }
            if (i % 2 == 0)
            {
                for (int pp = 1; pp <= s; pp++)
                {
                    printf(" ");
                }
                for (int o = 1; o <= l; o++)
                {
                    printf("-");
                    
                }
                printf("\n");
                s--;
                l = l + 2;
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                for (int r = 1; r <= w; r++)
                {
                    printf(" ");
                }
                for (int q = 1; q <= t; q++)
                {
                    printf("-");
                }
                printf("\n");
                w++;
                t = t - 2;
            }
            if (i % 2 == 1)
            {
                for (int rr = 1; rr <= w; rr++)
                {
                    printf(" ");
                }
                for (int qq = 1; qq <= t; qq++)
                {
                    printf("#");
                }
                printf("\n");
                w++;
                t = t - 2;
            }
        }
    }
    return 0;
}

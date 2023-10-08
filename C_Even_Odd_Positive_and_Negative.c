#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int a;
    int even = 0, odd = 0, poss = 0, neg = 0;
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
  

        if (a > 0)
        {
           
              poss++;
        }
        else if(a<0)
        {
           neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, poss, neg);
    return 0;
}

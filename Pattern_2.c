#include <stdio.h>

int main() {
     int N;
     scanf("%d",&N);
     int k=N-1;
     int m=1;
     for(int i=1;i<=N;i++)
     {
        for(int j=1;j<=k;j++)
        {
            printf(" ");
        }
        for(int o=m;o>=1;o--)
        {
            printf("%d",o);
        }
        printf("\n");
        m++;
        k--;
     }
    return 0;
}

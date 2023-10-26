#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int k = 2*N;
    int s = N-1;
    int t=1;
    int p=N;
    int u=0;
    int r=(2*N)-1;
    for(int i=1;i<=k;i++)
    {
        if(i<=N)
        {
            for(int j=1;j<=s;j++)
            {
                printf(" ");
            }
            for(int o=1;o<=t;o++)
            {
                printf("*");
            }
            t=t+2;
            s--;
            printf("\n");
        }
        else 
        {
            for(int q=1;q<=u;q++)
            {
                printf(" ");
            }
            for(int l=1;l<=r;l++)
            {
                printf("*");
            }
            u++;
            r=r-2;
            printf("\n");
        }
    }
    return 0;
}

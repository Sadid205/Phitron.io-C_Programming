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
        for(int l=1;l<=m;l++)
        {
            printf("*");
        }
        k--;
        m=m+2;
        printf("\n");
    }
     
    return 0;
}

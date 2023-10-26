#include <stdio.h>

int main() {
     int N;
     scanf("%d",&N);
     int k=(2*N)-1;
     int r=0;
     for(int i=1;i<=N;i++)
     {
        for(int j=1;j<=r;j++)
        {
            printf(" ");
        }
        for(int l=1;l<=k;l++)
        {
            printf("*");
        }
        r++;
        k=k-2;
        printf("\n");
     }
    return 0;
}

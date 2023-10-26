#include <stdio.h>

int main() {
     int N;
     scanf("%d",&N);
     int s=N-1;
     int t=1;
     for(int i=1;i<=N;i++)
     {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=t;k++)
        {
            printf("*");
        }
        s--;
        t++;
        printf("\n");
     }
    return 0;
}

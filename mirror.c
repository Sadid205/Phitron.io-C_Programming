#include <stdio.h>

int main() {
     int N,M;
     scanf("%d %d",&N,&M);
     int A[N][M];
     for(int i=0;i<N;i++)
     {
        for(int j=0;j<M;j++)
        {
            scanf("%d ",&A[i][j]);
        }
     }

    int L = M-1;
      for(int i=0;i<N;i++)
     {
        for(int j=L;j>=0;j--)
        {
         if(j==L)
         {
             printf("%d",A[i][j]);
         }
         else 
         {
             printf(" %d",A[i][j]);
         }
        }
        printf("\n");
     }
    return 0;
}

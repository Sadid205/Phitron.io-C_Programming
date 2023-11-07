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
    int C[N][M];
     for(int i=0;i<N;i++)
     {
        for(int j=0;j<M;j++)
        {
           if(i==N-1)
            {
                C[i][j]=A[N-1][j];
            }
            else if(j==M-1)
            {
                C[i][j]=A[i][M-1];
            }
            else 
            {
                C[i][j]=0;
            }
        }
     }
     
    
     for(int i=N-1;i<=N-1;i++)
     {
        for(int j=0;j<M;j++)
        {
            printf("%d ",C[i][j]);
        }
     }
      printf("\n");
     for(int i=0;i<N;i++)
     {
        for(int j=M-1;j<=M-1;j++)
        {
            printf("%d ",C[i][j]);
        }
     }
    return 0;
}

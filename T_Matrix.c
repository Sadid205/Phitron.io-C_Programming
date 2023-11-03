#include <stdio.h>

int main() {
     int N;
     scanf("%d",&N);
     int A[N][N];
     for(int i=0;i<N;i++)
     {
        for(int j=0;j<N;j++)
        {
            scanf("%d",&A[i][j]);
        }
     }

    int primary_diagonal=0;
    int secondary_diagonal=0;
     for(int i=0;i<N;i++)
     {
        for(int j=0;j<N;j++)
        {
          if(i==j)
          {
            primary_diagonal+=A[i][j];
          }
          if(i+j==N-1)
          {
            secondary_diagonal+=A[i][j];
          }
        }
     }
    int absolute_difference=primary_diagonal-secondary_diagonal;
    if(absolute_difference<0)
    {
        printf("%d",absolute_difference*-1);
    }
    else
    {
        printf("%d",absolute_difference);
    }
    return 0;
}

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
     int X;
     int flag=1;
     scanf("%d",&X);
     for(int i=0;i<N;i++)
     {
        for(int j=0;j<M;j++)
        {
           if(A[i][j]==X)
           {
            flag=0;
           
           }
        }
     }
     if(flag==0)
     {
         printf("will not take number");
     } 
     else 
           {
            printf("will take number");
           }
    return 0;
}

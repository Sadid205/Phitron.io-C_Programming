#include <stdio.h>

int main() {
     int R,C;
     scanf("%d %d",&R,&C);
     int A[R][C];
     int B[R][C];
     int D[R][C];
     for(int i=0;i<R;i++)
     {
        for(int j=0;j<C;j++)
        {
            scanf("%d",&A[i][j]);
        }
     }
     for(int i=0;i<R;i++)
     {
        for(int j=0;j<C;j++)
        {
            scanf("%d",&B[i][j]);
        }
     }

     for(int i=0;i<R;i++)
     {
        for(int j=0;j<C;j++)
        {
           D[i][j]=A[i][j]+B[i][j];
        }
     }
     for(int i=0;i<R;i++)
     {
        for(int j=0;j<C;j++)
        {
            if(j==0)
            {
            printf("%d",D[i][j]);
            }
            else 
            {
            printf(" %d",D[i][j]);
            }
        }
        printf("\n");
     }
    return 0;
}

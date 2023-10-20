#include <stdio.h>

int main() {
     int T;
     scanf("%d",&T);
     for(int i=0;i<T;i++)
     {
        int N;
        scanf("%d",&N);
        int A[N];
        for(int j=0; j<N; j++)
        {
            scanf("%d ",&A[j]);
        }
        int X;
        scanf("%d",&X);
        int Number=0;
        for(int k=0;k<N;k++)
        {
            if(A[k]==X)
            {
                Number++;
            }
        }
        if(Number>0)
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
       
     }
     
    return 0;
}

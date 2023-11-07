#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d",&T);
    for(int o=0;o<T;o++)
    {
        int N;
    scanf("%d",&N);
    int A[N];
    int B[N];
    int C[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d ",&A[i]);
    }
    for(int i=0;i<N;i++)
    {
        B[i] = A[i];
    }
    for(int i=0;i<N-1;i++)
    {
        for (int j=i+1;j<N;j++)
        {
            if(B[i]>B[j])
            {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
       C[i] = A[i] - B[i];
    }
    for(int i = 0; i<N;i++)
    {
        if(C[i]<0)
        {
            printf("%d ",C[i]*-1);
        }
        else 
        {
            printf("%d ",C[i]);
        }
    }
    printf("\n");
    }
    return 0;
}

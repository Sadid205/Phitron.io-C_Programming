#include <stdio.h>

void change_it(int *A,int n)
{   
    *(A+(n-1)) = 100;
}

int main() {
     int N;
     scanf("%d",&N);
     int A[N];
     for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    change_it(A,N);
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}

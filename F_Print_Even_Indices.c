#include <stdio.h>

void func(int A[],int n,int i)
{
    if(i==n) return;
    func(A,n,i+1);
    if(i%2==0)
    {
        printf("%d ",A[i]);
    }
}

int main() {
     int N;
     scanf("%d",&N);
     int A[N];
     for(int i=0;i<N;i++)
     {
        scanf("%d ",&A[i]);
     }
     func(A,N,0);
    return 0;
}

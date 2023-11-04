#include <stdio.h>
#include <limits.h>
int func(int A[],int n,int i)
{
   if(i==n) return INT_MIN;
    int max = func(A,n,i+1);
    if(A[i]>max)
    {
        return A[i];
    }
    else 
    {
        return max;
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
     int max = func(A,N,0);
     printf("%d\n",max);
    return 0;
}

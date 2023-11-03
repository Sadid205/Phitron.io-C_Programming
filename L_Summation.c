#include <stdio.h>

long long int func(int A[],int n,int i)
{
    if(i==n) return 0;
 
  long long int count =func(A,n,i+1);
   return count+A[i];
}

int main() {
     int N;
     scanf("%d",&N);
     int A[N];
     for(int i=0;i<N;i++)
    {
        scanf("%d ",&A[i]);
    }
   long long int count = func(A,N,0);
    printf("%lld\n",count);
    return 0;
}

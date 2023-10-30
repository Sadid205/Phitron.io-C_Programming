#include <stdio.h>
#include <limits.h>

void Min_Max(int A[],int n)
{
   int maximum = INT_MIN;
   int minimum = INT_MAX;
   for(int i=0;i<n;i++)
   {
      if(A[i]<minimum)
      {
         minimum = A[i];
      }
      if(A[i]>maximum)
      {
         maximum = A[i];
      }
   }
   printf("%d %d\n",minimum,maximum);
}

int main() {
     int N;
     scanf("%d",&N);
     int A[N];
     for(int i=0;i<N;i++)
     {
        scanf("%d",&A[i]);
     }
   Min_Max(A,N);
    return 0;
}

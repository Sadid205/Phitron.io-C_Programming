#include <stdio.h>
#include <limits.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &A[i]);
    }

    int min = INT_MAX;
    int min_index; 
    int max = INT_MIN;
    int max_index;
   
    
    for (int i = 0; i < N; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
            min_index=i;
        }
        if (A[i] > max)
        {
            max = A[i];
            max_index=i;
        }
    }
  for(int i=0;i<N;i++)
  {
    if(i==min_index)
    {
        A[i]=max;
    }
    if(i==max_index)
    {
        A[i]=min;
    }
  }
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}

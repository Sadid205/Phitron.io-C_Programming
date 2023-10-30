#include <stdio.h>

int count_odd(int arr[],int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
     int count = count_odd(arr,N);
     printf("%d",count);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
     int N;
     scanf("%d",&N);
     int A[N];
     for(int i=0;i<N;i++)
     {
        scanf("%d ",&A[i]);
     }
     int min = __INT_MAX__;
     for(int i=0;i<N;i++)
     {
        if(A[i]<min)
        {
            min=A[i];
        }
     }
     int count = 0;
     for(int i=0;i<N;i++)
     {
        if(A[i]==min)
        {
            count++;
        }
     }
     if(count%2==1)
     {
        printf("Lucky");
     }
     else 
     {
        printf("Unlucky");
     }
    return 0;
}

#include <stdio.h>

int main() {
     int N;
     scanf("%d",&N);
      int A[N];
     for(int i=0;i<N;i++)
     {
        scanf("%d",&A[i]);
     }
       int X;
     scanf("%d",&X);
     int ans=-1;
     for(int j =0;j<N;j++)
     {
        
       if(A[j]==X)
       {
        ans=j;
        break;
       }
     }
      printf("%d\n",ans);
    return 0;
}

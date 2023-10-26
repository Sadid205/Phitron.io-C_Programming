#include <stdio.h>

int main() {
     int N;
    
     scanf("%d",&N);
      int k=N;
     for(int i=1;i<=N;i++)
     {
        for(int j=k;j>0;j--)
        {
            printf("*");
            
        }
          k--;
         printf("\n");
     }
    return 0;
}

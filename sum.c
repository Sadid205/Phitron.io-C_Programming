#include <stdio.h>

int main() {
     int n;
     scanf("%d",&n);
     int A[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d ",&A[i]);
     }
     int B;
     int flag =0;
     scanf("%d",&B);
     for(int i=0;i<=n-1;i++)
     {
        for(int j=i+1;j<=n; j++)
        {
            if(A[i]+A[j]==B)
            {
                flag=1;
            }
        }        
     }
     if(flag==0) {
        printf("NO\n");
     }
     else 
     {
        printf("YES\n");
     }
    return 0;
}

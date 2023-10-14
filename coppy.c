#include <stdio.h>

int main() {
     int n;
     scanf("%d",&n);
     int ar[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d ",&ar[i]);
     }
     int m;
     scanf("%d",&m);
     int ar1[m];
     for(int i=0;i<m;i++)
     {
        scanf("%d ",&ar1[i]);
     }
     int ans[n+m];
     for(int i=0;i<n;i++)
     {
        ans[i]=ar[i];
     }
     int l=n;
     for(int i=0;i<m;i++)
     {
        ans[l]=ar1[i];
        l++;
     }
     for(int i=0;i<n+m;i++)
     {
        printf("%d ",ans[i]);
     }
    return 0;
}

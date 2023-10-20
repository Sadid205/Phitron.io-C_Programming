#include <stdio.h>

int main() {
     int a;
     scanf("%d",&a);
     int b[a];
     for(int i=0;i<a;i++)
     {
        scanf("%d ",&b[i]);
     }
     int cnt[7] = {0};
     for(int i=0;i<a;i++)
    {   
        int val=b[i];
       cnt[val]++;
    }
   
    for(int i=0;i<a;i++)
    {
        printf("%d - %d",i,cnt[i]);
    }
    return 0; 
}

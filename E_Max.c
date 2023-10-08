#include <stdio.h>
#include <limits.h>

int main() {
     int N;
      int b,a=INT_MIN,min=INT_MAX;
     scanf("%d",&N);
     for(int i=1;i<=N;i++)
     {
       scanf("%d",&b);
       if(b>a)
       {
        a=b;
       }
       if(b<min)
       {
        min=b;
       }
     }
     printf("%d %d\n",a,min);
    return 0;
}

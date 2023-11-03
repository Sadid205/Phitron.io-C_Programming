#include <stdio.h>

void func(int i,int k)
{
     if(i==0) return;
   
   if(i==k)
   {
    printf("%d",i);
   }
   else 
   {
     printf(" %d",i);
   }
     func(i-1,k);
}

int main() {
     int N;
     scanf("%d",&N);
     int k = N;
     func(N,k);
    return 0;
}

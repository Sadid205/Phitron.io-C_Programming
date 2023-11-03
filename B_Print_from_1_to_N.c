#include <stdio.h>

void func(int n,int i)
{
    if(i==n+1) return;
    printf("%d\n",i);
    func(n,i+1);
}

int main() {
     int N;
     scanf("%d",&N);
     func(N,1);
    return 0;
}

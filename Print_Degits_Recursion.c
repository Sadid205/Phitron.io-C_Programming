#include <stdio.h>

void func(int n)
{
    if(n==0) return;
    int x = n%10;
    func(n/10);
    printf("%d ",x);
}

int main() {
     int test;
     scanf("%d",&test);
    
     for(int i=0;i<test;i++)
    {
        int N;
        scanf("%d",&N);
        func(N);
        if(N==0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}

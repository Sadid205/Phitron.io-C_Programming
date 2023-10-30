#include <stdio.h>

void printFunc(int N)
{
    for(int i=1;i<=N;i++)
    {
        if(i==1)
        {
            printf("%d",i);
        }
        else
        {
            printf(" %d",i);
        }
    }
}

int main() {
     int N;
     scanf("%d",&N);
    printFunc(N);
    
    return 0;
}

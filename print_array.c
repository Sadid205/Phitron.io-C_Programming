#include <stdio.h>

void fun(int ar[],int A,int i)
{
    //base case
    if(i==A) return;
    printf("%d\n",ar[i]);
    fun(ar,A,i+1);
}

int main() {
    int A;
    scanf("%d",&A);
    int ar[A];
    for(int i=0;i<A;i++)
    {
        scanf("%d",&ar[i]);
    }
    fun(ar,A,0);
    return 0;
}

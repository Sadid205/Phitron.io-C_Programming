#include <stdio.h>

void fun(char *ar)
{   

    
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d ",ar[i]);
    // }
    // printf("\n");
    // ar[0] = 500;
    ar[0] = 'G';
}

int main() {
    //  int ar[5] = {10,20,30,40,50};
    //  fun(ar,5);
    //  for(int i=0;i<5;i++)
    //  {
    //     printf("%d ",ar[i]);
    //  }
    char ar[] = "Hello";
    fun(ar);
    printf("%s",ar);
    return 0;
}

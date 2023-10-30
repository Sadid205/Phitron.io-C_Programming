#include <stdio.h>

int my_abs(int N)
{
    int value;
    if(N<0)
    {
        value = (N * -1);
        
    }
    else 
    {
        value=N;
    }
     return value;
   
}

int main() {
     int N;
     scanf("%d",&N);
     int value = my_abs(N);
     printf("%d",value);
    return 0;
}

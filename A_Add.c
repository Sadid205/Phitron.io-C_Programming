#include <stdio.h>

int summation(int X,int Y)
{
    int sum= X+Y;
    return sum;
}

int main() {
    int X,Y;
    scanf("%d %d",&X,&Y);
     int Add = summation (X,Y);
     printf("%d",Add);
    return 0;
}

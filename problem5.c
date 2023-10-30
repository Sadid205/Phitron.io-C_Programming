#include <stdio.h>

int swap_it(int *x,int*y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
     int X,Y;
     scanf("%d %d",&X,&Y);
    swap_it(&X,&Y);
    printf("%d %d",X,Y);
    return 0;
}

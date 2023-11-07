#include <stdio.h>

int main() {
     int N;
     scanf("%d",&N);
     int Rectangle = (N-1)/2+6;
     int o = 1;
     int l = Rectangle -1;
     for(int i=0;i<Rectangle;i++)
     {
        for(int j=1;j<=l;j++)
        {
            printf(" ");
        }
        for(int m=1;m<=o;m++)
        {
            printf("*");
        }
        l--;
        o=o+2;
        printf("\n");
     }
     for(int i=0;i<5;i++)
     {
        for(int w=1;w<=5;w++)
        {
            printf(" ");
        }
        for(int j=1;j<=N;j++)
        {
            printf("*");
        }
        printf("\n");
     }
    return 0;
}

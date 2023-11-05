#include <stdio.h>

int main() {
     int N;
     scanf("%d",&N);
     for(int i=0;i<N;i++)
     {
        int w,h;
        scanf("%d %d",&w,&h);
        if(w==h)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
     }
    return 0;
}

#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int M1, M2, D;
    for(int i=0;i<T;i++)
    {
        scanf("%d %d %d",&M1,&M2,&D);
       int Work_Days = (M1*D)/(M1+M2);
       int Fewer_Days = D- Work_Days;
       printf("%d\n",Fewer_Days);

    }
    return 0;
}

#include <stdio.h>

int main() {
     int T;
     scanf("%d", &T);
     for(int i=0;i<T;i++)
     {
        int N;
        scanf("%d",&N);
        char S[N+1];
        scanf("%s",S);
        int CountT=0;
        int CountP = 0;
        for(int j=0;j<N;j++)
        {
            if(S[j]=='T')
            {
                CountT++;
            }
            if(S[j]=='P')
            {
                CountP++;
            }
        }
        if(CountT>CountP)
        {
            printf("Tiger\n");
        }
        else if(CountT<CountP)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
     }
    return 0;
}

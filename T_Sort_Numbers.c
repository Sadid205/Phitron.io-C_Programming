#include <stdio.h>

void Sequence(int*A,int*B,int*C)
{
    int D = *A;
    int E = *B;
    int F = *C;
    int arr[3] = {*A,*B,*C};
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n%d\n%d\n%d\n",D,E,F);
}

int main() {
     int A,B,C;
     scanf("%d %d %d",&A,&B,&C);
     Sequence(&A,&B,&C);
    return 0;
}

#include <stdio.h>

int main() {
     float X,P;
     scanf("%f %f",&X,&P);
    float Org_Price = (100*P)/(100-X);
     printf("%.2f",Org_Price);
    return 0;
}

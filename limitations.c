

#include <stdio.h>

int main()
{   
    // Limitation in integer 
//    int a = 10000000000;
//    long long int b = 1000000000000;
//    printf("%lld",b);

    // Limitation in float
    // float a = 2005.5567894445;
    double a = 2005.5895893485349567894445;

    // lf meaning  = long float
    printf("%0.15lf",a);
    return 0;
}
#include <stdio.h>

int main()

//Format Specifier %d,%f,%c
{
    int rahim = 100,karim=200;
    printf("%d %d",rahim,karim);

    // If you want how many numbers you want to see after desimal then you have to use "%.2f" etc
    float chol = 2.557;
    printf("%.3f",chol);
    return 0;


    // You can't use more than one character in a single qoutation 
    // If you use more than one character then the last character will print. 
    char ami = 'A';
    printf("%c",ami);
}
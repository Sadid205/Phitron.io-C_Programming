#include <stdio.h>

int main()
{
    int a=10,b=20;
    int sum = a+b;
    printf("%d",sum);


    int a=10,b=20;
    int mns = a-b;
    printf("%d",mns);

   
   // If one number is divide one number and both are Integer then output should be "Integer"
      int a=3,b=20;
    int dvd = b/a;
    printf("%d",dvd);

    // If you want to get an output which is a float number then you have to multiply one item with "1.0" and the variable datatype should be float.
    int a=3,b=20;
    float dvd = b*1.0/a;
    printf("%f",dvd);


    // If you want to mod  then you have to use "%". Its called mod.
    int a=3,b=20;
    int mod = b%a;
    printf("%d",mod);
    return 0;
}
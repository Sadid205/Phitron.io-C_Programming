#include <stdio.h>
#include <string.h>
int main() {
     char a[100],b[100];
     scanf("%s %s",a,b);
     int v=strcmp(a,b);
    //  printf("%d",v);
      if(v>0)
    {
        printf("A is smaller\n");
    }
    else if(v<0)
    {
        printf("B is smaller\n");
    }
    else
    {
        printf("Same\n");
    }
    return 0;
   
}
//1>value -> b choto
//0 -> same
//-1<value -> a choto
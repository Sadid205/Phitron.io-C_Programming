#include <stdio.h>

int main() {
     char a[6]={'S','a','d','i','d'}; // no gurantee
    char a[6]="Sadid"; // gurantee
    // int sz = sizeof(a)/sizeof(char);
    // printf("%d\n",sz);
    //  for(int i=0;i<5;i++)
    //  {
    //     printf("%c\n",a[i]);
    //  }
    printf("%s",a);
    return 0;
}

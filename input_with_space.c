#include <stdio.h>
#include <string.h>

int main() {
     char a[100];
    //  gets(a);
    fgets(a,19,stdin);
   a[17]='\0'; // 17 is index
     printf("%s",a);
    return 0;
}

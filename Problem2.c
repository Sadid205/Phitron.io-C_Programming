#include <stdio.h>

int my_len(char s[])
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}

int main() {
    char s[100];
    scanf("%s",s);
    int count = my_len(s);
    printf("%d",count);
    return 0;
}

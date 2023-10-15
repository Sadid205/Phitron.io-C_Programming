#include <stdio.h>
#include <string.h>

int main() {
     char S[1000001];
     scanf("%s",&S);
     int length = strlen(S);
     int sum=0;
     for (int i=0;i<length;i++)
     {
        sum+=S[i]-'0';
     }
     printf("%d",sum);
    return 0;
}

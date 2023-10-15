#include <stdio.h>
#include <string.h>

int main() {
     char S[1001];
     char T[1001];
     scanf("%s",&S);
     scanf("%s",&T);
     int LengthS = strlen(S);
     int LengthT= strlen(T);
     printf("%d %d\n",LengthS,LengthT);
     printf("%s %s\n",S,T);

    return 0;
}

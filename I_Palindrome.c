#include <stdio.h>
#include <string.h>

int main()
{
    char S[1001];
    scanf("%s",S);
    int i = 0;
    int j = strlen(S) - 1;
    int temp2 = 1;
    while (i < j)
    {
        char temp = S[i];
        if (S[i] != S[j])
        {
            temp2 = 0;
        }
        i++;
        j--;
    }
    if (temp2 == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

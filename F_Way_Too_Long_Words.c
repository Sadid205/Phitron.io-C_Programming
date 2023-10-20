#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    char S[101];
    for (int i = 1; i <=T; i++)
    {

        scanf("%s", S);

        int length = strlen(S);
        if (length <= 10)
        {

            printf("%s\n",S);
        }
        else
        {
            char lastChar = S[length - 1];
            char firstChar = S[0];
            char count = (length - 2);

            printf("%c%d%c\n", firstChar, count, lastChar);
        }
    }
    return 0;
}

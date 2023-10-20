#include <stdio.h>
#include <string.h>

int main()
{
    char S[100001];
    gets(S);
    int length = strlen(S);

    for (int i = 0; i < length; i++)
    {
        if (S[i] == ',')
        {
            S[i] = ' ';
        }
        if (S[i] >= 'a' && S[i] <= 'z')
        {
            char temp = S[i]-32;
           
            S[i] = temp;
        }
        else  if(S[i]>='A'&& S[i]<='Z')
        {
            char temp2= S[i]+32;
            S[i]=temp2;
        }
    }
    printf("%s\n", S);

    return 0;
}

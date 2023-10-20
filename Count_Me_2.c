#include <stdio.h>
#include <string.h>

int main() {
     char S[100000];
     scanf("%s",S);
     int count=0;
     int count_Constants=0;
    for(int i=0;i<strlen(S);i++)
    {
        if(S[i]=='a')
        {
            count++;
        }
        else if(S[i]=='e')
        {
            count++;
        }
        else if(S[i]=='i')
        {
            count++;
        }
        else if(S[i]=='o')
        {
            count++;
        }
        else if(S[i]=='u')
        {
            count++;
        }
        else 
        {
            count_Constants++;
        }
    }
    printf("%d",count_Constants);
    return 0;
}

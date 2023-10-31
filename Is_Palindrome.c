#include <stdio.h>
#include <string.h>

int is_palindrome(char S[])
{
    
    int j = strlen(S)-1;
    int i=0;
    int count =1;
    
   while(i<j)
   {

    if(S[i]!=S[j])
    {
        count=0;
    }
    i++;
    j--;
   }
    return count;
}

int main() {
     char S[1001];
     scanf("%s",S);
     int palindrome = is_palindrome(S);
     if(palindrome==1)
     {
        printf("Palindrome");
     }
     else 
     {
        printf("Not Palindrome");
     }
    return 0;
}

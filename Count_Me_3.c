#include <stdio.h>
#include <string.h>


int main() {
     int Small_charCount=0;
     int Capital_CharCount=0;
     int digit_Count =0;
     int T;
     scanf("%d",&T);
     char s[10001];
    
     for(int i=0;i<T;i++)
     {
           scanf("%s\n",s);
       for(int i=0;i<strlen(s);i++)
        {
          
        if(s[i]>='a' && s[i]<='z')
        {
            Small_charCount++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            digit_Count++;
        }
        else
        {
            Capital_CharCount++;
        }

        }
         printf("%d %d %d\n",Capital_CharCount,Small_charCount,digit_Count);
        Small_charCount=0;
        Capital_CharCount=0;
        digit_Count =0;
     }


    

    return 0;
}

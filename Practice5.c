#include <stdio.h>

char capital_to_small(char x)
{   
    int p = x;
    int  Character = p + 32;
    char small = Character;
    return small;

}

int main() {
    char a;
     scanf("%c",&a);
     char small = capital_to_small(a);
     printf("%c",small);
    return 0;
}

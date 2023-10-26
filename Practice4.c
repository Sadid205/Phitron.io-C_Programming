#include <stdio.h>

char small_to_capital(char x)
{   
    int p = x;
    int  Capital = p - 32;
    char Character = Capital;
    return Character;

}

int main() {
    char a;
     scanf("%c",&a);
     char Capital = small_to_capital(a);
     printf("%c",Capital);
    return 0;
}

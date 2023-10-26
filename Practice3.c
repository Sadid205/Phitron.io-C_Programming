#include <stdio.h>

 int char_to_ascii (char x)
     {
        int ascii = x;
        return ascii;
     }
int main() {
    char p;
    scanf("%c",&p);
    int ASCII = char_to_ascii(p);
    printf("%d",ASCII);
    return 0;
}

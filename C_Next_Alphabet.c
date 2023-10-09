#include <stdio.h>

int main()
{
    char C;
    scanf("%c", &C);
    if (C == 'z')
    {
        printf("a");
    }
    else
    {
        int new = C;
        int next = new + 1;
        char Character = next;
        printf("%c", Character);
    }
    return 0;
}

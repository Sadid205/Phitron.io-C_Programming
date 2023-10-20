#include <stdio.h>
#include <string.h>

int main()
{
    char A[11];
    char B[11];
    scanf("%s %s", A, B);
    int lengthA = strlen(A);
    int lengthB = strlen(B);
    printf("%d %d\n%s%s", lengthA, lengthB, A, B);
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;

    printf("\n%s %s", A, B);
    return 0;
}

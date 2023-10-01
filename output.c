#include <stdio.h>

int main()
{
    // & is a road which is indicate where is my variable .
    int rahim,karim;
    scanf("%d %d",&rahim,&karim);
    printf("%d %d",rahim,karim);

    int rahim, karim;
    char c;
    float f;
    scanf("%d %f %c", &rahim, &f, &c);
    printf("%d %.2f %c", rahim, f, c);

    // How to input a "%" as a character ?
    int a,b;
    char p;
    scanf("%d%c %d%c",&a,&p,&b,&p);
    printf("%d%% %d%%",a,b);

    // How can I take input "%" as "%"
    int a,b;
    scanf("%d%% %d%%",&a,&b);
    printf("%d%% %d%%",a,b);
    return 0;
}
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 33;
    double c;

    if (a>b)
    {
        c = a/b;
        printf("%d\n", (int)c);
    }
    else
    {
        c = a/b;
        printf("%.3lf\n", c);
    }
}
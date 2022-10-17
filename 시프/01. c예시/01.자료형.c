#include <stdio.h>

void main()
{
    char c;
    int n;

    c = 100;
    n = (int) c;
    printf("%d\n", n);

    n = 200;
    c = (char) n;
    printf("%d\n", c);
}
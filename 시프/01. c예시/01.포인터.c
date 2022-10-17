#include <stdio.h>

void main()
{
    int n = 100;
    int *np;

    np = &n;
    printf("%d %d\n", n, *np);
}
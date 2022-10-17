#include <stdio.h>

void main()
{
    int n = 100;
    int *np;

    np = &n;
    *np = 200;
    printf("%d\n",n);
}
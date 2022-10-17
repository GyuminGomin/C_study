#include <stdio.h>

void main()
{
    int n = 100;
    int *np;

    np = &n;
    printf("%p\n", np);
    printf("%p\n", &np);
    printf("%p\n", &*np);
}
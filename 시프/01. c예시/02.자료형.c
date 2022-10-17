#include <stdio.h>

void main()
{
    int n = 0x41544144;

    printf("%x\n", ((char*)&n)[0]);
    printf("%x\n", ((char*)&n)[1]);
    printf("%x\n", ((char*)&n)[2]);
    printf("%x\n", ((char*)&n)[3]);

    printf("%x\n", *((char*)&n+3));
}
extern int a, b;

void exchange()
{
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}
#include <stdio.h>
#include <time.h>

int main()
{
    time_t start, end;
    double result;
    int i, j;
    int sum = 0;

    start = time(NULL);

    char greet[2];
    printf("Hello World! \n");

    end = time(NULL);
    result = (double)(end - start);
    printf("%f", result);
    return 0;
}

// ���� ��ư (ctrl + shift + F9)
// run ��ư (ctrl + shift + F10)

// ȭ�����°� run�� ���� ������ ���๮���̶� 10���̻� �ɸ���...
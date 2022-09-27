#include <stdio.h>

#define PI 3.1415926535
#define STR "���� ������ ����߽��ϴ�.\n"
#define END_MSG printf("���α׷��� ����Ǿ����ϴ�.\n\n")

void main(){
    printf("�������� 10�� ���� ������ ==> %10.5f \n", 10*10*PI);

    printf(STR);

    END_MSG;
}

// ����� const
/*
const ������ #define�� ����� ����� ������ ���� �ٸ���.
const�� ������ �����ϸ� �ش� ������ ������ ������ �ϴ� ���� �ƴ϶�
����� ������ �Ѵ�.
cf ) 
    const int a = 100
    #define a 100
#define�� ��ó�� �۾����� ó���ǰ�
const�� ������ �۾����� ó���ȴ�.
*/

// ����� static
/*
static ������ ó�� ������ ���� �ʱ�ȭ���� �ʰ� ��� ������Ų��.

#include <stdio.h>

void myfunc();

void main()
{
    myfunc();
    myfunc();
}

void myfunc()
{
    static int a = 0;

    a += 100;
    printf("a�� �� ==> %d\n", a);
}

��� -->
    a = 100
    a = 200
*/
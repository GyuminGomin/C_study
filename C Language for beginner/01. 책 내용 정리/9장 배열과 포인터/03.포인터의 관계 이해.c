#include <stdio.h>

int main(){
    char ch;
    char* p;

    ch = 'A';
    p = &ch;

    printf("ch�� ������ �ִ� �� : %c \n", ch);
    printf("ch�� �ּ� : %d \n", &ch);
    printf("p�� ������ �ִ� �� : %d \n", p);
    printf("p�� ����Ű�� ���� ������ : %c \n", *p);

    char* q;

    q = p; // �ּ� ���� �޾ƿ��� ������ ������ �����Ѵ�.
    *q = 'Z';

    printf("q�� �����ؼ�\nch�� ������ �ִ� �� : %c \n", ch);

}

// ���� ����
/*
char* p; �� char *p;�� ����.
������ char* p,q;�� �ϴ� ���� p�� �����ͺ���������, q�� char�����̴�.
���� char* p,q; ��� char *p,*q;�� ��������� ��
*/
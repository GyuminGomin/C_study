#include <stdio.h>

void main(){
    char ch;

    printf("���ڿ��� �Է��ϼ���. : ");

    ch = getchar(); // ���� �� �ڸ� �Է¹޴´�.
    putchar(ch); // ���ۿ��� �� �ڸ� �о� ����Ϳ� ����Ѵ�.

    ch = getchar();
    putchar(ch);

    ch = getchar();
    putchar(ch);

    // enter�� �Է¹��ۿ� ���Ƿ�, 2���ڸ� ������ 14�࿡ ����� ���ۿ�
    // enter�� ���Ƿ� ����� AB(enter)�� �ǰ�
    // 3���ڸ� ������ enter�� �� �ڸ��� �����Ƿ� ����� ABC�� �ȴ�.
}
// getch()
/*
Ű���带 ���� ���� �ϳ��� �Է¹�����, �Է��� ������ ����Ϳ� �������� �ʴ´�.
*/

// getche()
/*
Ű���带 ���� ���� �ϳ��� �Է¹�����, �Է��� ������ ����Ϳ� �����ش�.
getch e(echo-������)�� �ǹ�
*/

// getchar()
/*
����ڰ� Ű����� enter�� ���� ������ �Է��� ���� �޸�(����)�� ��� ����
�س���(enter�� �����) ���߿����� ���ڸ� ������.
*/

// putchar()
/*
ǥ�� ��� ��ġ(�����)�� ���� �ϳ��� ����Ѵ�.
*/

// putch()
/*
putchar()�� ����� �����ϴ�.
*/

#include <stdio.h>
#include <conio.h>

void main(){
    char ch;
    // char ch1;
    // char ch2;

    ch = getch();
    putch(ch);

    ch = getch();
    putch(ch);

    ch = getch();
    putch(ch);

    // ch1 = getche();
    // putchar(ch1); // getche()�� putch, putchar���� �Ƚᵵ ��

    // ch2 = getchar();
    // putch(ch2);
}
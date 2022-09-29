// ���������� ũ�� Ȯ��
/*
sizeof()�Լ��� ����ؼ� �� ���������� ũ�⸦ Ȯ���ϴ� ���α׷��̴�.

���� ���
int ���� ũ��               ==> 4
unsigned int ���� ũ��      ==> 4
short ���� ũ��             ==> 2
unsigned short ���� ũ��    ==> 2
long int ���� ũ��          ==> 4
unsigned long int ���� ũ�� ==> 4
float ���� ũ��             ==> 4
double ���� ũ��            ==> 8
long double ���� ũ��       ==> 8
char ���� ũ��              ==> 1
unsigned char���� ũ��      ==> 1
*/

#include <stdio.h>

void main()
{
    printf("int ���� ũ��               ==> %d\n", sizeof(int));
    printf("unsigned int ���� ũ��      ==> %d\n", sizeof(unsigned int));
    printf("short ���� ũ��             ==> %d\n", sizeof(short));
    printf("unsigned short ���� ũ��    ==> %d\n", sizeof(unsigned short));
    printf("long int ���� ũ��          ==> %d\n", sizeof(long int));
    printf("unsigned long int ���� ũ�� ==> %d\n", sizeof(unsigned long int));
    printf("float ���� ũ��             ==> %d\n", sizeof(float));
    printf("double ���� ũ��            ==> %d\n", sizeof(double));
    printf("long double ���� ũ��       ==> %d\n", sizeof(long double));
    printf("char ���� ũ��              ==> %d\n", sizeof(char));
    printf("unsigned char ���� ũ��     ==> %d\n", sizeof(unsigned char));
}
// �Էµ� ���ڿ��� �ݴ� ������ ���
/*
�� ���� �̸��� ���ڿ��� �Է¹ް�, �Է¹��� ���ڿ��� �ݴ� ������ ����ϴ�
���α׷��̴�.

���� ���
���ڿ��� �Է� ==> ABCDEFG
GFEDCBA
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char s[10];
    int i;
    printf("���ڿ��� �Է� (10�� �̳�) ==> ");
    scanf("%s", s);
    for (i = sizeof(s)-1; i>=0; i--){
        printf("%c",s[i]);
    }
}

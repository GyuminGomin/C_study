// ������ �迭
/*
���� 2���� �迭�� ������ ������ ��,
char s[3][100];
3��, 100���̹Ƿ� 3���� ���ڿ��� ���� �� �ִµ�,
�׷��� s[1], s[2], s[3] �� ���ڿ��� �Ҵ��ص� 100�ڸ��� �� ���� ���ϰ� ���°����� ����� ������
�� ���� ������ ���� ȿ�������� ���ϴ�.
���� �̶� �ʿ��� ���� ������ �迭�̴�.
*/

#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main(){
    char *p[3];
    char imsi[100];
    int i, size;

    for (i=0; i<3; i++){
        printf(" %d ��° ���ڿ� : ", i+1);
        gets(imsi);

        size = strlen(imsi);
        p[i] = (char*) malloc((sizeof(char) * size) + 1);

        strcpy(*(p+i), imsi);
    }

    printf("\n - �Է°� �ݴ�� ���(������) -\n");
    for(i=2;i>=0;i--){
        printf(" %d : %s\n", i+1, p[i]);
    }

    for(i=0; i<3; i++){
        free(p[i]);
    }
}
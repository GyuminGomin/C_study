#include <stdio.h>

void main(){
    char s[20];
    FILE *rfp;

    rfp = fopen("data1.txt", "r");

    fgets(s, 20, rfp); // (���ڹ迭, ���� �ִ� ���� ��, ���� ������);

    printf("���Ͽ��� ���� ���ڿ� : ");
    puts(s);

    fclose(rfp);
}

// ������ �𸣰�����, ���� �д°Ŵ� ���������Ʈ���� �����ؾ߰ڴ�. (����� �ȳ���)
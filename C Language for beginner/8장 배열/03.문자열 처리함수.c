#include <stdio.h>
#include <string.h> // ���ڿ� �Լ��� ����� ���ǵ� string.h ������ �����϶�� �ǹ�

int main(){
    char ss[] = "XYZ";
    

    /*
    strlen()�Լ�
    */
    int len;
    len = strlen(ss); // ���ڿ� ���� \0�� ������ (char �� �Ǹ������� �� �־���ϴ� ��)
    printf("���ڿ� \"%s\"�� ���� ==> %d \n", ss, len );
    

    /*
    strcpy()�Լ�
    */
    char sss[4];
    // sss = ss; �̷��� ���� �Ұ��� (������)
    // char sss[4] = ss; �̷��� ���� ����
    strcpy(sss, ss); // �迭 sss�� ss�� �����϶�
    // ss�� 4���� �ڸ��� �����ϹǷ�, sss�� 4���̻��� �ڸ��� �����ؾ� �Ѵ�.
    printf("���ڿ� sss�� ���� ==> %s \n", sss);


    /*
    strcat()�Լ�
    */
    char ssss[7] = "XYZ";
    strcat(ssss, ss); // ssss�� ssss+ss �� ���ڿ��� �־��ش�.
    printf("�̾��� ���ڿ� ssss�� ���� ==> %s \n", ssss);

    /*
    strcat()�Լ�
    */
    char tt[] = "xyz";
    int r;
    r = strcmp(tt, ss); // ���ڿ� tt-ss�ؼ� 0�̸� ���� ����, �� ���� ���ڴ� �ٸ� ����
    // �ƽ�Ű�ڵ� �� tt���� �ƽ�Ű�ڵ� �� ss�� ���� ���� ��ȯ
    // ��� �����Ϸ��� tt > ss �϶� 1, ss==tt �� �� 0, tt < ss �϶� -1 ��ȯ
    printf("�� ���ڿ��� �� ��� ==> %d \n", r);
}
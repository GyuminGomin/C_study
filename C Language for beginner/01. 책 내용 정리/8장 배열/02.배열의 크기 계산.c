#include <stdio.h>

int main(){
    int aa[] = {10, 20, 30, 40, 50};
    int count;

    count = sizeof(aa)/sizeof(int); // sizeof�� ���� byte ũ�⸦ ���
    // 4byte(intũ��) x 4��(��Ұ���)

    printf("�迭 aa[]�� ����� ������ %d�� �Դϴ�.\n", count);
}
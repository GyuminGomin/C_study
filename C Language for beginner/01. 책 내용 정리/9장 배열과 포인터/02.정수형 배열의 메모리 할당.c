#include <stdio.h>

int main(){
    int a = 100;
    int b = 200;

    printf("���� a�� �ּҴ� %d �Դϴ�.\n", &a);
    printf("���� a�� �ּҴ� %d �Դϴ�.\n", &b);

    int aa[] = {100, 200, 300};
    printf("aa[0]�� ���� %d, �ּҴ� %d �Դϴ�.\n",aa[0] &aa[0]);
    printf("aa[0]�� ���� %d, �ּҴ� %d �Դϴ�.\n",aa[1] &aa[1]);
    printf("aa[0]�� ���� %d, �ּҴ� %d �Դϴ�.\n",aa[2] &aa[2]);

    printf("�迭aa�� ��(=�ּ�)�� %d �Դϴ�.\n", aa);

    int bb[] = {100, 200, 300};
    printf("&bb[0]�� %d, bb+0�� %d �Դϴ�.\n",&bb[0], bb+0);
    printf("&bb[1]�� %d, bb+1�� %d �Դϴ�.\n",&bb[1], bb+1);
    printf("&bb[2]�� %d, bb+2�� %d �Դϴ�.\n",&bb[2], bb+2);
    // aa�� �ּҸ� �ǹ� aa+1�� �������迭�̶�� aa[0]�� 4byte���� ������ aa[1]
}
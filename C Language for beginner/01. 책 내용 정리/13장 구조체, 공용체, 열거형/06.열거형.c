// ������
/*
������ ���� �� �ִ� ���� ������ ���� ���̴�.
� ������ ���� �� �ִ� ���� ������ ������ �ִٸ� ���������ٴ� �������� ���� ���� ����.

�������� ����� �� �� 0���� ������ �ʿ�� ����.
enum week { sun = 10, mon, tue, wen, thu, fri, sun} ó�� ǥ���ϸ�, 10���� ����
�߰����� �ǳʶٰ� ����� ���� �ִ�.
enum season { spring = 100, summer, autumn = 200, winter};
*/

#include <stdio.h>

int main(){
    enum week {sun, mon, tue, wed, thu, fri, sat};

    enum week ww;

    ww = sat;

    if (ww == sun)
        printf("������ �Ͽ��� �Դϴ�.\n\n", ww);
    else
        printf("������ �Ͽ����� �ƴմϴ�.\n\n", ww);
}
#include <stdio.h>

int main(){
    int hap = 0;
    int i;

    for(i=0;i<=100;i++){
        hap += i;
        if(hap > 2000)
            goto mygoto; // goto�� ������ ���ϴ� ��ġ�� ���ư���.
    }
mygoto :
    printf("1���� %d���� ���ϸ� 2000�� �ѽ��ϴ�.\n", i);
}
#include <stdio.h>

int main(){
    int aa[4] = {100, 200, 300, 400};
    int bb[] = {100, 200, 300, 400}; // ������ �޶� 4�� �ʱ�ȭ�ϸ� 4�� ����
    int cc[4] = {100, 200}; // 100, 200, 0, 0 �� ����
    int dd[4] = {0}; // 0, 0, 0, 0 �� ����
    int i;

    for (i=0; i<=3; i++){
        printf("aa[%d]==>%d\t", i, aa[i]);
    }
    printf("\n");

    for(i=0; i<=3; i++){
        printf("bb[%d]-->%d\t", i, bb[i]);
    }
    printf("\n");
    
    for(i=0; i<=3; i++){
        printf("cc[%d]-->%d\t", i, cc[i]);
    }
    printf("\n");
    
    for(i=0; i<=3; i++){
        printf("dd[%d]-->%d\t", i, dd[i]);
    }
    printf("\n");
    
}
#include <stdio.h>

int main(){
    int aa[4] = {100, 200, 300, 400};
    int bb[] = {100, 200, 300, 400}; // 개수가 달라도 4개 초기화하면 4개 저장
    int cc[4] = {100, 200}; // 100, 200, 0, 0 이 저장
    int dd[4] = {0}; // 0, 0, 0, 0 이 저장
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
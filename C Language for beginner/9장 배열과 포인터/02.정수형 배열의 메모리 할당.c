#include <stdio.h>

int main(){
    int a = 100;
    int b = 200;

    printf("변수 a의 주소는 %d 입니다.\n", &a);
    printf("변수 a의 주소는 %d 입니다.\n", &b);

    int aa[] = {100, 200, 300};
    printf("aa[0]의 값은 %d, 주소는 %d 입니다.\n",aa[0] &aa[0]);
    printf("aa[0]의 값은 %d, 주소는 %d 입니다.\n",aa[1] &aa[1]);
    printf("aa[0]의 값은 %d, 주소는 %d 입니다.\n",aa[2] &aa[2]);

    printf("배열aa의 값(=주소)은 %d 입니다.\n", aa);

    int bb[] = {100, 200, 300};
    printf("&bb[0]는 %d, bb+0은 %d 입니다.\n",&bb[0], bb+0);
    printf("&bb[1]는 %d, bb+1은 %d 입니다.\n",&bb[1], bb+1);
    printf("&bb[2]는 %d, bb+2은 %d 입니다.\n",&bb[2], bb+2);
    // aa는 주소를 의미 aa+1은 정수형배열이라면 aa[0]에 4byte값을 더해준 aa[1]
}
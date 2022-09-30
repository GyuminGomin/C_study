// 동전 교환 프로그램
/*
입력된 액수만큼 500원, 100원, 50원, 10원짜리 동전으로 교환해주는 프로
그램이다.
1. 동전의 총수를 최소화 한다. 2. 고액의 동전을 먼저 바꿔준다.

실행 결과
## 교환할 돈은 ? 7777

오백원짜리  ==> 15 개
백원짜리    ==> 2 개
오십원짜리  ==> 1 개
십원짜리    ==> 2 개
바꾸지 못한 잔돈    ==> 7 원
*/

#include <stdio.h>

void main()
{
    int a;
    int ohbak,bak,ohsip,sip;
    printf("## 교환할 돈은 ?");
    scanf("%d", &a);
    printf("\n");
    ohbak = a/500;  a -= ohbak*500;
    bak = a/100;    a -= bak*100;
    ohsip = a/50;   a -= ohsip*50;
    sip = a/10;    a -= sip*10;

    printf("오백원짜리  ==> %d 개\n", ohbak);
    printf("백원짜리    ==> %d 개\n", bak);
    printf("오십원짜리  ==> %d 개\n", ohsip);
    printf("십원짜리    ==> %d 개\n", bak);
    printf("바꾸지 못한 잔돈    ==> %d 원\n", a);
}
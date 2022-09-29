// 입력하는 정수의 진수 결정
/*
10진수, 16진수, 8잔수 중 어떤 진수의 값을 입력받을지 결정하고,
입력받은 수를 10진수, 16진수, 8진수로 출력하는 프로그램이다.

실행 결과
입력진수 결정 <1>10 <2>16 <3>8 : 2
값 입력 : FF
10진수 ==> 255
16진수 ==> FF
8진수 ==> 377
*/

#include <stdio.h>

void main()
{
    int a,b;

    do 
    {
        printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
        scanf("%d",&a);
        if (a != 1 && a != 2 && a != 3)
            printf("---다시 입력해주세요.---\n");
    }
    while (a != 1 && a != 2 && a != 3);
    
    
    switch (a)
    {
    case 1 :
        printf("값 입력 : ");
        scanf("%d", &b);
        
        break;
    case 2 :
        printf("값 입력 : ");
        scanf("%x", &b);
        break;
    case 3 :
        printf("값 입력 : ");
        scanf("%o", &b);
        break;
    }
    printf("10진수 == > %d\n", b);
    printf("16진수 == > %x\n", b);
    printf("8진수 == > %o\n", b);
}